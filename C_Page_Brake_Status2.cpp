#include "C_Page_Brake_Status2.h"

#include "CRealTimeFaultsWarnningDialog.h"


ROMDATA g_PicRom_BrakeStatus2[] =
{

#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW_WH
#endif


#ifdef PAGE_HEADER_NEW

    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("制动") )
    {"RIGHT",                  D_FONT_BOLD(6),      QRect(715, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBBRAKESTATE2_ARROW_RIGHT                },
    {"LEFT",                   D_FONT_BOLD(6),      QRect( 40, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBBRAKESTATE2_ARROW_LEFT                 },
    {"",                       D_FONT_BOLD(4),      QRect(100, 70, 600,  70),           Qt::black,                Qt::gray,                CONTROL_TRAIN,           ID_PIBBRAKESTATE2_TRAIN         },
  //  {QObject::trUtf8("通信中断"),          D_FONT_BOLD(10),      QRect( 10,   3, 162,  30),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_INTERRUPT         },


#endif

#ifdef PAGE_HEADER_OLD
    D_COMMON_PAGE_HEADER(QObject::trUtf8("        运    行") )
    D_COMMON_PAGE_BUTTON_BAR

    {QObject::trUtf8("网压"),              D_FONT_BOLD(8),      QRect( 4,   4,  56,  34),           Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(62,   2,  80,  38),           Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_V        },

    {QObject::trUtf8("网流"),              D_FONT_BOLD(8),      QRect(143,   4, 56,  34),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(200,   2, 80,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_A        },

    {"FaultRed.PNG",           D_DEFAULT_FONT,      QRect(730,  45,  55,  55),         Qt::black,                  Qt::black,                  CONTROL_IMAGE,            ID_PIBBRAKESTATE2_ICON_WARNNING       },

    {QObject::trUtf8("牵引*制动级位"),      D_FONT_BOLD(8),      QRect(470,  45, 150,  20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(470,  66, 150,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_TRACTIONMODEL        },

    {QObject::trUtf8("速度"),              D_FONT_BOLD(8),      QRect(630,  45,  80,  20),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(630,  66,  80,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_SPEED        },

    {QObject::trUtf8("终点站"),            D_FONT_BOLD(8),      QRect( 10,  66,  60,  30),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {"",                       D_FONT_BOLD(8),      QRect( 70,  68, 110,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_TERMINALSTATION        },

    {"",                       D_FONT_BOLD(6),      QRect( 9,  65, 171,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 9,  97, 171,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 9,  65,   1,  32),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(180, 65,   1,  32),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QObject::trUtf8("到达\n终点"),              D_FONT_BOLD(8),      QRect(200,  55,  50,  50),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL1_ARRIVETERMINALFLAG        },
//    {QObject::trUtf8("终点"),              D_FONT_BOLD(8),      QRect(200,  75,  40,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL2_ARRIVETERMINALFLAG        },
    {QObject::trUtf8("通信中断"),          D_FONT_BOLD(10),      QRect(260, 44, 200,  40),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_INTERRUPT         },
    {"RIGHT",                  D_FONT_BOLD(6),      QRect(358,  85, 100,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,           ID_PIBBRAKESTATE2_ARROW_RIGHT         },
    {"LEFT",                   D_FONT_BOLD(6),      QRect(258,  85, 100,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,           ID_PIBBRAKESTATE2_ARROW_LEFT         },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect( 5, 115, 90,  40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CURRENTORNEXTSTATION1        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(705, 115, 90,  40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CURRENTORNEXTSTATION2        },

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
    {"",                       D_FONT_BOLD(6),      QRect( 10, 450, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 150,   1, 300),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(100, 150,   1, 300),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },



    {"",                       D_FONT_BOLD(6),      QRect(200, 150,   1, 120),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(300, 150,   1, 120),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(400, 150,   1, 300),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(500, 150,   1, 120),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(600, 150,   1, 120),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(700-1, 150,   1, 300),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                       D_FONT_BOLD(6),      QRect(200, 330,   1, 120),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(300, 330,   1, 120),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(500, 330,   1, 120),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(600, 330,   1, 120),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QObject::trUtf8("车号"),                 D_FONT_BOLD(6),      QRect( 11, 151,  88,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(104, 153,  94,  24),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBRAKESTATE2_LABEL_CARNUMBER1       },
    {QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(204, 153,  94,  24),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBRAKESTATE2_LABEL_CARNUMBER2       },
    {QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(304, 153,  94,  24),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBRAKESTATE2_LABEL_CARNUMBER3       },
    {QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(404, 153,  94,  24),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBRAKESTATE2_LABEL_CARNUMBER4       },
    {QObject::trUtf8("5"),                   D_FONT_BOLD(6),      QRect(504, 153,  94,  24),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBRAKESTATE2_LABEL_CARNUMBER5       },
    {QObject::trUtf8("6"),                   D_FONT_BOLD(6),      QRect(604, 153,  94,  24),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_PIBBRAKESTATE2_LABEL_CARNUMBER6       },

    {QObject::trUtf8("ASP压力值(Bar)"),        D_FONT_BOLD(4),      QRect( 11, 181,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("电制动载荷(t)"),      D_FONT_BOLD(4),      QRect( 11, 211,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("常用制动力(KN)"),        D_FONT_BOLD(4),   QRect( 11, 241,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("反馈总制动力\n(KN)"),          D_FONT_BOLD(4),    QRect( 11, 271,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("主风管压力\n(Bar)"),            D_FONT_BOLD(4),    QRect( 11, 301,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("1轴旋转\n速度(Km/h)"),            D_FONT_BOLD(4),    QRect( 11, 331,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("2轴旋转\n速度(Km/h)"),        D_FONT_BOLD(4),    QRect( 11, 361,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("3轴旋转\n速度(Km/h)"),           D_FONT_BOLD(4), QRect( 11, 391,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("4轴旋转\n速度(Km/h)"),          D_FONT_BOLD(4),    QRect( 11, 421,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },

//    {QObject::trUtf8("376 V"),                 D_FONT_BOLD(6),      QRect(103, 185,  94, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR1ASSISTSYS_V        },
////    {QObject::trUtf8("--"),               D_FONT_BOLD(6),      QRect(178, 182,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("--"),               D_FONT_BOLD(6),      QRect(203, 182,  94, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("扩展供电"),               D_FONT_BOLD(6),      QRect(303, 185,  94, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR4KAUXSTATE        },
//    {QObject::trUtf8("--"),               D_FONT_BOLD(6),      QRect(403, 182,  94, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("--"),               D_FONT_BOLD(6),      QRect(503, 182,  94, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
////    {QObject::trUtf8("--"),               D_FONT_BOLD(6),      QRect(553, 182,  70, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8("380 V"),                 D_FONT_BOLD(6),      QRect(603, 185,  93, 21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR8ASSISTSYS_V        },
    {"",                       D_FONT_BOLD(6),      QRect(150, 180,   1, 30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(250, 180,   1, 30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(350, 180,   1, 30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(450, 180,   1, 30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(550, 180,   1, 30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(650, 180,   1, 30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },



{"",              D_FONT_BOLD(6),      QRect(104, 184,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_ASPTC1Bog1_U8        },
{"",              D_FONT_BOLD(6),      QRect(154, 184,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_ASPTC1Bog2_U8        },
{"",              D_FONT_BOLD(6),      QRect(204, 184,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_ASPMP1Bog1_U8        },
{"",              D_FONT_BOLD(6),      QRect(254, 184,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_ASPMP1Bog2_U8        },
{"",              D_FONT_BOLD(6),      QRect(304, 184,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_ASPM1Bog1_U8        },
{"",              D_FONT_BOLD(6),      QRect(354, 184,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_ASPM1Bog2_U8        },
{"",              D_FONT_BOLD(6),      QRect(404, 184,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_ASPM2Bog2_U8        },
{"",              D_FONT_BOLD(6),      QRect(454, 184,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_ASPM2Bog1_U8        },
{"",              D_FONT_BOLD(6),      QRect(504, 184,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_ASPMP2Bog2_U8        },
{"",              D_FONT_BOLD(6),      QRect(554, 184,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_ASPMP2Bog1_U8        },
{"",              D_FONT_BOLD(6),      QRect(604, 184,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_ASPTC2Bog2_U8        },
{"",              D_FONT_BOLD(6),      QRect(654, 184,  42, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_ASPTC2Bog1_U8        },


{"--",              D_FONT_BOLD(6),      QRect(103, 214,  94, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR4REMOTERELEAE1        },
{"",              D_FONT_BOLD(6),      QRect(203, 214,  94, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_EDLoadMp1_I16        },
{"",              D_FONT_BOLD(6),      QRect(303, 214,  94, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_EDLoadM1_I16        },
{"",              D_FONT_BOLD(6),      QRect(403, 214,  94, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_EDLoadM2_I16        },
{"",              D_FONT_BOLD(6),      QRect(503, 214,  94, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_EDLoadMp2_I16        },
{"--",              D_FONT_BOLD(6),      QRect(603, 214,  94, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_CAR6REMOTERELEAE2        },


{"",              D_FONT_BOLD(6),      QRect(103, 244,  94, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_SBForceTc1_I16        },
{"",              D_FONT_BOLD(6),      QRect(203, 244,  94, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_SBForceMp1_I16        },
{"",              D_FONT_BOLD(6),      QRect(303, 244,  94, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_SBForceM1_I16        },
{"",              D_FONT_BOLD(6),      QRect(403, 244,  94, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_SBForceM2_I16        },
{"",              D_FONT_BOLD(6),      QRect(503, 244,  94, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_SBForceMp2_I16        },
{"",              D_FONT_BOLD(6),      QRect(603, 244,  94, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_SBForceTc2_I16        },

{"",              D_FONT_BOLD(6),      QRect(120, 274,  260, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_PWM1_I16        },
{"",              D_FONT_BOLD(6),      QRect(420, 274,  260, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_PWM2_I16        },

{"",              D_FONT_BOLD(6),      QRect(120, 304,  260, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_MRP1_U8        },
{"",              D_FONT_BOLD(6),      QRect(420, 304,  260, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_MRP2_U8        },

{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(103, 333,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_BRiCT_SpeedTC1Ax1_I16        },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(203, 333,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_BRiCT_SpeedMp1Ax1_I16        },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(303, 333,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_BRiCT_SpeedM1Ax1_I16        },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(403, 333,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_BRiCT_SpeedM2Ax1_I16        },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(503, 333,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_BRiCT_SpeedMp2Ax1_I16        },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(603, 333,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_BRiCT_SpeedTC2Ax1_I16        },

{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(103, 363,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_BRiCT_SpeedTC1Ax2_I16        },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(203, 363,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_BRiCT_SpeedMp1Ax2_I16        },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(303, 363,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_BRiCT_SpeedM1Ax2_I16        },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(403, 363,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_BRiCT_SpeedM2Ax2_I16        },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(503, 363,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_BRiCT_SpeedMp2Ax2_I16        },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(603, 363,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_BRiCT_SpeedTC2Ax2_I16        },


{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(103, 393,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_BRiCT_SpeedTC1Ax3_I16        },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(203, 393,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_BRiCT_SpeedMp1Ax3_I16        },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(303, 393,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_BRiCT_SpeedM1Ax3_I16        },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(403, 393,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_BRiCT_SpeedM2Ax3_I16        },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(503, 393,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_BRiCT_SpeedMp2Ax3_I16        },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(603, 393,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_BRiCT_SpeedTC2Ax3_I16        },



{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(103, 423,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_BRiCT_SpeedTC1Ax4_I16        },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(203, 423,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_BRiCT_SpeedMp1Ax4_I16        },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(303, 423,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_BRiCT_SpeedM1Ax4_I16        },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(403, 423,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_BRiCT_SpeedM2Ax4_I16        },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(503, 423,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_BRiCT_SpeedMp2Ax4_I16        },
{QObject::trUtf8(""),               D_FONT_BOLD(6),      QRect(603, 423,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBBRAKESTATE2_LABEL_BRiCT_BRiCT_SpeedTC2Ax4_I16        },

};

int g_BrakeStatus2RomLen = sizeof(g_PicRom_BrakeStatus2)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(C_Page_Brake_Status2,CPage)
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
        ON_BTNCLK(IDLB_COM_BTN10, OnComBtn10Clk)
        ON_BTNCLK(IDLB_COM_BTN11, OnComBtn11Clk)

#endif
 //       ON_BTNCLK(ID_PIBBRAKESTATE2_BUTTON_EMERGENCYRESCUE, OnEmergencyResuce)
        //ON_BTNCLK(ID_PIBBRAKESTATE2_ICON_WARNNING, OnRealTimeFaultsWarnningIconClk)
//        ON_BTNCLK(ID_PIBBRAKESTATE2_BUTTON_PGUP, OnPageUpBtnClk)
//        ON_BTNCLK(ID_PIBBRAKESTATE2_BUTTON_PGDN, OnPageDownBtnClk)
        ON_BTNCLK(ID_LABEL_REALTIMEFAULTCONFIRM, OnRealtimefaultBtnClk)
        END_MESSAGE_MAP()

C_Page_Brake_Status2::C_Page_Brake_Status2()
{
}

void C_Page_Brake_Status2::OnUpdatePage()
{

    updateTrain(ID_PIBBRAKESTATE2_TRAIN);
    updateArrow(ID_PIBBRAKESTATE2_ARROW_LEFT,ID_PIBBRAKESTATE2_ARROW_RIGHT);
    updateAPS();
    updateEleBrake();
    updateSBforce();
    updatePWMMRP();
    updateAXSpeed();
   //updateErrorLine(ID_PIBBRAKESTATE2_TRAIN);
    UpdateRealtimefaults();


    //     UpdateWarning();
    //     UpdateASPressure();
    //     UpdateStation();

}

void C_Page_Brake_Status2::OnInitPage()
{

#ifdef PAGE_HEADER_OLD

    ((CLabel *) GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CURRENTORNEXTSTATION1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBBRAKESTATE2_LABEL_CURRENTORNEXTSTATION2))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_PIBBRAKESTATE2_LABEL_V))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBBRAKESTATE2_LABEL_A))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_PIBBRAKESTATE2_LABEL_TRACTIONMODEL))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBBRAKESTATE2_LABEL_SPEED))->SetBorderColor(Qt::white);

#endif




   // ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_TOWMODE))->SetBorderColor(Qt::white);
//    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL1_ARRIVETERMINALFLAG))->SetBorderColor(Qt::white);

    //   time setting
//    static int flg = 0;
//    if(flg != Bit(CCU_HMI_222_9, 8 ) && Bit(CCU_HMI_222_9, 8 )!=0)
//    {
//        ATC_time_temp1 = 2000+CCU_HMI_221_10%256;
//        ATC_time_temp2 = CCU_HMI_221_10/256;
//        ATC_time_temp3 = CCU_HMI_221_11%256;
//        ATC_time_temp4 = CCU_HMI_221_11/256;
//        ATC_time_temp5 = CCU_HMI_221_12%256;
//        ATC_time_temp6 = CCU_HMI_221_12/256;
//        SetSystemTime(ATC_time_temp1,ATC_time_temp2,ATC_time_temp3,ATC_time_temp4,ATC_time_temp5,ATC_time_temp6);
//    }
//    flg = Bit(CCU_HMI_222_9, 8 );




}

void C_Page_Brake_Status2::OnShowPage()
{

//    if (1 == EmergencyResuce)
//        ((CButton*)GetDlgItem(ID_PIBBRAKESTATE2_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_DOWN);
//    else
//        ((CButton*)GetDlgItem(ID_PIBBRAKESTATE2_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_UP);

    ((CButton*)GetDlgItem(IDLB_COM_BTN10))->SetCtrlText(QObject::trUtf8("上一页"));
    ((CButton*)GetDlgItem(IDLB_COM_BTN11))->SetCtrlText(QObject::trUtf8(""));

    ((CButton*)GetDlgItem(IDLB_COM_BTN12))->SetCtrlText(QObject::trUtf8(""));

    this->InitPageHeader();

}
void C_Page_Brake_Status2::UpdateRealtimefaults()
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

void C_Page_Brake_Status2::OnRealtimefaultBtnClk()
{
    g_faultsrom[g_romidx].confirm = true;
    g_realtimeFaultsbarList.removeAt(g_faultcount);
    if(g_faultcount>0)
    g_faultcount--;
    //m_faultcount--;

}


#ifdef PAGE_BUTTON_BAR_NEW

void C_Page_Brake_Status2::OnComBtn1Clk()
{
    ChangePage(PAGE_INDEX_RUNSTATE);
}

void C_Page_Brake_Status2::OnComBtn2Clk()
{
    ChangePage(PAGE_INDEX_MAINTAIN);
}

void C_Page_Brake_Status2::OnComBtn3Clk()
{
     ChangePage(PAGE_INDEX_CARSTATUS3);
}

void C_Page_Brake_Status2::OnComBtn4Clk()
{
   // ChangePage(PAGE_INDEX_CARSTATUS3);

     ChangePage(PAGE_INDEX_TCUBLOCKREASON);
}

void C_Page_Brake_Status2::OnComBtn5Clk()
{
     ChangePage(PAGE_INDEX_INSTANCYBROADCAST);
}

void C_Page_Brake_Status2::OnComBtn6Clk()
{
    ChangePage(PAGE_INDEX_FASPage);
}
void C_Page_Brake_Status2::OnComBtn7Clk()
{
    ChangePage(PAGE_INDEX_PISALARM);
}

void C_Page_Brake_Status2::OnComBtn8Clk()
{
    //ChangePage(PAGE_INDEX_BRAKESTATUSHELP);
}
void C_Page_Brake_Status2::OnComBtn10Clk()
{
    ChangePage(PAGE_BRAKESTATUS);
}
void C_Page_Brake_Status2::OnComBtn11Clk()
{
}

#else
    void C_Page_Brake_Status2::OnComBtn1Clk()
    {
        ChangePage(PAGE_INDEX_MAIN);
    }

    void C_Page_Brake_Status2::OnComBtn2Clk()
    {

    }

    void C_Page_Brake_Status2::OnComBtn3Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS1);
    }

    void C_Page_Brake_Status2::OnComBtn4Clk()
    {
         ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void C_Page_Brake_Status2::OnComBtn5Clk()
    {
         ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void C_Page_Brake_Status2::OnComBtn6Clk()
    {
        ChangePage(PAGE_INDEX_RUNHELP1);
    }
#endif
void C_Page_Brake_Status2::updateAPS()
{
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_ASPTC1Bog1_U8))->SetCtrlText(QString::number(float(BR1CT_ASPTCBog1_U8)/10,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_ASPTC1Bog2_U8))->SetCtrlText(QString::number(float(BR1CT_ASPTCBog2_U8)/10,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_ASPMP1Bog1_U8))->SetCtrlText(QString::number(float(BR1CT_ASPMPBog1_U8)/10,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_ASPMP1Bog2_U8))->SetCtrlText(QString::number(float(BR1CT_ASPMPBog2_U8)/10,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_ASPM1Bog1_U8))->SetCtrlText(QString::number(float(BR1CT_ASPMBog1_U8)/10,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_ASPM1Bog2_U8))->SetCtrlText(QString::number(float(BR1CT_ASPMBog2_U8)/10,'f',1));

    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_ASPTC2Bog1_U8))->SetCtrlText(QString::number(float(BR2CT_ASPTCBog1_U8)/10,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_ASPTC2Bog2_U8))->SetCtrlText(QString::number(float(BR2CT_ASPTCBog2_U8)/10,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_ASPMP2Bog1_U8))->SetCtrlText(QString::number(float(BR2CT_ASPMPBog1_U8)/10,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_ASPMP2Bog2_U8))->SetCtrlText(QString::number(float(BR2CT_ASPMPBog2_U8)/10,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_ASPM2Bog1_U8))->SetCtrlText(QString::number(float(BR2CT_ASPMBog1_U8)/10,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_ASPM2Bog2_U8))->SetCtrlText(QString::number(float(BR2CT_ASPMBog2_U8)/10,'f',1));
}
void C_Page_Brake_Status2::updateEleBrake()
{
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_EDLoadMp1_I16))->SetCtrlText(QString::number(float(BR1CT_EDLoadMp12_I16)/10,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_EDLoadM1_I16))->SetCtrlText(QString::number(float(BR1CT_EDLoadM12_I16)/10,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_EDLoadMp2_I16))->SetCtrlText(QString::number(float(BR2CT_EDLoadMp12_I16)/10,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_EDLoadM2_I16))->SetCtrlText(QString::number(float(BR2CT_EDLoadM12_I16)/10,'f',1));
}
void C_Page_Brake_Status2::updateSBforce()
{
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_SBForceTc1_I16))->SetCtrlText(QString::number(float(BR1CT_SBForceTc12_I16)/10,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_SBForceTc2_I16))->SetCtrlText(QString::number(float(BR2CT_SBForceTc12_I16)/10,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_SBForceMp1_I16))->SetCtrlText(QString::number(float(BR1CT_SBForceMp12_I16)/10,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_SBForceMp2_I16))->SetCtrlText(QString::number(float(BR2CT_SBForceMp12_I16)/10,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_SBForceM1_I16))->SetCtrlText(QString::number(float(BR1CT_SBForceM12_I16)/10,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_SBForceM2_I16))->SetCtrlText(QString::number(float(BR2CT_SBForceM12_I16)/10,'f',1));

}
void C_Page_Brake_Status2::updatePWMMRP()
{
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_PWM1_I16))->SetCtrlText(QString::number(float(BR1CT_PWM_I16)/10,'f',1));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_PWM2_I16))->SetCtrlText(QString::number(float(BR2CT_PWM_I16)/10,'f',1));
    if(BR1CT_MRP_U8 > 240)
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_MRP1_U8))->SetCtrlText("0");
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_MRP1_U8))->SetCtrlText(QString::number(float(BR1CT_MRP_U8)/20,'f',2));
    }
    if(BR2CT_MRP_U8 > 240)
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_MRP2_U8))->SetCtrlText("0");
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_MRP2_U8))->SetCtrlText(QString::number(float(BR2CT_MRP_U8)/20,'f',2));
    }
}
void C_Page_Brake_Status2::updateAXSpeed()
{
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_BRiCT_SpeedTC1Ax1_I16))->SetCtrlText(QString::number((BR1CT_SpeedTCAx1_I16)));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_BRiCT_SpeedTC2Ax1_I16))->SetCtrlText(QString::number((BR2CT_SpeedTCAx1_I16)));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_BRiCT_SpeedMp1Ax1_I16))->SetCtrlText(QString::number((BR1CT_SpeedMPAx1_I16)));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_BRiCT_SpeedMp2Ax1_I16))->SetCtrlText(QString::number((BR2CT_SpeedMPAx1_I16)));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_BRiCT_SpeedM1Ax1_I16))->SetCtrlText(QString::number((BR1CT_SpeedMAx1_I16)));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_BRiCT_SpeedM2Ax1_I16))->SetCtrlText(QString::number((BR2CT_SpeedMAx1_I16)));

    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_BRiCT_SpeedTC1Ax2_I16))->SetCtrlText(QString::number((BR1CT_SpeedTCAx2_I16)));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_BRiCT_SpeedTC2Ax2_I16))->SetCtrlText(QString::number((BR2CT_SpeedTCAx2_I16)));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_BRiCT_SpeedMp1Ax2_I16))->SetCtrlText(QString::number((BR1CT_SpeedMPAx2_I16)));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_BRiCT_SpeedMp2Ax2_I16))->SetCtrlText(QString::number((BR2CT_SpeedMPAx2_I16)));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_BRiCT_SpeedM1Ax2_I16))->SetCtrlText(QString::number((BR1CT_SpeedMAx2_I16)));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_BRiCT_SpeedM2Ax2_I16))->SetCtrlText(QString::number((BR2CT_SpeedMAx2_I16)));

    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_BRiCT_SpeedTC1Ax3_I16))->SetCtrlText(QString::number((BR1CT_SpeedTCAx3_I16)));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_BRiCT_SpeedTC2Ax3_I16))->SetCtrlText(QString::number((BR2CT_SpeedTCAx3_I16)));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_BRiCT_SpeedMp1Ax3_I16))->SetCtrlText(QString::number((BR1CT_SpeedMPAx3_I16)));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_BRiCT_SpeedMp2Ax3_I16))->SetCtrlText(QString::number((BR2CT_SpeedMPAx3_I16)));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_BRiCT_SpeedM1Ax3_I16))->SetCtrlText(QString::number((BR1CT_SpeedMAx3_I16)));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_BRiCT_SpeedM2Ax3_I16))->SetCtrlText(QString::number((BR2CT_SpeedMAx3_I16)));

    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_BRiCT_SpeedTC1Ax4_I16))->SetCtrlText(QString::number((BR1CT_SpeedTCAx4_I16)));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_BRiCT_SpeedTC2Ax4_I16))->SetCtrlText(QString::number((BR2CT_SpeedTCAx4_I16)));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_BRiCT_SpeedMp1Ax4_I16))->SetCtrlText(QString::number((BR1CT_SpeedMPAx4_I16)));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_BRiCT_SpeedMp2Ax4_I16))->SetCtrlText(QString::number((BR2CT_SpeedMPAx4_I16)));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_BRiCT_SpeedM1Ax4_I16))->SetCtrlText(QString::number((BR1CT_SpeedMAx4_I16)));
    ((CLabel *)GetDlgItem(ID_PIBBRAKESTATE2_LABEL_BRiCT_BRiCT_SpeedM2Ax4_I16))->SetCtrlText(QString::number((BR2CT_SpeedMAx4_I16)));
}



