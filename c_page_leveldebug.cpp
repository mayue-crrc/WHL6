#include "c_page_leveldebug.h"
int posoff = 15;
ROMDATA g_PicRom_Cleveldebug[] =
{
    D_COMMON_PAGE_HEADER(QObject::trUtf8("级位调试"))
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW_WH
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif
    {"",                   D_FONT_BOLD(6),      QRect( 100, 100-posoff, 600,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 100, 140-posoff, 600,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 100, 180-posoff, 600,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 100, 220-posoff, 600,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 100, 260-posoff, 600,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 100, 300-posoff, 600,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 100, 340-posoff, 600,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 100, 380-posoff, 600,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 100, 420-posoff, 600,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 100, 460-posoff, 600,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 100, 500-posoff, 600,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },

    {"",                   D_FONT_BOLD(6),      QRect(100, 100-posoff,   1, 400),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(200, 100-posoff,   1, 400),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(700, 100-posoff,   1, 400),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },

    {"",                   D_FONT_BOLD(6),      QRect(450, 180-posoff,   1, 280),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(290, 180-posoff,   1, 240),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(330, 220-posoff,   1, 80),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(370, 220-posoff,   1, 80),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(410, 220-posoff,   1, 80),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(330, 340-posoff,   1, 120),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(370, 340-posoff,   1, 80),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(410, 340-posoff,   1, 80),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },

    {"",                   D_FONT_BOLD(6),      QRect(540, 180-posoff,   1, 240),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(580, 220-posoff,   1, 80),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(620, 220-posoff,   1, 80),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(660, 220-posoff,   1, 80),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(580, 340-posoff,   1, 120),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(620, 340-posoff,   1, 80),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(660, 340-posoff,   1, 80),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },

    //    {"",                   D_FONT_BOLD(6),      QRect(200, 100,   1, 360),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
//    {"",                   D_FONT_BOLD(6),      QRect(300, 100,   1, 360),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
//    {"",                   D_FONT_BOLD(6),      QRect(400, 100,   1, 360),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
//    {"",                   D_FONT_BOLD(6),      QRect(500, 100,   1, 360),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
//    {"",                   D_FONT_BOLD(6),      QRect(600, 100,   1, 360),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
//   {"",                   D_FONT_BOLD(6),      QRect(700-1, 100,   1, 360),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    //百分比 司控器手柄作用力百分比  制动级位请求百分比 牵引指令 制动指令 从硬线接收到制动指令
    {QObject::trUtf8("司控器手柄\n作用力百分比"),           D_FONT_BOLD(4),      QRect(201, 181-posoff,  88,  38),             Qt::white,                Qt::black,                CONTROL_LABEL,   ID_IGNORE },
    {QObject::trUtf8("牵引指令"),                         D_FONT_BOLD(4),      QRect(201, 221-posoff,  88,  38),             Qt::white,                Qt::black,                CONTROL_LABEL,   ID_IGNORE },
    {QObject::trUtf8("P牵引"),           D_FONT_BOLD(4),      QRect(201, 261-posoff,  88,  38),             Qt::white,                Qt::black,                CONTROL_LABEL,   ID_IGNORE },
    {QObject::trUtf8("牵引指令"),                         D_FONT_BOLD(4),      QRect(201, 301-posoff,  88,  38),             Qt::white,                Qt::black,                CONTROL_LABEL,   ID_IGNORE },
    {QObject::trUtf8("牵引指令反馈"),                   D_FONT_BOLD(4),      QRect(201, 341-posoff,  88,  38),             Qt::white,                Qt::black,                CONTROL_LABEL,   ID_IGNORE },
    {QObject::trUtf8("紧急牵引\n模式反馈"),                   D_FONT_BOLD(4),      QRect(201, 381-posoff,  88,  38),             Qt::white,                Qt::black,                CONTROL_LABEL,   ID_IGNORE },

    {QObject::trUtf8("制动级位\n请求百分比"),             D_FONT_BOLD(4),      QRect(451, 181-posoff,  88,  38),             Qt::white,                Qt::black,                CONTROL_LABEL,   ID_IGNORE },
    {QObject::trUtf8("制动指令"),                         D_FONT_BOLD(4),      QRect(451, 221-posoff,  88,  38),             Qt::white,                Qt::black,                CONTROL_LABEL,   ID_IGNORE },
    {QObject::trUtf8("B制动"),               D_FONT_BOLD(4),      QRect(451, 261-posoff,  88,  38),             Qt::white,                Qt::black,                CONTROL_LABEL,   ID_IGNORE },
    {QObject::trUtf8("制动指令"),                         D_FONT_BOLD(4),      QRect(451, 301-posoff,  88,  38),             Qt::white,                Qt::black,                CONTROL_LABEL,   ID_IGNORE },
    {QObject::trUtf8("常用制动\n指令反馈"),                     D_FONT_BOLD(4),      QRect(451, 341-posoff,  88,  38),             Qt::white,                Qt::black,                CONTROL_LABEL,   ID_IGNORE },
    {QObject::trUtf8("快速制动\n指令反馈"),                   D_FONT_BOLD(4),      QRect(451, 381-posoff,  88,  38),             Qt::white,                Qt::black,                CONTROL_LABEL,   ID_IGNORE },


    {QObject::trUtf8("速度"),              D_FONT_BOLD(6),      QRect(103, 101-posoff,  94,  38),             Qt::white,                Qt::black,                CONTROL_LABEL,   ID_IGNORE },
    {QObject::trUtf8("CCU->HMI"),           D_FONT_BOLD(6),      QRect(103, 141-posoff,  94,  38),             Qt::white,                Qt::black,                CONTROL_LABEL,   ID_IGNORE },
    {QObject::trUtf8("百分比"),            D_FONT_BOLD(6),      QRect(103, 181-posoff,  94,  38),             Qt::white,                Qt::black,                CONTROL_LABEL,   ID_IGNORE },
    {QObject::trUtf8("CCU->VVVF"),           D_FONT_BOLD(6),      QRect(103, 221-posoff,  94,  38),             Qt::white,                Qt::black,                CONTROL_LABEL,   ID_IGNORE },
    {QObject::trUtf8("VVVF->CCU"),           D_FONT_BOLD(6),      QRect(103, 261-posoff,  94,  38),             Qt::white,                Qt::black,                CONTROL_LABEL,   ID_IGNORE },
    {QObject::trUtf8("CCU->BCU"),           D_FONT_BOLD(6),      QRect(103, 301-posoff,  94,  38),             Qt::white,                Qt::black,                CONTROL_LABEL,   ID_IGNORE },
    {QObject::trUtf8("BCU->CCU"),           D_FONT_BOLD(6),      QRect(103, 341-posoff,  94,  38),             Qt::white,                Qt::black,                CONTROL_LABEL,   ID_IGNORE },
    {QObject::trUtf8("BCU->CCU"),           D_FONT_BOLD(6),      QRect(103, 381-posoff,  94,  38),             Qt::white,                Qt::black,                CONTROL_LABEL,   ID_IGNORE },
    {QObject::trUtf8("RIOM_AI"),           D_FONT_BOLD(6),      QRect(103, 381+40-posoff,  94,  38),             Qt::white,                Qt::black,                CONTROL_LABEL,   ID_IGNORE },
    {QObject::trUtf8("保持制动缓解"),           D_FONT_BOLD(6),      QRect(103, 421+40-posoff,  94,  38),             Qt::white,                Qt::black,                CONTROL_LABEL,   ID_IGNORE },

    {QObject::trUtf8("0 KM/H"),                         D_FONT_BOLD(4),      QRect(225, 101-posoff,  450,  38),             Qt::white,                Qt::black,                CONTROL_LABEL,   ID_PIBLVL_LABEL_SPEED },
    {QObject::trUtf8("0 %"),                            D_FONT_BOLD(4),      QRect(225, 141-posoff,  450,  38),             Qt::white,                Qt::black,                CONTROL_LABEL,   ID_PIBLVL_LABEL_CTH },
    {QObject::trUtf8("0 %"),                            D_FONT_BOLD(3),      QRect(292, 181-posoff,  156,  38),             Qt::white,                Qt::black,                CONTROL_LABEL,   ID_PIBLVL_LABEL_TRCPER },
    {QObject::trUtf8("0 %"),                            D_FONT_BOLD(3),      QRect(542, 181-posoff,  156,  38),             Qt::white,                Qt::black,                CONTROL_LABEL,   ID_PIBLVL_LABEL_BRKPER },
    {QObject::trUtf8(""),                            D_FONT_BOLD(4),      QRect(292, 221-posoff,  36,  38),             Qt::white,                Qt::red,                CONTROL_LABEL,   ID_PIBLVL_LABEL_VVVFTRC1 },
    {QObject::trUtf8(""),                            D_FONT_BOLD(4),      QRect(542, 221-posoff,  36,  38),             Qt::white,                Qt::red,                CONTROL_LABEL,   ID_PIBLVL_LABEL_VVVFBRK1 },
{QObject::trUtf8(""),                            D_FONT_BOLD(4),      QRect(332, 221-posoff,  36,  38),             Qt::white,                Qt::red,                CONTROL_LABEL,   ID_PIBLVL_LABEL_VVVFTRC2 },
{QObject::trUtf8(""),                            D_FONT_BOLD(4),      QRect(582, 221-posoff,  36,  38),             Qt::white,                Qt::red,                CONTROL_LABEL,   ID_PIBLVL_LABEL_VVVFBRK2 },
{QObject::trUtf8(""),                            D_FONT_BOLD(4),      QRect(372, 221-posoff,  36,  38),             Qt::white,                Qt::red,                CONTROL_LABEL,   ID_PIBLVL_LABEL_VVVFTRC3 },
{QObject::trUtf8(""),                            D_FONT_BOLD(4),      QRect(622, 221-posoff,  36,  38),             Qt::white,                Qt::red,                CONTROL_LABEL,   ID_PIBLVL_LABEL_VVVFBRK3 },
{QObject::trUtf8(""),                            D_FONT_BOLD(4),      QRect(412, 221-posoff,  36,  38),             Qt::white,                Qt::red,                CONTROL_LABEL,   ID_PIBLVL_LABEL_VVVFTRC4 },
{QObject::trUtf8(""),                            D_FONT_BOLD(4),      QRect(662, 221-posoff,  36,  38),             Qt::white,                Qt::red,                CONTROL_LABEL,   ID_PIBLVL_LABEL_VVVFBRK4 },
    {QObject::trUtf8(""),                            D_FONT_BOLD(4),      QRect(292, 261-posoff,  36,  38),             Qt::white,                Qt::red,                CONTROL_LABEL,   ID_PIBLVL_LABEL_VTCTRC1 },
    {QObject::trUtf8(""),                            D_FONT_BOLD(4),      QRect(332, 261-posoff,  36,  38),             Qt::white,                Qt::red,                CONTROL_LABEL,   ID_PIBLVL_LABEL_VTCTRC2 },
    {QObject::trUtf8(""),                            D_FONT_BOLD(4),      QRect(372, 261-posoff,  36,  38),             Qt::white,                Qt::red,                CONTROL_LABEL,   ID_PIBLVL_LABEL_VTCTRC3 },
    {QObject::trUtf8(""),                            D_FONT_BOLD(4),      QRect(412, 261-posoff,  36,  38),             Qt::white,                Qt::red,                CONTROL_LABEL,   ID_PIBLVL_LABEL_VTCTRC4 },
    {QObject::trUtf8(""),                            D_FONT_BOLD(4),      QRect(542, 261-posoff,  36,  38),             Qt::white,                Qt::red,                CONTROL_LABEL,   ID_PIBLVL_LABEL_VTCBRK1 },
    {QObject::trUtf8(""),                            D_FONT_BOLD(4),      QRect(582, 261-posoff,  36,  38),             Qt::white,                Qt::red,                CONTROL_LABEL,   ID_PIBLVL_LABEL_VTCBRK2 },
    {QObject::trUtf8(""),                            D_FONT_BOLD(4),      QRect(622, 261-posoff,  36,  38),             Qt::white,                Qt::red,                CONTROL_LABEL,   ID_PIBLVL_LABEL_VTCBRK3 },
    {QObject::trUtf8(""),                            D_FONT_BOLD(4),      QRect(662, 261-posoff,  36,  38),             Qt::white,                Qt::red,                CONTROL_LABEL,   ID_PIBLVL_LABEL_VTCBRK4 },
    {QObject::trUtf8(""),                            D_FONT_BOLD(4),      QRect(292, 301-posoff,  156,  38),             Qt::white,                Qt::red,                CONTROL_LABEL,   ID_PIBLVL_LABEL_CTBTRC },
    {QObject::trUtf8(""),                            D_FONT_BOLD(4),      QRect(542, 301-posoff,  156,  38),             Qt::white,                Qt::red,                CONTROL_LABEL,   ID_PIBLVL_LABEL_CTBBRK },
    {QObject::trUtf8(""),                            D_FONT_BOLD(4),      QRect(292, 341-posoff,  36,  38),             Qt::white,                Qt::red,                CONTROL_LABEL,   ID_PIBLVL_LABEL_BTCTRC1 },
    {QObject::trUtf8(""),                            D_FONT_BOLD(4),      QRect(332, 341-posoff,  36,  38),             Qt::white,                Qt::red,                CONTROL_LABEL,   ID_PIBLVL_LABEL_BTCTRC2 },
    {QObject::trUtf8(""),                            D_FONT_BOLD(4),      QRect(372, 341-posoff,  36,  38),             Qt::white,                Qt::red,                CONTROL_LABEL,   ID_PIBLVL_LABEL_BTCTRC3 },
    {QObject::trUtf8(""),                            D_FONT_BOLD(4),      QRect(412, 341-posoff,  36,  38),             Qt::white,                Qt::red,                CONTROL_LABEL,   ID_PIBLVL_LABEL_BTCTRC4 },
    {QObject::trUtf8(""),                            D_FONT_BOLD(4),      QRect(542, 341-posoff,  36,  38),             Qt::white,                Qt::red,                CONTROL_LABEL,   ID_PIBLVL_LABEL_BTCBRK1 },
    {QObject::trUtf8(""),                            D_FONT_BOLD(4),      QRect(582, 341-posoff,  36,  38),             Qt::white,                Qt::red,                CONTROL_LABEL,   ID_PIBLVL_LABEL_BTCBRK2 },
    {QObject::trUtf8(""),                            D_FONT_BOLD(4),      QRect(622, 341-posoff,  36,  38),             Qt::white,                Qt::red,                CONTROL_LABEL,   ID_PIBLVL_LABEL_BTCBRK3 },
    {QObject::trUtf8(""),                            D_FONT_BOLD(4),      QRect(662, 341-posoff,  36,  38),             Qt::white,                Qt::red,                CONTROL_LABEL,   ID_PIBLVL_LABEL_BTCBRK4 },
    {QObject::trUtf8(""),                            D_FONT_BOLD(4),      QRect(292, 381-posoff,  36,  38),             Qt::white,                Qt::red,                CONTROL_LABEL,   ID_PIBLVL_LABEL_BTCFASTBRK1 },
    {QObject::trUtf8(""),                            D_FONT_BOLD(4),      QRect(332, 381-posoff,  36,  38),             Qt::white,                Qt::red,                CONTROL_LABEL,   ID_PIBLVL_LABEL_BTCFASTBRK2 },
    {QObject::trUtf8(""),                            D_FONT_BOLD(4),      QRect(372, 381-posoff,  36,  38),             Qt::white,                Qt::red,                CONTROL_LABEL,   ID_PIBLVL_LABEL_BTCFASTBRK3 },
    {QObject::trUtf8(""),                            D_FONT_BOLD(4),      QRect(412, 381-posoff,  36,  38),             Qt::white,                Qt::red,                CONTROL_LABEL,   ID_PIBLVL_LABEL_BTCFASTBRK4 },
    {QObject::trUtf8(""),                            D_FONT_BOLD(4),      QRect(542, 381-posoff,  36,  38),             Qt::white,                Qt::red,                CONTROL_LABEL,   ID_PIBLVL_LABEL_BTCEMRBRK1 },
    {QObject::trUtf8(""),                            D_FONT_BOLD(4),      QRect(582, 381-posoff,  36,  38),             Qt::white,                Qt::red,                CONTROL_LABEL,   ID_PIBLVL_LABEL_BTCEMRBRK2 },
    {QObject::trUtf8(""),                            D_FONT_BOLD(4),      QRect(622, 381-posoff,  36,  38),             Qt::white,                Qt::red,                CONTROL_LABEL,   ID_PIBLVL_LABEL_BTCEMRBRK3 },
    {QObject::trUtf8(""),                            D_FONT_BOLD(4),      QRect(662, 381-posoff,  36,  38),             Qt::white,                Qt::red,                CONTROL_LABEL,   ID_PIBLVL_LABEL_BTCEMRBRK4 },
    {QObject::trUtf8("0"),                            D_FONT_BOLD(4),      QRect(202, 381+40-posoff,  126,  38),             Qt::white,                Qt::black,                CONTROL_LABEL,   ID_PIBLVL_LABEL_RIOMAI1 },
    {QObject::trUtf8("0"),                            D_FONT_BOLD(4),      QRect(332, 381+40-posoff,  116,  38),             Qt::white,                Qt::black,                CONTROL_LABEL,   ID_PIBLVL_LABEL_RIOMAI2 },
    {QObject::trUtf8("0"),                            D_FONT_BOLD(4),      QRect(452, 381+40-posoff,  126,  38),             Qt::white,                Qt::black,                CONTROL_LABEL,   ID_PIBLVL_LABEL_RIOMAI3 },
    {QObject::trUtf8("0"),                            D_FONT_BOLD(4),      QRect(582, 381+40-posoff,  116,  38),             Qt::white,                Qt::black,                CONTROL_LABEL,   ID_PIBLVL_LABEL_RIOMAI4 },
    {QObject::trUtf8(""),                            D_FONT_BOLD(4),      QRect(202, 421+40-posoff,  496,  38),             Qt::white,                Qt::red,                CONTROL_LABEL,   ID_PIBLVL_LABEL_HBRELEASED },




};
int g_CleveldebugRomLen = sizeof(g_PicRom_Cleveldebug)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(C_PAGE_LEVELDEBUG,CPage)
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
        ON_BTNCLK(ID_LABEL_REALTIMEFAULTCONFIRM, OnRealtimefaultBtnClk)
END_MESSAGE_MAP()

C_PAGE_LEVELDEBUG::C_PAGE_LEVELDEBUG()
{
}

void C_PAGE_LEVELDEBUG::OnUpdatePage()
{
    QString tmp = QString::number(float (CTTR1_TrackBrakeCommand_U8)/250*100)+"%  "+
                  QString::number(float (CTTR2_TrackBrakeCommand_U8)/250*100)+"%  "+
                  QString::number(float (CTTR3_TrackBrakeCommand_U8)/250*100)+"%  "+
                  QString::number(float (CTTR4_TrackBrakeCommand_U8)/250*100)+"%  ";
    ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_SPEED ))->SetCtrlText(QString::number(CTHMI_TrainSpeed_U16)+"km/h ");
    ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_CTH ))->SetCtrlText(QString::number(CTHMI_Grade_U8)+"% ");
    ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_TRCPER ))->SetCtrlText(tmp);
    ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_BRKPER ))->SetCtrlText(QString::number(CTBR_Grade_U8)+"% ");

    if(CTTR1_Track_B1)
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_VVVFTRC1 ))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_VVVFTRC1 ))->SetCtrlBKColor(Qt::gray);
    }
    if(CTTR1_Brake_B1)
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_VVVFBRK1 ))->SetCtrlBKColor(Qt::gray);
    }else
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_VVVFBRK1 ))->SetCtrlBKColor(Qt::green);
    }

    if(CTTR2_Track_B1)
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_VVVFTRC2))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_VVVFTRC2 ))->SetCtrlBKColor(Qt::gray);
    }
    if(CTTR2_Brake_B1)
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_VVVFBRK2 ))->SetCtrlBKColor(Qt::gray);
    }else
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_VVVFBRK2))->SetCtrlBKColor(Qt::green);
    }

    if(CTTR3_Track_B1)
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_VVVFTRC3))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_VVVFTRC3 ))->SetCtrlBKColor(Qt::gray);
    }
    if(CTTR3_Brake_B1)
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_VVVFBRK3 ))->SetCtrlBKColor(Qt::gray);
    }else
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_VVVFBRK3))->SetCtrlBKColor(Qt::green);
    }

    if(CTTR4_Track_B1)
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_VVVFTRC4))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_VVVFTRC4 ))->SetCtrlBKColor(Qt::gray);
    }
    if(CTTR4_Brake_B1)
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_VVVFBRK4))->SetCtrlBKColor(Qt::gray);
    }else
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_VVVFBRK4))->SetCtrlBKColor(Qt::green);
    }

    if(TR1CT_Powering_B1)
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_VTCTRC1))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_VTCTRC1))->SetCtrlBKColor(Qt::gray);
    }
    if(TR1CT_Brake_B1)
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_VTCBRK1))->SetCtrlBKColor(Qt::gray);
    }else
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_VTCBRK1))->SetCtrlBKColor(Qt::green);
    }

    if(TR2CT_Powering_B1)
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_VTCTRC2))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_VTCTRC2))->SetCtrlBKColor(Qt::gray);
    }
    if(TR2CT_Brake_B1)
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_VTCBRK2))->SetCtrlBKColor(Qt::gray);
    }else
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_VTCBRK2))->SetCtrlBKColor(Qt::green);
    }

    if(TR3CT_Powering_B1)
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_VTCTRC3))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_VTCTRC3))->SetCtrlBKColor(Qt::gray);
    }
    if(TR3CT_Brake_B1)
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_VTCBRK3))->SetCtrlBKColor(Qt::gray);
    }else
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_VTCBRK3))->SetCtrlBKColor(Qt::green);
    }

    if(TR4CT_Powering_B1)
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_VTCTRC4))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_VTCTRC4))->SetCtrlBKColor(Qt::gray);
    }
    if(TR4CT_Brake_B1)
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_VTCBRK4))->SetCtrlBKColor(Qt::gray);
    }else
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_VTCBRK4))->SetCtrlBKColor(Qt::green);
    }

    if(CTBR_Traction_B1)
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_CTBTRC))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_CTBTRC))->SetCtrlBKColor(Qt::gray);
    }

    if(CTBR_Braking_B1)
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_CTBBRK))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_CTBBRK))->SetCtrlBKColor(Qt::gray);
    }
    ///////////
    if(BR1CT_Traction_B1)
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_BTCTRC1))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_BTCTRC1))->SetCtrlBKColor(Qt::gray);
    }
    if(BR1CT_Braking_B1)
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_BTCBRK1))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_BTCBRK1))->SetCtrlBKColor(Qt::gray);
    }
    if(BR1CT_EDM_B1)
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_BTCFASTBRK1))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_BTCFASTBRK1))->SetCtrlBKColor(Qt::gray);
    }
    if(BR1CT_FBR_B1)
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_BTCEMRBRK1))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_BTCEMRBRK1))->SetCtrlBKColor(Qt::gray);
    }

    if(BR2CT_Traction_B1)
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_BTCTRC2))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_BTCTRC2))->SetCtrlBKColor(Qt::gray);
    }
    if(BR2CT_Braking_B1)
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_BTCBRK2))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_BTCBRK2))->SetCtrlBKColor(Qt::gray);
    }
    if(BR2CT_EDM_B1)
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_BTCFASTBRK2))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_BTCFASTBRK2))->SetCtrlBKColor(Qt::gray);
    }
    if(BR2CT_FBR_B1)
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_BTCEMRBRK2))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_BTCEMRBRK2))->SetCtrlBKColor(Qt::gray);
    }

    if(BR3CT_Traction_B1)
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_BTCTRC3))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_BTCTRC3))->SetCtrlBKColor(Qt::gray);
    }
    if(BR3CT_Braking_B1)
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_BTCBRK3))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_BTCBRK3))->SetCtrlBKColor(Qt::gray);
    }
    if(BR3CT_EDM_B1)
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_BTCFASTBRK3))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_BTCFASTBRK3))->SetCtrlBKColor(Qt::gray);
    }
    if(BR3CT_FBR_B1)
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_BTCEMRBRK3))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_BTCEMRBRK3))->SetCtrlBKColor(Qt::gray);
    }

    if(BR4CT_Traction_B1)
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_BTCTRC4))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_BTCTRC4))->SetCtrlBKColor(Qt::gray);
    }
    if(BR4CT_Braking_B1)
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_BTCBRK4))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_BTCBRK4))->SetCtrlBKColor(Qt::gray);
    }
    if(BR4CT_EDM_B1)
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_BTCFASTBRK4))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_BTCFASTBRK4))->SetCtrlBKColor(Qt::gray);
    }
    if(BR4CT_FBR_B1)
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_BTCEMRBRK4))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_BTCEMRBRK4))->SetCtrlBKColor(Qt::gray);
    }

    ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_RIOMAI1 ))->SetCtrlText(QString::number(AICT_TC1AX1AI7Grade_U16));
    ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_RIOMAI2 ))->SetCtrlText(QString::number(AICT_TC1AX1AI8Grade_U16));
    ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_RIOMAI3 ))->SetCtrlText(QString::number(AICT_TC2AX1AI7Grade_U16));
    ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_RIOMAI4 ))->SetCtrlText(QString::number(AICT_TC2AX1AI8Grade_U16));

    if(CTBR_HBRel_B1)
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_HBRELEASED))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem( ID_PIBLVL_LABEL_HBRELEASED))->SetCtrlBKColor(Qt::gray);

    }
        UpdateRealtimefaults();
}

void C_PAGE_LEVELDEBUG::OnInitPage()
{

}

void C_PAGE_LEVELDEBUG::OnShowPage()
{
//    for(int i=1;i<g_CommStatusHelpRomLen;i++)
//    {

//        if(g_PicRom_CommStatusHelp[i]->nControlType==2)
//        {
//            if(g_PicRom_CommStatusHelp[i].nID<65535)
//            {
//                ((CButton *)GetDlgItem(g_PicRom_CommStatusHelp[i].nID))->SetCtrlText(g_PicRom_CommStatus[i]->showStr);
//            }


//        }

//    }

    //((CLabel *)GetDlgItem( ID_PIBCSH_LABEL_test ))->SetCtrlText(QObject::trUtf8("中央控制单元"));;



    #ifdef PAGE_BUTTON_BAR_NEW
        ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返  回"));
        ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
        ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
        ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
        ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
        ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText("");
        ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText("");
        ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText("");
        ((CButton *)GetDlgItem(IDLB_COM_BTN9))->SetCtrlText("");
        ((CButton *)GetDlgItem(IDLB_COM_BTN10))->SetCtrlText("");
        ((CButton *)GetDlgItem(IDLB_COM_BTN11))->SetCtrlText("");
        ((CButton *)GetDlgItem(IDLB_COM_BTN12))->SetCtrlText("");
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
void C_PAGE_LEVELDEBUG::UpdateRealtimefaults()
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

void C_PAGE_LEVELDEBUG::OnRealtimefaultBtnClk()
{
    g_faultsrom[g_romidx].confirm = true;
    g_realtimeFaultsbarList.removeAt(g_faultcount);
    if(g_faultcount>0)
    g_faultcount--;
    //m_faultcount--;

}

void C_PAGE_LEVELDEBUG::OnComBtn1Clk()
{
    ChangePage(PAGE_INDEX_MAINTAIN);
}

void C_PAGE_LEVELDEBUG::OnComBtn2Clk()
{

}

void C_PAGE_LEVELDEBUG::OnComBtn3Clk()
{

}

void C_PAGE_LEVELDEBUG::OnComBtn4Clk()
{

}

void C_PAGE_LEVELDEBUG::OnComBtn5Clk()
{

}

void C_PAGE_LEVELDEBUG::OnComBtn6Clk()
{

}

#ifdef PAGE_BUTTON_BAR_NEW
void C_PAGE_LEVELDEBUG::OnComBtn7Clk()
{

}

void C_PAGE_LEVELDEBUG::OnComBtn8Clk()
{

}
void C_PAGE_LEVELDEBUG::OnComBtn9Clk()
{

}
void C_PAGE_LEVELDEBUG::OnComBtn10Clk()
{

}
void C_PAGE_LEVELDEBUG::OnComBtn11Clk()
{

}
void C_PAGE_LEVELDEBUG::OnComBtn12Clk()
{

}
#endif



