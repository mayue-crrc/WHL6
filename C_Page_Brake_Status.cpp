#include "C_Page_Brake_Status.h"
#include <QApplication>

#include "CRealTimeFaultsWarnningDialog.h"
#include <QTranslator>



ROMDATA g_PicRom_BrakeStatus[] =
{

#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW_WH
#endif


#ifdef PAGE_HEADER_NEW

  D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("制动") )

    {"RIGHT",                  D_FONT_BOLD(6),      QRect(715, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBBRAKESTATE_ARROW_RIGHT                },
    {"LEFT",                   D_FONT_BOLD(6),      QRect( 40, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBBRAKESTATE_ARROW_LEFT                 },


    {"",                       D_FONT_BOLD(4),      QRect(100, 70, 600,  70),           Qt::black,                Qt::gray,                CONTROL_TRAIN,           ID_PIBBRAKESTATE_TRAIN         },
  //  {QObject::trUtf8("通信中断"),          D_FONT_BOLD(10),      QRect( 10,   3, 162,  30),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PIBBRAKESTATE_INTERRUPT         },


#endif

#ifdef PAGE_HEADER_OLD
    D_COMMON_PAGE_HEADER(QObject::trUtf8("        运    行") )
    D_COMMON_PAGE_BUTTON_BAR

    {QObject::trUtf8("网压"),              D_FONT_BOLD(8),      QRect( 4,   4,  56,  34),           Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(62,   2,  80,  38),           Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_V        },

    {QObject::trUtf8("网流"),              D_FONT_BOLD(8),      QRect(143,   4, 56,  34),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(200,   2, 80,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_A        },

    {"FaultRed.PNG",           D_DEFAULT_FONT,      QRect(730,  45,  55,  55),         Qt::black,                  Qt::black,                  CONTROL_IMAGE,            ID_PIBBRAKESTATE_ICON_WARNNING       },

    {QObject::trUtf8("牵引*制动级位"),      D_FONT_BOLD(8),      QRect(470,  45, 150,  20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(470,  66, 150,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_TRACTIONMODEL        },

    {QObject::trUtf8("速度"),              D_FONT_BOLD(8),      QRect(630,  45,  80,  20),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(630,  66,  80,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_SPEED        },

    {QObject::trUtf8("终点站"),            D_FONT_BOLD(8),      QRect( 10,  66,  60,  30),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {"",                       D_FONT_BOLD(8),      QRect( 70,  68, 110,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_TERMINALSTATION        },

    {"",                       D_FONT_BOLD(6),      QRect( 9,  65, 171,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 9,  97, 171,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 9,  65,   1,  32),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(180, 65,   1,  32),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QObject::trUtf8("到达\n终点"),              D_FONT_BOLD(8),      QRect(200,  55,  50,  50),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL1_ARRIVETERMINALFLAG        },
//    {QObject::trUtf8("终点"),              D_FONT_BOLD(8),      QRect(200,  75,  40,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL2_ARRIVETERMINALFLAG        },
    {QObject::trUtf8("通信中断"),          D_FONT_BOLD(10),      QRect(260, 44, 200,  40),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PIBBRAKESTATE_INTERRUPT         },
    {"RIGHT",                  D_FONT_BOLD(6),      QRect(358,  85, 100,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,           ID_PIBBRAKESTATE_ARROW_RIGHT         },
    {"LEFT",                   D_FONT_BOLD(6),      QRect(258,  85, 100,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,           ID_PIBBRAKESTATE_ARROW_LEFT         },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect( 5, 115, 90,  40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_CURRENTORNEXTSTATION1        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(705, 115, 90,  40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_CURRENTORNEXTSTATION2        },

#endif


    {"",                       D_FONT_BOLD(6),      QRect( 10, 150, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 180, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 210, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 240, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 270, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 300, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 330, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 360, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 390, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 420, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect( 10, 450, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect( 10, 480, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 150,   1, 270),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(100, 150,   1, 270),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(200, 150,   1, 120),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(300, 150,   1, 120),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(400, 150,   1, 270),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(500, 150,   1, 120),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(600, 150,   1, 120),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(700-1, 150,   1, 270),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

{"",                       D_FONT_BOLD(6),      QRect(150, 360,   1, 60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
{"",                       D_FONT_BOLD(6),      QRect(250, 360,   1, 60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
{"",                       D_FONT_BOLD(6),      QRect(350, 360,   1, 60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
{"",                       D_FONT_BOLD(6),      QRect(450, 360,   1, 60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
{"",                       D_FONT_BOLD(6),      QRect(550, 360,   1, 60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
{"",                       D_FONT_BOLD(6),      QRect(650, 360,   1, 60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
{"",                       D_FONT_BOLD(6),      QRect(100, 360,   1, 60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
{"",                       D_FONT_BOLD(6),      QRect(200, 360,   1, 60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
{"",                       D_FONT_BOLD(6),      QRect(300, 360,   1, 60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
{"",                       D_FONT_BOLD(6),      QRect(400, 360,   1, 60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
{"",                       D_FONT_BOLD(6),      QRect(500, 360,   1, 60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
{"",                       D_FONT_BOLD(6),      QRect(600, 360,   1, 60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

   {QObject::trUtf8("车号"),                 D_FONT_BOLD(6),      QRect( 11, 151,  88,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(104, 153,  94,  24),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBRAKESTATE_LABEL_CARNUMBER1        },
    {QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(204, 153,  94,  24),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBRAKESTATE_LABEL_CARNUMBER2        },
    {QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(304, 153,  94,  24),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBRAKESTATE_LABEL_CARNUMBER3        },
    {QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(404, 153,  94,  24),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBRAKESTATE_LABEL_CARNUMBER4        },
    {QObject::trUtf8("5"),                   D_FONT_BOLD(6),      QRect(504, 153,  94,  24),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBRAKESTATE_LABEL_CARNUMBER5        },
    {QObject::trUtf8("6"),                   D_FONT_BOLD(6),      QRect(604, 153,  94,  24),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBRAKESTATE_LABEL_CARNUMBER6        },



    {QObject::trUtf8("转向架隔离"),        D_FONT_BOLD(4),      QRect( 11, 181,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("制动已施加"),      D_FONT_BOLD(4),      QRect( 11, 211,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("停放制动状态"),        D_FONT_BOLD(4),   QRect( 11, 241,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("保持制动已施加"),          D_FONT_BOLD(4),    QRect( 11, 271,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("自检间断测\n超过24小时"),            D_FONT_BOLD(4),    QRect( 11, 301,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("自检时间间隔\n超过26小时"),            D_FONT_BOLD(4),    QRect( 11, 331,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("载荷(t)"),        D_FONT_BOLD(4),    QRect( 11, 361,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("制动压力(Bar)"),           D_FONT_BOLD(4), QRect( 11, 391,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },


    {"",                       D_FONT_BOLD(6),      QRect(150, 180,   1, 60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(250, 180,   1, 60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(350, 180,   1, 60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(450, 180,   1, 60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(550, 180,   1, 60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(650, 180,   1, 60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(150, 360,   1, 60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(250, 360,   1, 60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(350, 360,   1, 60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(450, 360,   1, 60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(550, 360,   1, 60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(650, 360,   1, 60),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

{QObject::trUtf8(""),              D_FONT_BOLD(6),      QRect(104, 184,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBBRAKESTATE_LABEL_BRiCT_BrakeAppliedTC1Bog1_B1        },
{QObject::trUtf8(""),              D_FONT_BOLD(6),      QRect(154, 184,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_BRiCT_BrakeAppliedTC1Bog2_B1        },
{QObject::trUtf8(""),              D_FONT_BOLD(6),      QRect(204, 184,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_BRiCT_BrakeAppliedMp1Bog1_B1        },
{QObject::trUtf8(""),              D_FONT_BOLD(6),      QRect(254, 184,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_BRiCT_BrakeAppliedMp1Bog2_B1        },
{QObject::trUtf8(""),              D_FONT_BOLD(6),      QRect(304, 184,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_BRiCT_BrakeAppliedM1Bog1_B1        },
{QObject::trUtf8(""),              D_FONT_BOLD(6),      QRect(354, 184,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_BRiCT_BrakeAppliedM1Bog2_B1        },
{QObject::trUtf8(""),              D_FONT_BOLD(6),      QRect(404, 184,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_BRiCT_BrakeAppliedM2Bog2_B1        },
{QObject::trUtf8(""),              D_FONT_BOLD(6),      QRect(454, 184,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_BRiCT_BrakeAppliedM2Bog1_B1        },
{QObject::trUtf8(""),              D_FONT_BOLD(6),      QRect(504, 184,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_BRiCT_BrakeAppliedMp2Bog2_B1        },
{QObject::trUtf8(""),              D_FONT_BOLD(6),      QRect(554, 184,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_BRiCT_BrakeAppliedMp2Bog1_B1        },
{QObject::trUtf8(""),              D_FONT_BOLD(6),      QRect(604, 184,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_BRiCT_BrakeAppliedTC2Bog2_B1        },
{QObject::trUtf8(""),              D_FONT_BOLD(6),      QRect(654, 184,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_BRiCT_BrakeAppliedTC2Bog1_B1        },



{QObject::trUtf8(""),              D_FONT_BOLD(6),      QRect(104, 214,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_CAR1Brake_Applied1        },
{QObject::trUtf8(""),              D_FONT_BOLD(6),      QRect(154, 214,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_CAR1Brake_Applied2        },
{QObject::trUtf8(""),              D_FONT_BOLD(6),      QRect(204, 214,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_CAR2Brake_Applied1        },
{QObject::trUtf8(""),              D_FONT_BOLD(6),      QRect(254, 214,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_CAR2Brake_Applied2        },
{QObject::trUtf8(""),              D_FONT_BOLD(6),      QRect(304, 214,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_CAR3Brake_Applied1        },
{QObject::trUtf8(""),              D_FONT_BOLD(6),      QRect(354, 214,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_CAR3Brake_Applied2        },
{QObject::trUtf8(""),              D_FONT_BOLD(6),      QRect(404, 214,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_CAR4Brake_Applied2        },
{QObject::trUtf8(""),              D_FONT_BOLD(6),      QRect(454, 214,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_CAR4Brake_Applied1        },
{QObject::trUtf8(""),              D_FONT_BOLD(6),      QRect(504, 214,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_CAR5Brake_Applied2        },
{QObject::trUtf8(""),              D_FONT_BOLD(6),      QRect(554, 214,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_CAR5Brake_Applied1        },
{QObject::trUtf8(""),              D_FONT_BOLD(6),      QRect(604, 214,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_CAR6Brake_Applied2        },
{QObject::trUtf8(""),              D_FONT_BOLD(6),      QRect(654, 214,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_CAR6Brake_Applied1        },

{QObject::trUtf8(""),              D_FONT_BOLD(6),      QRect(103, 244,  94, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_BRiCT_PBStateTc1_B1        },
{QObject::trUtf8(""),              D_FONT_BOLD(6),      QRect(203, 244,  94, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_BRiCT_PBStateMp1_B1        },
{QObject::trUtf8(""),              D_FONT_BOLD(6),      QRect(303, 244,  94, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_BRiCT_PBStateM1_B1        },
{QObject::trUtf8(""),              D_FONT_BOLD(6),      QRect(403, 244,  94, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_BRiCT_PBStateM2_B1        },
{QObject::trUtf8(""),              D_FONT_BOLD(6),      QRect(503, 244,  94, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_BRiCT_PBStateMp2_B1        },
{QObject::trUtf8(""),              D_FONT_BOLD(6),      QRect(603, 244,  94, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_BRiCT_PBStateTc2_B1        },

{QObject::trUtf8(""),              D_FONT_BOLD(6),      QRect(120, 274,  260, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_BRiCT_HBAlreadyAppl1_B1        },
{QObject::trUtf8(""),              D_FONT_BOLD(6),      QRect(420, 274,  260, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_BRiCT_HBAlreadyAppl2_B1        },
{QObject::trUtf8(""),              D_FONT_BOLD(6),      QRect(120, 304,  260, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_BRiCT_SelfTest24h1_B1        },
{QObject::trUtf8(""),              D_FONT_BOLD(6),      QRect(420, 304,  260, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_BRiCT_SelfTest24h2_B1        },
{QObject::trUtf8(""),              D_FONT_BOLD(6),      QRect(120, 334,  260, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_BRiCT_SelfTest26h1_B1        },
{QObject::trUtf8(""),              D_FONT_BOLD(6),      QRect(420, 334,  260, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_BRiCT_SelfTest26h2_B1        },


    {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(104, 363,  42, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_CAR1AIRSPRPRESSURE1        },
    {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(154, 363,  42, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_CAR1AIRSPRPRESSURE2        },
    {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(204, 363,  42, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_CAR2AIRSPRPRESSURE1        },
    {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(254, 363,  42, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_CAR2AIRSPRPRESSURE2        },
    {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(304, 363,  42, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_CAR3AIRSPRPRESSURE1        },
    {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(354, 363,  42, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_CAR3AIRSPRPRESSURE2        },
    {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(404, 363,  42, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_CAR4AIRSPRPRESSURE2        },
    {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(454, 363,  42, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_CAR4AIRSPRPRESSURE1        },
    {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(504, 363,  42, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_CAR5AIRSPRPRESSURE2        },
    {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(554, 363,  42, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_CAR5AIRSPRPRESSURE1        },
    {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(604, 363,  42, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_CAR6AIRSPRPRESSURE2        },
    {QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(654, 363,  42, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_CAR6AIRSPRPRESSURE1        },

{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(104, 393,  42, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_CAR1EMERGENCYBRK1        },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(154, 393,  42, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_CAR1EMERGENCYBRK2        },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(204, 393,  42, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_CAR2EMERGENCYBRK1        },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(254, 393,  42, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_CAR2EMERGENCYBRK2        },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(304, 393,  42, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_CAR3EMERGENCYBRK1        },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(354, 393,  42, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_CAR3EMERGENCYBRK2        },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(404, 393,  42, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_CAR4EMERGENCYBRK2        },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(454, 393,  42, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_CAR4EMERGENCYBRK1        },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(504, 393,  42, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_CAR5EMERGENCYBRK2        },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(554, 393,  42, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_CAR5EMERGENCYBRK1        },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(604, 393,  42, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_CAR6EMERGENCYBRK2        },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(654, 393,  42, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_CAR6EMERGENCYBRK1        },





    {QObject::trUtf8(""),              D_FONT_BOLD(6),      QRect(103, 425,  294, 20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_SELFTESTEXPIRED24H1       },
    {QObject::trUtf8(""),              D_FONT_BOLD(6),      QRect(403, 425,  294, 20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE_LABEL_SELFTESTEXPIRED24H2       },

    {QObject::trUtf8(""),                  D_FONT_BOLD(6),      QRect(103, 454,  294,  26),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBBRAKESTATE_LABEL_SELFTESTSTATE1        },
    //{QObject::trUtf8(""),                  D_FONT_BOLD(6),      QRect(203, 454,  294,  26),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE        },
    //{QObject::trUtf8(""),                  D_FONT_BOLD(6),      QRect(303, 454,  94,  26),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8(""),                  D_FONT_BOLD(6),      QRect(403, 454,  294,  26),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBBRAKESTATE_LABEL_SELFTESTSTATE2        },
    //{QObject::trUtf8(""),                  D_FONT_BOLD(6),      QRect(503, 454,  94,  26),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE        },
    //{QObject::trUtf8(""),                  D_FONT_BOLD(6),      QRect(603, 454,  94,  26),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE        },

};
int g_BrakeStatusRomLen = sizeof(g_PicRom_BrakeStatus)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(C_Page_Brake_Status,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_LEAVEPAGE()
        ON_BTNCLK(IDLB_COM_BTN1, OnComBtn1Clk)
        ON_BTNCLK(IDLB_COM_BTN2, OnComBtn2Clk)
        ON_BTNCLK(IDLB_COM_BTN3, OnComBtn3Clk)
        ON_BTNCLK(IDLB_COM_BTN4, OnComBtn4Clk)
        ON_BTNCLK(IDLB_COM_BTN5, OnComBtn5Clk)
        ON_BTNCLK(IDLB_COM_BTN6, OnComBtn6Clk)
#ifdef PAGE_BUTTON_BAR_NEW
        ON_BTNCLK(IDLB_COM_BTN7, OnComBtn7Clk)
        ON_BTNCLK(IDLB_COM_BTN8, OnComBtn8Clk)
        ON_BTNCLK(IDLB_COM_BTN10, OnComBtn10Clk)
        ON_BTNCLK(IDLB_COM_BTN11, OnComBtn11Clk)

#endif
 //       ON_BTNCLK(ID_PIBBRAKESTATE_BUTTON_EMERGENCYRESCUE, OnEmergencyResuce)
        ON_BTNCLK(ID_PIBBRAKESTATE_ICON_WARNNING, OnRealTimeFaultsWarnningIconClk)
 //       ON_BTNCLK(ID_PIBBRAKESTATE_BUTTON_PGDN, OnPageDownBtnClk)
 //       ON_BTNCLK(ID_PIBBRAKESTATE_BUTTON_BRKTESTSELF,OnBRKTestSelfClk)
       // ON_BTNCLK(ID_PIBBRAKESTATE_BUTTON_BRKTESTSELFSTOP,OnBRKTestSelfStop)
        ON_BTNCLK(ID_LABEL_REALTIMEFAULTCONFIRM, OnRealtimefaultBtnClk)
  END_MESSAGE_MAP()



C_Page_Brake_Status::C_Page_Brake_Status()
{
    m_BRKStart = false;

}
void C_Page_Brake_Status::OnUpdatePage()
{
    updateTrain(ID_PIBBRAKESTATE_TRAIN);
    updateArrow(ID_PIBBRAKESTATE_ARROW_LEFT,ID_PIBBRAKESTATE_ARROW_RIGHT);
    updateIsoBog();
    updateBApp();
    updateHBApp();
    updatePBState();
    updateselftest();
    updatemass();
    updateBpressure();
    UpdateRealtimefaults();
}

void C_Page_Brake_Status::OnInitPage()
{

#ifdef PAGE_HEADER_OLD

    ((CLabel *) GetDlgItem(ID_PIBBRAKESTATE_LABEL_CURRENTORNEXTSTATION1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBBRAKESTATE_LABEL_CURRENTORNEXTSTATION2))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_PIBBRAKESTATE_LABEL_V))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBBRAKESTATE_LABEL_A))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_PIBBRAKESTATE_LABEL_TRACTIONMODEL))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBBRAKESTATE_LABEL_SPEED))->SetBorderColor(Qt::white);

#endif

    //((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_TOWMODE))->SetBorderColor(Qt::white);
//    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL1_ARRIVETERMINALFLAG))->SetBorderColor(Qt::white);




}

void C_Page_Brake_Status::OnShowPage()
{
    ((CButton *)GetDlgItem(IDLB_COM_BTN10))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN11))->SetCtrlText(QObject::trUtf8("下一页"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN12))->SetCtrlText(QObject::trUtf8(""));
#ifdef PAGE_BUTTON_BAR_NEW
//    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("主菜单"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8("运   行"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8("辅助状态"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8("牵引状态"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8("旁路状态"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("空调设置"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QObject::trUtf8(""));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QObject::trUtf8("帮   助"));

//    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("主菜单"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8("运   行"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8("制动状态"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8("牵引状态"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8("辅助状态"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("旁路状态"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QObject::trUtf8("空调状态"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QObject::trUtf8("帮   助"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("主菜单"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8("车辆状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8("空调设置"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8("故   障"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("帮   助"));
#endif
//    if (1 == EmergencyResuce)
//        ((CButton*)GetDlgItem(ID_PIBBRAKESTATE_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_DOWN);
//    else
//        ((CButton*)GetDlgItem(ID_PIBBRAKESTATE_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_UP);

    UpdateEmergencyBroadcast();
    this->InitPageHeader();
    m_BRKStart = false;
    time_set_timer = 5;


}

void C_Page_Brake_Status::OnLeavePage()
{
    if(CGlobal::m_nNextPageIndex != PAGE_INDEX_BRAKESTATUSHELP)
    {
        //OnBRKTestSelfStop();
    }
}
void C_Page_Brake_Status::UpdateRealtimefaults()
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

void C_Page_Brake_Status::OnRealtimefaultBtnClk()
{
    g_faultsrom[g_romidx].confirm = true;
    g_realtimeFaultsbarList.removeAt(g_faultcount);
    if(g_faultcount>0)
    g_faultcount--;
    //m_faultcount--;
    //qlg m_romidx;

}

void C_Page_Brake_Status::updateArrFinalStation()
{

#ifdef PAGE_HEADER_OLD

    if(run_status_data3 == run_status_data6)
        arrive_final_station = 1;
    else
        arrive_final_station = 0;

    if (Bit(arrive_final_station,1))
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL1_ARRIVETERMINALFLAG))->ShowLabel();
    else
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL1_ARRIVETERMINALFLAG))->HideLabel();

#endif

}
#ifdef PAGE_BUTTON_BAR_NEW


void C_Page_Brake_Status::OnComBtn1Clk()
{
    ChangePage(PAGE_INDEX_RUNSTATE);
}

void C_Page_Brake_Status::OnComBtn2Clk()
{
    ChangePage(PAGE_INDEX_MAINTAIN);
}

void C_Page_Brake_Status::OnComBtn3Clk()
{
     ChangePage(PAGE_INDEX_CARSTATUS3);
}

void C_Page_Brake_Status::OnComBtn4Clk()
{
   // ChangePage(PAGE_INDEX_CARSTATUS3);

     ChangePage(PAGE_INDEX_TCUBLOCKREASON);
}

void C_Page_Brake_Status::OnComBtn5Clk()
{
     ChangePage(PAGE_INDEX_INSTANCYBROADCAST);
}

void C_Page_Brake_Status::OnComBtn6Clk()
{
    ChangePage(PAGE_INDEX_FASPage);
}
void C_Page_Brake_Status::OnComBtn7Clk()
{
    ChangePage(PAGE_INDEX_PISALARM);
}

void C_Page_Brake_Status::OnComBtn8Clk()
{
    //ChangePage(PAGE_INDEX_BRAKESTATUSHELP);
}
void C_Page_Brake_Status::OnComBtn10Clk()
{
    //

}
void C_Page_Brake_Status::OnComBtn11Clk()
{
    ChangePage(PAGE_INDEX_BRAKESTATUS2);
}
#else
    void C_Page_Brake_Status::OnComBtn1Clk()
    {
        ChangePage(PAGE_INDEX_MAIN);
    }

    void C_Page_Brake_Status::OnComBtn2Clk()
    {

    }

    void C_Page_Brake_Status::OnComBtn3Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS1);
    }

    void C_Page_Brake_Status::OnComBtn4Clk()
    {
         ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void C_Page_Brake_Status::OnComBtn5Clk()
    {
         ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void C_Page_Brake_Status::OnComBtn6Clk()
    {
        ChangePage(PAGE_INDEX_RUNHELP1);
    }
#endif



void C_Page_Brake_Status::OnBroadCastBtnClk()
{
    ChangePage(PAGE_INDEX_INSTANCYBROADCAST);
}
void C_Page_Brake_Status::updatePBState()
{
    if(bool(BR1CT_PBStateTc1_B1) == false)
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_BRiCT_PBStateTc1_B1))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_BRiCT_PBStateTc1_B1))->SetCtrlBKColor(Qt::white);
    }
    if(bool(BR1CT_PBStateMp1_B1) == false)
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_BRiCT_PBStateMp1_B1))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_BRiCT_PBStateMp1_B1))->SetCtrlBKColor(Qt::white);
    }
    if(bool(BR1CT_PBStateM1_B1) == false)
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_BRiCT_PBStateM1_B1))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_BRiCT_PBStateM1_B1))->SetCtrlBKColor(Qt::white);
    }

    if(bool(BR2CT_PBStateTc2_B1) == false)
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_BRiCT_PBStateTc2_B1))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_BRiCT_PBStateTc2_B1))->SetCtrlBKColor(Qt::white);
    }
    if(bool(BR2CT_PBStateMp2_B1) == false)
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_BRiCT_PBStateMp2_B1))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_BRiCT_PBStateMp2_B1))->SetCtrlBKColor(Qt::white);
    }
    if(bool(BR2CT_PBStateM2_B1) == false)
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_BRiCT_PBStateM2_B1))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_BRiCT_PBStateM2_B1))->SetCtrlBKColor(Qt::white);
    }
}
void C_Page_Brake_Status::updateIsoBog()
{
    if(BR1CT_IsolTc1Bog1_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_BRiCT_BrakeAppliedTC1Bog1_B1))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_BRiCT_BrakeAppliedTC1Bog1_B1))->SetCtrlBKColor(Qt::white);
    }
    if(BR1CT_IsolTc1Bog2_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_BRiCT_BrakeAppliedTC1Bog2_B1))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_BRiCT_BrakeAppliedTC1Bog2_B1))->SetCtrlBKColor(Qt::white);
    }

    if(BR1CT_IsolMp1Bog1_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_BRiCT_BrakeAppliedMp1Bog1_B1))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_BRiCT_BrakeAppliedMp1Bog1_B1))->SetCtrlBKColor(Qt::white);
    }
    if(BR1CT_IsolMp1Bog2_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_BRiCT_BrakeAppliedMp1Bog2_B1))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_BRiCT_BrakeAppliedMp1Bog2_B1))->SetCtrlBKColor(Qt::white);
    }

    if(BR1CT_IsolM1Bog1_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_BRiCT_BrakeAppliedM1Bog1_B1))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_BRiCT_BrakeAppliedM1Bog1_B1))->SetCtrlBKColor(Qt::white);
    }
    if(BR1CT_IsolM1Bog2_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_BRiCT_BrakeAppliedM1Bog2_B1))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_BRiCT_BrakeAppliedM1Bog2_B1))->SetCtrlBKColor(Qt::white);
    }

    if(BR2CT_IsolTc2Bog1_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_BRiCT_BrakeAppliedTC2Bog1_B1))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_BRiCT_BrakeAppliedTC2Bog1_B1))->SetCtrlBKColor(Qt::white);
    }
    if(BR2CT_IsolTc2Bog2_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_BRiCT_BrakeAppliedTC2Bog2_B1))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_BRiCT_BrakeAppliedTC2Bog2_B1))->SetCtrlBKColor(Qt::white);
    }

    if(BR2CT_IsolMp2Bog1_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_BRiCT_BrakeAppliedMp2Bog1_B1))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_BRiCT_BrakeAppliedMp2Bog1_B1))->SetCtrlBKColor(Qt::white);
    }
    if(BR2CT_IsolMp2Bog2_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_BRiCT_BrakeAppliedMp2Bog2_B1))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_BRiCT_BrakeAppliedMp2Bog2_B1))->SetCtrlBKColor(Qt::white);
    }

    if(BR2CT_IsolM2Bog1_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_BRiCT_BrakeAppliedM2Bog1_B1))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_BRiCT_BrakeAppliedM2Bog1_B1))->SetCtrlBKColor(Qt::white);
    }
    if(BR2CT_IsolM2Bog2_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_BRiCT_BrakeAppliedM2Bog2_B1))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_BRiCT_BrakeAppliedM2Bog2_B1))->SetCtrlBKColor(Qt::white);
    }
}
void C_Page_Brake_Status::updateHBApp()
{
    if(BR1CT_HBAlreadyAppl_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_BRiCT_HBAlreadyAppl1_B1))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_BRiCT_HBAlreadyAppl1_B1))->SetCtrlBKColor(Qt::white);
    }
    if(BR2CT_HBAlreadyAppl_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_BRiCT_HBAlreadyAppl2_B1))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_BRiCT_HBAlreadyAppl2_B1))->SetCtrlBKColor(Qt::white);
    }
}
void C_Page_Brake_Status::updateBApp()
{
    if(BR1CT_BrakeAppliedTC1Bog1_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR1Brake_Applied1))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR1Brake_Applied1))->SetCtrlBKColor(Qt::white);
    }
    if(BR1CT_BrakeAppliedTC1Bog2_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR1Brake_Applied2))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR1Brake_Applied2))->SetCtrlBKColor(Qt::white);
    }
    if(BR1CT_BrakeAppliedMP1Bog1_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR2Brake_Applied1))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR2Brake_Applied1))->SetCtrlBKColor(Qt::white);
    }
    if(BR1CT_BrakeAppliedMP1Bog2_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR2Brake_Applied2))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR2Brake_Applied2))->SetCtrlBKColor(Qt::white);
    }
    if(BR1CT_BrakeAppliedM1Bog1_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR3Brake_Applied1))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR3Brake_Applied1))->SetCtrlBKColor(Qt::white);
    }
    if(BR1CT_BrakeAppliedM1Bog2_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR3Brake_Applied2))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR3Brake_Applied2))->SetCtrlBKColor(Qt::white);
    }

    if(BR2CT_BrakeAppliedM2Bog1_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR4Brake_Applied1))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR4Brake_Applied1))->SetCtrlBKColor(Qt::white);
    }
    if(BR2CT_BrakeAppliedM2Bog2_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR4Brake_Applied2))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR4Brake_Applied2))->SetCtrlBKColor(Qt::white);
    }
    if(BR2CT_BrakeAppliedMP2Bog1_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR5Brake_Applied1))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR5Brake_Applied1))->SetCtrlBKColor(Qt::white);
    }
    if(BR2CT_BrakeAppliedMP2Bog2_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR5Brake_Applied2))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR5Brake_Applied2))->SetCtrlBKColor(Qt::white);
    }
    if(BR2CT_BrakeAppliedTC2Bog1_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR6Brake_Applied1))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR6Brake_Applied1))->SetCtrlBKColor(Qt::white);
    }
    if(BR2CT_BrakeAppliedTC2Bog2_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR6Brake_Applied2))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR6Brake_Applied2))->SetCtrlBKColor(Qt::white);
    }
}
void C_Page_Brake_Status::updateselftest()
{
    if(BR1CT_SelfTest24h_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_BRiCT_SelfTest24h1_B1))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_BRiCT_SelfTest24h1_B1))->SetCtrlBKColor(Qt::white);
    }
    if(BR2CT_SelfTest24h_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_BRiCT_SelfTest24h2_B1))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_BRiCT_SelfTest24h2_B1))->SetCtrlBKColor(Qt::white);
    }

    if(BR1CT_SelfTest26h_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_BRiCT_SelfTest26h1_B1))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_BRiCT_SelfTest26h1_B1))->SetCtrlBKColor(Qt::white);
    }
    if(BR2CT_SelfTest26h_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_BRiCT_SelfTest26h2_B1))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_BRiCT_SelfTest26h2_B1))->SetCtrlBKColor(Qt::white);
    }
}
void C_Page_Brake_Status::updatemass()
{
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR1AIRSPRPRESSURE1))->SetCtrlText(QString::number(float(BR1CT_MassTc12Bog1_I16)/10,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR1AIRSPRPRESSURE2))->SetCtrlText(QString::number(float(BR1CT_MassTc12Bog2_I16)/10,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR2AIRSPRPRESSURE1))->SetCtrlText(QString::number(float(BR1CT_MassMp12Bog1_I16)/10,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR2AIRSPRPRESSURE2))->SetCtrlText(QString::number(float(BR1CT_MassMp12Bog2_I16)/10,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR3AIRSPRPRESSURE1))->SetCtrlText(QString::number(float(BR1CT_MassM12Bog1_I16)/10,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR3AIRSPRPRESSURE2))->SetCtrlText(QString::number(float(BR1CT_MassM12Bog2_I16)/10,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR4AIRSPRPRESSURE1))->SetCtrlText(QString::number(float(BR2CT_MassM12Bog1_I16)/10,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR4AIRSPRPRESSURE2))->SetCtrlText(QString::number(float(BR2CT_MassM12Bog2_I16)/10,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR5AIRSPRPRESSURE1))->SetCtrlText(QString::number(float(BR2CT_MassMp12Bog1_I16)/10,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR5AIRSPRPRESSURE2))->SetCtrlText(QString::number(float(BR2CT_MassMp12Bog2_I16)/10,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR6AIRSPRPRESSURE1))->SetCtrlText(QString::number(float(BR2CT_MassTc12Bog1_I16)/10,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR6AIRSPRPRESSURE2))->SetCtrlText(QString::number(float(BR2CT_MassTc12Bog2_I16)/10,'f',1));
}
void C_Page_Brake_Status::updateBpressure()
{
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR1EMERGENCYBRK1))->SetCtrlText(QString::number(float(BR1CT_BCPTC1Bog1_U8)/10,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR1EMERGENCYBRK2))->SetCtrlText(QString::number(float(BR1CT_BCPTC1Bog2_U8)/10,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR2EMERGENCYBRK1))->SetCtrlText(QString::number(float(BR1CT_BCPMP1Bog1_U8)/10,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR2EMERGENCYBRK2))->SetCtrlText(QString::number(float(BR1CT_BCPMP1Bog2_U8)/10,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR3EMERGENCYBRK1))->SetCtrlText(QString::number(float(BR1CT_BCPM1Bog1_U8)/10,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR3EMERGENCYBRK2))->SetCtrlText(QString::number(float(BR1CT_BCPM1Bog2_U8)/10,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR4EMERGENCYBRK1))->SetCtrlText(QString::number(float(BR2CT_BCPM2Bog1_U8)/10,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR4EMERGENCYBRK2))->SetCtrlText(QString::number(float(BR2CT_BCPM2Bog2_U8)/10,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR5EMERGENCYBRK1))->SetCtrlText(QString::number(float(BR2CT_BCPMP2Bog1_U8)/10,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR5EMERGENCYBRK2))->SetCtrlText(QString::number(float(BR2CT_BCPMP2Bog2_U8)/10,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR6EMERGENCYBRK1))->SetCtrlText(QString::number(float(BR2CT_BCPTC2Bog1_U8)/10,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR6EMERGENCYBRK2))->SetCtrlText(QString::number(float(BR2CT_BCPTC2Bog2_U8)/10,'f',1));
}
void C_Page_Brake_Status::OnBRKTestSelfStop()
{
    HMiCT_BCUSelfTestReq_B1=false;
    m_BRKStart = false;
    UpdateBCU_selftest_test();
    //((CButton *)GetDlgItem(ID_PIBBRAKESTATE_BUTTON_BRKTESTSELF))->ChangeButtonState(LBUTTON_UP);
}


void C_Page_Brake_Status::UpdateBCU_Online()
{



}

void C_Page_Brake_Status::UpdateBrake_Applied()
{
    int Car1_Brake_Applied_color1        = 0;
    int Car1_Brake_Applied_color2        = 0;
    int Car2_Brake_Applied_color1        = 0;
    int Car2_Brake_Applied_color2        = 0;
    int Car3_Brake_Applied_color1        = 0;
    int Car3_Brake_Applied_color2        = 0;
    int Car4_Brake_Applied_color1        = 0;
    int Car4_Brake_Applied_color2        = 0;
    int Car5_Brake_Applied_color1        = 0;
    int Car5_Brake_Applied_color2        = 0;
    int Car6_Brake_Applied_color1        = 0;
    int Car6_Brake_Applied_color2        = 0;


    if(BCU1CT_Brake_Applied_1_B1)
    {
        Car1_Brake_Applied_color1=1;
    }
    else
    {
        Car1_Brake_Applied_color1=0;
    }

    if(BCU1CT_Brake_Applied_2_B1)
    {
        Car1_Brake_Applied_color2=1;
    }
    else
    {
        Car1_Brake_Applied_color2=0;
    }

    if(BCU1CT_Brake_Applied_3_B1)
    {
        Car2_Brake_Applied_color1=1;
    }
    else
    {
        Car2_Brake_Applied_color1=0;
    }

    if(BCU1CT_Brake_Applied_4_B1)
    {
        Car2_Brake_Applied_color2=1;
    }
    else
    {
        Car2_Brake_Applied_color2=0;
    }

    if(BCU1CT_Brake_Applied_5_B1)
    {
        Car3_Brake_Applied_color1=1;
    }
    else
    {
        Car3_Brake_Applied_color1=0;
    }

    if(BCU1CT_Brake_Applied_6_B1)
    {
        Car3_Brake_Applied_color2=1;
    }
    else
    {
        Car3_Brake_Applied_color2=0;
    }

    if(BCU3CT_Brake_Applied_1_B1)
    {
        Car6_Brake_Applied_color2=1;
    }
    else
    {
        Car6_Brake_Applied_color2=0;
    }

    if(BCU3CT_Brake_Applied_2_B1)
    {
        Car6_Brake_Applied_color1=1;
    }
    else
    {
        Car6_Brake_Applied_color1=0;
    }

    if(BCU3CT_Brake_Applied_3_B1)
    {
        Car5_Brake_Applied_color2=1;
    }
    else
    {
        Car5_Brake_Applied_color2=0;
    }

    if(BCU3CT_Brake_Applied_4_B1)
    {
        Car5_Brake_Applied_color1=1;
    }
    else
    {
        Car5_Brake_Applied_color1=0;
    }

    if(BCU3CT_Brake_Applied_5_B1)
    {
        Car4_Brake_Applied_color2=1;
    }
    else
    {
        Car4_Brake_Applied_color2=0;
    }

    if(BCU3CT_Brake_Applied_6_B1)
    {
        Car4_Brake_Applied_color1=1;
    }
    else
    {
        Car4_Brake_Applied_color1=0;
    }


    SetBoolLabelColor(ID_PIBBRAKESTATE_LABEL_CAR1Brake_Applied1,Car1_Brake_Applied_color1);
    SetBoolLabelColor(ID_PIBBRAKESTATE_LABEL_CAR1Brake_Applied2,Car1_Brake_Applied_color2);
    SetBoolLabelColor(ID_PIBBRAKESTATE_LABEL_CAR2Brake_Applied1,Car2_Brake_Applied_color1);
    SetBoolLabelColor(ID_PIBBRAKESTATE_LABEL_CAR2Brake_Applied2,Car2_Brake_Applied_color2);
    SetBoolLabelColor(ID_PIBBRAKESTATE_LABEL_CAR3Brake_Applied1,Car3_Brake_Applied_color1);
    SetBoolLabelColor(ID_PIBBRAKESTATE_LABEL_CAR3Brake_Applied2,Car3_Brake_Applied_color2);
    SetBoolLabelColor(ID_PIBBRAKESTATE_LABEL_CAR4Brake_Applied1,Car4_Brake_Applied_color1);
    SetBoolLabelColor(ID_PIBBRAKESTATE_LABEL_CAR4Brake_Applied2,Car4_Brake_Applied_color2);
    SetBoolLabelColor(ID_PIBBRAKESTATE_LABEL_CAR5Brake_Applied1,Car5_Brake_Applied_color1);
    SetBoolLabelColor(ID_PIBBRAKESTATE_LABEL_CAR5Brake_Applied2,Car5_Brake_Applied_color2);
    SetBoolLabelColor(ID_PIBBRAKESTATE_LABEL_CAR6Brake_Applied1,Car6_Brake_Applied_color1);
    SetBoolLabelColor(ID_PIBBRAKESTATE_LABEL_CAR6Brake_Applied2,Car6_Brake_Applied_color2);

}

void C_Page_Brake_Status::UpdateBRKCYLPressure()
{
}
void C_Page_Brake_Status::UpdateBSRPressure()
{

}
void C_Page_Brake_Status::UpdateMREPressure()
{
    /*
    int BCU1_pressure_color  = 0;
    int BCU2_pressure_color  = 0;
    int BCU3_pressure_color  = 0;
    int BCU4_pressure_color  = 0;


    double Brake_cylinder_pressure1=0;
    double Brake_cylinder_pressure2=0;
    double Brake_cylinder_pressure3=0;
    double Brake_cylinder_pressure4=0;



        Brake_cylinder_pressure1 = BCU1CT_MRE_pressure_1_U16*0.05/100;
        Brake_cylinder_pressure2 = BCU1CT_Bp_pressure_3_U16*0.05/100;
        Brake_cylinder_pressure3 = BCU3CT_Bp_pressure_3_U16*0.05/100;
        Brake_cylinder_pressure4 = BCU3CT_MRE_pressure_1_U16*0.05/100;


        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR1MREPRESSURE))->SetCtrlText(QString::number(Brake_cylinder_pressure1,'f',2));
    //    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR2BPPRESSURE))->SetCtrlText(QString::number(Brake_cylinder_pressure2,'f',2));
    //    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR5BPPRESSURE))->SetCtrlText(QString::number(Brake_cylinder_pressure3,'f',2));
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CAR6MREPRESSURE))->SetCtrlText(QString::number(Brake_cylinder_pressure4,'f',2));


        if (BCU1CT_MRE_pressure_1_Atcive_B1)
        {
            BCU1_pressure_color = 1;
        }
        else
        {
            BCU1_pressure_color = 0;
        }

        if (BCU1CT_Bp_pressure_3_Atcive_B1)
        {
            BCU2_pressure_color = 1;
        }
        else
        {
            BCU2_pressure_color = 0;
        }

        if (BCU3CT_Bp_pressure_3_Atcive_B1 )
        {
            BCU3_pressure_color = 1;
        }
        else
        {
            BCU3_pressure_color = 0;
        }

        if (BCU3CT_MRE_pressure_1_Atcive_B1)
        {
            BCU4_pressure_color = 1;
        }
        else
        {
            BCU4_pressure_color = 0;
        }

        SetLabelColor(ID_PIBBRAKESTATE_LABEL_CAR1MREPRESSURE, BCU1_pressure_color);
      //  SetLabelColor(ID_PIBBRAKESTATE_LABEL_CAR2BPPRESSURE, BCU2_pressure_color);
      //  SetLabelColor(ID_PIBBRAKESTATE_LABEL_CAR5BPPRESSURE, BCU3_pressure_color);
        SetLabelColor(ID_PIBBRAKESTATE_LABEL_CAR6MREPRESSURE, BCU4_pressure_color);
*/
}

void C_Page_Brake_Status::UpdateParkPressure()
{
}
void C_Page_Brake_Status::UpdateAirSpringPressure()
{
}
void C_Page_Brake_Status::UpdateEmergencyBrake()
{
        int Car1_Emergency_brake_active_color1        = 0;
        int Car1_Emergency_brake_active_color2        = 0;
        int Car2_Emergency_brake_active_color1        = 0;
        int Car2_Emergency_brake_active_color2        = 0;
        int Car3_Emergency_brake_active_color1        = 0;
        int Car3_Emergency_brake_active_color2        = 0;
        int Car4_Emergency_brake_active_color1        = 0;
        int Car4_Emergency_brake_active_color2        = 0;
        int Car5_Emergency_brake_active_color1        = 0;
        int Car5_Emergency_brake_active_color2        = 0;
        int Car6_Emergency_brake_active_color1        = 0;
        int Car6_Emergency_brake_active_color2        = 0;


        if(BCU1CT_Emergency_brake_active_1_B1)
        {
            Car1_Emergency_brake_active_color1=1;
        }
        else
        {
            Car1_Emergency_brake_active_color1=0;
        }

        if(BCU1CT_Emergency_brake_active_2_B1)
        {
            Car1_Emergency_brake_active_color2=1;
        }
        else
        {
            Car1_Emergency_brake_active_color2=0;
        }

        if(BCU1CT_Emergency_brake_active_3_B1)
        {
            Car2_Emergency_brake_active_color1=1;
        }
        else
        {
            Car2_Emergency_brake_active_color1=0;
        }

        if(BCU1CT_Emergency_brake_active_4_B1)
        {
            Car2_Emergency_brake_active_color2=1;
        }
        else
        {
            Car2_Emergency_brake_active_color2=0;
        }

        if(BCU1CT_Emergency_brake_active_5_B1)
        {
            Car3_Emergency_brake_active_color1=1;
        }
        else
        {
            Car3_Emergency_brake_active_color1=0;
        }

        if(BCU1CT_Emergency_brake_active_6_B1)
        {
            Car3_Emergency_brake_active_color2=1;
        }
        else
        {
            Car3_Emergency_brake_active_color2=0;
        }

        if(BCU3CT_Emergency_brake_active_1_B1)
        {
            Car6_Emergency_brake_active_color2=1;
        }
        else
        {
            Car6_Emergency_brake_active_color2=0;
        }

        if(BCU3CT_Emergency_brake_active_2_B1)
        {
            Car6_Emergency_brake_active_color1=1;
        }
        else
        {
            Car6_Emergency_brake_active_color1=0;
        }

        if(BCU3CT_Emergency_brake_active_3_B1)
        {
            Car5_Emergency_brake_active_color2=1;
        }
        else
        {
            Car5_Emergency_brake_active_color2=0;
        }

        if(BCU3CT_Emergency_brake_active_4_B1)
        {
            Car5_Emergency_brake_active_color1=1;
        }
        else
        {
            Car5_Emergency_brake_active_color1=0;
        }

        if(BCU3CT_Emergency_brake_active_5_B1)
        {
            Car4_Emergency_brake_active_color2=1;
        }
        else
        {
            Car4_Emergency_brake_active_color2=0;
        }

        if(BCU3CT_Emergency_brake_active_6_B1)
        {
            Car4_Emergency_brake_active_color1=1;
        }
        else
        {
            Car4_Emergency_brake_active_color1=0;
        }


        SetBoolLabelColor(ID_PIBBRAKESTATE_LABEL_CAR1EMERGENCYBRK1,Car1_Emergency_brake_active_color1);
        SetBoolLabelColor(ID_PIBBRAKESTATE_LABEL_CAR1EMERGENCYBRK2,Car1_Emergency_brake_active_color2);
        SetBoolLabelColor(ID_PIBBRAKESTATE_LABEL_CAR2EMERGENCYBRK1,Car2_Emergency_brake_active_color1);
        SetBoolLabelColor(ID_PIBBRAKESTATE_LABEL_CAR2EMERGENCYBRK2,Car2_Emergency_brake_active_color2);
        SetBoolLabelColor(ID_PIBBRAKESTATE_LABEL_CAR3EMERGENCYBRK1,Car3_Emergency_brake_active_color1);
        SetBoolLabelColor(ID_PIBBRAKESTATE_LABEL_CAR3EMERGENCYBRK2,Car3_Emergency_brake_active_color2);
        SetBoolLabelColor(ID_PIBBRAKESTATE_LABEL_CAR4EMERGENCYBRK1,Car4_Emergency_brake_active_color1);
        SetBoolLabelColor(ID_PIBBRAKESTATE_LABEL_CAR4EMERGENCYBRK2,Car4_Emergency_brake_active_color2);
        SetBoolLabelColor(ID_PIBBRAKESTATE_LABEL_CAR5EMERGENCYBRK1,Car5_Emergency_brake_active_color1);
        SetBoolLabelColor(ID_PIBBRAKESTATE_LABEL_CAR5EMERGENCYBRK2,Car5_Emergency_brake_active_color2);
        SetBoolLabelColor(ID_PIBBRAKESTATE_LABEL_CAR6EMERGENCYBRK1,Car6_Emergency_brake_active_color1);
        SetBoolLabelColor(ID_PIBBRAKESTATE_LABEL_CAR6EMERGENCYBRK2,Car6_Emergency_brake_active_color2);

    }

void C_Page_Brake_Status::UpdateSelftestExp24h()
{


    if (BCU1CT_Selftest_Expired_24h_1_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_SELFTESTEXPIRED24H1))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_SELFTESTEXPIRED24H1))->SetCtrlBKColor(Qt::black);

    }
    if (BCU3CT_Selftest_Expired_24h_1_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_SELFTESTEXPIRED24H2))->SetCtrlBKColor(Qt::red);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_SELFTESTEXPIRED24H2))->SetCtrlBKColor(Qt::black);
    }


}


void C_Page_Brake_Status::UpdateBCU_selftest_test()
{

        //BRiCT_RuningSelfTest_B1                   g_dataBuffer_Display[466]& bit1
        bcu_selftest_signal = BR1CT_RuningSelfTest_B1^bcu_selftest_temp;
        if ( bcu_selftest_signal != 0 )
        {
            if ( bcu_selftest_signal )
            {
                if ( BR1CT_RuningSelfTest_B1)
                {
                    BCU_selftest_string1 = QObject::trUtf8("自检激活");
                     BCU_selftest_color1 = 0;
                }
                else
                {
                    if ( BR1CT_SelfTestOK_B1)
                    {
                        BCU_selftest_string1 = QObject::trUtf8("自检成功");
                         BCU_selftest_color1 = 0;
                    }
                    if ( BR1CT_SelfTestFailed_B1)
                    {
                        BCU_selftest_string1 = QObject::trUtf8("自检失败");
                        BCU_selftest_color1 = 1;
                    }
//                    if (BCU1CT_Last_selftest_aborted_1_B1)
//                    {
//                        BCU_selftest_string1 = QObject::trUtf8("自检中断");
//                         BCU_selftest_color1 = 1;
//                    }
                }

                bcu_selftest_temp = BR1CT_RuningSelfTest_B1;
                SetBCU_selftest_LabelString( ID_PIBBRAKESTATE_LABEL_SELFTESTSTATE1 ,BCU_selftest_string1 );
                SetBCU_selftest_resultColor( ID_PIBBRAKESTATE_LABEL_SELFTESTSTATE1 ,BCU_selftest_color1 );
            }
        }


        bcu_selftest_signal2 =  BR2CT_RuningSelfTest_B1^bcu_selftest_temp2;
        if ( bcu_selftest_signal2 != 0 )
        {
            if (  bcu_selftest_signal2 )
            {
                if ( BR2CT_RuningSelfTest_B1)
                {
                    BCU_selftest_string2 = QObject::trUtf8("自检激活");
                     BCU_selftest_color2 = 0;
                }
                else
                {
                    if ( BR2CT_SelfTestOK_B1)
                    {
                        BCU_selftest_string2 = QObject::trUtf8("自检成功");
                         BCU_selftest_color2 = 0;
                    }
                     if ( BR2CT_SelfTestFailed_B1)
                    {
                        BCU_selftest_string2 = QObject::trUtf8("自检失败");
                        BCU_selftest_color2 = 1;
                    }
//                     if (BCU3CT_Last_selftest_aborted_1_B1)
//                     {
//                         BCU_selftest_string2 = QObject::trUtf8("自检中断");
//                          BCU_selftest_color2 = 1;
//                     }
                }

                 bcu_selftest_temp2 = BR2CT_RuningSelfTest_B1;
                SetBCU_selftest_LabelString( ID_PIBBRAKESTATE_LABEL_SELFTESTSTATE2,BCU_selftest_string2 );
                SetBCU_selftest_resultColor( ID_PIBBRAKESTATE_LABEL_SELFTESTSTATE2,BCU_selftest_color2 );
            }

          bcu_selftest_temp2 = BR2CT_RuningSelfTest_B1;
        }




    SetBCU_selftest_LabelString( ID_PIBBRAKESTATE_LABEL_SELFTESTSTATE1,BCU_selftest_string1 );
    SetBCU_selftest_LabelString( ID_PIBBRAKESTATE_LABEL_SELFTESTSTATE2,BCU_selftest_string2 );
    SetBCU_selftest_resultColor( ID_PIBBRAKESTATE_LABEL_SELFTESTSTATE1,BCU_selftest_color1 );
    SetBCU_selftest_resultColor( ID_PIBBRAKESTATE_LABEL_SELFTESTSTATE2,BCU_selftest_color2 );

}


//
void C_Page_Brake_Status::UpdateCompressorStatus()
{
    if (Bit( DI_110_3, 8 ) == 1)
    {
        CompressorStarted1 = 1;
    }
    else
    {
        CompressorStarted1 = 0;
    }
    if (Bit( DI_180_3, 8 ) == 1)
    {
        CompressorStarted2 = 1;
    }
    else
    {
        CompressorStarted2 = 0;
    }

//    SetCompressorStatusLabelColor(ID_PIBBRAKESTATE_LABEL_CAR1AIRCOMPRESSORSTATE, CompressorStarted1);
//    SetCompressorStatusLabelColor(ID_PIBBRAKESTATE_LABEL_CAR6AIRCOMPRESSORSTATE, CompressorStarted2);
}

void C_Page_Brake_Status::UpdateTCUStatus()
{

}
void C_Page_Brake_Status::UpdateWarning()
{
}
void C_Page_Brake_Status::UpdateASPressure()
{
}

void C_Page_Brake_Status::UpdateBCUSeparater()
{
}

void C_Page_Brake_Status::UpdateNETMode()
{

}



void C_Page_Brake_Status::UpdateATOMode()
{

}



void C_Page_Brake_Status::UpdateAValue()
{

#ifdef PAGE_HEADER_OLD

    if (currency_data2>32767)
    {
       webflow = currency_data2-65536;
    }
    else
    {
       webflow = currency_data2;
    }

    SetAValue(ID_PIBBRAKESTATE_LABEL_A, webflow);

#endif

}

void C_Page_Brake_Status::UpdateVValue()
{
#ifdef PAGE_HEADER_OLD
    UpdateVoltage(ID_PIBBRAKESTATE_LABEL_V);

#endif

}

void C_Page_Brake_Status::UpdateStation()
{


}


void C_Page_Brake_Status::UpdateCarTem()
{

}


void C_Page_Brake_Status::UpdateDoor()
{


}



void C_Page_Brake_Status::UpdateTractionBrak()
{
#ifdef PAGE_HEADER_OLD

    UpdateTractionLevel(ID_PIBBRAKESTATE_LABEL_TRACTIONMODEL);

#endif

}

void C_Page_Brake_Status::UpdateSpeed()
{
#ifdef PAGE_HEADER_OLD

    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_SPEED))->SetCtrlText(QString::number(udp_num));

#endif

}

void C_Page_Brake_Status::UpdateContravariant()
{
//    if (1 == Bit(currency_data6,14) )
//    {
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CONTRAVARIANTMODE))->SetCtrlBKColor(Qt::green);

//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_CONTRAVARIANTMODE))->HideLabel();

//    }
}



void C_Page_Brake_Status::UpdateWashCarMode()
{

}

void C_Page_Brake_Status::UpdateEmergencyBroadcast()
{

}

void C_Page_Brake_Status::SetCommInterruptLabelColor(int id, int colorVal)
{


    ASSERT((colorVal >= 0) && (colorVal <= 1));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }

    return;


}


void C_Page_Brake_Status::SetDoorLabelColor(int id, int colorVal)
{
    if (0 == colorVal )
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::cyan);
    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    else if (4 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::blue);
    }
    else if (5 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }
    else if (6 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(QColor(255,0,255));
    }
    else if (8 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
        ((CLabel *)GetDlgItem(id))->SetLabelState(8);
    }
    return;
}

void C_Page_Brake_Status::SetStation(int id, QString station)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(station);

    return;
}

void C_Page_Brake_Status::SetCompressorStatusLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }

    return;
}

void C_Page_Brake_Status::SetTCUStatusLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 3));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }
    else if (3 == colorVal)
    {

    }((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);

    return;
}

void C_Page_Brake_Status::SetBRKCYLPressureLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }

    return;
}

void C_Page_Brake_Status::SetBSRPressureLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }

    return;
}

void C_Page_Brake_Status::SetWarningLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 1));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }

    return;
}

void C_Page_Brake_Status::SetASPressureLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 1));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }

    return;
}

void C_Page_Brake_Status::SetPlaceStatusLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::darkRed);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::white);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::green);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::white);
    }
    return;
}



void C_Page_Brake_Status::SetBCUSeparaterLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetLabelState(6);
    }
    else if(2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }

    return;
}

void C_Page_Brake_Status::SetNETModeLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }

    return;
}

void C_Page_Brake_Status::SetATOModeLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }

    return;
}

void C_Page_Brake_Status::SetTCUStatusLsbelColor(int id,int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 5));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    else if (4 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::darkRed);
        ((CLabel *)GetDlgItem(id))->SetLabelState(6);
    }
    else if (5 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(id))->SetLabelState(6);
    }

    return;
}


void C_Page_Brake_Status::OnFASpageBtnClk()
{
    ChangePage(PAGE_INDEX_FASPage);

//    CRealTimeFaultsWarnningDialog dlg;

//    dlg.SetRomIdx(4);
//    dlg.move(GetParentDlg()->x()+60,GetParentDlg()->y()+140);
//    dlg.exec();
}

void C_Page_Brake_Status::OnPageUpBtnClk()
{

}




void C_Page_Brake_Status::OnRealTimeFaultsWarnningIconClk()
{

    if (0 == g_RealTimeFaultsNum)
    {
        return;
    }
    g_backtoprepage = true;
    SetFaultType(E_FAULTS_TYPE_REALTIME);
    ChangePage(PAGE_INDEX_REALTIMEFAULT);
}

void C_Page_Brake_Status::UpdateTcu_Enable()
{
    if (1 == Bit(DI_110_1,16) )
    {
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_TCU_ENABLE1))->SetCtrlBKColor(Qt::green);

    }
    else
    {
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_TCU_ENABLE1))->HideLabel();

    }
    if (1 == Bit(DI_180_1,16) )
    {
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_TCU_ENABLE2))->SetCtrlBKColor(Qt::green);

    }
    else
    {
//        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE_LABEL_TCU_ENABLE2))->HideLabel();

    }
}

void C_Page_Brake_Status::SetAcuLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 5));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::blue);
    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(QColor(255,153,0,255));
    }
    else if (4 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (5 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::white);
    }

    return;
}

void C_Page_Brake_Status::SetKauxLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 1));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }

    return;
}

void C_Page_Brake_Status::UpdateRidingRate()
{


}

void C_Page_Brake_Status::UpdateFAS_status_Hide()
{




}
void C_Page_Brake_Status::UpdateByPass_Hide()
{


}

void C_Page_Brake_Status::UpdateDisEBTest()
{




}


void C_Page_Brake_Status::SetBoolLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
    }

    return;
}

void C_Page_Brake_Status::SetLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
    }

    return;
}

void C_Page_Brake_Status::SetOnlineLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
    }

    return;
}
void C_Page_Brake_Status::SetBCU_selftest_LabelString(int id, QString StringVal)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(StringVal);

    return;
}



void C_Page_Brake_Status::SetBCU_selftest_resultColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));

    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
       // ((CLabel *)GetDlgItem(id))->SetLabelState(6);
    }
    else if (2 == colorVal)
    {
      ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    return;
}

