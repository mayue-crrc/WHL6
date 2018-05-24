#include "C_Page_Run_Status_Help2.h"

ROMDATA g_PicRom_RunHelp2[] =
{
    D_COMMON_PAGE_HEADER(QObject::trUtf8("运行帮助") )
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW_WHHELP
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif
    {QObject::trUtf8("tryruntesthelp.png"),    D_FONT_BOLD(8),      QRect( 50, 80, 700, 400),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },


};
int g_RunHelp2RomLen = sizeof(g_PicRom_RunHelp2)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CRunHelp2Page,CPage)
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
END_MESSAGE_MAP()

CRunHelp2Page::CRunHelp2Page()
{
}

void CRunHelp2Page::OnUpdatePage()
{

}

void CRunHelp2Page::OnInitPage()
{

}

void CRunHelp2Page::OnShowPage()
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
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8("上一页"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("下一页"));
#endif

    this->InitPageHeader();

}

#ifdef PAGE_BUTTON_BAR_NEW
        void CRunHelp2Page::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_MAINTAIN);
        }

        void CRunHelp2Page::OnComBtn2Clk()
        {

        }

        void CRunHelp2Page::OnComBtn3Clk()
        {

        }

        void CRunHelp2Page::OnComBtn4Clk()
        {

        }

        void CRunHelp2Page::OnComBtn5Clk()
        {

        }

        void CRunHelp2Page::OnComBtn6Clk()
        {

        }
        void CRunHelp2Page::OnComBtn7Clk()
        {
        }

        void CRunHelp2Page::OnComBtn8Clk()
        {
        }
        void CRunHelp2Page::OnComBtn9Clk()
        {
        }
        void CRunHelp2Page::OnComBtn10Clk()
        {
        }
        void CRunHelp2Page::OnComBtn11Clk()
        {
        }
        void CRunHelp2Page::OnComBtn12Clk()
        {
        }
#else
        void CRunHelp2Page::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_RUNSTATE);
        }

        void CRunHelp2Page::OnComBtn2Clk()
        {

        }

        void CRunHelp2Page::OnComBtn3Clk()
        {

        }

        void CRunHelp2Page::OnComBtn4Clk()
        {

        }

        void CRunHelp2Page::OnComBtn5Clk()
        {
            ChangePage(PAGE_INDEX_RUNHELP1);
        }

        void CRunHelp2Page::OnComBtn6Clk()
        {
            ChangePage(PAGE_INDEX_RUNHELP3);
        }

#endif


