#include "cfashhelppage.h"


ROMDATA g_PicRom_FASpagehelp[] =
{
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW_WHHELP
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

    D_COMMON_PAGE_HEADER(QObject::trUtf8("运行帮助") )

    {QObject::trUtf8("为烟火探头正常，表示报警。"),           D_FONT_BOLD(6),      QRect( 330, 200, 300, 20),           Qt::white,                Qt::black,                CONTROL_LABEL,           2         },
    {QObject::trUtf8("为烟火探头故障。"),                    D_FONT_BOLD(6),      QRect( 330, 250, 300, 20),           Qt::white,                Qt::black,                CONTROL_LABEL,           3         },
    {QObject::trUtf8("烟火探头警告。"),                     D_FONT_BOLD(6),      QRect( 330, 300, 300, 20),           Qt::white,                Qt::black,                CONTROL_LABEL,           4         },
    {QObject::trUtf8("为烟火探头正常，表示未检测到烟火。"),    D_FONT_BOLD(6),      QRect( 330, 350, 300, 20),           Qt::white,                Qt::black,                CONTROL_LABEL,           5         },

    {QObject::trUtf8("fairalarm.png"),    D_FONT_BOLD(8),      QRect( 280, 200, 30, 20),           Qt::white,                Qt::red,                CONTROL_IMAGE,           ID_IGNORE         },
    {QObject::trUtf8(""),                D_FONT_BOLD(8),      QRect( 280, 250, 30, 20),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                D_FONT_BOLD(8),      QRect( 280, 300, 30, 20),           Qt::white,                Qt::yellow,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                   D_FONT_BOLD(8),      QRect( 280, 350, 30, 20),           Qt::white,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },

};
int g_FASpagehelpLen = sizeof(g_PicRom_FASpagehelp)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CFASHHelpPage,CPage)
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

CFASHHelpPage::CFASHHelpPage()
{
}

void CFASHHelpPage::OnUpdatePage()
{

    Update();
}

void CFASHHelpPage::OnInitPage()
{

}

void CFASHHelpPage::OnShowPage()
{

    ((CLabel *)GetDlgItem(2))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(3))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(4))->SetAlignment(Qt::AlignLeft);
    ((CLabel *)GetDlgItem(5))->SetAlignment(Qt::AlignLeft);

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
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("下一页"));
#endif
    this->InitPageHeader();
}

#ifdef PAGE_BUTTON_BAR_NEW
        void CFASHHelpPage::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_FASPage);
        }

        void CFASHHelpPage::OnComBtn2Clk()
        {

        }

        void CFASHHelpPage::OnComBtn3Clk()
        {

        }

        void CFASHHelpPage::OnComBtn4Clk()
        {

        }

        void CFASHHelpPage::OnComBtn5Clk()
        {

        }

        void CFASHHelpPage::OnComBtn6Clk()
        {

        }
        void CFASHHelpPage::OnComBtn7Clk()
        {

        }

        void CFASHHelpPage::OnComBtn8Clk()
        {
        }
        void CFASHHelpPage::OnComBtn9Clk()
        {
        }
        void CFASHHelpPage::OnComBtn10Clk()
        {

        }
        void CFASHHelpPage::OnComBtn11Clk()
        {

        }
        void CFASHHelpPage::OnComBtn12Clk()
        {
        }
#else
        void CRunHelp1Page::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_RUNSTATE);
        }

        void CRunHelp1Page::OnComBtn2Clk()
        {

        }

        void CRunHelp1Page::OnComBtn3Clk()
        {

        }

        void CRunHelp1Page::OnComBtn4Clk()
        {

        }

        void CRunHelp1Page::OnComBtn5Clk()
        {

        }

        void CRunHelp1Page::OnComBtn6Clk()
        {
            ChangePage(PAGE_INDEX_RUNHELP2);
        }

#endif

