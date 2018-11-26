#include "CRunHelp4Page.h"

ROMDATA g_PicRom_RunHelp4[] =
{
    D_COMMON_PAGE_HEADER(QObject::trUtf8("运行帮助") )
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW_WHHELP
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif
    {"",                                   D_FONT_BOLD(6),      QRect( 50,  60, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect( 50,  90, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect( 200,  120, 580,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect( 200,  150, 580,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    {"",                                   D_FONT_BOLD(6),      QRect( 200, 180, 580,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(200, 210, 580,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect( 200, 240, 580,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(200, 270, 580,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(50, 300, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(200, 330, 580,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(200, 360, 580,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(200, 390, 580,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(200, 420, 580,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(200, 450, 580,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(200, 480, 580,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(50, 510, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },


    {"",                                   D_FONT_BOLD(6),      QRect( 50,  60,   1, 451),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(200,  60,   1, 451),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(300,  60,   1, 451),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(450,  60,   1, 451),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(780,  60,   1, 451),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    {QObject::trUtf8("显示项目"),                       D_FONT_BOLD(8),      QRect( 52,  61, 145,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("显示条件"),                       D_FONT_BOLD(8),      QRect(202,  61,  95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("显示"),                          D_FONT_BOLD(8),      QRect(302,  61, 145,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("备注"),                          D_FONT_BOLD(8),      QRect(452,  61, 328,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8("制动系统状态"),                       D_FONT_BOLD(8),      QRect( 52, 92, 145,  208),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("空调系统状态"),                       D_FONT_BOLD(8),      QRect( 52, 302, 145,  208),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },


    {QObject::trUtf8("停放制动施加"),                       D_FONT_BOLD(7),      QRect( 202, 92, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("制动切除"),                       D_FONT_BOLD(7),      QRect( 202, 122, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("制动自检激活"),                       D_FONT_BOLD(7),      QRect( 202, 152, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("制动故障"),                       D_FONT_BOLD(7),      QRect( 202, 182, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("制动警告"),                       D_FONT_BOLD(7),      QRect( 202, 212, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("空气制动施加"),                       D_FONT_BOLD(7),      QRect( 202, 242, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("空气制动缓解"),                       D_FONT_BOLD(7),      QRect( 202, 272, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("空调故障"),                       D_FONT_BOLD(7),      QRect( 202, 302, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("空调警告"),                       D_FONT_BOLD(7),      QRect( 202, 332, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("紧急通风"),                       D_FONT_BOLD(7),      QRect( 202, 362, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("通风"),                       D_FONT_BOLD(7),      QRect( 202, 392, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("制冷模式"),                       D_FONT_BOLD(7),      QRect( 202, 422, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("空调运行"),                       D_FONT_BOLD(7),      QRect( 202, 452, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("空调断开"),                       D_FONT_BOLD(7),      QRect( 202, 482, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8("WHL6BCUParkBrkApp.PNG"),               D_FONT_BOLD(8),      QRect( 350, 92, 50,  28),           QColor(0,176,240),                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
    {QObject::trUtf8("WHL6BCUCutOut.PNG"),                       D_FONT_BOLD(8),      QRect( 350, 122, 50,  28),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
    {QObject::trUtf8("WHL6BCUSelfTest.PNG"),                       D_FONT_BOLD(8),      QRect( 350, 152, 50,  28),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
    {QObject::trUtf8("WHL6BCUFault.PNG"),                       D_FONT_BOLD(8),      QRect( 350, 182, 50,  28),           QColor(0,176,240),                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
    {QObject::trUtf8("WHL6BCUWarn.PNG"),                       D_FONT_BOLD(8),      QRect( 350, 212, 50,  28),           QColor(0,176,240),                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
    {QObject::trUtf8("WHL6BCUServBrkApp.PNG"),                       D_FONT_BOLD(8),      QRect( 350, 242, 50,  28),           Qt::red,                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
    {QObject::trUtf8("WHL6BCUServBrkRel.PNG"),                       D_FONT_BOLD(8),      QRect( 350, 272, 50,  28),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
    {QObject::trUtf8("WHL6HVACFault.PNG"),                       D_FONT_BOLD(8),      QRect( 350, 302, 50,  28),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
    {QObject::trUtf8("WHL6HVACWarn.PNG"),                       D_FONT_BOLD(8),      QRect( 350, 332, 50,  28),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
    {QObject::trUtf8("WHL6HVACEmgVen.PNG"),                       D_FONT_BOLD(8),      QRect( 350, 362, 50,  28),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
    {QObject::trUtf8("WHL6HVACVen.PNG"),                       D_FONT_BOLD(8),      QRect( 350, 392, 50,  28),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
    {QObject::trUtf8("WHL6HVACReCool.PNG"),                              D_FONT_BOLD(8),      QRect( 350, 422, 50,  28),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
    {QObject::trUtf8("WHL6HVACOn.PNG"),                       D_FONT_BOLD(8),      QRect( 350, 452, 50,  28),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
    {QObject::trUtf8("WHL6HVACOff.PNG"),                       D_FONT_BOLD(8),      QRect( 350, 482, 50,  28),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },




};
int g_RunHelp4RomLen = sizeof(g_PicRom_RunHelp4)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CRunHelp4Page,CPage)
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


CRunHelp4Page::CRunHelp4Page()
{
}


void CRunHelp4Page::OnUpdatePage()
{

}

void CRunHelp4Page::OnInitPage()
{

}

void CRunHelp4Page::OnShowPage()
{
#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN9))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN11))->SetCtrlText(QObject::trUtf8("下一页"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN10))->SetCtrlText(QObject::trUtf8("上一页"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN12))->SetCtrlText(QObject::trUtf8(""));

#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8("上一页"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8(""));
#endif
    this->InitPageHeader();

}


#ifdef PAGE_BUTTON_BAR_NEW
        void CRunHelp4Page::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_RUNSTATE);
        }

        void CRunHelp4Page::OnComBtn2Clk()
        {

        }

        void CRunHelp4Page::OnComBtn3Clk()
        {

        }

        void CRunHelp4Page::OnComBtn4Clk()
        {

        }

        void CRunHelp4Page::OnComBtn5Clk()
        {

        }

        void CRunHelp4Page::OnComBtn6Clk()
        {

        }
        void CRunHelp4Page::OnComBtn7Clk()
        {
        }

        void CRunHelp4Page::OnComBtn8Clk()
        {

        }
        void CRunHelp4Page::OnComBtn9Clk()
        {
        }
        void CRunHelp4Page::OnComBtn11Clk()
        {
            ChangePage(PAGE_INDEX_CARSTATUS1HELP3);
        }
        void CRunHelp4Page::OnComBtn10Clk()
        {
            ChangePage(PAGE_INDEX_RUNHELP3);
        }
        void CRunHelp4Page::OnComBtn12Clk()
        {
        }
#else
        void CRunHelp4Page::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_RUNSTATE);
        }

        void CRunHelp4Page::OnComBtn2Clk()
        {

        }

        void CRunHelp4Page::OnComBtn3Clk()
        {

        }

        void CRunHelp4Page::OnComBtn4Clk()
        {

        }

        void CRunHelp4Page::OnComBtn5Clk()
        {
            ChangePage(PAGE_INDEX_CARSTATUS1HELP3);
        }

        void CRunHelp4Page::OnComBtn6Clk()
        {
        }

#endif

