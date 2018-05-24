#include "C_Page_Bypass_Status_Help.h"


ROMDATA g_PicRom_CarStatus3Help[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    D_COMMON_PAGE_HEADER(QObject::trUtf8("旁路状态帮助"))
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW_WHHELP
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif
    //{QObject::trUtf8("bypasshelp.png"),    D_FONT_BOLD(8),      QRect( 50, 80, 700, 400),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect( 50,  60, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect( 50,  80, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect( 200, 100, 580,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect( 50,  120, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect( 200, 140, 580,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(50, 160, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect( 200, 180, 580,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(50, 200, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(200, 220, 580,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(50, 240, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(200, 260, 580,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(50, 280, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(200, 300, 580,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(50, 320, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(200, 340, 580,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(50, 360, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(200, 380, 580,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(50, 400, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(200, 420, 580,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(50, 440, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },


    {"",                                   D_FONT_BOLD(6),      QRect( 50,  60,   1, 380),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(200,  60,   1, 380),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(300,  60,   1, 380),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(450,  60,   1, 380),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(780,  60,   1, 380),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    {QObject::trUtf8("显示项目"),                       D_FONT_BOLD(8),      QRect( 52,  61, 145,  18),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("显示条件"),                       D_FONT_BOLD(8),      QRect(202,  61,  95,  18),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("显示"),                          D_FONT_BOLD(8),      QRect(302,  61, 145,  18),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("备注"),                          D_FONT_BOLD(8),      QRect(452,  61, 328,  18),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8("门零速旁路"),                       D_FONT_BOLD(7),      QRect( 52, 82, 145,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("司机室门旁路"),                       D_FONT_BOLD(7),      QRect( 52, 122, 145,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("总风压力可用旁路"),                       D_FONT_BOLD(7),      QRect( 52, 162, 145,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("允许升弓旁路"),                       D_FONT_BOLD(7),      QRect( 52, 202, 145,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("警惕按钮旁路"),                       D_FONT_BOLD(7),      QRect( 52, 242, 145,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("门关好旁路"),                       D_FONT_BOLD(7),      QRect( 52, 282, 145,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("停放制动旁路"),                       D_FONT_BOLD(7),      QRect( 52, 322, 145,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("ATC切除"),                       D_FONT_BOLD(7),      QRect( 52, 362, 145,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("所有制动缓解旁路"),                       D_FONT_BOLD(7),      QRect( 52, 402, 145,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

{QObject::trUtf8("断开"),                       D_FONT_BOLD(7),      QRect( 202, 82, 95,  18),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8("断开"),                       D_FONT_BOLD(7),      QRect( 202, 122, 95,  18),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8("断开"),                         D_FONT_BOLD(7),      QRect( 202, 162, 95,  18),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8("断开"),                       D_FONT_BOLD(7),      QRect( 202, 202, 95,  18),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8("断开"),                       D_FONT_BOLD(7),      QRect( 202, 242, 95,  18),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8("断开"),                       D_FONT_BOLD(7),      QRect( 202, 282, 95,  18),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8("断开"),                       D_FONT_BOLD(7),      QRect( 202, 322, 95,  18),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8("断开"),                          D_FONT_BOLD(7),      QRect( 202, 362, 95,  18),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8("断开"),                         D_FONT_BOLD(7),      QRect( 202, 402, 95,  18),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

{QObject::trUtf8("闭合"),                       D_FONT_BOLD(7),      QRect( 202, 102, 95,  18),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8("闭合"),                       D_FONT_BOLD(7),      QRect( 202, 142, 95,  18),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8("闭合"),                         D_FONT_BOLD(7),      QRect( 202, 182, 95,  18),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8("闭合"),                       D_FONT_BOLD(7),      QRect( 202, 222, 95,  18),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8("闭合"),                       D_FONT_BOLD(7),      QRect( 202, 262, 95,  18),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8("闭合"),                       D_FONT_BOLD(7),      QRect( 202, 302, 95,  18),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8("闭合"),                       D_FONT_BOLD(7),      QRect( 202, 342, 95,  18),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8("闭合"),                          D_FONT_BOLD(7),      QRect( 202, 382, 95,  18),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8("闭合"),                         D_FONT_BOLD(7),      QRect( 202, 422, 95,  18),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

{QObject::trUtf8(""),               D_FONT_BOLD(8),      QRect( 330, 82, 90,  17),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(8),      QRect( 330, 102, 90,  17),           Qt::white,                Qt::yellow,                CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(8),      QRect( 330, 122, 90,  17),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(8),      QRect( 330, 142, 90,  17),           Qt::white,                Qt::yellow,                CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(8),      QRect( 330, 162, 90,  17),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(8),      QRect( 330, 182, 90,  17),           Qt::white,                Qt::yellow,                CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(8),      QRect( 330, 202, 90,  17),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(8),      QRect( 330, 222, 90,  17),           Qt::white,                Qt::yellow,                CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(8),      QRect( 330, 242, 90,  17),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(8),      QRect( 330, 262, 90,  17),           Qt::white,                Qt::yellow,                CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(8),      QRect( 330, 282, 90,  17),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(8),      QRect( 330, 302, 90,  17),           Qt::white,                Qt::yellow,                CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(8),      QRect( 330, 322, 90,  17),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(8),      QRect( 330, 342, 90,  17),           Qt::white,                Qt::yellow,                CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(8),      QRect( 330, 362, 90,  17),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(8),      QRect( 330, 382, 90,  17),           Qt::white,                Qt::yellow,                CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(8),      QRect( 330, 402, 90,  17),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),               D_FONT_BOLD(8),      QRect( 330, 422, 90,  17),           Qt::white,                Qt::yellow,                CONTROL_LABEL,           ID_IGNORE         },
//{QObject::trUtf8("WHL6ACU_ACFault.PNG"),                       D_FONT_BOLD(8),      QRect( 330, 122, 30,  28),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
//{QObject::trUtf8("WHL6ACU_ACWarn.PNG"),                       D_FONT_BOLD(8),      QRect( 330, 152, 30,  28),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
//{QObject::trUtf8("WHL6ACU_ACOn.PNG"),                       D_FONT_BOLD(8),      QRect( 330, 182, 30,  28),           QColor(0,176,240),                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
//{QObject::trUtf8("WHL6ACU_ACOff.PNG"),                       D_FONT_BOLD(8),      QRect( 330, 212, 30,  28),           QColor(0,176,240),                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },

//    {QObject::trUtf8("sivdcfault.png"),                       D_FONT_BOLD(8),      QRect( 390, 122, 30,  28),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
//    {QObject::trUtf8("sivdcwarn.png"),                       D_FONT_BOLD(8),      QRect( 390, 152, 30,  28),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
//    {QObject::trUtf8("sivdcok.png"),                       D_FONT_BOLD(8),      QRect( 390, 182, 30,  28),           QColor(0,176,240),                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
//    {QObject::trUtf8("sivdccutout.png"),                       D_FONT_BOLD(8),      QRect( 390, 212, 30,  28),           QColor(0,176,240),                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },


//    {QObject::trUtf8("WHL6TCUSelfTest.PNG"),                       D_FONT_BOLD(8),      QRect( 355, 242, 40,  28),           Qt::red,                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
//    {QObject::trUtf8("WHL6TCUFault.PNG"),                       D_FONT_BOLD(8),      QRect( 355, 272, 40,  28),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
//    {QObject::trUtf8("WHL6TCUWarn.PNG"),                       D_FONT_BOLD(8),      QRect( 355, 302, 40,  28),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
//    {QObject::trUtf8("WHL6TCUAct.PNG"),                       D_FONT_BOLD(8),      QRect( 355, 332, 40,  28),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
//    {QObject::trUtf8("WHL6TCUOff.PNG"),                       D_FONT_BOLD(8),      QRect( 355, 362, 40,  28),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },

//    {QObject::trUtf8("烟火报警"),                       D_FONT_BOLD(8),      QRect( 325, 392, 100,  28),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("乘客报警"),                       D_FONT_BOLD(8),      QRect( 325, 422, 100,  28),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("旁路报警"),                       D_FONT_BOLD(8),      QRect( 325, 452, 100,  28),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_IGNORE         },


//    {QObject::trUtf8("有报警显示 无报警隐藏"),                       D_FONT_BOLD(8),      QRect( 452, 392, 328,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("有报警显示 无报警隐藏"),                       D_FONT_BOLD(8),      QRect( 452, 422, 328,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("有报警显示 无报警隐藏"),                       D_FONT_BOLD(8),      QRect( 452, 452, 328,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },


};
int g_CarStatus3HelpRomLen = sizeof(g_PicRom_CarStatus3Help)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CCarStatus3HelpPage,CPage)
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

CCarStatus3HelpPage::CCarStatus3HelpPage()
{
}

void CCarStatus3HelpPage::OnUpdatePage()
{

}

void CCarStatus3HelpPage::OnInitPage()
{

}

void CCarStatus3HelpPage::OnShowPage()
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
        void CCarStatus3HelpPage::OnComBtn7Clk()
        {

        }

        void CCarStatus3HelpPage::OnComBtn8Clk()
        {

        }
        void CCarStatus3HelpPage::OnComBtn12Clk()
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



