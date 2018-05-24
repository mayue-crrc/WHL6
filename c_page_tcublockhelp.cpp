#include "c_page_tcublockhelp.h"

ROMDATA g_PicRom_TCUBlockhelp[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    D_COMMON_PAGE_HEADER(QObject::trUtf8("牵引封锁状态帮助"))
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW_WHHELP
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif
    {QObject::trUtf8("引起牵引封锁的原因"),    D_FONT_BOLD(6),      QRect( 280, 200, 130, 20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8("未引起牵引封锁"),    D_FONT_BOLD(6),      QRect( 280, 250, 130, 20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8(""),    D_FONT_BOLD(8),      QRect( 430, 200, 30, 20),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8(""),    D_FONT_BOLD(8),      QRect( 430, 250, 30, 20),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },

};
int g_TCUBlockhelpLen = sizeof(g_PicRom_TCUBlockhelp)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(C_Page_TcuBlockhelp,CPage)
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
        ON_BTNCLK(IDLB_COM_BTN12, OnComBtn12Clk)

#endif
END_MESSAGE_MAP()

C_Page_TcuBlockhelp::C_Page_TcuBlockhelp()
{
}

void C_Page_TcuBlockhelp::OnUpdatePage()
{

}

void C_Page_TcuBlockhelp::OnInitPage()
{

}

void C_Page_TcuBlockhelp::OnShowPage()
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
    ((CButton *)GetDlgItem(IDLB_COM_BTN12))->SetCtrlText(QObject::trUtf8(""));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText("");
#endif
    this->InitPageHeader();
}
#ifdef PAGE_BUTTON_BAR_NEW
        void C_Page_TcuBlockhelp::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_TCUBLOCKREASON);
        }

        void C_Page_TcuBlockhelp::OnComBtn2Clk()
        {

        }

        void C_Page_TcuBlockhelp::OnComBtn3Clk()
        {

        }

        void C_Page_TcuBlockhelp::OnComBtn4Clk()
        {

        }

        void C_Page_TcuBlockhelp::OnComBtn5Clk()
        {

        }

        void C_Page_TcuBlockhelp::OnComBtn6Clk()
        {

        }
        void C_Page_TcuBlockhelp::OnComBtn7Clk()
        {

        }

        void C_Page_TcuBlockhelp::OnComBtn8Clk()
        {

        }
        void C_Page_TcuBlockhelp::OnComBtn12Clk()
        {
        }
#else
        void CCarStatus3HelpPage::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_CARSTATUS3);
        }

        void CCarStatus3HelpPage::OnComBtn2Clk()
        {

        }

        void CCarStatus3HelpPage::OnComBtn3Clk()
        {

        }

        void CCarStatus3HelpPage::OnComBtn4Clk()
        {

        }

        void CCarStatus3HelpPage::OnComBtn5Clk()
        {

        }

        void CCarStatus3HelpPage::OnComBtn6Clk()
        {

        }

#endif
