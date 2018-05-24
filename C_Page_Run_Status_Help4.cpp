#include "C_Page_Run_Status_Help4.h"

ROMDATA  g_PicRom_CarStatus1Help3[] =
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
    {"",                                   D_FONT_BOLD(6),      QRect(50, 390, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(50, 420, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(50, 450, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(50, 480, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(200, 510, 580,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(50, 540, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },


    {"",                                   D_FONT_BOLD(6),      QRect( 50,  60,   1, 481),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(200,  60,   1, 481),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(300,  60,   1, 481),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(450,  60,   1, 481),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(780,  60,   1, 481),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    {QObject::trUtf8("显示项目"),                       D_FONT_BOLD(8),      QRect( 52,  61, 145,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("显示条件"),                       D_FONT_BOLD(8),      QRect(202,  61,  95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("显示"),                          D_FONT_BOLD(8),      QRect(302,  61, 145,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("备注"),                          D_FONT_BOLD(8),      QRect(452,  61, 328,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8("辅助系统状态"),                       D_FONT_BOLD(8),      QRect( 52, 92, 145,  148),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("牵引系统状态"),                       D_FONT_BOLD(8),      QRect( 52, 242, 145,  148),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("烟火报警"),                       D_FONT_BOLD(8),      QRect( 52, 392, 145,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("乘客报警"),                       D_FONT_BOLD(8),      QRect( 52, 422, 145,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("旁路报警"),                       D_FONT_BOLD(8),      QRect( 52, 452, 145,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("车轮状态"),                       D_FONT_BOLD(8),      QRect( 52, 482, 145,  58),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8("切除"),                       D_FONT_BOLD(7),      QRect( 202, 92, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("故障"),                       D_FONT_BOLD(7),      QRect( 202, 122, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("警告"),                       D_FONT_BOLD(7),      QRect( 202, 152, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("运行"),                       D_FONT_BOLD(7),      QRect( 202, 182, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("断开"),                       D_FONT_BOLD(7),      QRect( 202, 212, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("切除"),                       D_FONT_BOLD(7),      QRect( 202, 242, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("故障"),                       D_FONT_BOLD(7),      QRect( 202, 272, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("警告"),                       D_FONT_BOLD(7),      QRect( 202, 302, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("运行"),                       D_FONT_BOLD(7),      QRect( 202, 332, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("断开"),                       D_FONT_BOLD(7),      QRect( 202, 362, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("有烟火报警"),                       D_FONT_BOLD(7),      QRect( 202, 392, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("有乘客报警"),                       D_FONT_BOLD(7),      QRect( 202, 422, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("有旁路报警"),                       D_FONT_BOLD(7),      QRect( 202, 452, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("本车牵引"),                       D_FONT_BOLD(7),      QRect( 202, 482, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("本车制动"),                       D_FONT_BOLD(7),      QRect( 202, 512, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8("WHL6ACUCutOff.PNG"),               D_FONT_BOLD(8),      QRect( 355, 92, 40,  28),           QColor(0,176,240),                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
    {QObject::trUtf8("WHL6ACU_ACFault.PNG"),                       D_FONT_BOLD(8),      QRect( 330, 122, 30,  28),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
    {QObject::trUtf8("WHL6ACU_ACWarn.PNG"),                       D_FONT_BOLD(8),      QRect( 330, 152, 30,  28),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
    {QObject::trUtf8("WHL6ACU_ACOn.PNG"),                       D_FONT_BOLD(8),      QRect( 330, 182, 30,  28),           QColor(0,176,240),                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
    {QObject::trUtf8("WHL6ACU_ACOff.PNG"),                       D_FONT_BOLD(8),      QRect( 330, 212, 30,  28),           QColor(0,176,240),                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },

    {QObject::trUtf8("sivdcfault.png"),                       D_FONT_BOLD(8),      QRect( 390, 122, 30,  28),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
    {QObject::trUtf8("sivdcwarn.png"),                       D_FONT_BOLD(8),      QRect( 390, 152, 30,  28),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
    {QObject::trUtf8("sivdcok.png"),                       D_FONT_BOLD(8),      QRect( 390, 182, 30,  28),           QColor(0,176,240),                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
    {QObject::trUtf8("sivdccutout.png"),                       D_FONT_BOLD(8),      QRect( 390, 212, 30,  28),           QColor(0,176,240),                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },


    {QObject::trUtf8("WHL6TCUSelfTest.PNG"),                       D_FONT_BOLD(8),      QRect( 355, 242, 40,  28),           Qt::red,                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
    {QObject::trUtf8("WHL6TCUFault.PNG"),                       D_FONT_BOLD(8),      QRect( 355, 272, 40,  28),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
    {QObject::trUtf8("WHL6TCUWarn.PNG"),                       D_FONT_BOLD(8),      QRect( 355, 302, 40,  28),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
    {QObject::trUtf8("WHL6TCUAct.PNG"),                       D_FONT_BOLD(8),      QRect( 355, 332, 40,  28),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
    {QObject::trUtf8("WHL6TCUOff.PNG"),                       D_FONT_BOLD(8),      QRect( 355, 362, 40,  28),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },

    {QObject::trUtf8("烟火报警"),                       D_FONT_BOLD(8),      QRect( 325, 392, 100,  28),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("乘客报警"),                       D_FONT_BOLD(8),      QRect( 325, 422, 100,  28),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("旁路报警"),                       D_FONT_BOLD(8),      QRect( 325, 452, 100,  28),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("tractionwheel.png"),                       D_FONT_BOLD(8),      QRect( 355, 482, 40,  28),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
    {QObject::trUtf8("brakewheel.png"),                       D_FONT_BOLD(8),      QRect( 355, 512, 40,  28),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },


    {QObject::trUtf8("有报警显示 无报警隐藏"),                       D_FONT_BOLD(8),      QRect( 452, 392, 328,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("有报警显示 无报警隐藏"),                       D_FONT_BOLD(8),      QRect( 452, 422, 328,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("有报警显示 无报警隐藏"),                       D_FONT_BOLD(8),      QRect( 452, 452, 328,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },



};
int g_CarStatus1Help3RomLen = sizeof(g_PicRom_CarStatus1Help3)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CCarStatus1Help3Page,CPage)
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

CCarStatus1Help3Page::CCarStatus1Help3Page()
{
}

void CCarStatus1Help3Page::OnUpdatePage()
{

}

void CCarStatus1Help3Page::OnInitPage()
{
  //  ((CLabel *)GetDlgItem(ID_CARSTATUS1_HELP3_SPEEDVAL))->SetBorderColor(Qt::white);
}

void CCarStatus1Help3Page::OnShowPage()
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
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("下一页"));
#endif

    this->InitPageHeader();
}
#ifdef PAGE_BUTTON_BAR_NEW
        void CCarStatus1Help3Page::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_RUNSTATE);
        }

        void CCarStatus1Help3Page::OnComBtn2Clk()
        {

        }

        void CCarStatus1Help3Page::OnComBtn3Clk()
        {

        }

        void CCarStatus1Help3Page::OnComBtn4Clk()
        {

        }

        void CCarStatus1Help3Page::OnComBtn5Clk()
        {

        }

        void CCarStatus1Help3Page::OnComBtn6Clk()
        {

        }
        void CCarStatus1Help3Page::OnComBtn7Clk()
        {
        }

        void CCarStatus1Help3Page::OnComBtn8Clk()
        {
        }
        void CCarStatus1Help3Page::OnComBtn9Clk()
        {
        }
        void CCarStatus1Help3Page::OnComBtn11Clk()
        {
            ChangePage(PAGE_INDEX_CARSTATUS1HELP2);
        }
        void CCarStatus1Help3Page::OnComBtn10Clk()
        {
            ChangePage(PAGE_INDEX_RUNHELP4);
        }
        void CCarStatus1Help3Page::OnComBtn12Clk()
        {
        }
#else

#endif


