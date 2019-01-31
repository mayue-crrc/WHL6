#include "c_page_speedset.h"

ROMDATA g_PicRom_pagespeedsetpage[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    //D_COMMON_PAGE_HEADER(QObject::trUtf8("参数设置"))
    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("速度设置") )
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW_WH
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

    {QObject::trUtf8("车辆4011车轮直径"),    D_FONT_BOLD(8),      QRect(100, 100, 200, 30),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_PICCARSET_LABEL_1               },
//  {QObject::trUtf8("4011"),               D_FONT_BOLD(8),      QRect(170, 100,  60, 30),           Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_IGNORE         },
//  {QObject::trUtf8("车轮直径"),            D_FONT_BOLD(8),      QRect(240, 100,  80, 30),           Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8("原值设定"),            D_FONT_BOLD(8),      QRect(100, 150,  80, 30),           Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                D_FONT_BOLD(8),      QRect(100, 190, 150, 40),           Qt::white,                Qt::black,               CONTROL_EDIT,            ID_PICCARSET_EDIT_OLDWHEELDIAMETER},
    {QObject::trUtf8("Km/h"),                 D_FONT_BOLD(8),      QRect(260, 180,  50, 50),           Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_PICCARSET_LABEL_5              },

    {QObject::trUtf8("新设定值"),            D_FONT_BOLD(8),      QRect(100, 250,  80, 30),           Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                D_FONT_BOLD(8),      QRect(100, 290, 150, 40),           Qt::white,                Qt::blue,                CONTROL_EDIT,            ID_PICCARSET_EDIT_NEWWHEELDIAMETER},
    {QObject::trUtf8("Km/h"),                 D_FONT_BOLD(8),      QRect(260, 280,  50, 50),           Qt::white,                Qt::transparent,         CONTROL_LABEL,           ID_PICCARSET_LABEL_6              },

    {QObject::trUtf8("1"),                  D_FONT_BOLD(8),      QRect(460, 190,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PICCARSET_BUTTON_NUM1         },
    {QObject::trUtf8("2"),                  D_FONT_BOLD(8),      QRect(530, 190,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PICCARSET_BUTTON_NUM2         },
    {QObject::trUtf8("3"),                  D_FONT_BOLD(8),      QRect(600, 190,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PICCARSET_BUTTON_NUM3         },
    {QObject::trUtf8("4"),                  D_FONT_BOLD(8),      QRect(460, 260,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PICCARSET_BUTTON_NUM4         },
    {QObject::trUtf8("5"),                  D_FONT_BOLD(8),      QRect(530, 260,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PICCARSET_BUTTON_NUM5         },
    {QObject::trUtf8("6"),                  D_FONT_BOLD(8),      QRect(600, 260,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PICCARSET_BUTTON_NUM6         },
    {QObject::trUtf8("7"),                  D_FONT_BOLD(8),      QRect(460, 330,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PICCARSET_BUTTON_NUM7         },
    {QObject::trUtf8("8"),                  D_FONT_BOLD(8),      QRect(530, 330,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PICCARSET_BUTTON_NUM8         },
    {QObject::trUtf8("9"),                  D_FONT_BOLD(8),      QRect(600, 330,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PICCARSET_BUTTON_NUM9         },
    {QObject::trUtf8("0"),                  D_FONT_BOLD(8),      QRect(460, 400,  60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PICCARSET_BUTTON_NUM0         },
    {QObject::trUtf8("清  空"),             D_FONT_BOLD(8),      QRect(530, 400, 130, 60),            Qt::black,                Qt::gray,                CONTROL_BUTTON,          ID_PICCARSET_BUTTON_CLEAR         },

    {QObject::trUtf8("速度设定范围为20-60Km/h\n输入完毕后点击“设置”按键，完成设置"),  D_FONT_BOLD(8),  QRect(100, 350, 300,  60),        Qt::white,                Qt::black,               CONTROL_LABEL,            ID_PICCARSET_LABEL_2              },
    {QObject::trUtf8("设  置"),             D_FONT_BOLD(8),       QRect(100, 440, 100, 40),          Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PICCARSET_BUTTON_SET           },



};
int g_pagespeedsetpageRomLen = sizeof(g_PicRom_pagespeedsetpage)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(C_Page_Speedset,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(IDLB_COM_BTN1, OnComBtn1Clk)
        ON_BTNCLK(IDLB_COM_BTN2, OnComBtn2Clk)
        ON_BTNCLK(IDLB_COM_BTN3, OnComBtn3Clk)
        ON_BTNCLK(IDLB_COM_BTN4, OnComBtn4Clk)
        ON_BTNCLK(IDLB_COM_BTN5, OnComBtn5Clk)
        ON_BTNCLK(IDLB_COM_BTN6, OnComBtn6Clk)
#ifdef PAGE_BUTTON_BAR_NEW
        ON_BTNCLK(IDLB_COM_BTN7, OnComBtn7Clk)
        ON_BTNCLK(IDLB_COM_BTN8, OnComBtn8Clk)
        ON_BTNCLK(IDLB_COM_BTN9, OnComBtn9Clk)
        ON_BTNCLK(IDLB_COM_BTN10, OnComBtn10Clk)
        ON_BTNCLK(IDLB_COM_BTN11, OnComBtn11Clk)
        ON_BTNCLK(IDLB_COM_BTN12, OnComBtn12Clk)
#endif

        ON_BTNCLK(ID_PICCARSET_BUTTON_NUM1, OnNum1Clk)
        ON_BTNCLK(ID_PICCARSET_BUTTON_NUM2, OnNum2Clk)
        ON_BTNCLK(ID_PICCARSET_BUTTON_NUM3, OnNum3Clk)
        ON_BTNCLK(ID_PICCARSET_BUTTON_NUM4, OnNum4Clk)
        ON_BTNCLK(ID_PICCARSET_BUTTON_NUM5, OnNum5Clk)
        ON_BTNCLK(ID_PICCARSET_BUTTON_NUM6, OnNum6Clk)
        ON_BTNCLK(ID_PICCARSET_BUTTON_NUM7, OnNum7Clk)
        ON_BTNCLK(ID_PICCARSET_BUTTON_NUM8, OnNum8Clk)
        ON_BTNCLK(ID_PICCARSET_BUTTON_NUM9, OnNum9Clk)
        ON_BTNCLK(ID_PICCARSET_BUTTON_NUM0, OnNum0Clk)
        ON_BTNCLK(ID_PICCARSET_BUTTON_SET, OnBtnSetClk)

        ON_BTNCLK(ID_PICCARSET_BUTTON_CLEAR, OnClearClk)

        ON_BTNCLK(ID_LABEL_REALTIMEFAULTCONFIRM, OnRealtimefaultBtnClk)
        //        ON_BTNCLK(ID_PICCARSET_BUTTON_LINESELECT_2, OnLine2Clk)
END_MESSAGE_MAP()

C_Page_Speedset::C_Page_Speedset()
{
}

void C_Page_Speedset::OnUpdatePage()
{
    UpdateRealtimefaults();
    static int counter3s = 0;
    if(HMiCT_TransModeSpeedValid_B1)
    {
        if(counter3s++ >16)
        {
            counter3s = 0;
            HMiCT_TransModeSpeedValid_B1 = false;
            ((CButton*)GetDlgItem(ID_PICCARSET_BUTTON_SET))->ChangeButtonState(LBUTTON_UP);

        }
    }
}

void C_Page_Speedset::OnInitPage()
{
    ((CLabel*)GetDlgItem(ID_PICCARSET_LABEL_1))->SetAlignment(Qt::AlignLeft);
    ((CLabel*)GetDlgItem(ID_PICCARSET_LABEL_2))->SetAlignment(Qt::AlignLeft);


        ((CButton *)GetDlgItem(ID_PICCARSET_BUTTON_SET))->m_bAutoUpState = false;

    ((CEdit*)GetDlgItem(ID_PICCARSET_EDIT_NEWWHEELDIAMETER))->SetSelected(true);
}

void C_Page_Speedset::OnShowPage()
{

#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN12))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN9))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN10))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN11))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返  回"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("退   出"));
#endif
    ((CEdit*)GetDlgItem(ID_PICCARSET_EDIT_NEWWHEELDIAMETER))->SetLimitNum(2);
    GetDlgItem(ID_PICCARSET_LABEL_1)->SetCtrlText(parameter_setting_text);
    //GetDlgItem(ID_PICCARSET_EDIT_OLDWHEELDIAMETER)->SetCtrlText(QString::number(parameter_wheeldia));

    ((CEdit*)GetDlgItem(ID_PICCARSET_EDIT_OLDWHEELDIAMETER))->SetCtrlText(QString::number(HMiCT_TransModeSpeed_U8));

    ((CEdit*)GetDlgItem(ID_PICCARSET_EDIT_NEWWHEELDIAMETER))->SetCtrlText("");
    this->InitPageHeader();
}

void C_Page_Speedset::UpdateRealtimefaults()
{
    if ( g_realtimeFaultsbarList.size()>0)
    {
        {
            ((CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULTPOS ))->ShowLabel();
            ((CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULTCODE ))->ShowLabel();
            ((CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULTCATE ))->ShowLabel();
            g_romidx = g_realtimeFaultsbarList[g_faultcount].nRomIndex;
            int code = g_faultsrom[g_romidx].code;
            int nameidx = FindFaultsNameTableIndex(code);
            if(nameidx<0)
            {
                QMessageBox::warning(NULL,
                                             "error",
                                             QString("An Error at: \nFile:") +__FILE__+ QString("   Line:") +QString::number(__LINE__)+
                                              QObject::trUtf8("  故障代码无效：")+QString::number(code ,16).toUpper()+QObject::trUtf8("  请联系TMS调试人员!"),
                                             QMessageBox::Ok,QMessageBox::Ok);
                return;

            }
            if (1 == g_faultsrom[g_romidx].level)
            {
                ((CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULTCATE ))->SetCtrlBKColor(Qt::red);
                ((CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULTCATE ))->SetCtrlText(QObject::trUtf8("故障"));
                ((CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULTCATE ))->SetTxtColor(Qt::white);

            }
            else if (2 == g_faultsrom[g_romidx].level)
            {
                ((CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULTCATE ))->SetCtrlBKColor(Qt::yellow);
                ((CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULTCATE ))->SetTxtColor(Qt::black);
                ((CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULTCATE ))->SetCtrlText(QObject::trUtf8("故障"));
            }
            else if (4 == g_faultsrom[g_romidx].level)
            {
                ((CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULTCATE ))->SetCtrlBKColor(Qt::blue);
                ((CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULTCATE ))->SetCtrlText(QObject::trUtf8("事件"));
                ((CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULTCATE ))->SetTxtColor(Qt::white);
            }
            else if (3 == g_faultsrom[g_romidx].level)
            {
//                g_realtimeFaultsbarList.removeAt(g_faultcount);
//                if(g_faultcount>0)
//                g_faultcount--;
//                return;
                ((CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULTCATE ))->SetCtrlBKColor(Qt::white);
                ((CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULTCATE ))->SetCtrlText(QObject::trUtf8("故障"));
                ((CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULTCATE ))->SetTxtColor(Qt::black);
            }
            ((CButton*)GetDlgItem(ID_LABEL_REALTIMEFAULTCONFIRM))->ShowButton();
            //((CButton*)GetDlgItem(ID_LABEL_REALTIMEFAULTCONFIRMALL))->ShowButton();

            ((CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULTPOS ))->SetCtrlText(GetCarriageString(g_faultsrom[g_romidx].pos));
            ((CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULTCODE ))->SetCtrlText(QString::number(code,16));

            ((CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULT ))->SetCtrlText(g_faultsinforom[nameidx].name);
            if(g_faulttiemr++>13)
            {
                g_faulttiemr = 0;
                if(++g_faultcount >= g_realtimeFaultsbarList.size())
                {
                    g_faultcount = 0;
                }
            }
        }
    }else
    {
        //(CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULT)->SetCtrlBKColor(Qt::black);
        ((CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULT))->HideLabel();
        ((CButton*)GetDlgItem(ID_LABEL_REALTIMEFAULTCONFIRM))->HideButton();
        ((CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULTPOS ))->HideLabel();
        ((CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULTCODE ))->HideLabel();
        ((CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULTCATE ))->HideLabel();
        //((CButton*)GetDlgItem(ID_LABEL_REALTIMEFAULTCONFIRMALL))->HideButton();
    }
}

void C_Page_Speedset::OnRealtimefaultBtnClk()
{
    g_faultsrom[g_romidx].confirm = true;
    g_realtimeFaultsbarList.removeAt(g_faultcount);
    if(g_faultcount>0)
    g_faultcount--;
    //m_faultcount--;

}



#ifdef PAGE_BUTTON_BAR_NEW
        void C_Page_Speedset::OnComBtn12Clk()
        {

        }

        void C_Page_Speedset::OnComBtn2Clk()
        {

        }

        void C_Page_Speedset::OnComBtn3Clk()
        {

        }

        void C_Page_Speedset::OnComBtn4Clk()
        {

        }

        void C_Page_Speedset::OnComBtn5Clk()
        {

        }

        void C_Page_Speedset::OnComBtn6Clk()
        {

        }
        void C_Page_Speedset::OnComBtn7Clk()
        {

        }
        void C_Page_Speedset::OnComBtn8Clk()
        {

        }

        void C_Page_Speedset::OnComBtn9Clk()
        {

        }

        void C_Page_Speedset::OnComBtn10Clk()
        {

        }
        void C_Page_Speedset::OnComBtn11Clk()
        {

        }
        void C_Page_Speedset::OnComBtn1Clk()
        {
            if(!HMiCT_TransModeSpeedValid_B1)
            ChangePage(PAGE_INDEX_TRANSPORTMODE);
        }
#else
        void C_Page_Speedset::OnComBtn1Clk()
        {

        }

        void C_Page_Speedset::OnComBtn2Clk()
        {

        }

        void C_Page_Speedset::OnComBtn3Clk()
        {

        }

        void C_Page_Speedset::OnComBtn4Clk()
        {

        }

        void C_Page_Speedset::OnComBtn5Clk()
        {

        }

        void C_Page_Speedset::OnComBtn6Clk()
        {
           CParameterSettingPage1* pPage = (CParameterSettingPage1*)GetPage(PAGE_INDEX_PARAMETERSETTING1);
           pPage->ResetParameter1Label(pPage->m_WheelDiaType);
           ChangePage(PAGE_INDEX_PARAMETERSETTING1);
        }

#endif


void C_Page_Speedset::OnNum1Clk()
{
    ((CEdit*)GetDlgItem(ID_PICCARSET_EDIT_NEWWHEELDIAMETER))->AddEditStr("1");
}

void C_Page_Speedset::OnNum2Clk()
{
    ((CEdit*)GetDlgItem(ID_PICCARSET_EDIT_NEWWHEELDIAMETER))->AddEditStr("2");
}

void C_Page_Speedset::OnNum3Clk()
{
    ((CEdit*)GetDlgItem(ID_PICCARSET_EDIT_NEWWHEELDIAMETER))->AddEditStr("3");
}

void C_Page_Speedset::OnNum4Clk()
{
    ((CEdit*)GetDlgItem(ID_PICCARSET_EDIT_NEWWHEELDIAMETER))->AddEditStr("4");
}

void C_Page_Speedset::OnNum5Clk()
{
    ((CEdit*)GetDlgItem(ID_PICCARSET_EDIT_NEWWHEELDIAMETER))->AddEditStr("5");
}

void C_Page_Speedset::OnNum6Clk()
{
    ((CEdit*)GetDlgItem(ID_PICCARSET_EDIT_NEWWHEELDIAMETER))->AddEditStr("6");
}

void C_Page_Speedset::OnNum7Clk()
{
    ((CEdit*)GetDlgItem(ID_PICCARSET_EDIT_NEWWHEELDIAMETER))->AddEditStr("7");
}

void C_Page_Speedset::OnNum8Clk()
{
    ((CEdit*)GetDlgItem(ID_PICCARSET_EDIT_NEWWHEELDIAMETER))->AddEditStr("8");
}

void C_Page_Speedset::OnNum9Clk()
{
    ((CEdit*)GetDlgItem(ID_PICCARSET_EDIT_NEWWHEELDIAMETER))->AddEditStr("9");
}

void C_Page_Speedset::OnNum0Clk()
{
    ((CEdit*)GetDlgItem(ID_PICCARSET_EDIT_NEWWHEELDIAMETER))->AddEditStr("0");
}

void C_Page_Speedset::OnClearClk()
{
    ((CEdit*)GetDlgItem(ID_PICCARSET_EDIT_NEWWHEELDIAMETER))->SetCtrlText("");
}

void C_Page_Speedset::OnBtnSetClk()
{
    parameter_setting_temp = GetDlgItem(ID_PICCARSET_EDIT_NEWWHEELDIAMETER)->GetCtrlText();

    if(StrToInt( parameter_setting_temp)>60 ||StrToInt( parameter_setting_temp) < 20)
    {
        ShowWarningDialog(QObject::trUtf8("速度设定超过范围(20-60)"));
        ((CButton*)GetDlgItem(ID_PICCARSET_BUTTON_SET))->ChangeButtonState(LBUTTON_UP);

    }else
    {
        HMiCT_TransModeSpeed_U8 = StrToInt( parameter_setting_temp);
        ((CButton*)GetDlgItem(ID_PICCARSET_BUTTON_SET))->ChangeButtonState(LBUTTON_DOWN);
        HMiCT_TransModeSpeedValid_B1 = true;
    }
}
void C_Page_Speedset::ShowWarningDialog(QString str)
{
    CWarningDialog dlg;
    dlg.SetWarningStr(str);
    dlg.move(m_pDlg->x()+300, m_pDlg->y()+300);

    //dlg.move(GetParentDlg()->x()+150,GetParentDlg()->y()+150);
    dlg.exec();
}

