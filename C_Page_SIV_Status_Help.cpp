#include "C_Page_SIV_Status_Help.h"

ROMDATA  g_PicRom_CarStatus1Help2[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    D_COMMON_PAGE_HEADER(QObject::trUtf8("运行帮助"))
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
    {"",                                   D_FONT_BOLD(6),      QRect( 50, 240, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(200, 270, 580,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(200, 300, 580,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(200, 330, 580,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(200, 360, 580,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(200, 390, 580,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(200, 420, 580,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(50, 450, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                                   D_FONT_BOLD(6),      QRect(50, 510, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(50, 480, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(50, 540, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },


    {"",                                   D_FONT_BOLD(6),      QRect( 50,  60,   1, 421+58),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(200,  60,   1, 421+58),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(300,  60,   1, 421+58),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(450,  60,   1, 421+58),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(780,  60,   1, 421+58),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    {QObject::trUtf8("显示项目"),                       D_FONT_BOLD(8),      QRect( 52,  61, 145,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("显示条件"),                       D_FONT_BOLD(8),      QRect(202,  61,  95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("显示"),                          D_FONT_BOLD(8),      QRect(302,  61, 145,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("备注"),                          D_FONT_BOLD(8),      QRect(452,  61, 328,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8("空压机状态"),                       D_FONT_BOLD(8),      QRect( 52, 92, 145,  148),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("运行模式"),                       D_FONT_BOLD(8),      QRect( 52, 242, 145,  178),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("清洁制动"),                       D_FONT_BOLD(8),      QRect( 52, 452, 145,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("烟火报警"),                       D_FONT_BOLD(8),      QRect( 52, 392, 145,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("乘客报警"),                       D_FONT_BOLD(8),      QRect( 52, 422, 145,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("旁路报警"),                       D_FONT_BOLD(8),      QRect( 52, 452, 145,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8("切除"),                       D_FONT_BOLD(7),      QRect( 202, 92, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("故障"),                       D_FONT_BOLD(7),      QRect( 202, 122, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("警告"),                       D_FONT_BOLD(7),      QRect( 202, 152, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("运行"),                       D_FONT_BOLD(7),      QRect( 202, 182, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("断开"),                       D_FONT_BOLD(7),      QRect( 202, 212, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("运输模式"),                       D_FONT_BOLD(7),      QRect( 202, 242, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("ATB模式"),                       D_FONT_BOLD(7),      QRect( 202, 272, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("ATO模式"),                       D_FONT_BOLD(7),      QRect( 202, 302, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("ATP模式"),                       D_FONT_BOLD(7),      QRect( 202, 332, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("RM模式"),                       D_FONT_BOLD(7),      QRect( 202, 362, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("慢行模式"),                       D_FONT_BOLD(7),      QRect( 202, 392, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("URM模式"),                       D_FONT_BOLD(7),      QRect( 202, 422, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("清洁制动启动"),                       D_FONT_BOLD(7),      QRect( 202, 452, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    //{QObject::trUtf8("有旁路报警"),                       D_FONT_BOLD(7),      QRect( 202, 452, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8("WHL6ACUCutOff.PNG"),               D_FONT_BOLD(8),      QRect( 355, 92, 40,  28),           QColor(0,176,240),                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
    {QObject::trUtf8("WHL6AirCmp_Fault.PNG"),                       D_FONT_BOLD(8),      QRect( 355, 122, 40,  28),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
    {QObject::trUtf8("WHL6AirCmp_OnWarn.PNG"),                       D_FONT_BOLD(8),      QRect( 355, 152, 40,  28),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
    {QObject::trUtf8("WHL6AirCmp_On.PNG"),                       D_FONT_BOLD(8),      QRect( 355, 182, 40,  28),           QColor(0,176,240),                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
    {QObject::trUtf8("WHL6AirCmp_Off.PNG"),                       D_FONT_BOLD(8),      QRect( 355, 212, 40,  28),           QColor(0,176,240),                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },

    {QObject::trUtf8("运输模式"),                       D_FONT_BOLD(6),      QRect( 325, 242, 95,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("ATB模式"),                       D_FONT_BOLD(6),      QRect( 325, 272, 95,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("ATO模式"),                       D_FONT_BOLD(6),      QRect( 325, 302, 95,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("ATP模式"),                       D_FONT_BOLD(6),      QRect( 325, 332, 95,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("RM模式"),                       D_FONT_BOLD(6),      QRect( 325, 362, 95,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("慢行模式"),                       D_FONT_BOLD(6),      QRect( 325, 392, 95,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("URM模式"),                       D_FONT_BOLD(6),      QRect( 325, 422, 95,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("清洁制动"),                       D_FONT_BOLD(6),      QRect( 325, 452, 95,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },


    {QObject::trUtf8("制动阀状态"),                       D_FONT_BOLD(8),      QRect( 52, 482, 145,  56),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("离线 故障"),                       D_FONT_BOLD(5),      QRect( 202, 482, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("警告 正常"),                       D_FONT_BOLD(5),      QRect( 202, 512, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8("离线"),                       D_FONT_BOLD(6),      QRect( 325, 482, 40,  28),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8("故障"),                       D_FONT_BOLD(6),      QRect( 325+52, 482, 40,  28),           Qt::black,                Qt::red,                CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8("警告"),                       D_FONT_BOLD(6),      QRect( 325, 512, 40,  28),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8("正常"),                       D_FONT_BOLD(6),      QRect( 325+52, 512, 40,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },

{QObject::trUtf8("优先级由上到下依次降低"),                       D_FONT_BOLD(6),      QRect( 452, 242, 328,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },


};
int g_CarStatus1Help2RomLen = sizeof(g_PicRom_CarStatus1Help2)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CCarStatus1Help2Page,CPage)
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

CCarStatus1Help2Page::CCarStatus1Help2Page()
{
}

void CCarStatus1Help2Page::OnUpdatePage()
{

}

void CCarStatus1Help2Page::OnInitPage()
{

}

void CCarStatus1Help2Page::OnShowPage()
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
    ((CButton *)GetDlgItem(IDLB_COM_BTN11))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN10))->SetCtrlText(QObject::trUtf8("上一页"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN12))->SetCtrlText(QObject::trUtf8(""));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8(""));
#endif

    this->InitPageHeader();
}
#ifdef PAGE_BUTTON_BAR_NEW
        void CCarStatus1Help2Page::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_RUNSTATE);
        }

        void CCarStatus1Help2Page::OnComBtn2Clk()
        {

        }

        void CCarStatus1Help2Page::OnComBtn3Clk()
        {

        }

        void CCarStatus1Help2Page::OnComBtn4Clk()
        {

        }

        void CCarStatus1Help2Page::OnComBtn5Clk()
        {

        }

        void CCarStatus1Help2Page::OnComBtn6Clk()
        {

        }
        void CCarStatus1Help2Page::OnComBtn7Clk()
        {

        }

        void CCarStatus1Help2Page::OnComBtn8Clk()
        {

        }
        void CCarStatus1Help2Page::OnComBtn9Clk()
        {

        }

        void CCarStatus1Help2Page::OnComBtn11Clk()
        {

        }
        void CCarStatus1Help2Page::OnComBtn10Clk()
        {
            ChangePage(PAGE_INDEX_CARSTATUS1HELP3);
        }

        void CCarStatus1Help2Page::OnComBtn12Clk()
        {

        }
#else
        void CCarStatus1Help2Page::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_CARSTATUS1);
        }

        void CCarStatus1Help2Page::OnComBtn2Clk()
        {

        }

        void CCarStatus1Help2Page::OnComBtn3Clk()
        {

        }

        void CCarStatus1Help2Page::OnComBtn4Clk()
        {

        }

        void CCarStatus1Help2Page::OnComBtn5Clk()
        {
        }

        void CCarStatus1Help2Page::OnComBtn6Clk()
        {

        }

#endif






