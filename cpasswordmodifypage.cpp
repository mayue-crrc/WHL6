#include "cpasswordmodifypage.h"
#include "cwarningdialog.h"

ROMDATA g_PicRom_PasswordModify[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    //D_COMMON_PAGE_HEADER(QObject::trUtf8("密码设置"))
    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("密码\n设置") )
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW_WH
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif
    {QObject::trUtf8("   请输入4位密码。"),                      D_FONT_BOLD(8),       QRect( 40, 430, 120, 30),            Qt::white,                Qt::transparent,          CONTROL_LABEL,            ID_IGNORE         },
    {QObject::trUtf8("3个密码输入完毕后请点击右下角[确认]键。"), D_FONT_BOLD(8),       QRect( 180, 430, 450, 30),  Qt::white,                Qt::transparent,          CONTROL_LABEL,            ID_IGNORE         },
    {QObject::trUtf8("当前密码"),            D_FONT_BOLD(8),       QRect( 50, 170,  90, 25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,            ID_IGNORE         },
    {QObject::trUtf8(""),                   D_FONT_BOLD(8),      QRect(170, 155, 230, 55),           Qt::white,                Qt::darkBlue,             CONTROL_EDIT,             ID_PIBPM_EDIT_PSDCUR        },
    {QObject::trUtf8("新密码"),              D_FONT_BOLD(8),       QRect( 50, 270,  70, 25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,            ID_IGNORE         },
    {QObject::trUtf8(""),                   D_FONT_BOLD(8),      QRect(170, 255, 230, 55),           Qt::white,                Qt::darkBlue,             CONTROL_EDIT,             ID_PIBPM_EDIT_PSDNEW        },
    {QObject::trUtf8("确认新密码"),          D_FONT_BOLD(8),       QRect( 50, 370, 110, 25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,            ID_IGNORE         },
    {QObject::trUtf8(""),                   D_FONT_BOLD(8),      QRect(170, 355, 230, 55),           Qt::white,                Qt::darkBlue,             CONTROL_EDIT,             ID_PIBPM_EDIT_PSDNEWAGAIN   },

    {QObject::trUtf8("7"),                  D_FONT_BOLD(8),       QRect(480, 150,  60, 60),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,           ID_PIBPM_BUTTON_NUM7        },
    {QObject::trUtf8("8"),                  D_FONT_BOLD(8),       QRect(550, 150,  60, 60),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,           ID_PIBPM_BUTTON_NUM8        },
    {QObject::trUtf8("9"),                  D_FONT_BOLD(8),       QRect(620, 150,  60, 60),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,           ID_PIBPM_BUTTON_NUM9        },
    {QObject::trUtf8("4"),                  D_FONT_BOLD(8),       QRect(480, 220,  60, 60),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,           ID_PIBPM_BUTTON_NUM4        },
    {QObject::trUtf8("5"),                  D_FONT_BOLD(8),       QRect(550, 220,  60, 60),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,           ID_PIBPM_BUTTON_NUM5        },
    {QObject::trUtf8("6"),                  D_FONT_BOLD(8),       QRect(620, 220,  60, 60),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,           ID_PIBPM_BUTTON_NUM6        },
    {QObject::trUtf8("1"),                  D_FONT_BOLD(8),       QRect(480, 290,  60, 60),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,           ID_PIBPM_BUTTON_NUM1        },
    {QObject::trUtf8("2"),                  D_FONT_BOLD(8),       QRect(550, 290,  60, 60),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,           ID_PIBPM_BUTTON_NUM2        },
    {QObject::trUtf8("3"),                  D_FONT_BOLD(8),       QRect(620, 290,  60, 60),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,           ID_PIBPM_BUTTON_NUM3        },
    {QObject::trUtf8("0"),                  D_FONT_BOLD(8),       QRect(480, 360,  60, 60),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,           ID_PIBPM_BUTTON_NUM0        },
    {QObject::trUtf8("清空"),               D_FONT_BOLD(8),       QRect(550, 360, 130, 60),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,           ID_PIBPM_BUTTON_CLEAR       },


};
int g_PasswordModifyRomLen = sizeof(g_PicRom_PasswordModify)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CPasswordModifyPage,CPage)
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
        ON_BTNCLK(ID_PIBPM_BUTTON_NUM0, OnNum0Clk)
        ON_BTNCLK(ID_PIBPM_BUTTON_NUM1, OnNum1Clk)
        ON_BTNCLK(ID_PIBPM_BUTTON_NUM2, OnNum2Clk)
        ON_BTNCLK(ID_PIBPM_BUTTON_NUM3, OnNum3Clk)
        ON_BTNCLK(ID_PIBPM_BUTTON_NUM4, OnNum4Clk)
        ON_BTNCLK(ID_PIBPM_BUTTON_NUM5, OnNum5Clk)
        ON_BTNCLK(ID_PIBPM_BUTTON_NUM6, OnNum6Clk)
        ON_BTNCLK(ID_PIBPM_BUTTON_NUM7, OnNum7Clk)
        ON_BTNCLK(ID_PIBPM_BUTTON_NUM8, OnNum8Clk)
        ON_BTNCLK(ID_PIBPM_BUTTON_NUM9, OnNum9Clk)
        ON_BTNCLK(ID_PIBPM_BUTTON_CLEAR,OnClearClk)
        ON_BTNCLK(ID_PIBPM_EDIT_PSDCUR,OnCurClk)
        ON_BTNCLK(ID_PIBPM_EDIT_PSDNEW,OnNewClk)
        ON_BTNCLK(ID_PIBPM_EDIT_PSDNEWAGAIN,OnConfirmClk)
        ON_BTNCLK(ID_LABEL_REALTIMEFAULTCONFIRM, OnRealtimefaultBtnClk)
END_MESSAGE_MAP()

CPasswordModifyPage::CPasswordModifyPage()
{
}

void CPasswordModifyPage::OnUpdatePage()
{
    UpdateRealtimefaults();
}

void CPasswordModifyPage::OnInitPage()
{
    ((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDCUR))->SetLimitNum(4);
    ((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDCUR))->m_bIsPassWord = true;

    ((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDNEW))->SetLimitNum(4);
    ((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDNEW))->m_bIsPassWord = true;

    ((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDNEWAGAIN))->SetLimitNum(4);
    ((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDNEWAGAIN))->m_bIsPassWord = true;

    ((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDCUR))->SetSelected(true);
}

void CPasswordModifyPage::OnShowPage()
{

#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返  回"));
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
    ((CButton *)GetDlgItem(IDLB_COM_BTN12))->SetCtrlText(QObject::trUtf8("确  认"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("确   认"));
#endif

     ((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDCUR))->SetCtrlText("");
     ((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDNEW))->SetCtrlText("");
     ((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDNEWAGAIN))->SetCtrlText("");
     this->InitPageHeader();
}
void CPasswordModifyPage::UpdateRealtimefaults()
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

void CPasswordModifyPage::OnRealtimefaultBtnClk()
{
    g_faultsrom[g_romidx].confirm = true;
    g_realtimeFaultsbarList.removeAt(g_faultcount);
    if(g_faultcount>0)
    g_faultcount--;
    //m_faultcount--;

}
#ifdef PAGE_BUTTON_BAR_NEW
        void CPasswordModifyPage::OnComBtn1Clk()
        {
           ChangePage(PAGE_INDEX_MAINTAIN);
        }

        void CPasswordModifyPage::OnComBtn2Clk()
        {

        }

        void CPasswordModifyPage::OnComBtn3Clk()
        {

        }

        void CPasswordModifyPage::OnComBtn4Clk()
        {

        }

        void CPasswordModifyPage::OnComBtn5Clk()
        {

        }

        void CPasswordModifyPage::OnComBtn6Clk()
        {

        }
        void CPasswordModifyPage::OnComBtn7Clk()
        {

        }
        void CPasswordModifyPage::OnComBtn8Clk()
        {

        }
        void CPasswordModifyPage::OnComBtn9Clk()
        {

        }
        void CPasswordModifyPage::OnComBtn10Clk()
        {

        }
        void CPasswordModifyPage::OnComBtn11Clk()
        {

        }
        void CPasswordModifyPage::OnComBtn12Clk()
        {
            QString psw = ((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDCUR))->GetCtrlText();
            if (psw == pw_true)
            {
               QString str1 = ((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDNEW))->GetCtrlText();
               QString str2 = ((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDNEWAGAIN))->GetCtrlText();
               if (str1 == str2)
               {
                   SetINIInfo("/CNR_BJ/Password",str1);

                   pw_true = str1;

                   ShowWarningDialog(QObject::trUtf8("设置成功!"));
               }
               else
               {
                   ShowWarningDialog(QObject::trUtf8("两次输入不一致!"));
               }
            }
            else
            {
                ShowWarningDialog(QObject::trUtf8("密码错误!"));
            }
        }
#else
        void CPasswordModifyPage::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_MAINTAIN);
        }

        void CPasswordModifyPage::OnComBtn2Clk()
        {

        }

        void CPasswordModifyPage::OnComBtn3Clk()
        {

        }

        void CPasswordModifyPage::OnComBtn4Clk()
        {

        }

        void CPasswordModifyPage::OnComBtn5Clk()
        {

        }

        void CPasswordModifyPage::OnComBtn6Clk()
        {

        }


#endif


void CPasswordModifyPage::OnNum0Clk()
{
    int nEditID = GetFocusEditID();
    ((CEdit*)GetDlgItem(nEditID))->AddEditStr("0");
}

void CPasswordModifyPage::OnNum1Clk()
{
    int nEditID = GetFocusEditID();
    ((CEdit*)GetDlgItem(nEditID))->AddEditStr("1");
}

void CPasswordModifyPage::OnNum2Clk()
{
    int nEditID = GetFocusEditID();
    ((CEdit*)GetDlgItem(nEditID))->AddEditStr("2");
}

void CPasswordModifyPage::OnNum3Clk()
{
    int nEditID = GetFocusEditID();
    ((CEdit*)GetDlgItem(nEditID))->AddEditStr("3");
}

void CPasswordModifyPage::OnNum4Clk()
{
    int nEditID = GetFocusEditID();
    ((CEdit*)GetDlgItem(nEditID))->AddEditStr("4");
}

void CPasswordModifyPage::OnNum5Clk()
{
    int nEditID = GetFocusEditID();
    ((CEdit*)GetDlgItem(nEditID))->AddEditStr("5");
}

void CPasswordModifyPage::OnNum6Clk()
{
    int nEditID = GetFocusEditID();
    ((CEdit*)GetDlgItem(nEditID))->AddEditStr("6");
}

void CPasswordModifyPage::OnNum7Clk()
{
    int nEditID = GetFocusEditID();
    ((CEdit*)GetDlgItem(nEditID))->AddEditStr("7");
}

void CPasswordModifyPage::OnNum8Clk()
{
    int nEditID = GetFocusEditID();
    ((CEdit*)GetDlgItem(nEditID))->AddEditStr("8");
}

void CPasswordModifyPage::OnNum9Clk()
{
    int nEditID = GetFocusEditID();
    ((CEdit*)GetDlgItem(nEditID))->AddEditStr("9");
}

void CPasswordModifyPage::OnClearClk()
{
    int nEditID = GetFocusEditID();
    ((CEdit*)GetDlgItem(nEditID))->SetCtrlText("");
}

void CPasswordModifyPage::OnCurClk()
{
    ((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDCUR))->SetSelected(true);
    ((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDNEW))->SetSelected(false);
    ((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDNEWAGAIN))->SetSelected(false);
}

void CPasswordModifyPage::OnNewClk()
{
    ((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDCUR))->SetSelected(false);
    ((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDNEW))->SetSelected(true);
    ((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDNEWAGAIN))->SetSelected(false);
}

void CPasswordModifyPage::OnConfirmClk()
{
    ((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDCUR))->SetSelected(false);
    ((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDNEW))->SetSelected(false);
    ((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDNEWAGAIN))->SetSelected(true);
}

int CPasswordModifyPage::GetFocusEditID()
{
   if (((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDCUR))->GetSelected())
       return ID_PIBPM_EDIT_PSDCUR;

   if (((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDNEW))->GetSelected())
       return ID_PIBPM_EDIT_PSDNEW;

   if (((CEdit*)GetDlgItem(ID_PIBPM_EDIT_PSDNEWAGAIN))->GetSelected())
       return ID_PIBPM_EDIT_PSDNEWAGAIN;
}

void CPasswordModifyPage::ShowWarningDialog(QString str)
{
    CWarningDialog dlg;
    dlg.SetWarningStr(str);
    dlg.move(GetParentDlg()->x()+350,GetParentDlg()->y()+250);
    dlg.exec();
}
