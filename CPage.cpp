#include "CPage.h"
#include  <qdatetime.h>
#include "dialog.h"
#include"qdebug.h"

extern vector<CPage*>  g_PageVec;

//extern int g_RealTimeFaultsNum;

CPage::CPage()
{
}

CPage::~CPage()
{
    m_painter.end();
    for_each(m_ctrlmap.begin(), m_ctrlmap.end(), DELMAPOBJ<CONTROLPAIR>());
    SAFE_DELETE(m_pixmap);
}

void CPage::InitPage(
                      __in int nWidth,     //pixmap width
                      __in int nHeight,    //pixmap height
                      __in int nPageIndex, //page index
                      __in QDialog* pParent//parent pointer
                     )
{
    m_nWidth     = nWidth;
    m_nHeight    = nHeight;
    m_nPageIndex = nPageIndex;
    m_pDlg       = pParent;
    m_pixmap = new QPixmap(nWidth,nHeight);
    m_painter.begin(m_pixmap);
    m_painter.setRenderHint(QPainter::SmoothPixmapTransform); //使用平滑的pixmap变换算法（双线性查值算法），而不是近邻差值算法。
    //set pixmap bk color to black.
    m_painter.fillRect(0,0,m_nWidth,m_nHeight, Qt::black);
}

void  CPage::InitCommonLabel(
                             __in int nID,
                             __in int nType
                            )
{
    if (nType == CONTROL_LABEL )
    {
//        switch(nID)
//        {
//        case IDLB_COM_DATE:
//        case IDLB_COM_TIME:
//            ((CLabel*)GetDlgItem(nID))->SetAlignment(Qt::AlignLeft);
//            break;
//        default:
//            break;
//        }
        if (nID == IDLB_COM_DATE)
        {
//            QDate date = QDate::currentDate();
//            QString str;
//            str = QString::number(date.year()) + QObject::trUtf8("-")+
//                  QString::number(date.month()) + QObject::trUtf8("-")+
//                  QString::number(date.day()) + QObject::trUtf8("");
//            GetDlgItem(IDLB_COM_DATE)->SetCtrlText(str);

            if (CTHM_CCU1On_B1||CTHM_CCU2On_B1)
            {

                QString str,Month,Day;
                Month.sprintf("%02d",CTALL_Month_U8);
                Day.sprintf("%02d",CTALL_Day_U8);
                str = QString::number(CTALL_Year_U8+2000) + QObject::trUtf8("-")+
                      Month + QObject::trUtf8("-")+
                      Day;

                GetDlgItem(IDLB_COM_DATE)->SetCtrlText(str);


            }
            else
            {
                QDate date = QDate::currentDate();
                QString str;
                str = QString::number(date.year()) + QObject::trUtf8("-")+
                      QString::number(date.month()) + QObject::trUtf8("-")+
                      QString::number(date.day()) + QObject::trUtf8("");
                GetDlgItem(IDLB_COM_DATE)->SetCtrlText(str);

            }
        }
        if (nID == IDLB_COM_TIME)
        {
//            QString time = QDateTime::currentDateTime().toString("HH:mm:ss");
//            GetDlgItem(IDLB_COM_TIME)->SetCtrlText(time);
            if (CTHM_CCU1On_B1||CTHM_CCU2On_B1)
            {
//                QString time ;
//                time = QString::number(CTALL_Hour_U8) + QObject::trUtf8(":")+
//                      QString::number(CTALL_Minite_U8) + QObject::trUtf8(":")+
//                      QString::number(CTALL_Second_U8) ;
                QString time ,Hour,Minute,Second;
                Hour.sprintf("%02d",CTALL_Hour_U8);
                Minute.sprintf("%02d",CTALL_Minite_U8);
                Second.sprintf("%02d",CTALL_Second_U8);
                time = Hour + QObject::trUtf8(":")+
                      Minute+ QObject::trUtf8(":")+
                      Second;
                //pPage->GetDlgItem(IDLB_COM_TIME)->SetCtrlText(QObject::trUtf8("  ")+str+"\n"+QObject::trUtf8("  ")+time);
                GetDlgItem(IDLB_COM_TIME)->SetCtrlText(time);

            }
            else
            {
                QString time = QDateTime::currentDateTime().toString("HH:mm:ss");
                //pPage->GetDlgItem(IDLB_COM_TIME)->SetCtrlText(QObject::trUtf8("  ")+str+"\n"+QObject::trUtf8("  ")+time);
                GetDlgItem(IDLB_COM_TIME)->SetCtrlText(time);

            }
        }

    }
}

void CPage::DrawByRom(ROMINFO pRomInfo)
{
    int nRomSize = pRomInfo.nRomSize;

    for (int i=0; i<nRomSize; i++)
    {
        AddControl(pRomInfo.pRom[i]->showStr,
                   pRomInfo.pRom[i]->rc,
                   pRomInfo.pRom[i]->fgColor,
                   pRomInfo.pRom[i]->font,
                   pRomInfo.pRom[i]->bkColor,
                   pRomInfo.pRom[i]->nID,
                   pRomInfo.pRom[i]->nControlType);


        InitCommonLabel(pRomInfo.pRom[i]->nID,pRomInfo.pRom[i]->nControlType);
    }
    OnInitPage();
}

void CPage::AddControl(
                        __in QString ctrl_str,     //ctrl string
                        __in QRect ctrl_rc,        //ctrl rect
                        __in QColor ctrl_txtcolor, //ctrl text color
                        __in QFont ctrl_font,      //ctrl text font
                        __in QColor ctrl_bkcolor,  //ctrl bk color
                        __in int ctrl_id,          //ctrl id
                        __in int ctrl_type         //ctrl type
                       )
{

    int a,b,c,d;

    ctrl_rc.getRect(&a,&b,&c,&d);
    if(c>1){c=SCREEN_factor*c;}
    if(d>1){d=SCREEN_factor*d;}
    ctrl_rc.setRect(a*SCREEN_factor,b*SCREEN_factor,c,d);

    if (m_ctrlmap[ctrl_id] != NULL)
    {
        SAFE_DELETE(m_ctrlmap[ctrl_id]);
    }

    switch(ctrl_type)
    {
    case CONTROL_BUTTON:
        {

            CButton* pBtn = new CButton();
            pBtn->Create(ctrl_str,
                         ctrl_rc,
                         ctrl_txtcolor,
                         ctrl_font,
                         ctrl_bkcolor,
                         &m_painter,
                         ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pBtn);
            break;
        }
     case CONTROL_EDIT:
        {

            CEdit* pEdit = new CEdit();
            pEdit->Create(ctrl_str,
                          ctrl_rc,
                          ctrl_txtcolor,
                          ctrl_font,
                          ctrl_bkcolor,
                          &m_painter,
                          ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pEdit);
            break;
        }
    case CONTROL_LABEL:
        {

            CLabel* pLabel = new CLabel();
            pLabel->Create(ctrl_str,
                           ctrl_rc,
                           ctrl_txtcolor,
                           ctrl_font,
                           ctrl_bkcolor,
                           &m_painter,
                           ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pLabel);
            break;
        }
    case CONTROL_IMAGE:     
        {

            CImageCtrl* pImageCtrl = new CImageCtrl();
            pImageCtrl->Create(ctrl_str,
                               ctrl_rc,
                               ctrl_txtcolor,
                               ctrl_font,
                               ctrl_bkcolor,
                               &m_painter,
                               ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pImageCtrl);
            break;
        }
    case CONTROL_LINE:
        {
            CLine* pLineCtrl = new CLine();
            pLineCtrl->Create(ctrl_str,
                              ctrl_rc,
                              ctrl_txtcolor,
                              ctrl_font,
                              ctrl_bkcolor,
                              &m_painter,
                              ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pLineCtrl);
            break;
        }
    case CONTROL_CIRCLE:
        {

            CCircle* pCircleCtrl = new CCircle();
            pCircleCtrl->Create(ctrl_str,
                                ctrl_rc,
                                ctrl_txtcolor,
                                ctrl_font,
                                ctrl_bkcolor,
                                &m_painter,
                                ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pCircleCtrl);
            break;
        }


    case CONTROL_SCROLL:
        {
            CScrollCtrl* pScrollCtrl = new CScrollCtrl();
            pScrollCtrl->Create(ctrl_str,
                              ctrl_rc,
                              ctrl_txtcolor,
                              ctrl_font,
                              ctrl_bkcolor,
                              &m_painter,
                              ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pScrollCtrl);
            break;
        }
    case CONTROL_TRAIN:
        {

            CTrainCtrl* pTrainCtrl = new CTrainCtrl();
            pTrainCtrl->Create(ctrl_str,
                              ctrl_rc,
                              ctrl_txtcolor,
                              ctrl_font,
                              ctrl_bkcolor,
                              &m_painter,
                              ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pTrainCtrl);
            break;
        }
    case CONTROL_ARROW:
        {

            CArrowCtrl* pArrowCtrl = new CArrowCtrl();
            pArrowCtrl->Create(ctrl_str,
                              ctrl_rc,
                              ctrl_txtcolor,
                              ctrl_font,
                              ctrl_bkcolor,
                              &m_painter,
                              ctrl_id);
            m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pArrowCtrl);
            break;
        }
    case CONTROL_TRAINDIAGRAM:
        {
            CTrainDiagramCtrl* pTrainDiagramCtrl = new CTrainDiagramCtrl();
            pTrainDiagramCtrl->Create(ctrl_str,
                                      ctrl_rc,
                                      ctrl_txtcolor,
                                      ctrl_font,
                                      ctrl_bkcolor,
                                      &m_painter,
                                      ctrl_id);
             m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pTrainDiagramCtrl);
            break;
        }
    case CONTROL_BAR:
        {
            C_Ctrl_Bar* pBarCtrl = new C_Ctrl_Bar();
            pBarCtrl->Create(ctrl_str,
                           ctrl_rc,
                           ctrl_txtcolor,
                           ctrl_font,
                           ctrl_bkcolor,
                           &m_painter,
                           ctrl_id);
             m_ctrlmap[ctrl_id] = dynamic_cast<CControlInterface*>(pBarCtrl);
            break;
        }
    default:
        ASSERT(false); //error:unkown control type.
        break;
    }
}

void CPage::RemoveControl(
                           __in int ctrl_id
                          )
{
    if (m_ctrlmap.find(ctrl_id) != m_ctrlmap.end())
    {
        m_painter.setBrush(Qt::black);
        m_painter.setPen(Qt::black);
        m_painter.drawRect(GetDlgItem(ctrl_id)->GetCtrlRect());
        SAFE_DELETE(m_ctrlmap[ctrl_id]);
        m_ctrlmap.erase(ctrl_id);
    }
}

void CPage::ResetButtonState()
{
    for (CONTROLMAP::iterator it = m_ctrlmap.begin(); it != m_ctrlmap.end(); ++it)
    {
        if (it->second->IsKindOf("CButton"))
        {
            CButton* pButton = (CButton*)it->second;
            if (pButton->m_bAutoUpState)
            {
               pButton->ChangeButtonState(LBUTTON_UP);

            }
        }
//        else if (it->second->IsKindOf("CScrollCtrl"))
//        {
//            CScrollCtrl* pScrollCtrl = (CScrollCtrl*)it->second;
//            pScrollCtrl->SetSelectedPos(false,pScrollCtrl->m_LButtonDownPos);
//        }
    }
}

bool CPage::TestControlExists(
                              __in int ctrl_id
                             )
{
    if (find_if (m_ctrlmap.begin(), m_ctrlmap.end(), bind2nd(FINDKEY<CONTROLPAIR>(),ctrl_id)) == m_ctrlmap.end())
    {
        return false;
    }
    return true;
}

CControlInterface* CPage::GetDlgItem(
                                     __in int ctrl_id // control id
                                    )
{
    if (!TestControlExists(ctrl_id))
    {
        QMessageBox::warning(NULL,
                             "error",
                             "page index: "+QString::number(m_nPageIndex) +"\ncontrol id: 0x"+
                             QString::number(ctrl_id,16)+ "not found!",
                             QMessageBox::Ok,QMessageBox::Ok);
        assert(false);  //error: cant find control
    }

    return m_ctrlmap[ctrl_id];
}

void CPage::ChangePage(
                       __in int PageIndex // page index
                      )
{
  //  PageIndex=PAGE_INDEX_COMMSTATUS;
    CPage* pPage = NULL;
    Dialog* pDlg = (Dialog*)GetParentDlg();

    CGlobal::m_nPrePageIndex = CGlobal::m_nCurPageIndex;
    CGlobal::m_nNextPageIndex = PICTURE_INDEX(PageIndex);
    pPage = g_PageVec[CGlobal::m_nCurPageIndex];
    pPage->ConnectEvent(WM_LEAVEPAGE);

    CGlobal::m_nCurPageIndex = PICTURE_INDEX(PageIndex);

    if (g_PageVec[CGlobal::m_nCurPageIndex] == NULL) {
        CREATE_PAGE(CGlobal::m_nCurPageIndex,pDlg)
            }

    pPage = g_PageVec[CGlobal::m_nCurPageIndex];
    pPage->OnUpdatePage();
    pPage->ConnectEvent(WM_SHOWPAGE);
}

CPage* CPage::GetPage(
                       __in int PageIndex
                     )
{
    Dialog* pDlg = (Dialog*)GetParentDlg();
    if (g_PageVec[PageIndex] == NULL)
        CREATE_PAGE(PageIndex,pDlg)

    return g_PageVec[PageIndex];
}

void CPage::UpdateOutputVol(int id)
{

    if(bool(CTHMI_REC1On_B1)==true && bool(CTHMI_REC2On_B1)==true)
    {
        int RECT_OutputVol = RE1CT_OutputVol_U16>RE2CT_OutputVol_U16?RE1CT_OutputVol_U16:RE2CT_OutputVol_U16;

        ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(((float)RECT_OutputVol)).append(" V"));

    }else if(bool(CTHMI_REC1On_B1)==true && bool(CTHMI_REC2On_B1)==false)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(((float)RE1CT_OutputVol_U16)).append(" V"));

    }else if(bool(CTHMI_REC1On_B1)==false && bool(CTHMI_REC2On_B1)==true)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(((float)RE2CT_OutputVol_U16)).append(" V"));

    }else
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlText("- -");

    }
}
void CPage::UpdateVoltage(int id)
{
    /*
    //DR1CT_LineVoltage_U16		4节动车的网压最大值
    int Max_LineVoltage=0;
    if(CTHM_DCU2_Online_B1||CTHM_DCU3_Online_B1||CTHM_DCU4_Online_B1||CTHM_DCU5_Online_B1||CTHM_SIV1_Online_B1||CTHM_SIV2_Online_B1)
    {
        if(CTHM_DCU2_Online_B1)
        {
            if(DR1CT_LineVoltage_U16>=Max_LineVoltage)
            {
                Max_LineVoltage=DR1CT_LineVoltage_U16;
            }
        }
        if(CTHM_DCU3_Online_B1)
        {
            if(DR2CT_LineVoltage_U16>=Max_LineVoltage)
            {
                Max_LineVoltage=DR2CT_LineVoltage_U16;
            }
        }
        if(CTHM_DCU4_Online_B1)
        {
            if(DR3CT_LineVoltage_U16>=Max_LineVoltage)
            {
                Max_LineVoltage=DR3CT_LineVoltage_U16;
            }
        }
        if(CTHM_DCU5_Online_B1)
        {
            if(DR4CT_LineVoltage_U16>=Max_LineVoltage)
            {
                Max_LineVoltage=DR4CT_LineVoltage_U16;
            }
        }
        if(CTHM_SIV1_Online_B1)
        {
            if(SIV1CT_InputVoltageUd_U16>=Max_LineVoltage)
            {
                Max_LineVoltage=SIV1CT_InputVoltageUd_U16;
            }
        }

        if(CTHM_SIV2_Online_B1)
        {
            if(SIV2CT_InputVoltageUd_U16>=Max_LineVoltage)
            {
                Max_LineVoltage=SIV2CT_InputVoltageUd_U16;
            }
        }

        if (Max_LineVoltage < 1000)
        {
            voltage_color = 2;
        }
        else if (1800 < Max_LineVoltage)
        {
            voltage_color = 2;
        }
        else if ((999<Max_LineVoltage) && (Max_LineVoltage<1801))
        {
            voltage_color = 0;
        }

    }
    else
    {
        voltage_color = 4;

    }

    SetVoltageLabelColor(id, voltage_color);

    SetVoltageValue(id, Max_LineVoltage);
    SetVoltageFontColor(id, voltage_color);

   // ((CLabel *) GetDlgItem(id))->SetBorderColor(Qt::white);
*/
    if(CTHMI_CatenaryVoltage_U16 > 1800)
    {
        SetVoltageLabelColor(id, 2);
        SetVoltageFontColor(id, 2);
    }else if(CTHMI_CatenaryVoltage_U16 < 1000)
    {
        SetVoltageLabelColor(id, 2);
        SetVoltageFontColor(id, 2);
    }else
    {
        SetVoltageLabelColor(id, 3);
        SetVoltageFontColor(id, 0);
    }
    SetVoltageValue(id, CTHMI_CatenaryVoltage_U16);
}

void CPage::UpdateCurrent(int id)
{/*
        //DR2CT_IntermediateCurrent_U16                  	4节动车的中间电流相加
    int Net_current=0;
    if(CTHM_DCU2_Online_B1||CTHM_DCU3_Online_B1||CTHM_DCU4_Online_B1||CTHM_DCU5_Online_B1)
    {
        if(CTHM_DCU2_Online_B1)
        {
                Net_current=Net_current+DR1CT_IntermediateCurrent_U16;
        }
        if(CTHM_DCU3_Online_B1)
        {
            Net_current=Net_current+DR2CT_IntermediateCurrent_U16;
        }
        if(CTHM_DCU4_Online_B1)
        {
            Net_current=Net_current+DR3CT_IntermediateCurrent_U16;
        }
        if(CTHM_DCU5_Online_B1)
        {
            Net_current=Net_current+DR4CT_IntermediateCurrent_U16;
        }
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(QColor(0,176,240));

    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::white);

    }
    SetCurrentValue(id, Net_current);
*/
    SetCurrentValue(id, CTHMI_CatenaryCurrent_U16);
}

void CPage::UpdateSpeed(int id)
{
    /*
    if (CTHM_CCU1On_B1||CTHM_CCU2On_B1)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(QColor(0,176,240));
    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::white);
    }
    if (CTHM_TrainSpeed_U16==65535)
    {
        this->GetDlgItem(id)->SetCtrlText("---km/h");

    }
    else{
    this->GetDlgItem(id)->SetCtrlText(QString::number(int(CTHM_TrainSpeed_U16*0.01)).append(" km/h"));
}
*/
    this->GetDlgItem(id)->SetCtrlText(QString::number(int(CTHMI_TrainSpeed_U16)).append(" km/h"));

}

void CPage::UpdateTractionLevel(int id)
{

    if(CTHM_TractionBlock25_B1)
    {
        this->GetDlgItem(id)->SetTxtColor(Qt::red);
        this->GetDlgItem(id)->SetCtrlText(("3 km/h"));
        g_speedlimitvalue = 3;
    }else if(CTHM_TractionBlock21_B1||CTHM_TractionBlock22_B1||CTHM_TractionBlock24_B1)
    {
        this->GetDlgItem(id)->SetTxtColor(Qt::red);
        this->GetDlgItem(id)->SetCtrlText(("10 km/h"));
        g_speedlimitvalue = 10;
    }else if(CTHM_TractionBlock13_B1)
    {
        this->GetDlgItem(id)->SetTxtColor(Qt::red);
        this->GetDlgItem(id)->SetCtrlText(("35 km/h"));
        g_speedlimitvalue = 35;
    }else if(CTHM_TractionBlock20_B1)
    {
        this->GetDlgItem(id)->SetTxtColor(Qt::red);
        this->GetDlgItem(id)->SetCtrlText(("40 km/h"));
        g_speedlimitvalue = 40;
    }
    else if( (CTHM_DCU2_Online_B1&&TR1CT_EmgyMode_B1) || (CTHM_DCU3_Online_B1&&TR2CT_EmgyMode_B1)
    || (CTHM_DCU4_Online_B1&&TR3CT_EmgyMode_B1) || (CTHM_DCU5_Online_B1&&TR4CT_EmgyMode_B1))
    {
        this->GetDlgItem(id)->SetTxtColor(Qt::red);
        this->GetDlgItem(id)->SetCtrlText(("45 km/h"));
        g_speedlimitvalue = 45;
    }

    else if(CTHM_TractionBlock23_B1)
    {
        this->GetDlgItem(id)->SetTxtColor(Qt::red);
        this->GetDlgItem(id)->SetCtrlText(("50 km/h"));
        g_speedlimitvalue = 50;
    }else if(CTHM_TractionBlock12_B1)
    {
        this->GetDlgItem(id)->SetTxtColor(Qt::red);
        this->GetDlgItem(id)->SetCtrlText(("60 km/h"));
        g_speedlimitvalue = 60;
    }else if(CTHM_TractionBlock11_B1)
    {
        this->GetDlgItem(id)->SetTxtColor(Qt::red);
        this->GetDlgItem(id)->SetCtrlText(("70 km/h"));
        g_speedlimitvalue = 70;
    }
    else
    {
        this->GetDlgItem(id)->SetTxtColor(QColor(0,176,240));
        this->GetDlgItem(id)->SetCtrlText((""));
        this->GetDlgItem(id)->SetCtrlText(("80 km/h"));
        g_speedlimitvalue = 80;
    }

}

void CPage::UpdateCarSpeedMode(int id)
{
    //CTHM_ATCOn_B1	ATC在线
    if (Bit(CCU_HMI_222_9, 4 ) == 1)
    {
        //ATCT_CBTC_B1	ATC运营模式-基于无线列车运营
        if(Bit(ATC_A10_2, 16))
        {
            //ATCT_Fast_B1	快慢车
            if(Bit(ATC_A10_4, 11))
            {
                ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
                ((CLabel *)GetDlgItem(id))->SetCtrlText(QObject::trUtf8("快车"));
            }else
            {
                ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
                ((CLabel *)GetDlgItem(id))->SetCtrlText(QObject::trUtf8("慢车"));
            }
        }
        else
        {
            if ((Bit(CCU_HMI_222_16, 8 )) ||(Bit(CCU_HMI_222_16, 7 ))== 1)   //PIS1 PIS2
            {
                   if(Bit(PIS_Master_9i0_7, 11))
                   {
                       ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
                       ((CLabel *)GetDlgItem(id))->SetCtrlText(QObject::trUtf8("快车"));
                   }
                   else
                   {
                       ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
                       ((CLabel *)GetDlgItem(id))->SetCtrlText(QObject::trUtf8("慢车"));
                   }

            }

        }
    }

}

void CPage::SetVoltageValue(int id, int aValue)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(aValue).append(" V"));
}



void CPage::SetCurrentValue(int id, int16_t aValue)
{

    ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(aValue).append(" A"));

}




// set V label back ground color
void CPage::SetVoltageLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 4));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (4 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }

    return;
}

// Set V Font color
void CPage::SetVoltageFontColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 4));
    if (1 <= colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::white);
    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::black);
    }
}

void CPage::SetTractionBrakeLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 5));
    // 黑 橘红  绿 红 黑 0—4
    if (0 == colorVal || 4 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::darkRed);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }
    else if (5 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }

    return;
}

void CPage::SetTractionBrakeFontColor(int id, int colorVal)
{
    if (1 == colorVal || 2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::black);
    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::white);
    }
}

//tain common function.
void CPage::updateTrain(int nTrainID)
{
    //CCU1在线 CCU2
    if ( (CTHM_CCU1On_B1)||(CTHM_CCU2On_B1))
    {
    //    ((CTrainCtrl*)GetDlgItem(nTrainID))->SetHeadCarColor(1, Qt::gray);
        //DICT_Cab KeyActiveTci_B1    	Cab KeyActive	TC1司机室激活
        if (CTHM_TC1Active_B1)
            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetHeadCarColor(1, Qt::green);
        else
            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetHeadCarColor(1, Qt::gray);

    }
    else
    {
        ((CTrainCtrl*)GetDlgItem(nTrainID))->SetHeadCarColor(1, Qt::white);
    }
   //CTHM_Tc2DI1On_B1	TC2车DI1在线 && CTHM_Tc2GWOn_B1	TC2车GW在线
    if (  (CTHM_CCU1On_B1) ||(CTHM_CCU2On_B1))
    {
        //DICT_Cab KeyActiveTci_B1    	Cab KeyActive	TC2司机室激活
        if (CTHM_TC2Active_B1)
            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetHeadCarColor(VEHICLE_NUM, Qt::green);
        else
            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetHeadCarColor(VEHICLE_NUM, Qt::gray);
    }
    else
    {
        ((CTrainCtrl*)GetDlgItem(nTrainID))->SetHeadCarColor(VEHICLE_NUM, Qt::white);
    }


    //CTHM_Tc1DI3On_B1 TC1车DI3在线 && CTHM_Tc1GWOn_B1TC1车GW在线
    if ((CTHM_TC1RIOMGWOn_B1)&&(CTHM_TC1DI1On_B1))
    {
        //DICT_EmergencyDoorOpenTci_B1    	Emergency door open	逃生门监视
        if (DICT_Tc1DI1EscapeDrSta_B1)
        {
            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetEscapeDoorColor(1, Qt::green);
        }
        else
        {
            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetEscapeDoorColor(1, Qt::red);
        }
    }
    else
    {
        ((CTrainCtrl*)GetDlgItem(nTrainID))->SetEscapeDoorColor(1, Qt::white);
    }
    if (  (CTHM_TC2RIOMGWOn_B1) &&(CTHM_TC2DI1On_B1) )
    {
        if (DICT_Tc2DI1EscapeDrSta_B1 )
        {
             ((CTrainCtrl*)GetDlgItem(nTrainID))->SetEscapeDoorColor(VEHICLE_NUM, Qt::green);
        }
        else
        {
            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetEscapeDoorColor(VEHICLE_NUM, Qt::red);
        }
    }
    else
    {
        ((CTrainCtrl*)GetDlgItem(nTrainID))->SetEscapeDoorColor(VEHICLE_NUM, Qt::white);
    }


    if ( (CTHM_Mp1RIOMGWOn_B1)&&(CTHM_MP1DI1On_B1))
    {
        //升弓到位监视	高电平代表升弓到位
        if(!bool(DICT_MP1DI1PhIsolation_B1))
        {
            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPantograph(VEHICLE_Pantograph1, 1,1);
        }
        else if (DICT_MP1DI1RosePH_B1 )
        {
            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPantograph(VEHICLE_Pantograph1, 1,0);
        }
        else if((DICT_MP1DI1RosePhCommand_B1 )||( DICT_MP1DI1DropPhCommand_B1))
        {
            if(CTHMI_CatenaryVoltage_U16 > 0)
            {
                ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPantograph(VEHICLE_Pantograph1, 3,0);
            }else
            {
                ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPantograph(VEHICLE_Pantograph1, 0,0);
            }
        }else
        {
            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPantograph(VEHICLE_Pantograph1, 0,0);
        }
    }
    else
    {
        ///offline
        ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPantograph(VEHICLE_Pantograph1, 2,0);
    }

    if ( (CTHM_Mp2RIOMGWOn_B1)&&(CTHM_MP2DI1On_B1))
    {
        //升弓到位监视	高电平代表升弓到位
        if(!bool(DICT_MP2DI1PhIsolation_B1))
        {
            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPantograph(VEHICLE_Pantograph2, 1,1);
        }
        else if (DICT_MP2DI1RosePH_B1 )
        {
            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPantograph(VEHICLE_Pantograph2, 1,0);
        }
        else if((DICT_MP2DI1RosePhCommand_B1 )||( DICT_MP2DI1DropPhCommand_B1))
        {
            if(CTHMI_CatenaryVoltage_U16 > 0)
            {
                ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPantograph(VEHICLE_Pantograph2, 3,0);
            }else
            {
                ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPantograph(VEHICLE_Pantograph2, 0,0);
            }
        }else
        {
            ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPantograph(VEHICLE_Pantograph2, 0,0);
        }
    }
    else
    {
        ((CTrainCtrl*)GetDlgItem(nTrainID))->SetPantograph(VEHICLE_Pantograph2, 2,0);
    }




    UpdateWarning(nTrainID);

//    //car num
    QString nCarNum[] =
    {
        che1_num,
        che2_num,
        che3_num,
        che4_num,
        che5_num,
        che6_num,

    };
    for (int i=0; i<6; i++)
    {
        ((CTrainCtrl*)GetDlgItem(nTrainID))->SetCarText(i,nCarNum[i]);
    }

}

void CPage::updateArrow(int nLeftArrowID,int nRightArrowID)
{
    //left
   // DICT_Cab KeyActiveTci_B1    	Cab KeyActive	司机室激活
    if (CTHM_TC1Active_B1 )
    {
        //DICT_DirectionBTci_B1    后退方向  DICT_DirectionFTci_B1   前进方向
        if ( (CTHM_Forward_B1)&&!(CTHM_Backward_B1))
        {
            ((CArrowCtrl*)GetDlgItem(nLeftArrowID))->DrawArrowCtrl(ARROW_LEFT );
        }
        if ( CTHM_Backward_B1&&!(CTHM_Forward_B1))
        {
            ((CArrowCtrl*)GetDlgItem(nLeftArrowID))->DrawArrowCtrl(ARROW_RIGHT);
        }
        if ( CTHM_Forward_B1&&CTHM_Backward_B1)
        {
            ((CArrowCtrl*)GetDlgItem(nLeftArrowID))->DrawArrowCtrl(ARROW_RIGHT_LEFT);
        }
        if ( !(CTHM_Forward_B1)&&!(CTHM_Backward_B1))
        {
            ((CArrowCtrl*)GetDlgItem(nLeftArrowID))->HideArrow();
        }
    }
    else
    {
        ((CArrowCtrl*)GetDlgItem(nLeftArrowID))->HideArrow();
    }

    //right
    //DI_180_1=0;
    if (CTHM_TC2Active_B1 )
    {
        if ( (CTHM_Forward_B1)&&!(CTHM_Backward_B1))
        {
            ((CArrowCtrl*)GetDlgItem(nRightArrowID))->DrawArrowCtrl(ARROW_LEFT);
        }
        if ( !(CTHM_Forward_B1)&&(CTHM_Backward_B1))
        {
            ((CArrowCtrl*)GetDlgItem(nRightArrowID))->DrawArrowCtrl(ARROW_RIGHT);
        }
        if ( (CTHM_Forward_B1)&&(CTHM_Backward_B1))
        {
            ((CArrowCtrl*)GetDlgItem(nRightArrowID))->DrawArrowCtrl(ARROW_RIGHT_LEFT);
        }
        if ( !(CTHM_Forward_B1)&&!(CTHM_Backward_B1))
        {
            ((CArrowCtrl*)GetDlgItem(nRightArrowID))->HideArrow();
        }
    }
    else
    {
        ((CArrowCtrl*)GetDlgItem(nRightArrowID))->HideArrow();
    }

}

void CPage::updateFault(int nFaultID)
{
    if (g_RealTimeFaultsNum)
    {
        ((CImageCtrl*)GetDlgItem(nFaultID))->ShowImage();
    }
    else
    {
        ((CImageCtrl*)GetDlgItem(nFaultID))->HideImage();
    }
}

void CPage::UpdateCommInterrupt(int nInteruptID)
{
    static quint32 times = 0;
    if (Bit(hmi_485_error,5)==1 )
    {
        ((CLabel *)GetDlgItem(nInteruptID))->SetCtrlBKColor(Qt::white);
        if (times%times_n == 0)
        {
            QColor txtcolor = ((CLabel *)GetDlgItem(nInteruptID))->GetTxtColor();
            if (txtcolor == Qt::red)
                ((CLabel *)GetDlgItem(nInteruptID))->SetTxtColor(Qt::white);
            else
                ((CLabel *)GetDlgItem(nInteruptID))->SetTxtColor(Qt::red);
        }
        times++;
    }
    else
    {
        ((CLabel *)GetDlgItem(nInteruptID))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(nInteruptID))->SetTxtColor(Qt::black);
        times = 0;
    }
    ((CLabel *)GetDlgItem(nInteruptID))->SetCtrlBKColor(Qt::black);
    ((CLabel *)GetDlgItem(nInteruptID))->SetTxtColor(Qt::black);
    times = 0;
}

void CPage::OnTitleCLK()
{
   #ifdef USE_RAND_DATA
   if(((Dialog*)GetParentDlg())->serialDebugDlg.isHidden())
       ((Dialog*)GetParentDlg())->serialDebugDlg.show();
  #endif

}

void CPage::updateErrorLine(int nTrainID)
{
    static quint32 times = 0;
    int x,y;
    x=((CTrainCtrl*)GetDlgItem(nTrainID))->GetCtrlRect().x()+GetParentDlg()->x()-120;
    y=((CTrainCtrl*)GetDlgItem(nTrainID))->GetCtrlRect().y()+GetParentDlg()->y()+560;

//    x=((CTrainCtrl*)GetDlgItem(nTrainID))->GetCtrlRect().x()+GetParentDlg()->x()-20;
//    y=((CTrainCtrl*)GetDlgItem(nTrainID))->GetCtrlRect().y()+GetParentDlg()->y()+43;
//    if ( g_realtimeFaultsList.size()>0)
//    {
//       int j=g_realtimeFaultsList.size()-1;
//       int confirm_num=0;
//       for (int i=j; i >= 0; i--)
//       {
//                FAULTS_ROM_DATA *pdata = &g_faultsrom[g_realtimeFaultsList[i].nRomIndex];

//                // real fault shows only level1,2 not confirm ,new
//                if (pdata->flg && (3 != pdata->level) && !pdata->confirm)
//                {

//                    if(((Dialog*)GetParentDlg())->dlg.isHidden())
//                    {
//                        ((Dialog*)GetParentDlg())->dlg.show();
//                         error_turnoff_timer=3;
//                        ((Dialog*)GetParentDlg())->dlg.SetRomIdx(g_realtimeFaultsList[i].nRomIndex);
//                        ((Dialog*)GetParentDlg())->dlg.move(x,y);


//                       // ((Dialog*)GetParentDlg())->dlg.exec();
//                        confirm_num=1;
//                        break;
//                    }
//                    else
//                    {

//                        if(((Dialog*)GetParentDlg())->dlg.m_romidx==g_realtimeFaultsList[i].nRomIndex)
//                        {
//                            if(g_faultsrom[g_realtimeFaultsList[i].nRomIndex].confirm_flg==false)
//                            {
//                                times++;
//                                if (times%times_n == 0)
//                                {
//                                    error_turnoff_timer--;
//                                    if (error_turnoff_timer <= 0)
//                                    {
//                                        g_faultsrom[g_realtimeFaultsList[i].nRomIndex].confirm = true;
//                                        ((Dialog*)GetParentDlg())->dlg.hide();
//                                        error_turnoff_timer=0;
//                                    }

//                                }
//                                confirm_num=1;
//                                break;
//                            }
//                            else
//                            {
//                                confirm_num=1;
//                                break;
//                            }

//                        }
//                        else
//                        {
//                            //之前弹出的故障消失但还有需要确认的故障
//                           ((Dialog*)GetParentDlg())->dlg.SetRomIdx(g_realtimeFaultsList[i].nRomIndex);
//                            confirm_num=1;
//                           ((Dialog*)GetParentDlg())->dlg.hide();
//                            error_turnoff_timer=0;
//                            break;
//                        }

//                    }
//                }//if (pdata->confirm==false)
//        }//for (int i=j; i >= 0; i--)
//        //之前弹出的故障消失且没有需要确认的故障
//        if(confirm_num==0)
//        {
//            ((Dialog*)GetParentDlg())->dlg.hide();
//            error_turnoff_timer=0;
//        }

//    }
//    else  //if ( g_realtimeFaultsList.size()>0)
//    {
//        ((Dialog*)GetParentDlg())->dlg.hide();
//    }


}

void CPage::OnRealTimeFaultsWarnningIconClk_new()
{
    if (0 == g_RealTimeFaultsNum)
    {
        return;
    }
    g_backtoprepage = true;
    SetFaultType(E_FAULTS_TYPE_REALTIME);
    ChangePage(PAGE_INDEX_REALTIMEFAULT);
}

void CPage::UpdateStation()
{
    if(bool(!HMiCT_PISMODE_B1)&&bool(CTHM_ATC1On_B1)&&bool(CTHM_ATC1Active_B1))
    {
        //ATC 到CCU的数据
        DestStation = GetATCStationString(ATCT_DestinationPNO_U16);
        CurrentStation  = GetATCStationString(ATCT_CurrentPNO_U16);
        NextStation = GetATCStationString(ATCT_NextPNO_U16);
  /*       if ( (ATCT_DestinationPNO_U16 > 0) && (ATCT_DestinationPNO_U16 < 70) )
         {
             if (ATCT_DestinationPNO_U16 == 1 || ATCT_DestinationPNO_U16 == 2)
             {
                 DestStation = QObject::trUtf8("东风公司");
             }
             if (ATCT_DestinationPNO_U16 == 102)
             {
                 DestStation = QObject::trUtf8("车城东路");
             }
             if (ATCT_DestinationPNO_U16 == 103)
             {
                 DestStation = QObject::trUtf8("江城大道");
             }
             if (ATCT_DestinationPNO_U16 == 104)
             {
                 DestStation = QObject::trUtf8("老关村");
             }
             if (ATCT_DestinationPNO_U16 == 105)
             {
                 DestStation = QObject::trUtf8("国博中心南");
             }
             if (ATCT_DestinationPNO_U16 == 106)
             {
                 DestStation = QObject::trUtf8("国博中心北");
             }
             if (ATCT_DestinationPNO_U16 == 107)
             {
                 DestStation = QObject::trUtf8("前进村");
             }
             if (ATCT_DestinationPNO_U16 == 108)
             {
                 DestStation = QObject::trUtf8("建港路");
             }
             if (ATCT_DestinationPNO_U16 == 109)
             {
                 DestStation = QObject::trUtf8("马鹦路");
             }
             if (ATCT_DestinationPNO_U16 == 110)
             {
                 DestStation = QObject::trUtf8("钟家村");
             }
             if (ATCT_DestinationPNO_U16 == 111)
             {
                 DestStation = QObject::trUtf8("琴台");
             }
             if (ATCT_DestinationPNO_U16 == 112)
             {
                 DestStation = QObject::trUtf8("武胜路");
             }
             if (ATCT_DestinationPNO_U16 == 113)
             {
                 DestStation = QObject::trUtf8("汉正街");
             }
             if (ATCT_DestinationPNO_U16 == 114)
             {
                 DestStation = QObject::trUtf8("六渡桥");
             }
             if (ATCT_DestinationPNO_U16 == 115)
             {
                 DestStation = QObject::trUtf8("江汉路");
             }
             if (ATCT_DestinationPNO_U16 == 116)
             {
                 DestStation = QObject::trUtf8("大智路");
             }
             if (ATCT_DestinationPNO_U16 == 117)
             {
                 DestStation = QObject::trUtf8("苗栗路");
             }
             if (ATCT_DestinationPNO_U16 == 118)
             {
                 DestStation = QObject::trUtf8("香港路");
             }
             if (ATCT_DestinationPNO_U16 == 119)
             {
                 DestStation = QObject::trUtf8("三眼桥");
             }
             if (ATCT_DestinationPNO_U16 == 120)
             {
                 DestStation = QObject::trUtf8("唐家墩");
             }
             if (ATCT_DestinationPNO_U16 == 121)
             {
                 DestStation = QObject::trUtf8("石桥");
             }
             if (ATCT_DestinationPNO_U16 == 122)
             {
                 DestStation = QObject::trUtf8("杨汊湖");
             }
             if (ATCT_DestinationPNO_U16 == 123)
             {
                 DestStation = QObject::trUtf8("常青花园");
             }
             if (ATCT_DestinationPNO_U16 == 124)
             {
                 DestStation = QObject::trUtf8("轻工大学");
             }
             if (ATCT_DestinationPNO_U16 == 125)
             {
                 DestStation = QObject::trUtf8("园博园北");
             }
             if (ATCT_DestinationPNO_U16 == 126)
             {
                 DestStation = QObject::trUtf8("金银湖");
             }
             if (ATCT_DestinationPNO_U16 == 127)
             {
                 DestStation = QObject::trUtf8("金银湖公园");
             }
     }

         if ( (ATCT_CurrentPNO_U16 > 100) && (ATCT_CurrentPNO_U16 < 128) )
         {
             if (ATCT_CurrentPNO_U16 == 101)
             {
                 CurrentStation = QObject::trUtf8("东风公司");
             }
             if (ATCT_CurrentPNO_U16 == 102)
             {
                 CurrentStation = QObject::trUtf8("车城东路");
             }
             if (ATCT_CurrentPNO_U16 == 103)
             {
                 CurrentStation = QObject::trUtf8("江城大道");
             }
             if (ATCT_CurrentPNO_U16 == 104)
             {
                 CurrentStation = QObject::trUtf8("老关村");
             }
             if (ATCT_CurrentPNO_U16 == 105)
             {
                 CurrentStation = QObject::trUtf8("国博中心南");
             }
             if (ATCT_CurrentPNO_U16 == 106)
             {
                 CurrentStation = QObject::trUtf8("国博中心北");
             }
             if (ATCT_CurrentPNO_U16 == 107)
             {
                 CurrentStation = QObject::trUtf8("前进村");
             }
             if (ATCT_CurrentPNO_U16 == 108)
             {
                 CurrentStation = QObject::trUtf8("建港路");
             }
             if (ATCT_CurrentPNO_U16 == 109)
             {
                 CurrentStation = QObject::trUtf8("马鹦路");
             }
             if (ATCT_CurrentPNO_U16 == 110)
             {
                 CurrentStation = QObject::trUtf8("钟家村");
             }
             if (ATCT_CurrentPNO_U16 == 111)
             {
                 CurrentStation = QObject::trUtf8("琴台");
             }
             if (ATCT_CurrentPNO_U16 == 112)
             {
                 CurrentStation = QObject::trUtf8("武胜路");
             }
             if (ATCT_CurrentPNO_U16 == 113)
             {
                 CurrentStation = QObject::trUtf8("汉正街");
             }
             if (ATCT_CurrentPNO_U16 == 114)
             {
                 CurrentStation = QObject::trUtf8("六渡桥");
             }
             if (ATCT_CurrentPNO_U16 == 115)
             {
                 CurrentStation = QObject::trUtf8("江汉路");
             }
             if (ATCT_CurrentPNO_U16 == 116)
             {
                 CurrentStation = QObject::trUtf8("大智路");
             }
             if (ATCT_CurrentPNO_U16 == 117)
             {
                 CurrentStation = QObject::trUtf8("苗栗路");
             }
             if (ATCT_CurrentPNO_U16 == 118)
             {
                 CurrentStation = QObject::trUtf8("香港路");
             }
             if (ATCT_CurrentPNO_U16 == 119)
             {
                 CurrentStation = QObject::trUtf8("三眼桥");
             }
             if (ATCT_CurrentPNO_U16 == 120)
             {
                 CurrentStation = QObject::trUtf8("唐家墩");
             }
             if (ATCT_CurrentPNO_U16 == 121)
             {
                 CurrentStation = QObject::trUtf8("石桥");
             }
             if (ATCT_CurrentPNO_U16 == 122)
             {
                 CurrentStation = QObject::trUtf8("杨汊湖");
             }
             if (ATCT_CurrentPNO_U16 == 123)
             {
                 CurrentStation = QObject::trUtf8("常青花园");
             }
             if (ATCT_CurrentPNO_U16 == 124)
             {
                 CurrentStation = QObject::trUtf8("轻工大学");
             }
             if (ATCT_CurrentPNO_U16 == 125)
             {
                 CurrentStation = QObject::trUtf8("园博园北");
             }
             if (ATCT_CurrentPNO_U16 == 126)
             {
                 CurrentStation = QObject::trUtf8("金银湖");
             }
             if (ATCT_CurrentPNO_U16 == 127)
             {
                 CurrentStation = QObject::trUtf8("金银湖公园");
             }

         }

         if ( (ATCT_NextPNO_U16 > 100) && (ATCT_NextPNO_U16 < 128) )
         {
             if (ATCT_NextPNO_U16 == 101)
             {
                 NextStation  = QObject::trUtf8("东风公司");
             }
             if (ATCT_NextPNO_U16 == 102)
             {
                 NextStation  = QObject::trUtf8("车城东路");
             }
             if (ATCT_NextPNO_U16 == 103)
             {
                 NextStation  = QObject::trUtf8("江城大道");
             }
             if (ATCT_NextPNO_U16 == 104)
             {
                 NextStation  = QObject::trUtf8("老关村");
             }
             if (ATCT_NextPNO_U16 == 105)
             {
                 NextStation  = QObject::trUtf8("国博中心南");
             }
             if (ATCT_NextPNO_U16 == 106)
             {
                 NextStation  = QObject::trUtf8("国博中心北");
             }
             if (ATCT_NextPNO_U16 == 107)
             {
                 NextStation  = QObject::trUtf8("前进村");
             }
             if (ATCT_NextPNO_U16 == 108)
             {
                 NextStation  = QObject::trUtf8("建港路");
             }
             if (ATCT_NextPNO_U16 == 109)
             {
                 NextStation  = QObject::trUtf8("马鹦路");
             }
             if (ATCT_NextPNO_U16 == 110)
             {
                 NextStation  = QObject::trUtf8("钟家村");
             }
             if (ATCT_NextPNO_U16 == 111)
             {
                 NextStation  = QObject::trUtf8("琴台");
             }
             if (ATCT_NextPNO_U16 == 112)
             {
                 NextStation  = QObject::trUtf8("武胜路");
             }
             if (ATCT_NextPNO_U16 == 113)
             {
                 NextStation  = QObject::trUtf8("汉正街");
             }
             if (ATCT_NextPNO_U16 == 114)
             {
                 NextStation  = QObject::trUtf8("六渡桥");
             }
             if (ATCT_NextPNO_U16 == 115)
             {
                 NextStation  = QObject::trUtf8("江汉路");
             }
             if (ATCT_NextPNO_U16 == 116)
             {
                 NextStation  = QObject::trUtf8("大智路");
             }
             if (ATCT_NextPNO_U16 == 117)
             {
                 NextStation  = QObject::trUtf8("苗栗路");
             }
             if (ATCT_NextPNO_U16 == 118)
             {
                 NextStation  = QObject::trUtf8("香港路");
             }
             if (ATCT_NextPNO_U16 == 119)
             {
                 NextStation  = QObject::trUtf8("三眼桥");
             }
             if (ATCT_NextPNO_U16 == 120)
             {
                 NextStation  = QObject::trUtf8("唐家墩");
             }
             if (ATCT_NextPNO_U16 == 121)
             {
                 NextStation  = QObject::trUtf8("石桥");
             }
             if (ATCT_NextPNO_U16 == 122)
             {
                 NextStation  = QObject::trUtf8("杨汊湖");
             }
             if (ATCT_NextPNO_U16 == 123)
             {
                 NextStation  = QObject::trUtf8("常青花园");
             }
             if (ATCT_NextPNO_U16 == 124)
             {
                 NextStation  = QObject::trUtf8("轻工大学");
             }
             if (ATCT_NextPNO_U16 == 125)
             {
                 NextStation  = QObject::trUtf8("园博园北");
             }
             if (ATCT_NextPNO_U16 == 126)
             {
                 NextStation  = QObject::trUtf8("金银湖");
             }
             if (ATCT_NextPNO_U16 == 127)
             {
                 NextStation  = QObject::trUtf8("金银湖公园");
             }

         }
*/
    }else
    {
        if ( (PISiCT_OriStaID_U16 > 100) && (PISiCT_OriStaID_U16 < 128) )
        {
            if (PISiCT_OriStaID_U16 == 101)
            {
                OrigStation = QObject::trUtf8("东风公司");
            }
            if (PISiCT_OriStaID_U16 == 102)
            {
                OrigStation = QObject::trUtf8("车城东路");
            }
            if (PISiCT_OriStaID_U16 == 103)
            {
                OrigStation = QObject::trUtf8("江城大道");
            }
            if (PISiCT_OriStaID_U16 == 104)
            {
                OrigStation = QObject::trUtf8("老关村");
            }
            if (PISiCT_OriStaID_U16 == 105)
            {
                OrigStation = QObject::trUtf8("国博中心南");
            }
            if (PISiCT_OriStaID_U16 == 106)
            {
                OrigStation = QObject::trUtf8("国博中心北");
            }
            if (PISiCT_OriStaID_U16 == 107)
            {
                OrigStation = QObject::trUtf8("前进村");
            }
            if (PISiCT_OriStaID_U16 == 108)
            {
                OrigStation = QObject::trUtf8("建港路");
            }
            if (PISiCT_OriStaID_U16 == 109)
            {
                OrigStation = QObject::trUtf8("马鹦路");
            }
            if (PISiCT_OriStaID_U16 == 110)
            {
                OrigStation = QObject::trUtf8("钟家村");
            }
            if (PISiCT_OriStaID_U16 == 111)
            {
                OrigStation = QObject::trUtf8("琴台");
            }
            if (PISiCT_OriStaID_U16 == 112)
            {
                OrigStation = QObject::trUtf8("武胜路");
            }
            if (PISiCT_OriStaID_U16 == 113)
            {
                OrigStation = QObject::trUtf8("汉正街");
            }
            if (PISiCT_OriStaID_U16 == 114)
            {
                OrigStation = QObject::trUtf8("六渡桥");
            }
            if (PISiCT_OriStaID_U16 == 115)
            {
                OrigStation = QObject::trUtf8("江汉路");
            }
            if (PISiCT_OriStaID_U16 == 116)
            {
                OrigStation = QObject::trUtf8("大智路");
            }
            if (PISiCT_OriStaID_U16 == 117)
            {
                OrigStation = QObject::trUtf8("苗栗路");
            }
            if (PISiCT_OriStaID_U16 == 118)
            {
                OrigStation = QObject::trUtf8("香港路");
            }
            if (PISiCT_OriStaID_U16 == 119)
            {
                OrigStation = QObject::trUtf8("三眼桥");
            }
            if (PISiCT_OriStaID_U16 == 120)
            {
                OrigStation = QObject::trUtf8("唐家墩");
            }
            if (PISiCT_OriStaID_U16 == 121)
            {
                OrigStation = QObject::trUtf8("石桥");
            }
            if (PISiCT_OriStaID_U16 == 122)
            {
                OrigStation = QObject::trUtf8("杨汊湖");
            }
            if (PISiCT_OriStaID_U16 == 123)
            {
                OrigStation = QObject::trUtf8("常青花园");
            }
            if (PISiCT_OriStaID_U16 == 124)
            {
                OrigStation = QObject::trUtf8("轻工大学");
            }
            if (PISiCT_OriStaID_U16 == 125)
            {
                OrigStation = QObject::trUtf8("园博园北");
            }
            if (PISiCT_OriStaID_U16 == 126)
            {
                OrigStation = QObject::trUtf8("金银湖");
            }
            if (PISiCT_OriStaID_U16 == 127)
            {
                OrigStation = QObject::trUtf8("金银湖公园");
            }
    }

        if ( (PISiCT_TerStaID_U16 > 100) && (PISiCT_TerStaID_U16 < 128) )
        {

            if (PISiCT_TerStaID_U16 == 101)
            {
                DestStation = QObject::trUtf8("东风公司");
            }
            if (PISiCT_TerStaID_U16 == 102)
            {
                DestStation = QObject::trUtf8("车城东路");
            }
            if (PISiCT_TerStaID_U16 == 103)
            {
                DestStation = QObject::trUtf8("江城大道");
            }
            if (PISiCT_TerStaID_U16 == 104)
            {
                DestStation = QObject::trUtf8("老关村");
            }
            if (PISiCT_TerStaID_U16 == 105)
            {
                DestStation = QObject::trUtf8("国博中心南");
            }
            if (PISiCT_TerStaID_U16 == 106)
            {
                DestStation = QObject::trUtf8("国博中心北");
            }
            if (PISiCT_TerStaID_U16 == 107)
            {
                DestStation = QObject::trUtf8("前进村");
            }
            if (PISiCT_TerStaID_U16 == 108)
            {
                DestStation = QObject::trUtf8("建港路");
            }
            if (PISiCT_TerStaID_U16 == 109)
            {
                DestStation = QObject::trUtf8("马鹦路");
            }
            if (PISiCT_TerStaID_U16 == 110)
            {
                DestStation = QObject::trUtf8("钟家村");
            }
            if (PISiCT_TerStaID_U16 == 111)
            {
                DestStation = QObject::trUtf8("琴台");
            }
            if (PISiCT_TerStaID_U16 == 112)
            {
                DestStation = QObject::trUtf8("武胜路");
            }
            if (PISiCT_TerStaID_U16 == 113)
            {
                DestStation = QObject::trUtf8("汉正街");
            }
            if (PISiCT_TerStaID_U16 == 114)
            {
                DestStation = QObject::trUtf8("六渡桥");
            }
            if (PISiCT_TerStaID_U16 == 115)
            {
                DestStation = QObject::trUtf8("江汉路");
            }
            if (PISiCT_TerStaID_U16 == 116)
            {
                DestStation = QObject::trUtf8("大智路");
            }
            if (PISiCT_TerStaID_U16 == 117)
            {
                DestStation = QObject::trUtf8("苗栗路");
            }
            if (PISiCT_TerStaID_U16 == 118)
            {
                DestStation = QObject::trUtf8("香港路");
            }
            if (PISiCT_TerStaID_U16 == 119)
            {
                DestStation = QObject::trUtf8("三眼桥");
            }
            if (PISiCT_TerStaID_U16 == 120)
            {
                DestStation = QObject::trUtf8("唐家墩");
            }
            if (PISiCT_TerStaID_U16 == 121)
            {
                DestStation = QObject::trUtf8("石桥");
            }
            if (PISiCT_TerStaID_U16 == 122)
            {
                DestStation = QObject::trUtf8("杨汊湖");
            }
            if (PISiCT_TerStaID_U16 == 123)
            {
                DestStation = QObject::trUtf8("常青花园");
            }
            if (PISiCT_TerStaID_U16 == 124)
            {
                DestStation = QObject::trUtf8("轻工大学");
            }
            if (PISiCT_TerStaID_U16 == 125)
            {
                DestStation = QObject::trUtf8("园博园北");
            }
            if (PISiCT_TerStaID_U16 == 126)
            {
                DestStation = QObject::trUtf8("金银湖");
            }
            if (PISiCT_TerStaID_U16 == 127)
            {
                DestStation = QObject::trUtf8("金银湖公园");
            }
    }

        if ( (PISiCT_CurStaID_U16 > 100) && (PISiCT_CurStaID_U16 < 128) )
        {
            if (PISiCT_CurStaID_U16 == 101)
            {
                CurrentStation = QObject::trUtf8("东风公司");
            }
            if (PISiCT_CurStaID_U16 == 102)
            {
                CurrentStation = QObject::trUtf8("车城东路");
            }
            if (PISiCT_CurStaID_U16 == 103)
            {
                CurrentStation = QObject::trUtf8("江城大道");
            }
            if (PISiCT_CurStaID_U16 == 104)
            {
                CurrentStation = QObject::trUtf8("老关村");
            }
            if (PISiCT_CurStaID_U16 == 105)
            {
                CurrentStation = QObject::trUtf8("国博中心南");
            }
            if (PISiCT_CurStaID_U16 == 106)
            {
                CurrentStation = QObject::trUtf8("国博中心北");
            }
            if (PISiCT_CurStaID_U16 == 107)
            {
                CurrentStation = QObject::trUtf8("前进村");
            }
            if (PISiCT_CurStaID_U16 == 108)
            {
                CurrentStation = QObject::trUtf8("建港路");
            }
            if (PISiCT_CurStaID_U16 == 109)
            {
                CurrentStation = QObject::trUtf8("马鹦路");
            }
            if (PISiCT_CurStaID_U16 == 110)
            {
                CurrentStation = QObject::trUtf8("钟家村");
            }
            if (PISiCT_CurStaID_U16 == 111)
            {
                CurrentStation = QObject::trUtf8("琴台");
            }
            if (PISiCT_CurStaID_U16 == 112)
            {
                CurrentStation = QObject::trUtf8("武胜路");
            }
            if (PISiCT_CurStaID_U16 == 113)
            {
                CurrentStation = QObject::trUtf8("汉正街");
            }
            if (PISiCT_CurStaID_U16 == 114)
            {
                CurrentStation = QObject::trUtf8("六渡桥");
            }
            if (PISiCT_CurStaID_U16 == 115)
            {
                CurrentStation = QObject::trUtf8("江汉路");
            }
            if (PISiCT_CurStaID_U16 == 116)
            {
                CurrentStation = QObject::trUtf8("大智路");
            }
            if (PISiCT_CurStaID_U16 == 117)
            {
                CurrentStation = QObject::trUtf8("苗栗路");
            }
            if (PISiCT_CurStaID_U16 == 118)
            {
                CurrentStation = QObject::trUtf8("香港路");
            }
            if (PISiCT_CurStaID_U16 == 119)
            {
                CurrentStation = QObject::trUtf8("三眼桥");
            }
            if (PISiCT_CurStaID_U16 == 120)
            {
                CurrentStation = QObject::trUtf8("唐家墩");
            }
            if (PISiCT_CurStaID_U16 == 121)
            {
                CurrentStation = QObject::trUtf8("石桥");
            }
            if (PISiCT_CurStaID_U16 == 122)
            {
                CurrentStation = QObject::trUtf8("杨汊湖");
            }
            if (PISiCT_CurStaID_U16 == 123)
            {
                CurrentStation = QObject::trUtf8("常青花园");
            }
            if (PISiCT_CurStaID_U16 == 124)
            {
                CurrentStation = QObject::trUtf8("轻工大学");
            }
            if (PISiCT_CurStaID_U16 == 125)
            {
                CurrentStation = QObject::trUtf8("园博园北");
            }
            if (PISiCT_CurStaID_U16 == 126)
            {
                CurrentStation = QObject::trUtf8("金银湖");
            }
            if (PISiCT_CurStaID_U16 == 127)
            {
                CurrentStation = QObject::trUtf8("金银湖公园");
            }

        }

        if ( (PISiCT_NextStaID_U16 > 100) && (PISiCT_NextStaID_U16 < 128) )
        {
            if (PISiCT_NextStaID_U16 == 101)
            {
                NextStation  = QObject::trUtf8("东风公司");
            }
            if (PISiCT_NextStaID_U16 == 102)
            {
                NextStation  = QObject::trUtf8("车城东路");
            }
            if (PISiCT_NextStaID_U16 == 103)
            {
                NextStation  = QObject::trUtf8("江城大道");
            }
            if (PISiCT_NextStaID_U16 == 104)
            {
                NextStation  = QObject::trUtf8("老关村");
            }
            if (PISiCT_NextStaID_U16 == 105)
            {
                NextStation  = QObject::trUtf8("国博中心南");
            }
            if (PISiCT_NextStaID_U16 == 106)
            {
                NextStation  = QObject::trUtf8("国博中心北");
            }
            if (PISiCT_NextStaID_U16 == 107)
            {
                NextStation  = QObject::trUtf8("前进村");
            }
            if (PISiCT_NextStaID_U16 == 108)
            {
                NextStation  = QObject::trUtf8("建港路");
            }
            if (PISiCT_NextStaID_U16 == 109)
            {
                NextStation  = QObject::trUtf8("马鹦路");
            }
            if (PISiCT_NextStaID_U16 == 110)
            {
                NextStation  = QObject::trUtf8("钟家村");
            }
            if (PISiCT_NextStaID_U16 == 111)
            {
                NextStation  = QObject::trUtf8("琴台");
            }
            if (PISiCT_NextStaID_U16 == 112)
            {
                NextStation  = QObject::trUtf8("武胜路");
            }
            if (PISiCT_NextStaID_U16 == 113)
            {
                NextStation  = QObject::trUtf8("汉正街");
            }
            if (PISiCT_NextStaID_U16 == 114)
            {
                NextStation  = QObject::trUtf8("六渡桥");
            }
            if (PISiCT_NextStaID_U16 == 115)
            {
                NextStation  = QObject::trUtf8("江汉路");
            }
            if (PISiCT_NextStaID_U16 == 116)
            {
                NextStation  = QObject::trUtf8("大智路");
            }
            if (PISiCT_NextStaID_U16 == 117)
            {
                NextStation  = QObject::trUtf8("苗栗路");
            }
            if (PISiCT_NextStaID_U16 == 118)
            {
                NextStation  = QObject::trUtf8("香港路");
            }
            if (PISiCT_NextStaID_U16 == 119)
            {
                NextStation  = QObject::trUtf8("三眼桥");
            }
            if (PISiCT_NextStaID_U16 == 120)
            {
                NextStation  = QObject::trUtf8("唐家墩");
            }
            if (PISiCT_NextStaID_U16 == 121)
            {
                NextStation  = QObject::trUtf8("石桥");
            }
            if (PISiCT_NextStaID_U16 == 122)
            {
                NextStation  = QObject::trUtf8("杨汊湖");
            }
            if (PISiCT_NextStaID_U16 == 123)
            {
                NextStation  = QObject::trUtf8("常青花园");
            }
            if (PISiCT_NextStaID_U16 == 124)
            {
                NextStation  = QObject::trUtf8("轻工大学");
            }
            if (PISiCT_NextStaID_U16 == 125)
            {
                NextStation  = QObject::trUtf8("园博园北");
            }
            if (PISiCT_NextStaID_U16 == 126)
            {
                NextStation  = QObject::trUtf8("金银湖");
            }
            if (PISiCT_NextStaID_U16 == 127)
            {
                NextStation  = QObject::trUtf8("金银湖公园");
            }

        }

    }

    SetStation(IDLB_COM_CurrentStation, CurrentStation);
    SetStation(IDLB_COM_NextStation, NextStation);
    SetStation(IDLB_COM_FinalStation, DestStation);


}
void CPage::SetStation(int id, QString station)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(station);

    return;
}


void CPage::UpdateWarning(int nTrainID)
{


}

void CPage::InitPageHeader()
{
    //输出电压
    if (this->TestControlExists(IDLB_COM_OutputVol))
    {
        this->UpdateOutputVol(IDLB_COM_OutputVol);
    }
    //网压
    if (this->TestControlExists(IDLB_COM_voltage))
    {
        this->UpdateVoltage(IDLB_COM_voltage);
    }
    //网流
    if (this->TestControlExists(IDLB_COM_current))
    {

        this->UpdateCurrent(IDLB_COM_current);
    }
    //速度
    if (this->TestControlExists(IDLB_COM_speed))
    {
        this->UpdateSpeed(IDLB_COM_speed);

    }
    //牵引/制动级位
    if (this->TestControlExists(IDLB_COM_level))
    {
        this->UpdateTractionLevel(IDLB_COM_level);
    }

    //快慢车 预留（北京6号线使用）
    if (this->TestControlExists(IDLB_COM_CarSpeedMode))
    {
        this->UpdateCarSpeedMode(IDLB_COM_CarSpeedMode);
    }



    if (this->TestControlExists(IDLB_COM_CurrentStation))
    {
        this->UpdateStation();
    }
    if (this->TestControlExists(IDLB_COM_TrainFault))
    {
        this->updateFault(IDLB_COM_TrainFault);
    }

    if (this->TestControlExists(IDLB_COM_TIME))
    {

//        if (CTHM_CCU1On_B1||CTHM_CCU2On_B1)
//        {
//            QString str,Month,Day;
//            Month.sprintf("%02d",CTALL_Month_U8);
//            Day.sprintf("%02d",CTALL_Day_U8);
//            str = QString::number(CTALL_Year_U8+2000) + QObject::trUtf8("-")+
//                  Month + QObject::trUtf8("-")+
//                  Day;
//            this->GetDlgItem(IDLB_COM_DATE)->SetCtrlText(str);


//            QString time ,Hour,Minute,Second;
//            Hour.sprintf("%02d",CTALL_Hour_U8);
//            Minute.sprintf("%02d",CTALL_Minite_U8);
//            Second.sprintf("%02d",CTALL_Second_U8);
//            time = Hour + QObject::trUtf8(":")+
//                  Minute+ QObject::trUtf8(":")+
//                  Second;
//            this->GetDlgItem(IDLB_COM_TIME)->SetCtrlText(time);
//        }
//        else
        {
            QDate date = QDate::currentDate();
            QString str;
            str = QString::number(date.year()) + QObject::trUtf8("-")+
                  QString::number(date.month()) + QObject::trUtf8("-")+
                  QString::number(date.day()) + QObject::trUtf8("");
            this->GetDlgItem(IDLB_COM_DATE)->SetCtrlText(str);

            QString time = QDateTime::currentDateTime().toString("HH:mm:ss");
            //pPage->GetDlgItem(IDLB_COM_TIME)->SetCtrlText(QObject::trUtf8("  ")+str+"\n"+QObject::trUtf8("  ")+time);
            this->GetDlgItem(IDLB_COM_TIME)->SetCtrlText(time);

        }

    }
}
QString CPage::GetATCStationString(int StationID)
{
    QString t_str;
    switch(StationID)
    {
    case 9:
    case 58:
        t_str = QObject::trUtf8("钟家村");
        break;
    case 21:
    case 47:
        t_str = QObject::trUtf8("园博园北");
        break;
    case 16:
    case 30:
        t_str = QObject::trUtf8("杨汊湖");
        break;
    case 33:
    case 52:
        t_str = QObject::trUtf8("香港路");
        break;
    case 11:
    case 12:
    case 13:
        t_str = QObject::trUtf8("武胜路");
        break;
    case 31:
    case 50:
        t_str = QObject::trUtf8("唐家墩");
        break;
    case 17:
    case 18:
    case 19:
    case 20:
        t_str = QObject::trUtf8("石桥");
        break;
    case 32:
    case 51:
        t_str = QObject::trUtf8("三眼桥");
        break;
    case 28:
    case 48:
        t_str = QObject::trUtf8("轻工大学");
        break;
    case 38:
    case 57:
        t_str = QObject::trUtf8("琴台");
        break;
    case 41:
    case 60:
        t_str = QObject::trUtf8("前进村");
        break;
    case 14:
    case 53:
        t_str = QObject::trUtf8("苗栗路");
        break;
    case 10:
    case 39:
        t_str = QObject::trUtf8("马鹦路");
        break;
    case 36:
    case 55:
        t_str = QObject::trUtf8("六渡桥");
        break;
    case 5:
    case 6:
    case 7:
    case 8:
    case 67:
    case 68:
        t_str = QObject::trUtf8("老关村");
        break;
    case 27:
    case 69:
        t_str = QObject::trUtf8("金银湖");
        break;
    case 22:
    case 23:
    case 26:
    case 45:
    case 65:
    case 66:
        t_str = QObject::trUtf8("金银湖公园");
        break;
    case 35:
    case 54:
        t_str = QObject::trUtf8("江汉路");
        break;
    case 3:
    case 43:
        t_str = QObject::trUtf8("江城大道");
        break;
    case 40:
    case 59:
        t_str = QObject::trUtf8("建港路");
        break;
    case 37:
    case 56:
        t_str = QObject::trUtf8("汉正街");
        break;
    case 4:
    case 62:
        t_str = QObject::trUtf8("国博中心南");
        break;
    case 61:
    case 42:
        t_str = QObject::trUtf8("国博中心北");
        break;
    case 1:
    case 2:
        t_str = QObject::trUtf8("东风公司");
        break;
    case 15:
    case 34:
        t_str = QObject::trUtf8("大智路");
        break;
    case 44:
    case 63:
        t_str = QObject::trUtf8("车城东路");
        break;
    case 29:
    case 49:
        t_str = QObject::trUtf8("常青花园");
        break;
    default:
        t_str = QObject::trUtf8("- -");
        break;
    }
    return t_str;
}


