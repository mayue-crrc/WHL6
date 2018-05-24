    #include "C_Page_Password.h"

#include "CConfirmDialog.h"
#include "cwarningdialog.h"
#include <qprocess.h>

ROMDATA g_PicRom_Password[] =
{
   /*string                font                            rc                  foreground color              background color                control type                   ID           */
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW_WH
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

#ifdef PAGE_HEADER_NEW
    //D_COMMON_PAGE_HEADER_NEW(QObject::trUtf8("密  码") )
    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("密码") )

#endif

#ifdef PAGE_HEADER_OLD

    D_COMMON_PAGE_HEADER(QObject::trUtf8("密  码"))
    D_COMMON_PAGE_BUTTON_BAR

#endif


   {QObject::trUtf8("请输入4位密码。"),      D_FONT_BOLD(8),      QRect( 40, 470, 250, 30),          Qt::white,                Qt::black,         CONTROL_LABEL,            ID_PIBPD_LABEL_NAME         },
   {QObject::trUtf8("管理员密码"),             D_FONT_BOLD(8),      QRect( 70, 175, 90, 25),           Qt::white,                Qt::black,         CONTROL_LABEL,            ID_PIBPD_LABEL_NAME2         },
   {QObject::trUtf8(""),                   D_FONT_BOLD(10),     QRect( 170, 155, 230,60),          Qt::white,                Qt::darkBlue,            CONTROL_EDIT,             ID_PIBPD_EDIT_PASSWORD      },
   {QObject::trUtf8("7"),                  D_FONT_BOLD(8),      QRect(480, 150, 60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBPD_BUTTON_NUM7        },
   {QObject::trUtf8("8"),                  D_FONT_BOLD(8),      QRect(550, 150, 60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBPD_BUTTON_NUM8        },
   {QObject::trUtf8("9"),                  D_FONT_BOLD(8),      QRect(620, 150, 60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBPD_BUTTON_NUM9        },
   {QObject::trUtf8("4"),                  D_FONT_BOLD(8),      QRect(480, 220, 60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBPD_BUTTON_NUM4        },
   {QObject::trUtf8("5"),                  D_FONT_BOLD(8),      QRect(550, 220, 60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBPD_BUTTON_NUM5        },
   {QObject::trUtf8("6"),                  D_FONT_BOLD(8),      QRect(620, 220, 60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBPD_BUTTON_NUM6        },
   {QObject::trUtf8("1"),                  D_FONT_BOLD(8),      QRect(480, 290, 60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBPD_BUTTON_NUM1        },
   {QObject::trUtf8("2"),                  D_FONT_BOLD(8),      QRect(550, 290, 60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBPD_BUTTON_NUM2        },
   {QObject::trUtf8("3"),                  D_FONT_BOLD(8),      QRect(620, 290, 60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBPD_BUTTON_NUM3        },
   {QObject::trUtf8("0"),                  D_FONT_BOLD(8),      QRect(480, 360, 60, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBPD_BUTTON_NUM0        },
   {QObject::trUtf8("清空"),               D_FONT_BOLD(8),      QRect(550, 360, 130, 60),           Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBPD_BUTTON_CLEAR       },

};
int g_PasswordRomLen = sizeof(g_PicRom_Password)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CPasswordPage,CPage)
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

        ON_LBUTTONDOWN(ID_PIBPD_EDIT_PASSWORD,OnNormalEdit)

        ON_BTNCLK(ID_PIBPD_BUTTON_NUM1,OnNum1Clk)
        ON_BTNCLK(ID_PIBPD_BUTTON_NUM2,OnNum2Clk)
        ON_BTNCLK(ID_PIBPD_BUTTON_NUM3,OnNum3Clk)
        ON_BTNCLK(ID_PIBPD_BUTTON_NUM4,OnNum4Clk)
        ON_BTNCLK(ID_PIBPD_BUTTON_NUM5,OnNum5Clk)
        ON_BTNCLK(ID_PIBPD_BUTTON_NUM6,OnNum6Clk)
        ON_BTNCLK(ID_PIBPD_BUTTON_NUM7,OnNum7Clk)
        ON_BTNCLK(ID_PIBPD_BUTTON_NUM8,OnNum8Clk)
        ON_BTNCLK(ID_PIBPD_BUTTON_NUM9,OnNum9Clk)
        ON_BTNCLK(ID_PIBPD_BUTTON_NUM0,OnNum0Clk)
        ON_BTNCLK(ID_PIBPD_BUTTON_CLEAR,OnClearClk)
        ON_BTNCLK(ID_LABEL_REALTIMEFAULTCONFIRM, OnRealtimefaultBtnClk)
END_MESSAGE_MAP()

CPasswordPage::CPasswordPage()
{
}

void CPasswordPage::OnUpdatePage()
{
    switch (pw_select)
    {
    case 2:
    case 5:
    case 9:
        ((CLabel*)GetDlgItem(ID_PIBPD_LABEL_NAME))->SetCtrlText(QObject::trUtf8("请输入4位管理员密码。"));
        ((CLabel*)GetDlgItem(ID_PIBPD_LABEL_NAME2))->SetCtrlText(QObject::trUtf8("管理员密码"));
        break;
    case 1:
    case 3:
    case 4:
    case 6:
    case 7:
    case 8:
        ((CLabel*)GetDlgItem(ID_PIBPD_LABEL_NAME))->SetCtrlText(QObject::trUtf8("请输入4位密码。"));
        ((CLabel*)GetDlgItem(ID_PIBPD_LABEL_NAME2))->SetCtrlText(QObject::trUtf8("密码"));
        break;
    }
    UpdateRealtimefaults();
}

void CPasswordPage::OnInitPage()
{
    ((CEdit*)GetDlgItem(ID_PIBPD_EDIT_PASSWORD))->SetLimitNum(4);
    ((CEdit*)GetDlgItem(ID_PIBPD_EDIT_PASSWORD))->m_bIsPassWord = true;

}

void CPasswordPage::OnShowPage()
{
#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返  回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN10))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN11))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN12))->SetCtrlText(QObject::trUtf8("确  认"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
     ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("确   认"));
#endif
     this->InitPageHeader();

}
void CPasswordPage::UpdateRealtimefaults()
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
                ((CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULTCATE ))->SetCtrlBKColor(Qt::darkYellow);
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

void CPasswordPage::OnRealtimefaultBtnClk()
{
    g_faultsrom[g_romidx].confirm = true;
    g_realtimeFaultsbarList.removeAt(g_faultcount);
    if(g_faultcount>0)
    g_faultcount--;
    //m_faultcount--;

}

#ifdef PAGE_BUTTON_BAR_NEW
        void CPasswordPage::OnComBtn1Clk()
        {
                ChangePage( PAGE_INDEX_MAINTAIN );

            ((CEdit*)GetDlgItem(ID_PIBPD_EDIT_PASSWORD))->SetCtrlText("");
        }

        void CPasswordPage::OnComBtn2Clk()
        {

        }

        void CPasswordPage::OnComBtn3Clk()
        {

        }

        void CPasswordPage::OnComBtn4Clk()
        {

        }

        void CPasswordPage::OnComBtn5Clk()
        {

        }

        void CPasswordPage::OnComBtn6Clk()
        {

        }
        void CPasswordPage::OnComBtn7Clk()
        {

        }
        void CPasswordPage::OnComBtn8Clk()
        {

        }
        void CPasswordPage::OnComBtn9Clk()
        {

        }
        void CPasswordPage::OnComBtn10Clk()
        {

        }
        void CPasswordPage::OnComBtn11Clk()
        {

        }
        void CPasswordPage::OnComBtn12Clk()
        {
            pw_input = ((CEdit*)GetDlgItem(ID_PIBPD_EDIT_PASSWORD))->GetCtrlText();

            switch (pw_select)
            {
            case 2:
                if(pw_true_Door == pw_input)
                {
                    ChangePage(PAGE_INDEX_RESETRUNRECORD);
                }else
                {
                   CWarningDialog warningDlg;
                   warningDlg.SetWarningStr(QObject::trUtf8("管理员密码错误,请重新输入!"));
                   warningDlg.move(GetParentDlg()->x()+150,GetParentDlg()->y()+200);
                   warningDlg.exec();
                }
                break;
            case 5:
                if(pw_true_Door == pw_input)
                {
                    ChangePage(PAGE_INDEX_DOORSETTING);
                }else
                {
                   CWarningDialog warningDlg;
                   warningDlg.SetWarningStr(QObject::trUtf8("管理员密码错误,请重新输入!"));
                   warningDlg.move(GetParentDlg()->x()+150,GetParentDlg()->y()+200);
                   warningDlg.exec();
                }
                break;
            case 9:
                if(pw_true_Door == pw_input)
                {
                    ChangePage(PAGE_INDEX_PASSWORDMODIFY);
                }else
                {
                   CWarningDialog warningDlg;
                   warningDlg.SetWarningStr(QObject::trUtf8("管理员密码错误,请重新输入!"));
                   warningDlg.move(GetParentDlg()->x()+150,GetParentDlg()->y()+200);
                   warningDlg.exec();
                }
                break;
            default:
                if (pw_true == pw_input)
                {
                    if(pw_select == 1)
                    {
                        ChangePage(PAGE_INDEX_PARAMETERSETTING1);
                    }
                    else if(pw_select == 3)
                    {
                        ChangePage(PAGE_INDEX_TIMESETTING);
                    }
                    else if(pw_select == 4)
                    {
                        ChangePage(PAGE_INDEX_INITIALSETTING);
                    }
                    else if(pw_select == 6)
                    {
                        ChangePage(PAGE_INDEX_CUTOFF);
                    }
                    else if(pw_select == 8)
                    {
                        ChangePage(PAGE_INDEX_SPEEDSETPAGE);
                    }
                    else if(pw_select == 7)
                    {
                        QString program = "./ts_calibrate_cnr";
                        QProcess::execute(program);
                        ChangePage(PAGE_INDEX_DEBUGMAIN);
                    }
                }
                else
                {
                     CWarningDialog warningDlg;
                     warningDlg.SetWarningStr(QObject::trUtf8("密码错误,请重新输入!"));
                     warningDlg.move(GetParentDlg()->x()+150,GetParentDlg()->y()+200);
                     warningDlg.exec();
                }
                break;
            }
           ((CEdit*)GetDlgItem(ID_PIBPD_EDIT_PASSWORD))->SetCtrlText("");
        }
#else
        void CPasswordPage::OnComBtn1Clk()
        {
            if(pw_select == 4)
                ChangePage( PAGE_INDEX_MAIN );
            else
                ChangePage( PAGE_INDEX_MAINTAIN );

            ((CEdit*)GetDlgItem(ID_PIBPD_EDIT_PASSWORD))->SetCtrlText("");
        }

        void CPasswordPage::OnComBtn2Clk()
        {

        }

        void CPasswordPage::OnComBtn3Clk()
        {

        }

        void CPasswordPage::OnComBtn4Clk()
        {

        }

        void CPasswordPage::OnComBtn5Clk()
        {

        }

        void CPasswordPage::OnComBtn6Clk()
        {

        }
#endif



void CPasswordPage::OnNum1Clk()
{
    ((CEdit*)GetDlgItem(ID_PIBPD_EDIT_PASSWORD))->AddEditStr("1");
}

void CPasswordPage::OnNum2Clk()
{
    ((CEdit*)GetDlgItem(ID_PIBPD_EDIT_PASSWORD))->AddEditStr("2");
}

void CPasswordPage::OnNum3Clk()
{
    ((CEdit*)GetDlgItem(ID_PIBPD_EDIT_PASSWORD))->AddEditStr("3");
}

void CPasswordPage::OnNum4Clk()
{
    ((CEdit*)GetDlgItem(ID_PIBPD_EDIT_PASSWORD))->AddEditStr("4");
}

void CPasswordPage::OnNum5Clk()
{
    ((CEdit*)GetDlgItem(ID_PIBPD_EDIT_PASSWORD))->AddEditStr("5");
}

void CPasswordPage::OnNum6Clk()
{
    ((CEdit*)GetDlgItem(ID_PIBPD_EDIT_PASSWORD))->AddEditStr("6");
}

void CPasswordPage::OnNum7Clk()
{
    ((CEdit*)GetDlgItem(ID_PIBPD_EDIT_PASSWORD))->AddEditStr("7");
}

void CPasswordPage::OnNum8Clk()
{
    ((CEdit*)GetDlgItem(ID_PIBPD_EDIT_PASSWORD))->AddEditStr("8");
}

void CPasswordPage::OnNum9Clk()
{
    ((CEdit*)GetDlgItem(ID_PIBPD_EDIT_PASSWORD))->AddEditStr("9");
}

void CPasswordPage::OnNum0Clk()
{
    ((CEdit*)GetDlgItem(ID_PIBPD_EDIT_PASSWORD))->AddEditStr("0");
}

void CPasswordPage::OnClearClk()
{
    ((CEdit*)GetDlgItem(ID_PIBPD_EDIT_PASSWORD))->SetCtrlText("");
}

void CPasswordPage::OnNormalEdit()
{
    bool bSel = ((CEdit*)GetDlgItem(ID_PIBPD_EDIT_PASSWORD))->GetSelected();
    ((CEdit*)GetDlgItem(ID_PIBPD_EDIT_PASSWORD))->SetSelected(!bSel);
}
