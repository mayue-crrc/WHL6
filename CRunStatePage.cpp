#include "CRunStatePage.h"
#include "CRealTimeFaultsWarnningDialog.h"
#include <QtDebug>

#define OFFSET 30

ROMDATA g_PicRom_RunState[] =
{

#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW_WH
#endif


#ifdef PAGE_HEADER_NEW
    //D_COMMON_PAGE_HEADER_NEW(QObject::trUtf8(" 运    行") )
    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("运行") )
    {"RIGHT",                  D_FONT_BOLD(6),      QRect(715, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBRUNSTATE_ARROW_RIGHT                },
    {"LEFT",                   D_FONT_BOLD(6),      QRect( 40, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBRUNSTATE_ARROW_LEFT                 },

    {"",                       D_FONT_BOLD(4),      QRect(100, 70, 600,  70),           Qt::black,                Qt::gray,                CONTROL_TRAIN,           ID_PIBRUNSTATE_TRAIN         },
  //  {QObject::trUtf8("通信中断"),          D_FONT_BOLD(10),      QRect( 10,   3, 162,  30),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_INTERRUPT         },


#endif

#ifdef PAGE_HEADER_OLD
    D_COMMON_PAGE_HEADER(QObject::trUtf8("        运    行") )
    D_COMMON_PAGE_BUTTON_BAR

    {QObject::trUtf8("网压"),              D_FONT_BOLD(8),      QRect( 4,   4,  56,  34),           Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(62,   2,  80,  38),           Qt::white,                 Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_V        },

    {QObject::trUtf8("网流"),              D_FONT_BOLD(8),      QRect(143,   4, 56,  34),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(200,   2, 80,  38),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_A        },

    {"FaultRed.PNG",           D_DEFAULT_FONT,      QRect(730,  45,  55,  55),         Qt::black,                  Qt::black,                  CONTROL_IMAGE,            ID_PIBRUNSTATE_ICON_WARNNING       },

    {QObject::trUtf8("牵引*制动级位"),      D_FONT_BOLD(8),      QRect(470,  45, 150,  20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(470,  66, 150,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_TRACTIONMODEL        },

    {QObject::trUtf8("速度"),              D_FONT_BOLD(8),      QRect(630,  45,  80,  20),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(630,  66,  80,  30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_SPEED        },

    {QObject::trUtf8("终点站"),            D_FONT_BOLD(8),      QRect( 10,  66,  60,  30),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {"",                       D_FONT_BOLD(8),      QRect( 70,  68, 110,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_TERMINALSTATION        },

    {"",                       D_FONT_BOLD(6),      QRect( 9,  65, 171,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 9,  97, 171,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 9,  65,   1,  32),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(180, 65,   1,  32),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QObject::trUtf8("到达\n终点"),              D_FONT_BOLD(8),      QRect(200,  55,  50,  50),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL1_ARRIVETERMINALFLAG        },
//    {QObject::trUtf8("终点"),              D_FONT_BOLD(8),      QRect(200,  75,  40,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL2_ARRIVETERMINALFLAG        },
    {QObject::trUtf8("通信中断"),          D_FONT_BOLD(10),      QRect(260, 44, 200,  40),           Qt::red,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_INTERRUPT         },
    {"RIGHT",                  D_FONT_BOLD(6),      QRect(358,  85, 100,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,           ID_PIBRUNSTATE_ARROW_RIGHT         },
    {"LEFT",                   D_FONT_BOLD(6),      QRect(258,  85, 100,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,           ID_PIBRUNSTATE_ARROW_LEFT         },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect( 5, 115, 90,  40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CURRENTORNEXTSTATION1        },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(705, 115, 90,  40),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CURRENTORNEXTSTATION2        },

#endif


    {"",                       D_FONT_BOLD(6),      QRect( 10, 150, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 180, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 210, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 240, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 270, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 300, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 330, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect( 10, 360, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 390, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 420, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 450, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect( 10, 480, 690,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 10, 150,   1, 270+OFFSET),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(100, 150,   1, 270+OFFSET),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(200, 150,   1, 270+OFFSET),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(300, 150,   1, 270+OFFSET),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(400, 150,   1, 270+OFFSET),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(500, 150,   1, 270+OFFSET),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(600, 150,   1, 270+OFFSET),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(700-1, 150,   1, 270+OFFSET),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//****************牵引制动柱状图_模拟
//    {"",                       D_FONT_BOLD(6),      QRect(730, 310,   40, 2),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(730, 310,   2, 150),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(730, 460,   42, 2),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(770, 310,   2, 150),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(730, 385,   40, 2),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {QObject::trUtf8(""),                   D_FONT_BOLD(6),      QRect(730, 245+30, 40 ,  150),          Qt::green,                Qt::black,          CONTROL_BAR,          ID_PIBRUNSTATE_LABEL_TCUBCUEFFORT        },
    {QObject::trUtf8(""),                   D_FONT_BOLD(6),      QRect(710, 400+30,  80,  25),          Qt::white,                Qt::black,          CONTROL_LABEL,        ID_PIBRUNSTATE_LABEL_TCUBCUEFFORT2       },
//****************牵引制动柱状图_模拟

    {QObject::trUtf8("车号"),                 D_FONT_BOLD(6),      QRect( 11, 151,  88,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(101, 151,  98,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(201, 151,  98,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(301, 151,  98,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(401, 151,  98,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("5"),                   D_FONT_BOLD(6),      QRect(501, 151,  98,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("6"),                   D_FONT_BOLD(6),      QRect(601, 151,  98,  28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },


//    {QObject::trUtf8("ATO模式"),          D_FONT_BOLD(8),      QRect( 710, 100, 80,  24),           Qt::black,                Qt::green,                CONTROL_LABEL,            ID_PIBRUNSTATE_LABEL_ATOMODE   },
//    {QObject::trUtf8("旁路"),          D_FONT_BOLD(8),      QRect( 710, 140, 80,  24),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_ByPass         },
//    {QObject::trUtf8("乘客报警"),          D_FONT_BOLD(8),      QRect(710, 180, 80,  24),           Qt::black,                Qt::red,                CONTROL_LABEL,            ID_PIBRUNSTATE_LABEL_FAS_status         },
//    {QObject::trUtf8("烟火报警"),          D_FONT_BOLD(8),      QRect(710, 220, 80,  24),           Qt::black,                Qt::red,                CONTROL_LABEL,            ID_LABEL_PASSAGEALARM         },
    //{QObject::trUtf8("电制动\n已切除"),   D_FONT_BOLD(8),      QRect(720, 310, 60,  40),           Qt::black,                Qt::yellow,                CONTROL_LABEL,            ID_PIBRUNSTATE_LABEL_DisEBTest         },


    {QObject::trUtf8("主回路"),           D_FONT_BOLD(6),      QRect( 11, 181,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("--"),                 D_FONT_BOLD(6),      QRect(103, 185,  94, 21),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_LINE2CAR1        },

    {QObject::trUtf8("WHL6MC_WSSNCon.PNG"),                   D_FONT_BOLD(6),      QRect(210, 183,  25, 25),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_LABEL_POWER_CAR02_1         },
    {QObject::trUtf8("WHL6MC_HSCBOff.PNG"),                   D_FONT_BOLD(6),      QRect(265, 183,  25, 25),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_LABEL_POWER_CAR02_2         },
    {QObject::trUtf8("WHL6MC_HSCBOff.PNG"),                   D_FONT_BOLD(6),      QRect(337, 183,  25, 25),           Qt::black,                Qt::black,                CONTROL_IMAGE,           ID_LABEL_POWER_CAR03         },
    {QObject::trUtf8("WHL6MC_HSCBOff.PNG"),                   D_FONT_BOLD(6),      QRect(437, 183,  25, 25),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_LABEL_POWER_CAR04        },
    {QObject::trUtf8("WHL6MC_WSSNCon.PNG"),                   D_FONT_BOLD(6),      QRect(510, 183,  25, 25),           Qt::black,                Qt::black,                CONTROL_IMAGE,           ID_LABEL_POWER_CAR05_1         },
    {QObject::trUtf8("WHL6MC_HSCBOff.PNG"),                   D_FONT_BOLD(6),      QRect(565, 183,  25, 25),           Qt::white,                Qt::black,                CONTROL_IMAGE ,           ID_LABEL_POWER_CAR05_2        },


    {QObject::trUtf8("--"),                 D_FONT_BOLD(6),      QRect(603, 185,  93, 21),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_LINE2CAR6         },

    {QObject::trUtf8("牵引系统状态"),      D_FONT_BOLD(6),      QRect( 11, 211,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("--"),                    D_FONT_BOLD(8),      QRect(103, 213,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_LINE3CAR1        },
    {QObject::trUtf8("WHL6TCUOff.PNG"),                 D_FONT_BOLD(6),      QRect(235, 213,  30, 25),           Qt::black,                Qt::black,                CONTROL_IMAGE,           ID_LABEL_TCU_CAR02        },
    {QObject::trUtf8("WHL6TCUOff.PNG"),                 D_FONT_BOLD(6),      QRect(335, 213,  30, 25),           Qt::black,                Qt::black,                CONTROL_IMAGE,           ID_LABEL_TCU_CAR03        },
    {QObject::trUtf8("WHL6TCUOff.PNG"),                 D_FONT_BOLD(6),      QRect(435, 213,  30, 25),           Qt::black,                Qt::black,                CONTROL_IMAGE,           ID_LABEL_TCU_CAR04        },
    {QObject::trUtf8("WHL6TCUOff.PNG"),                 D_FONT_BOLD(6),      QRect(535, 213,  30, 25),           Qt::black,                Qt::black,                CONTROL_IMAGE,           ID_LABEL_TCU_CAR05        },
    {QObject::trUtf8("--"),                    D_FONT_BOLD(8),      QRect(603, 213,  94, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_LINE3CAR6        },

    {QObject::trUtf8("辅助系统状态"),          D_FONT_BOLD(6),      QRect( 11, 241,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("WHL6ACU_ACOff.PNG"),              D_FONT_BOLD(6),        QRect(110, 243,  30, 25),            Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_LABEL_ACU_CAR01        },
    {QObject::trUtf8("WHL6ACU_DCOff.PNG"),              D_FONT_BOLD(6),        QRect(160, 243,  30, 25),            Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_LABEL_ACU_CAR01_2        },
    {QObject::trUtf8("--"),                               D_FONT_BOLD(6),      QRect(204, 243,  92, 25),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_LINE9CAR2        },
    {QObject::trUtf8(""),                               D_FONT_BOLD(6),      QRect(304, 243,  92, 25),            Qt::black,                Qt::black,                CONTROL_LABEL,           ID_LABEL_ACU_CAR03        },
    {QObject::trUtf8(""),                               D_FONT_BOLD(6),      QRect(404, 243,  92, 25),           Qt::black,                Qt::black,                CONTROL_LABEL,           ID_LABEL_ACU_CAR04        },
    {QObject::trUtf8("--"),                               D_FONT_BOLD(6),      QRect(504, 243,  92, 25),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_LINE9CAR5        },
    {QObject::trUtf8("WHL6ACU_ACOff.PNG"),              D_FONT_BOLD(6),        QRect(610, 243,  30, 25),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_LABEL_ACU_CAR06        },
    {QObject::trUtf8("WHL6ACU_DCOff.PNG"),              D_FONT_BOLD(6),        QRect(660, 243,  30, 25),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_LABEL_ACU_CAR06_2        },


    {"",                       D_FONT_BOLD(6),      QRect(150, 270,   1, 30+OFFSET),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(250, 270,   1, 30+OFFSET),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(350, 270,   1, 30+OFFSET),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(450, 270,   1, 30+OFFSET),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(550, 270,   1, 30+OFFSET),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(650, 270,   1, 30+OFFSET),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


    {QObject::trUtf8("制动系统状态"),          D_FONT_BOLD(6),      QRect( 11, 271,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("WHL6BCUServBrkRel.PNG"),                 D_FONT_BOLD(8),      QRect(105, 274,  40, 25),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_LABEL_BCU_CAR01_1        },
    {QObject::trUtf8("WHL6BCUServBrkRel.PNG"),                 D_FONT_BOLD(8),      QRect(155, 274,  40, 25),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_LABEL_BCU_CAR01_2        },
    {QObject::trUtf8("WHL6BCUServBrkRel.PNG"),                 D_FONT_BOLD(8),      QRect(205, 274,  40, 25),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_LABEL_BCU_CAR02_1        },
    {QObject::trUtf8("WHL6BCUServBrkRel.PNG"),                 D_FONT_BOLD(8),      QRect(255, 274,  40, 25),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_LABEL_BCU_CAR02_2        },
    {QObject::trUtf8("WHL6BCUServBrkRel.PNG"),                 D_FONT_BOLD(8),      QRect(305, 274,  40, 25),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_LABEL_BCU_CAR03_1        },
    {QObject::trUtf8("WHL6BCUServBrkRel.PNG"),                 D_FONT_BOLD(8),      QRect(355, 274,  40, 25),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_LABEL_BCU_CAR03_2        },
    {QObject::trUtf8("WHL6BCUServBrkRel.PNG"),                 D_FONT_BOLD(8),      QRect(405, 274,  40, 25),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_LABEL_BCU_CAR06_2        },
    {QObject::trUtf8("WHL6BCUServBrkRel.PNG"),                 D_FONT_BOLD(8),      QRect(455, 274,  40, 25),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_LABEL_BCU_CAR06_1        },
    {QObject::trUtf8("WHL6BCUServBrkRel.PNG"),                 D_FONT_BOLD(8),      QRect(505, 274,  40, 25),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_LABEL_BCU_CAR05_2        },
    {QObject::trUtf8("WHL6BCUServBrkRel.PNG"),                 D_FONT_BOLD(8),      QRect(555, 274,  40, 25),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_LABEL_BCU_CAR05_1        },
    {QObject::trUtf8("WHL6BCUServBrkRel.PNG"),                 D_FONT_BOLD(8),      QRect(605, 274,  40, 25),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_LABEL_BCU_CAR04_2        },
    {QObject::trUtf8("WHL6BCUServBrkRel.PNG"),                 D_FONT_BOLD(8),      QRect(655, 274,  40, 25),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_LABEL_BCU_CAR04_1        },

    {QObject::trUtf8("制动阀状态"),          D_FONT_BOLD(6),      QRect( 11, 271+OFFSET,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("G1"),                 D_FONT_BOLD(8),      QRect(105, 274+OFFSET,  40, 25),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_LABEL_BCU_CAR01_G        },
    {QObject::trUtf8("S2"),                 D_FONT_BOLD(8),      QRect(155, 274+OFFSET,  40, 25),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_LABEL_BCU_CAR01_S        },
    {QObject::trUtf8("S1"),                 D_FONT_BOLD(8),      QRect(205, 274+OFFSET,  40, 25),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_LABEL_BCU_CAR02_S1        },
    {QObject::trUtf8("S2"),                 D_FONT_BOLD(8),      QRect(255, 274+OFFSET,  40, 25),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_LABEL_BCU_CAR02_S2        },
    {QObject::trUtf8("S1"),                 D_FONT_BOLD(8),      QRect(305, 274+OFFSET,  40, 25),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_LABEL_BCU_CAR03_S        },
    {QObject::trUtf8("G2"),                 D_FONT_BOLD(8),      QRect(355, 274+OFFSET,  40, 25),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_LABEL_BCU_CAR03_G        },
    {QObject::trUtf8("G2"),                 D_FONT_BOLD(8),      QRect(405, 274+OFFSET,  40, 25),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_LABEL_BCU_CAR04_G        },
    {QObject::trUtf8("S1"),                 D_FONT_BOLD(8),      QRect(455, 274+OFFSET,  40, 25),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_LABEL_BCU_CAR04_S        },
    {QObject::trUtf8("S2"),                 D_FONT_BOLD(8),      QRect(505, 274+OFFSET,  40, 25),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_LABEL_BCU_CAR05_S2        },
    {QObject::trUtf8("S1"),                 D_FONT_BOLD(8),      QRect(555, 274+OFFSET,  40, 25),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_LABEL_BCU_CAR05_S1        },
    {QObject::trUtf8("S2"),                 D_FONT_BOLD(8),      QRect(605, 274+OFFSET,  40, 25),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_LABEL_BCU_CAR06_S        },
    {QObject::trUtf8("G1"),                 D_FONT_BOLD(8),      QRect(655, 274+OFFSET,  40, 25),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_LABEL_BCU_CAR06_G        },


//司2 2 4 6 8 10 9 7 5 3 1 司1
{QObject::trUtf8("1侧门"),            D_FONT_BOLD(6),      QRect( 11, 301+OFFSET,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8(""),              D_FONT_BOLD(2),      QRect(101, 308+OFFSET,  15, 15),           Qt::black,                Qt::white,                CONTROL_IMAGE,               ID_PIBRUNSTATE_LABEL_CAR0DOOR2   },
{QObject::trUtf8("1"),                D_FONT_BOLD(4),      QRect(117, 305+OFFSET,  15, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,             ID_PIBRUNSTATE_LABEL_CAR1DOOR1       },
{QObject::trUtf8("3"),                D_FONT_BOLD(4),      QRect(133, 305+OFFSET,  15, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1DOOR3        },
{QObject::trUtf8("5"),                D_FONT_BOLD(4),      QRect(149, 305+OFFSET,  15, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1DOOR5        },
{QObject::trUtf8("7"),                D_FONT_BOLD(4),      QRect(165, 305+OFFSET,  15, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1DOOR7        },
{QObject::trUtf8("9"),               D_FONT_BOLD(4),      QRect(181, 305+OFFSET,  15, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1DOOR9        },

{QObject::trUtf8("1"),                D_FONT_BOLD(4),      QRect(201, 305+OFFSET,  19, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2DOOR1        },
{QObject::trUtf8("3"),                D_FONT_BOLD(4),      QRect(221, 305+OFFSET,  19, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2DOOR3        },
{QObject::trUtf8("5"),                D_FONT_BOLD(4),      QRect(241, 305+OFFSET,  19, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2DOOR5        },
{QObject::trUtf8("7"),                D_FONT_BOLD(4),      QRect(261, 305+OFFSET,  19, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2DOOR7        },
{QObject::trUtf8("9"),               D_FONT_BOLD(4),      QRect(281, 305+OFFSET,  19, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2DOOR9        },

{QObject::trUtf8("1"),                D_FONT_BOLD(4),      QRect(301, 305+OFFSET,  19, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3DOOR1        },
{QObject::trUtf8("3"),                D_FONT_BOLD(4),      QRect(321, 305+OFFSET,  19, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3DOOR3        },
{QObject::trUtf8("5"),                D_FONT_BOLD(4),      QRect(341, 305+OFFSET,  19, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3DOOR5        },
{QObject::trUtf8("7"),                D_FONT_BOLD(4),      QRect(361, 305+OFFSET,  19, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3DOOR7        },
{QObject::trUtf8("9"),               D_FONT_BOLD(4),      QRect(381, 305+OFFSET,  19, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3DOOR9        },

{QObject::trUtf8("10"),                D_FONT_BOLD(4),      QRect(401, 305+OFFSET,  19, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4DOOR10        },
{QObject::trUtf8("8"),                D_FONT_BOLD(4),      QRect(421, 305+OFFSET,  19, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4DOOR8        },
{QObject::trUtf8("6"),                D_FONT_BOLD(4),      QRect(441, 305+OFFSET,  19, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4DOOR6        },
{QObject::trUtf8("4"),                D_FONT_BOLD(4),      QRect(461, 305+OFFSET,  19, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4DOOR4        },
{QObject::trUtf8("2"),                D_FONT_BOLD(4),      QRect(481, 305+OFFSET,  19, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4DOOR2        },

{QObject::trUtf8("10"),                D_FONT_BOLD(4),      QRect(501, 305+OFFSET,  19, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR5DOOR10        },
{QObject::trUtf8("8"),                D_FONT_BOLD(4),      QRect(521, 305+OFFSET,  19, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR5DOOR8        },
{QObject::trUtf8("6"),                D_FONT_BOLD(4),      QRect(541, 305+OFFSET,  19, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR5DOOR6        },
{QObject::trUtf8("4"),                D_FONT_BOLD(4),      QRect(561, 305+OFFSET,  19, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR5DOOR4        },
{QObject::trUtf8("2"),                D_FONT_BOLD(4),      QRect(581, 305+OFFSET,  19, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR5DOOR2        },


{QObject::trUtf8("10"),                D_FONT_BOLD(4),      QRect(601, 305+OFFSET,  15, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR8DOOR10        },
{QObject::trUtf8("8"),                D_FONT_BOLD(4),      QRect(617, 305+OFFSET,  15, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR8DOOR8        },
{QObject::trUtf8("6"),                D_FONT_BOLD(4),      QRect(633, 305+OFFSET,  15, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR8DOOR6        },
{QObject::trUtf8("4"),                D_FONT_BOLD(4),      QRect(649, 305+OFFSET,  15, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR8DOOR4        },
{QObject::trUtf8("2"),                D_FONT_BOLD(4),      QRect(665, 305+OFFSET,  15, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR8DOOR2        },
{QObject::trUtf8(""),                D_FONT_BOLD(2),      QRect(681, 308+OFFSET,  15, 15),           Qt::black,                Qt::white,                CONTROL_IMAGE,           ID_PIBRUNSTATE_LABEL_CAR9DOOR1        },
//司1 1 3 5 7 9 10 8 6 4 2 司2
{QObject::trUtf8("2侧门"),            D_FONT_BOLD(6),      QRect( 11, 331+OFFSET,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
{QObject::trUtf8(""),                D_FONT_BOLD(2),      QRect(101, 338+OFFSET,  15, 15),           Qt::black,                Qt::white,                CONTROL_IMAGE,           ID_PIBRUNSTATE_LABEL_CAR0DOOR1        },
{QObject::trUtf8("2"),                D_FONT_BOLD(4),      QRect(117, 335+OFFSET,  15, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1DOOR2        },
{QObject::trUtf8("4"),                D_FONT_BOLD(4),      QRect(133, 335+OFFSET,  15, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1DOOR4        },
{QObject::trUtf8("6"),                D_FONT_BOLD(4),      QRect(149, 335+OFFSET,  15, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1DOOR6        },
{QObject::trUtf8("8"),                D_FONT_BOLD(4),      QRect(165, 335+OFFSET,  15, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1DOOR8        },
{QObject::trUtf8("10"),                D_FONT_BOLD(4),      QRect(181, 335+OFFSET,  15, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR1DOOR10        },

{QObject::trUtf8("2"),                D_FONT_BOLD(4),      QRect(201, 335+OFFSET,  19, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2DOOR2        },
{QObject::trUtf8("4"),                D_FONT_BOLD(4),      QRect(221, 335+OFFSET,  19, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2DOOR4        },
{QObject::trUtf8("6"),                D_FONT_BOLD(4),      QRect(241, 335+OFFSET,  19, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2DOOR6        },
{QObject::trUtf8("8"),                D_FONT_BOLD(4),      QRect(261, 335+OFFSET,  19, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2DOOR8        },
{QObject::trUtf8("10"),                D_FONT_BOLD(4),      QRect(281, 335+OFFSET,  19, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR2DOOR10        },

{QObject::trUtf8("2"),                D_FONT_BOLD(4),      QRect(301, 335+OFFSET,  19, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3DOOR2        },
{QObject::trUtf8("4"),                D_FONT_BOLD(4),      QRect(321, 335+OFFSET,  19, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3DOOR4        },
{QObject::trUtf8("6"),                D_FONT_BOLD(4),      QRect(341, 335+OFFSET,  19, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3DOOR6        },
{QObject::trUtf8("8"),                D_FONT_BOLD(4),      QRect(361, 335+OFFSET,  19, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3DOOR8        },
{QObject::trUtf8("10"),                D_FONT_BOLD(4),      QRect(381, 335+OFFSET,  19, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR3DOOR10        },

{QObject::trUtf8("9"),               D_FONT_BOLD(4),      QRect(401, 335+OFFSET,  19, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4DOOR9        },
{QObject::trUtf8("7"),                D_FONT_BOLD(4),      QRect(421, 335+OFFSET,  19, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4DOOR7        },
{QObject::trUtf8("5"),                D_FONT_BOLD(4),      QRect(441, 335+OFFSET,  19, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4DOOR5        },
{QObject::trUtf8("3"),                D_FONT_BOLD(4),      QRect(461, 335+OFFSET,  19, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4DOOR3        },
{QObject::trUtf8("1"),                D_FONT_BOLD(4),      QRect(481, 335+OFFSET,  19, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR4DOOR1        },

{QObject::trUtf8("9"),               D_FONT_BOLD(4),      QRect(501, 335+OFFSET,  19, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR5DOOR9        },
{QObject::trUtf8("7"),                D_FONT_BOLD(4),      QRect(521, 335+OFFSET,  19, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR5DOOR7        },
{QObject::trUtf8("5"),                D_FONT_BOLD(4),      QRect(541, 335+OFFSET,  19, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR5DOOR5        },
{QObject::trUtf8("3"),                D_FONT_BOLD(4),      QRect(561, 335+OFFSET,  19, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR5DOOR3        },
{QObject::trUtf8("1"),                D_FONT_BOLD(4),      QRect(581, 335+OFFSET,  19, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR5DOOR1        },

{QObject::trUtf8("9"),               D_FONT_BOLD(4),      QRect(601, 335+OFFSET,  15, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR8DOOR9        },
{QObject::trUtf8("7"),                D_FONT_BOLD(4),      QRect(617, 335+OFFSET,  15, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR8DOOR7       },
{QObject::trUtf8("5"),                D_FONT_BOLD(4),      QRect(633, 335+OFFSET,  15, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR8DOOR5        },
{QObject::trUtf8("3"),                D_FONT_BOLD(4),      QRect(649, 335+OFFSET,  15, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR8DOOR3        },
{QObject::trUtf8("1"),                D_FONT_BOLD(4),      QRect(665, 335+OFFSET,  15, 21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_CAR8DOOR1        },
{QObject::trUtf8(""),              D_FONT_BOLD(2),      QRect(681, 338+OFFSET,  15, 15),           Qt::black,                Qt::white,                CONTROL_IMAGE,           ID_PIBRUNSTATE_LABEL_CAR9DOOR2        },


{"",                       D_FONT_BOLD(6),      QRect(150, 360+OFFSET,   1, 30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
{"",                       D_FONT_BOLD(6),      QRect(250, 360+OFFSET,   1, 30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
{"",                       D_FONT_BOLD(6),      QRect(350, 360+OFFSET,   1, 30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
{"",                       D_FONT_BOLD(6),      QRect(450, 360+OFFSET,   1, 30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
{"",                       D_FONT_BOLD(6),      QRect(550, 360+OFFSET,   1, 30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
{"",                       D_FONT_BOLD(6),      QRect(650, 360+OFFSET,   1, 30),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


{QObject::trUtf8("空调系统状态"),        D_FONT_BOLD(6),      QRect( 11, 361+OFFSET,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("WHL6HVACOff.PNG"),               D_FONT_BOLD(6),      QRect(105, 363+OFFSET,  40, 25),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_LABEL_HVAC_CAR01_1        },
    {QObject::trUtf8("WHL6HVACOff.PNG"),               D_FONT_BOLD(6),      QRect(205, 363+OFFSET,  40, 25),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_LABEL_HVAC_CAR02_1        },
    {QObject::trUtf8("WHL6HVACOff.PNG"),               D_FONT_BOLD(6),      QRect(305, 363+OFFSET,  40, 25),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_LABEL_HVAC_CAR03_1        },
    {QObject::trUtf8("WHL6HVACOff.PNG"),               D_FONT_BOLD(6),      QRect(405, 363+OFFSET,  40, 25),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_LABEL_HVAC_CAR04_2        },
    {QObject::trUtf8("WHL6HVACOff.PNG"),               D_FONT_BOLD(6),      QRect(505, 363+OFFSET,  40, 25),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_LABEL_HVAC_CAR05_2        },
    {QObject::trUtf8("WHL6HVACOff.PNG"),               D_FONT_BOLD(6),      QRect(605, 363+OFFSET,  40, 25),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_LABEL_HVAC_CAR06_2        },
    {QObject::trUtf8("WHL6HVACOff.PNG"),               D_FONT_BOLD(6),      QRect(155, 363+OFFSET,  40, 25),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_LABEL_HVAC_CAR01_2        },
    {QObject::trUtf8("WHL6HVACOff.PNG"),               D_FONT_BOLD(6),      QRect(255, 363+OFFSET,  40, 25),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_LABEL_HVAC_CAR02_2        },
    {QObject::trUtf8("WHL6HVACOff.PNG"),               D_FONT_BOLD(6),      QRect(355, 363+OFFSET,  40, 25),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_LABEL_HVAC_CAR03_2        },
    {QObject::trUtf8("WHL6HVACOff.PNG"),               D_FONT_BOLD(6),      QRect(455, 363+OFFSET,  40, 25),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_LABEL_HVAC_CAR04_1        },
    {QObject::trUtf8("WHL6HVACOff.PNG"),               D_FONT_BOLD(6),      QRect(555, 363+OFFSET,  40, 25),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_LABEL_HVAC_CAR05_1        },
    {QObject::trUtf8("WHL6HVACOff.PNG"),               D_FONT_BOLD(6),      QRect(655, 363+OFFSET,  40, 25),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_LABEL_HVAC_CAR06_1        },



{QObject::trUtf8("空压机状态"),           D_FONT_BOLD(6),      QRect( 11, 391+OFFSET,  88, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("--"),                              D_FONT_BOLD(6),      QRect(103, 392+OFFSET,  94, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_LINE8CAR1        },
    {QObject::trUtf8("--"),                              D_FONT_BOLD(6),      QRect(203, 392+OFFSET,  94, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_LINE8CAR2        },
    {QObject::trUtf8("WHL6AirCmp_Off.PNG"),               D_FONT_BOLD(6),      QRect(330, 392+OFFSET,  40, 25),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_LABEL_AIRCMP_CAR03        },
    {QObject::trUtf8("WHL6AirCmp_Off.PNG"),               D_FONT_BOLD(6),      QRect(430, 392+OFFSET,  40, 25),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_LABEL_AIRCMP_CAR04       },
    {QObject::trUtf8("--"),                               D_FONT_BOLD(6),      QRect(503, 392+OFFSET,  94, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_LINE8CAR5        },
    {QObject::trUtf8("--"),                                D_FONT_BOLD(6),      QRect(603, 392+OFFSET,  94, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBRUNSTATE_LABEL_LINE8CAR6        },


{QObject::trUtf8("ATO模式"),          D_FONT_BOLD(6),      QRect( 710, 120, 80,  33),           Qt::black,                Qt::green,                CONTROL_LABEL,            ID_PIBRUNSTATE_LABEL_ATOMODE  }, \
{QObject::trUtf8("旁路"),          D_FONT_BOLD(6),      QRect( 710, 155, 80,  28),           Qt::black,                Qt::yellow,                CONTROL_LABEL,          ID_LABEL_BYPASS        }, \
{QObject::trUtf8("烟火报警"),          D_FONT_BOLD(6),      QRect(710, 185, 80,  28),           Qt::black,                Qt::red,                CONTROL_LABEL,            ID_LABEL_FIRE         }, \
{QObject::trUtf8("乘客报警"),          D_FONT_BOLD(6),      QRect(710, 215, 80,  28),           Qt::black,                Qt::red,                CONTROL_LABEL,            ID_LABEL_PASSAGEALARM         },
{QObject::trUtf8("清洁制动"),          D_FONT_BOLD(6),      QRect(710, 245, 80,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,            ID_LABEL_CTBR_ConditionBrakeMod_B1         },
{QObject::trUtf8("制动系统\n检测到打滑"),          D_FONT_BOLD(6),      QRect(103, 460, 80,  35),           Qt::black,                Qt::green,                CONTROL_LABEL,            ID_LABEL_BRiCT_WSP_B1        },
{QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(203, 460, 80,  35),           Qt::black,                Qt::green,                CONTROL_LABEL,            ID_LABEL_TORBWSP        },
{QObject::trUtf8(""),                 D_FONT_BOLD(6),      QRect(303, 460, 100,  35),           Qt::black,                Qt::green,                CONTROL_LABEL,            ID_LABEL_PISMODE_B1         },

//{QObject::trUtf8("全部确认"),          D_FONT_BOLD(6),      QRect(700, 510, 70,  28),           Qt::black,                Qt::white,                CONTROL_BUTTON,            ID_LABEL_REALTIMEFAULTCONFIRMALL         },


};
int g_RunStateRomLen = sizeof(g_PicRom_RunState)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CRunStatePage,CPage)
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
        //ON_BTNCLK(ID_LABEL_REALTIMEFAULTCONFIRMALL, OnRealtimefaultallBtnClk)
       //ON_BTNCLK(ID_PIBRUNSTATE_BUTTON_EMERGENCYBROADCAST, OnBroadCastBtnClk)
        //ON_BTNCLK(ID_PIBRUNSTATE_ICON_WARNNING, OnRealTimeFaultsWarnningIconClk)
END_MESSAGE_MAP()

CRunStatePage::CRunStatePage()
{

    timercount[0] = timercount[1] =timercount[2] =timercount[3]=timercount[4] = 0;
    m_aircmptimer1 = m_aircmptimer2 = 0;
    old_aircmpuseful1 = old_aircmpuseful2=false;

//    m_faultcount = 0;
//    m_romidx = 0;
}

void CRunStatePage::OnUpdatePage()
{
    updateTrain(ID_PIBRUNSTATE_TRAIN);
    updateArrow(ID_PIBRUNSTATE_ARROW_LEFT,ID_PIBRUNSTATE_ARROW_RIGHT);
    //updateErrorLine(ID_PIBRUNSTATE_TRAIN);
    UpdateTCUStatus();
    UpdateDoor();
    UpdateBreakerState();
    UpdateACU();
    UpdateBCUState();
    UpdateAircmpState();
    UpdateHVACState();
    UpdateByPass_Hide();
    UpdateFAS_status_Hide();
    UpdatePisAlarm();
    UpdateATOMode();
    UpdateLevel();
    Updatepisbroadcast();
    UpdateRealtimefaults();

}
void CRunStatePage::OnRealtimefaultBtnClk()
{

    g_faultsrom[g_romidx].confirm = true;
    g_realtimeFaultsbarList.removeAt(g_faultcount);
    if(g_faultcount>0)
    g_faultcount--;

    //m_faultcount--;

}
//void CRunStatePage::OnRealtimefaultallBtnClk()
//{
//    g_faultsrom[m_romidx].confirm = true;
//    FAULTS_ROM_DATA *pdata = &g_faultsrom[0];
//    for (int i=0; i<g_faultsRomLen; i++)
//    {
//        if (pdata->flg && (3 != pdata->level) && !pdata->confirm)
//        {
//            pdata->confirm = true;
//        }
//        pdata++;
//    }
//}
void CRunStatePage::OnInitPage()
{


#ifdef PAGE_HEADER_OLD

    ((CLabel *) GetDlgItem(ID_PIBRUNSTATE_LABEL_CURRENTORNEXTSTATION1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBRUNSTATE_LABEL_CURRENTORNEXTSTATION2))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_PIBRUNSTATE_LABEL_V))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBRUNSTATE_LABEL_A))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_PIBRUNSTATE_LABEL_TRACTIONMODEL))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBRUNSTATE_LABEL_SPEED))->SetBorderColor(Qt::white);

#endif

    




}

void CRunStatePage::OnShowPage()
{

#ifdef PAGE_BUTTON_BAR_NEW

#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("主菜单"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8("车辆状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8("空调设置"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8("故   障"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("帮   助"));
#endif
    ((CButton*)GetDlgItem(IDLB_COM_BTN8))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(IDLB_COM_BTN9))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(IDLB_COM_BTN10))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(IDLB_COM_BTN11))->m_bAutoUpState = false;
//    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->loadbtnpic("WHL6PIS_Arriv.PNG");
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->loadbtnpic("WHL6PIS_Arriv.PNG");
    ((CButton *)GetDlgItem(IDLB_COM_BTN9))->loadbtnpic("WHL6PIS_Leave.PNG");
    //((CButton *)GetDlgItem(IDLB_COM_BTN10))->loadbtnpic("WHL6PIS_SkipDown.PNG");
    //((CButton *)GetDlgItem(IDLB_COM_BTN11))->loadbtnpic("WHL6PIS_SkipUp.PNG");
    UpdateEmergencyBroadcast();
    this->InitPageHeader();
}

void CRunStatePage::OnLeavePage()
{

}

void CRunStatePage::UpdateLevel()
{
    if(CTHM_EmgyBrake_B1)
    {
        ((C_Ctrl_Bar *)GetDlgItem(ID_PIBRUNSTATE_LABEL_TCUBCUEFFORT))->SetMode(1);
        ((C_Ctrl_Bar *)GetDlgItem(ID_PIBRUNSTATE_LABEL_TCUBCUEFFORT))->SetValue(100,0,100);
        ((CLabel*)GetDlgItem(ID_PIBRUNSTATE_LABEL_TCUBCUEFFORT2 ))->SetCtrlBKColor(Qt::red);
        ((CLabel*)GetDlgItem(ID_PIBRUNSTATE_LABEL_TCUBCUEFFORT2 ))->SetTxtColor(Qt::white);
        ((CLabel*)GetDlgItem(ID_PIBRUNSTATE_LABEL_TCUBCUEFFORT2 ))->SetCtrlText(QObject::trUtf8("紧急制动"));
    }else if(CTHM_FastBrake_B1)
    {
        ((C_Ctrl_Bar *)GetDlgItem(ID_PIBRUNSTATE_LABEL_TCUBCUEFFORT))->SetMode(1);
        ((C_Ctrl_Bar *)GetDlgItem(ID_PIBRUNSTATE_LABEL_TCUBCUEFFORT))->SetValue(100,0,100);
        ((CLabel*)GetDlgItem(ID_PIBRUNSTATE_LABEL_TCUBCUEFFORT2 ))->SetCtrlBKColor(Qt::red);
        ((CLabel*)GetDlgItem(ID_PIBRUNSTATE_LABEL_TCUBCUEFFORT2 ))->SetTxtColor(Qt::white);
        ((CLabel*)GetDlgItem(ID_PIBRUNSTATE_LABEL_TCUBCUEFFORT2 ))->SetCtrlText(QObject::trUtf8("快速制动"));
    }else if(CTHMI_Traction_B1)
    {
        ((CLabel*)GetDlgItem(ID_PIBRUNSTATE_LABEL_TCUBCUEFFORT2 ))->SetCtrlBKColor(Qt::green);
        ((C_Ctrl_Bar *)GetDlgItem(ID_PIBRUNSTATE_LABEL_TCUBCUEFFORT))->SetMode(1);
        ((C_Ctrl_Bar *)GetDlgItem(ID_PIBRUNSTATE_LABEL_TCUBCUEFFORT))->SetValue(CTHMI_Grade_U8,1,100);
        ((CLabel*)GetDlgItem(ID_PIBRUNSTATE_LABEL_TCUBCUEFFORT2 ))->SetTxtColor(Qt::black);
        if(CTHMI_Grade_U8 > 100)
        {
            ((CLabel*)GetDlgItem(ID_PIBRUNSTATE_LABEL_TCUBCUEFFORT2 ))->SetCtrlText(QObject::trUtf8("牵引")+"100%");
        }else
        {
            ((CLabel*)GetDlgItem(ID_PIBRUNSTATE_LABEL_TCUBCUEFFORT2 ))->SetCtrlText(QObject::trUtf8("牵引")+QString::number(CTHMI_Grade_U8)+"%");
        }

    }else if(CTHMI_Brake_B1)
    {
        ((CLabel*)GetDlgItem(ID_PIBRUNSTATE_LABEL_TCUBCUEFFORT2 ))->SetCtrlBKColor(Qt::red);
        ((C_Ctrl_Bar *)GetDlgItem(ID_PIBRUNSTATE_LABEL_TCUBCUEFFORT))->SetMode(1);
        ((C_Ctrl_Bar *)GetDlgItem(ID_PIBRUNSTATE_LABEL_TCUBCUEFFORT))->SetValue(CTHMI_Grade_U8,0,100);
        ((CLabel*)GetDlgItem(ID_PIBRUNSTATE_LABEL_TCUBCUEFFORT2 ))->SetTxtColor(Qt::white);
        if(CTHMI_Grade_U8 > 100)
        {
            ((CLabel*)GetDlgItem(ID_PIBRUNSTATE_LABEL_TCUBCUEFFORT2 ))->SetCtrlText(QObject::trUtf8("制动")+"100%");
        }else
        {
            ((CLabel*)GetDlgItem(ID_PIBRUNSTATE_LABEL_TCUBCUEFFORT2 ))->SetCtrlText(QObject::trUtf8("制动")+QString::number(CTHMI_Grade_U8)+"%");

        }
    }else
    {
        ((CLabel*)GetDlgItem(ID_PIBRUNSTATE_LABEL_TCUBCUEFFORT2 ))->SetTxtColor(Qt::white);
        ((CLabel*)GetDlgItem(ID_PIBRUNSTATE_LABEL_TCUBCUEFFORT2 ))->HideLabel();
        ((C_Ctrl_Bar *)GetDlgItem(ID_PIBRUNSTATE_LABEL_TCUBCUEFFORT))->SetValue(0,0,1);

    }


}
void CRunStatePage::Updatepisbroadcast()
{
    //3s
    if(HMiCT_ForJumpStation_B1)
    {
        if(timercount[0]++ == 12)
        {
            HMiCT_ForJumpStation_B1 = false;
            timercount[0] = 0;
            ((CButton *)GetDlgItem(IDLB_COM_BTN11))->ChangeButtonAutoUpState(true);
            ((CButton *)GetDlgItem(IDLB_COM_BTN11))->ChangeButtonState(LBUTTON_UP);
            ((CButton*)GetDlgItem(IDLB_COM_BTN11))->m_bAutoUpState = false;
        }
    }
    if(HMiCT_BackJumpStation_B1)
    {
        if(timercount[1]++ == 12)
        {
            HMiCT_BackJumpStation_B1 = false;
            timercount[1] = 0;
            ((CButton *)GetDlgItem(IDLB_COM_BTN10))->ChangeButtonAutoUpState(true);
            ((CButton *)GetDlgItem(IDLB_COM_BTN10))->ChangeButtonState(LBUTTON_UP);
            ((CButton*)GetDlgItem(IDLB_COM_BTN10))->m_bAutoUpState = false;
        }
    }
    if(HMiCT_LeavePA_B1)
    {
        if(timercount[2]++ == 12)
        {
            HMiCT_LeavePA_B1 = false;
            timercount[2] = 0;
            ((CButton *)GetDlgItem(IDLB_COM_BTN9))->loadbtnpic("WHL6PIS_Leave.PNG");
            ((CButton *)GetDlgItem(IDLB_COM_BTN9))->ChangeButtonAutoUpState(true);
            ((CButton*)GetDlgItem(IDLB_COM_BTN9))->m_bAutoUpState = false;

        }
    }

    if(HMiCT_ArrivePA_B1)
    {
        if(timercount[3]++ == 12)
        {
            HMiCT_ArrivePA_B1 = false;
            timercount[3] = 0;
            ((CButton *)GetDlgItem(IDLB_COM_BTN8))->loadbtnpic("WHL6PIS_Arriv.PNG");
            ((CButton *)GetDlgItem(IDLB_COM_BTN8))->ChangeButtonAutoUpState(true);
            ((CButton*)GetDlgItem(IDLB_COM_BTN8))->m_bAutoUpState = false;

        }

    }

}
void CRunStatePage::UpdateRealtimefaults()
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

            //((CButton*)GetDlgItem(ID_LABEL_REALTIMEFAULTCONFIRMALL))->ShowButton();

            ((CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULTPOS ))->SetCtrlText(GetCarriageString(g_faultsrom[g_romidx].pos));
            ((CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULTCODE ))->SetCtrlText(QString::number(code,16));

            ((CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULT ))->SetCtrlText(g_faultsinforom[nameidx].name);
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

void CRunStatePage::UpdateBreakerState()
{
    //WHL6MC_WSSConPow.PNG
    //WHL6MC_WSSConNPow.PNG
    //WHL6MC_WSSNCon.PNG

    //WHL6MC_HSCBFault.PNG
    //WHL6MC_HSCBOff.PNG
    //WHL6MC_HSCBOn.PNG
    if(0 )
    {
        ////faults
    }else if(bool(TR1CT_HSCBClosed_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_POWER_CAR02_2))->SetCtrlText("WHL6MC_HSCBOn.PNG");
    }else if(bool(TR1CT_HSCBClosed_B1) == false)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_POWER_CAR02_2))->SetCtrlText("WHL6MC_HSCBOff.PNG");
    }

    if(0 )
    {

    }else if(bool(TR2CT_HSCBClosed_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_POWER_CAR03))->SetCtrlText("WHL6MC_HSCBOn.PNG");
    }else if(bool(TR2CT_HSCBClosed_B1) == false)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_POWER_CAR03))->SetCtrlText("WHL6MC_HSCBOff.PNG");
    }

    if(0 )
    {

    }else if(bool(TR3CT_HSCBClosed_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_POWER_CAR04))->SetCtrlText("WHL6MC_HSCBOn.PNG");
    }else if(bool(TR3CT_HSCBClosed_B1) == false)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_POWER_CAR04))->SetCtrlText("WHL6MC_HSCBOff.PNG");
    }

    if(0 )
    {

    }else if(bool(TR4CT_HSCBClosed_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_POWER_CAR05_2))->SetCtrlText("WHL6MC_HSCBOn.PNG");
    }else if(bool(TR4CT_HSCBClosed_B1) == false)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_POWER_CAR05_2))->SetCtrlText("WHL6MC_HSCBOff.PNG");
    }
    ///******chejiandianyuan


/*    if(!bool(DICT_MP1DI1PoleSWShed_B1||DICT_MP1DI1PoleSWPh_B1))
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_POWER_CAR02_1))->SetCtrlText("WHL6MC_WSSConPowfault.bmp");
        ////weilianjie
    }else */
    if(DICT_MP1DI1PoleSWShed_B1)
    {
        if(CTHMI_CatenaryVoltage_U16 > 1000 && CTHMI_CatenaryVoltage_U16 < 2000)
       {
           ((CImageCtrl *)GetDlgItem(ID_LABEL_POWER_CAR02_1))->SetCtrlText("WHL6MC_WSSConPow.PNG");
       }else
       {
           ((CImageCtrl *)GetDlgItem(ID_LABEL_POWER_CAR02_1))->SetCtrlText("WHL6MC_WSSConNPow.PNG");
       }
    }else
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_POWER_CAR02_1))->SetCtrlText("WHL6MC_WSSNCon.PNG");
    }



//    if(!bool(DICT_MP2DI1PoleSWPh_B1))
//    {
//        ((CImageCtrl *)GetDlgItem(ID_LABEL_POWER_CAR05_1))->SetCtrlText("WHL6MC_WSSConPowfault.bmp");
//        ////weilianjie
//    }else
    if(DICT_MP2DI1PoleSWShed_B1)
    {
       if(CTHMI_CatenaryVoltage_U16 > 1000 && CTHMI_CatenaryVoltage_U16 < 2000)
       {
           ((CImageCtrl *)GetDlgItem(ID_LABEL_POWER_CAR05_1))->SetCtrlText("WHL6MC_WSSConPow.PNG");
       }else
       {
           ((CImageCtrl *)GetDlgItem(ID_LABEL_POWER_CAR05_1))->SetCtrlText("WHL6MC_WSSConNPow.PNG");
       }
    }else
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_POWER_CAR05_1))->SetCtrlText("WHL6MC_WSSNCon.PNG");
    }





}
void CRunStatePage::UpdateTCUStatus()
{
    //WHL6TCUCutout.PNG
    //WHL6TCUAct.PNG
    //WHL6TCUFault.PNG
    //WHL6TCUOff.PNG
    //WHL6TCUWarn.PNG


    //***********   TCU1***************//
    if(TR1CT_IsolateCommand_B1 || TR1CT_DCUCutOut_B1)
    {
        //self test
        ((CImageCtrl *)GetDlgItem(ID_LABEL_TCU_CAR02))->SetCtrlText("WHL6TCUselftest.PNG");
    }else if(
             Bit(g_dataBuffer_WH_Display[855],0)||
             Bit(g_dataBuffer_WH_Display[855],1)||
             Bit(g_dataBuffer_WH_Display[855],2)||
             Bit(g_dataBuffer_WH_Display[855],3)||
             Bit(g_dataBuffer_WH_Display[855],4)||
             Bit(g_dataBuffer_WH_Display[855],5)||
             Bit(g_dataBuffer_WH_Display[855],6)||
             Bit(g_dataBuffer_WH_Display[855],7)||
             Bit(g_dataBuffer_WH_Display[855],8)||
             Bit(g_dataBuffer_WH_Display[855],9)||
             Bit(g_dataBuffer_WH_Display[855],10)||
             Bit(g_dataBuffer_WH_Display[855],11)||
             Bit(g_dataBuffer_WH_Display[855],13)||
             Bit(g_dataBuffer_WH_Display[855],14)||

             Bit(g_dataBuffer_WH_Display[856],0)||
             Bit(g_dataBuffer_WH_Display[856],2)||
             Bit(g_dataBuffer_WH_Display[856],4)||
             Bit(g_dataBuffer_WH_Display[856],5)||
             Bit(g_dataBuffer_WH_Display[856],6)||
             Bit(g_dataBuffer_WH_Display[856],9)||
             Bit(g_dataBuffer_WH_Display[856],10)||
             Bit(g_dataBuffer_WH_Display[856],11)||
             Bit(g_dataBuffer_WH_Display[856],12)||
             Bit(g_dataBuffer_WH_Display[856],13)||
             Bit(g_dataBuffer_WH_Display[256],11)
             )
    {
        //fault
        ((CImageCtrl *)GetDlgItem(ID_LABEL_TCU_CAR02))->SetCtrlText("WHL6TCUFault.PNG");
    }else if(0)
    {
        //warn
        ((CImageCtrl *)GetDlgItem(ID_LABEL_TCU_CAR02))->SetCtrlText("WHL6TCUWarn.PNG");
    }else if(bool(TR1CT_Powering_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_TCU_CAR02))->SetCtrlText("WHL6TCUAct.PNG");
    }else
    {
        //off
        ((CImageCtrl *)GetDlgItem(ID_LABEL_TCU_CAR02))->SetCtrlText("WHL6TCUOff.PNG");
    }
    //***********   TCU2***************//
    if(TR2CT_IsolateCommand_B1 || TR2CT_DCUCutOut_B1)
    {
        //self test
        ((CImageCtrl *)GetDlgItem(ID_LABEL_TCU_CAR03))->SetCtrlText("WHL6TCUselftest.PNG");
    }else if(
            Bit(g_dataBuffer_WH_Display[855+48],0)||
            Bit(g_dataBuffer_WH_Display[855+48],1)||
            Bit(g_dataBuffer_WH_Display[855+48],2)||
            Bit(g_dataBuffer_WH_Display[855+48],3)||
            Bit(g_dataBuffer_WH_Display[855+48],4)||
            Bit(g_dataBuffer_WH_Display[855+48],5)||
            Bit(g_dataBuffer_WH_Display[855+48],6)||
            Bit(g_dataBuffer_WH_Display[855+48],7)||
            Bit(g_dataBuffer_WH_Display[855+48],8)||
            Bit(g_dataBuffer_WH_Display[855+48],9)||
            Bit(g_dataBuffer_WH_Display[855+48],10)||
            Bit(g_dataBuffer_WH_Display[855+48],11)||
            Bit(g_dataBuffer_WH_Display[855+48],13)||
            Bit(g_dataBuffer_WH_Display[855+48],14)||

            Bit(g_dataBuffer_WH_Display[856+48],0)||
            Bit(g_dataBuffer_WH_Display[856+48],2)||
            Bit(g_dataBuffer_WH_Display[856+48],4)||
            Bit(g_dataBuffer_WH_Display[856+48],5)||
            Bit(g_dataBuffer_WH_Display[856+48],6)||
            Bit(g_dataBuffer_WH_Display[856+48],9)||
            Bit(g_dataBuffer_WH_Display[856+48],10)||
            Bit(g_dataBuffer_WH_Display[856+48],11)||
            Bit(g_dataBuffer_WH_Display[856+48],12)||
            Bit(g_dataBuffer_WH_Display[856+48],13)||
            Bit(g_dataBuffer_WH_Display[256],10)

            )
    {
        //fault
        ((CImageCtrl *)GetDlgItem(ID_LABEL_TCU_CAR03))->SetCtrlText("WHL6TCUFault.PNG");
    }else if(0)
    {
        //warn
        ((CImageCtrl *)GetDlgItem(ID_LABEL_TCU_CAR03))->SetCtrlText("WHL6TCUWarn.PNG");
    }else if(bool(TR2CT_Powering_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_TCU_CAR03))->SetCtrlText("WHL6TCUAct.PNG");
    }else
    {
        //off
        ((CImageCtrl *)GetDlgItem(ID_LABEL_TCU_CAR03))->SetCtrlText("WHL6TCUOff.PNG");
    }
    //***********   TCU3***************//

    if(TR3CT_IsolateCommand_B1 || TR3CT_DCUCutOut_B1)
    {
        //self test
        ((CImageCtrl *)GetDlgItem(ID_LABEL_TCU_CAR04))->SetCtrlText("WHL6TCUselftest.PNG");
    }else if(
            Bit(g_dataBuffer_WH_Display[855+96],0)||
            Bit(g_dataBuffer_WH_Display[855+96],1)||
            Bit(g_dataBuffer_WH_Display[855+96],2)||
            Bit(g_dataBuffer_WH_Display[855+96],3)||
            Bit(g_dataBuffer_WH_Display[855+96],4)||
            Bit(g_dataBuffer_WH_Display[855+96],5)||
            Bit(g_dataBuffer_WH_Display[855+96],6)||
            Bit(g_dataBuffer_WH_Display[855+96],7)||
            Bit(g_dataBuffer_WH_Display[855+96],8)||
            Bit(g_dataBuffer_WH_Display[855+96],9)||
            Bit(g_dataBuffer_WH_Display[855+96],10)||
            Bit(g_dataBuffer_WH_Display[855+96],11)||
            Bit(g_dataBuffer_WH_Display[855+96],13)||
            Bit(g_dataBuffer_WH_Display[855+96],14)||

            Bit(g_dataBuffer_WH_Display[856+96],0)||
            Bit(g_dataBuffer_WH_Display[856+96],2)||
            Bit(g_dataBuffer_WH_Display[856+96],4)||
            Bit(g_dataBuffer_WH_Display[856+96],5)||
            Bit(g_dataBuffer_WH_Display[856+96],6)||
            Bit(g_dataBuffer_WH_Display[856+96],9)||
            Bit(g_dataBuffer_WH_Display[856+96],10)||
            Bit(g_dataBuffer_WH_Display[856+96],11)||
            Bit(g_dataBuffer_WH_Display[856+96],12)||
            Bit(g_dataBuffer_WH_Display[856+96],13)||
            Bit(g_dataBuffer_WH_Display[256],9)

            )
    {
        //fault
        ((CImageCtrl *)GetDlgItem(ID_LABEL_TCU_CAR04))->SetCtrlText("WHL6TCUFault.PNG");
    }else if(0)
    {
        //warn
        ((CImageCtrl *)GetDlgItem(ID_LABEL_TCU_CAR04))->SetCtrlText("WHL6TCUWarn.PNG");
    }else if(bool(TR3CT_Powering_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_TCU_CAR04))->SetCtrlText("WHL6TCUAct.PNG");
    }else
    {
        //off
        ((CImageCtrl *)GetDlgItem(ID_LABEL_TCU_CAR04))->SetCtrlText("WHL6TCUOff.PNG");
    }
    //***********   TCU4***************//
    if(TR4CT_IsolateCommand_B1 || TR4CT_DCUCutOut_B1)
    {
        //self test
        ((CImageCtrl *)GetDlgItem(ID_LABEL_TCU_CAR05))->SetCtrlText("WHL6TCUselftest.PNG");
    }else if(
            Bit(g_dataBuffer_WH_Display[855+144],0)||
            Bit(g_dataBuffer_WH_Display[855+144],1)||
            Bit(g_dataBuffer_WH_Display[855+144],2)||
            Bit(g_dataBuffer_WH_Display[855+144],3)||
            Bit(g_dataBuffer_WH_Display[855+144],4)||
            Bit(g_dataBuffer_WH_Display[855+144],5)||
            Bit(g_dataBuffer_WH_Display[855+144],6)||
            Bit(g_dataBuffer_WH_Display[855+144],7)||
            Bit(g_dataBuffer_WH_Display[855+144],8)||
            Bit(g_dataBuffer_WH_Display[855+144],9)||
            Bit(g_dataBuffer_WH_Display[855+144],10)||
            Bit(g_dataBuffer_WH_Display[855+144],11)||
            Bit(g_dataBuffer_WH_Display[855+144],13)||
            Bit(g_dataBuffer_WH_Display[855+144],14)||

            Bit(g_dataBuffer_WH_Display[856+144],0)||
            Bit(g_dataBuffer_WH_Display[856+144],2)||
            Bit(g_dataBuffer_WH_Display[856+144],4)||
            Bit(g_dataBuffer_WH_Display[856+144],5)||
            Bit(g_dataBuffer_WH_Display[856+144],6)||
            Bit(g_dataBuffer_WH_Display[856+144],9)||
            Bit(g_dataBuffer_WH_Display[856+144],10)||
            Bit(g_dataBuffer_WH_Display[856+144],11)||
            Bit(g_dataBuffer_WH_Display[856+144],12)||
            Bit(g_dataBuffer_WH_Display[856+144],13)||
            Bit(g_dataBuffer_WH_Display[256],8)
            )
    {
        //fault
        ((CImageCtrl *)GetDlgItem(ID_LABEL_TCU_CAR05))->SetCtrlText("WHL6TCUFault.PNG");
    }else if(0)
    {
        //warn
        ((CImageCtrl *)GetDlgItem(ID_LABEL_TCU_CAR05))->SetCtrlText("WHL6TCUWarn.PNG");
    }else if(bool(TR4CT_Powering_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_TCU_CAR05))->SetCtrlText("WHL6TCUAct.PNG");
    }else
    {
        //off
        ((CImageCtrl *)GetDlgItem(ID_LABEL_TCU_CAR05))->SetCtrlText("WHL6TCUOff.PNG");
    }
}

void CRunStatePage::UpdateACU()
{
    //WHL6ACU_ACFault.PNG
    //WHL6ACU_ACOff.PNG
    //WHL6ACU_ACOn.PNG
    //WHL6ACU_ACWarn.PNG
    //WHL6ACUCutOff.PNG
    //WHL6ACU_DCFault.PNG
    //WHL6ACU_DCOff.PNG
    //WHL6ACU_DCOn.PNG
    //WHL6ACU_DCWarn.PNG
    ///lack warning and

    static int pantoupcnt5s = 0;
    if(CTHMI_CatenaryVoltage_U16 < 1200)
    {
        pantoupcnt5s = 0;
    }
    if(pantoupcnt5s++ > 25)
    {
        pantoupcnt5s  = 30;
    }
    if((!bool(CTHMI_ACU1On_B1)))
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_ACU_CAR01))->SetCtrlText("WHL6ACU_ACOff.PNG");
    }
    else if(bool(AX1CT_CTAXi_Cutoff_B1))
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_ACU_CAR01))->SetCtrlText("WHL6ACUCutOff.PNG");
    }
    else if(!bool(AX1CT_AcuEquipmentError_B1) && bool(CTHMI_CatenaryVoltage_U16 > 1200) && bool(pantoupcnt5s> 25))
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_ACU_CAR01))->SetCtrlText("WHL6ACU_ACFault.PNG");
    }else if(0)
    {
        //warning
    }else if(AX1CT_AcuWKPowerOutputState_B1)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_ACU_CAR01))->SetCtrlText("WHL6ACU_ACOn.PNG");
    }else if(bool(AX1CT_StopWork_B1))
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_ACU_CAR01))->SetCtrlText("WHL6ACU_ACOff.PNG");
    }else
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_ACU_CAR01))->SetCtrlText("WHL6ACU_ACOff.PNG");
    }

    if((!bool(CTHMI_REC1On_B1)))
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_ACU_CAR01_2))->SetCtrlText("WHL6ACU_DCOff.PNG");
    }
    else if(RE1CT_ChargerCutoff_B1)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_ACU_CAR01_2))->SetCtrlText("WHL6ACUCutOff.PNG");
    }else if(RE1CT_RecBreakdown_B1)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_ACU_CAR01_2))->SetCtrlText("WHL6ACU_DCFault.PNG");
    }else if(RE1CT_RecOK_B1)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_ACU_CAR01_2))->SetCtrlText("WHL6ACU_DCOn.PNG");
    }else
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_ACU_CAR01_2))->SetCtrlText("WHL6ACU_DCOff.PNG");
    }


    if((!bool(CTHMI_ACU2On_B1)))
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_ACU_CAR06))->SetCtrlText("WHL6ACU_ACOff.PNG");
    }
    else if(bool(AX2CT_CTAXi_Cutoff_B1))
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_ACU_CAR06))->SetCtrlText("WHL6ACUCutOff.PNG");
    }
    else if(!bool(AX2CT_AcuEquipmentError_B1) && bool(CTHMI_CatenaryVoltage_U16 > 1200)&& bool(pantoupcnt5s> 25))
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_ACU_CAR06))->SetCtrlText("WHL6ACU_ACFault.PNG");
    }else if(0)
    {
        //warning
    }else if(AX2CT_AcuWKPowerOutputState_B1)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_ACU_CAR06))->SetCtrlText("WHL6ACU_ACOn.PNG");
    }else if(bool(AX2CT_StopWork_B1))
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_ACU_CAR06))->SetCtrlText("WHL6ACU_ACOff.PNG");
    }else
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_ACU_CAR06))->SetCtrlText("WHL6ACU_ACOff.PNG");
    }


    if((!bool(CTHMI_REC2On_B1)))
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_ACU_CAR06_2))->SetCtrlText("WHL6ACU_DCOff.PNG");
    }
    else if(RE2CT_ChargerCutoff_B1)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_ACU_CAR06_2))->SetCtrlText("WHL6ACUCutOff.PNG");
    }else if(RE2CT_RecBreakdown_B1)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_ACU_CAR06_2))->SetCtrlText("WHL6ACU_DCFault.PNG");
    }else if(RE2CT_RecOK_B1)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_ACU_CAR06_2))->SetCtrlText("WHL6ACU_DCOn.PNG");
    }else
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_ACU_CAR06_2))->SetCtrlText("WHL6ACU_DCOff.PNG");
    }

    if(DICT_MiDI1ExtPowerSta_B1)
    {
        ((CLabel *)GetDlgItem(ID_LABEL_ACU_CAR03))->SetCtrlText(QObject::trUtf8("扩展供电"));
        ((CLabel *)GetDlgItem(ID_LABEL_ACU_CAR03))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem(ID_LABEL_ACU_CAR03))->SetCtrlText(QObject::trUtf8(""));
        ((CLabel *)GetDlgItem(ID_LABEL_ACU_CAR03))->SetCtrlBKColor(Qt::white);
    }
//    if(DICT_M2DI1ExtPowerSta_B1)
//    {
//        ((CLabel *)GetDlgItem(ID_LABEL_ACU_CAR04))->SetCtrlText(QObject::trUtf8("扩展充电"));
//        ((CLabel *)GetDlgItem(ID_LABEL_ACU_CAR04))->SetCtrlBKColor(Qt::green);
//    }else
//    {
//        ((CLabel *)GetDlgItem(ID_LABEL_ACU_CAR04))->SetCtrlText(QObject::trUtf8(""));
//        ((CLabel *)GetDlgItem(ID_LABEL_ACU_CAR04))->SetCtrlBKColor(Qt::white);
//    }

    /*
    //CTHM_Tc1ACUOn_B1	TC1车ACU在线
    if (CTHM_SIV1_Online_B1  )
    {
        //Bit( ACU_611_7, 16 )=AXiCT_MajorFlt_B1    至少一个重大故障存在(故障可以通过一个维护操作复位)
        //Bit( ACU_611_7, 15 )=AXiCT_MediumFlt_B1   至少一个中等故障存在(司机通过DDU可复位故障)
        //Bit( ACU_610_8, 6 )=AXiCT_RevMode_B1	    ACU处于紧急通风状态

         if (SIV1CT_StartSiv_B1 )
        {
             ACU_status1 = 0;
        }
        else
        {
            ACU_status1 = 4;

        }
    }
    else
    {
        ACU_status1 = 5;
    }

    if (CTHM_SIV2_Online_B1 )
    {
        if (SIV2CT_StartSiv_B1 )
       {
            ACU_status2 = 0;
       }
       else
       {
           ACU_status2 = 4;

       }
    }
    else
    {
        ACU_status2 = 5;
    }


    if ( 0 == ACU_status1 )
    {

        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1ASSISTSYS_V))->SetTxtColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1ASSISTSYS_V))->SetCtrlText(QString::number(SIV1CT_OutputVoltageUu_U16).append(" V"));

    }
    if ( 1 == ACU_status1 )
    {

        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1ASSISTSYS_V))->SetTxtColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1ASSISTSYS_V))->SetCtrlText("");

    }
    if ( 2 == ACU_status1 )
    {

        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1ASSISTSYS_V))->SetTxtColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1ASSISTSYS_V))->SetCtrlText(QString::number(SIV1CT_OutputVoltageUu_U16).append(" V"));

    }
    if ( 3 == ACU_status1 )
    {

        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1ASSISTSYS_V))->SetTxtColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1ASSISTSYS_V))->SetCtrlText(QObject::trUtf8("可复位"));

    }
    if ( 4 == ACU_status1 )
    {

        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1ASSISTSYS_V))->SetTxtColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1ASSISTSYS_V))->SetCtrlText(QObject::trUtf8("停机"));

    }
    if ( 5 == ACU_status1 )
    {

        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1ASSISTSYS_V))->SetTxtColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1ASSISTSYS_V))->SetCtrlText("");
    }

    if ( 0 == ACU_status2 )
    {

        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetTxtColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetCtrlText(QString::number(SIV2CT_OutputVoltageUu_U16).append(" V"));

    }
    if ( 1 == ACU_status2 )
    {

        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetTxtColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetCtrlText("");

    }
    if ( 2 == ACU_status2 )
    {

        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetTxtColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetCtrlText(QString::number(SIV2CT_OutputVoltageUu_U16).append(" V"));

    }
    if ( 3 == ACU_status2 )
    {

        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetTxtColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetCtrlText(QObject::trUtf8("可复位"));

    }
    if ( 4 == ACU_status2 )
    {

        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetTxtColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetCtrlText(QObject::trUtf8("停机"));

    }
    if ( 5 == ACU_status2 )
    {

        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetTxtColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V))->SetCtrlText("");
    }


    SetAcuLabelColor(ID_PIBRUNSTATE_LABEL_CAR1ASSISTSYS_V, ACU_status1);
    SetAcuLabelColor(ID_PIBRUNSTATE_LABEL_CAR8ASSISTSYS_V, ACU_status2);



    // KAUX
    int kaux_color = 0;
    //Bit(DI_140_1,2)=DICT_KAUXFdMp3_B1    	KAUX feedback	K-AUX反馈信号(仅Mp3车)
    if (RIOM4CT_DIM1DI6_B1)
    {
        kaux_color = 1;
    }
    else
    {

            kaux_color = 0;


    }
    //kaux_color = 1;
    SetKauxLabelColor(ID_PIBRUNSTATE_LABEL_CAR4KAUXSTATE, kaux_color);
*/
}

void CRunStatePage::UpdateBCUState()
{

    setBCUBGStatus((CLabel *)GetDlgItem(ID_LABEL_BCU_CAR01_G),
                        BR1CT_SeriousFaultTCBog1_B1,BR1CT_SlightFaultTCBog1_B1,CTHMI_BCU1On_B1||CTHMI_BCU2On_B1);
    setBCUBGStatus((CLabel *)GetDlgItem(ID_LABEL_BCU_CAR01_S),
                        BR1CT_SeriousFaultTCBog2_B1,BR1CT_SlightFaultTCBog2_B1,CTHMI_BCU1On_B1||CTHMI_BCU2On_B1);
    setBCUBGStatus((CLabel *)GetDlgItem(ID_LABEL_BCU_CAR02_S1),
                        BR1CT_SeriousFaultMpBog1_B1,BR1CT_SlightFaultMpBog1_B1,CTHMI_BCU1On_B1||CTHMI_BCU2On_B1);
    setBCUBGStatus((CLabel *)GetDlgItem(ID_LABEL_BCU_CAR02_S2),
                        BR1CT_SeriousFaultMpBog2_B1,BR1CT_SlightFaultMpBog2_B1,CTHMI_BCU1On_B1||CTHMI_BCU2On_B1);
    setBCUBGStatus((CLabel *)GetDlgItem(ID_LABEL_BCU_CAR03_S),
                        BR1CT_SeriousFaultMBog1_B1,BR1CT_SlightFaultMBog1_B1,CTHMI_BCU1On_B1||CTHMI_BCU2On_B1);
    setBCUBGStatus((CLabel *)GetDlgItem(ID_LABEL_BCU_CAR03_G),
                        BR1CT_SeriousFaultMBog2_B1,BR1CT_SlightFaultMBog2_B1,CTHMI_BCU1On_B1||CTHMI_BCU2On_B1);

    setBCUBGStatus((CLabel *)GetDlgItem(ID_LABEL_BCU_CAR06_G),
                        BR2CT_SeriousFaultTCBog1_B1,BR2CT_SlightFaultTCBog1_B1,CTHMI_BCU3On_B1||CTHMI_BCU4On_B1);
    setBCUBGStatus((CLabel *)GetDlgItem(ID_LABEL_BCU_CAR06_S),
                        BR2CT_SeriousFaultTCBog2_B1,BR2CT_SlightFaultTCBog2_B1,CTHMI_BCU3On_B1||CTHMI_BCU4On_B1);
    setBCUBGStatus((CLabel *)GetDlgItem(ID_LABEL_BCU_CAR05_S1),
                        BR2CT_SeriousFaultMpBog1_B1,BR2CT_SlightFaultMpBog1_B1,CTHMI_BCU3On_B1||CTHMI_BCU4On_B1);
    setBCUBGStatus((CLabel *)GetDlgItem(ID_LABEL_BCU_CAR05_S2),
                        BR2CT_SeriousFaultMpBog2_B1,BR2CT_SlightFaultMpBog2_B1,CTHMI_BCU3On_B1||CTHMI_BCU4On_B1);
    setBCUBGStatus((CLabel *)GetDlgItem(ID_LABEL_BCU_CAR04_S),
                        BR2CT_SeriousFaultMBog1_B1,BR2CT_SlightFaultMBog1_B1,CTHMI_BCU3On_B1||CTHMI_BCU4On_B1);
    setBCUBGStatus((CLabel *)GetDlgItem(ID_LABEL_BCU_CAR04_G),
                        BR2CT_SeriousFaultMBog2_B1,BR2CT_SlightFaultMBog2_B1,CTHMI_BCU3On_B1||CTHMI_BCU4On_B1);


    //WHL6BCUFault.PNG
    //WHL6BCUServBrkApp.PNG
    //WHL6BCUSelfTest.PNG
    //WHL6BCUWarn.PNG
    //WHL6BCUParkBrkApp.PNG
    //WHL6BCUCutOut.PNG
    //WHL6BCUServBrkRel.PNG
    /*****根据制动状态有效位做一些故障是否存在的逻辑******/
    if(!bool(BR1CT_DiagOKTc12_Bogie1_B1))
    {
         BitSet(g_dataBuffer_WH_Display[509],8,0);
         BitSet(g_dataBuffer_WH_Display[509],9,0);
         BitSet(g_dataBuffer_WH_Display[531],0,0);
         BitSet(g_dataBuffer_WH_Display[531],8,0);
         BitSet(g_dataBuffer_WH_Display[533],8,0);
         BitSet(g_dataBuffer_WH_Display[534],10,0);
         BitSet(g_dataBuffer_WH_Display[543],1,0);
         BitSet(g_dataBuffer_WH_Display[543],0,0);
    }

    ////CAR01-1
    if(bool(DICT_TC1DI3ParkBrkRls_B1) == false)
    {
        //tingfangzhiding
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR01_1))->SetCtrlText("WHL6BCUParkBrkApp.PNG");
    }else if(DICT_TC1DI4TcFBrk1CF_B1)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR01_1))->SetCtrlText("WHL6BCUCutOut.PNG");
        //zhidongqiechu
    }else if(BR1CT_RuningSelfTest_B1)
    {
        //zijian
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR01_1))->SetCtrlText("WHL6BCUSelfTest.PNG");
    }else if(
//         (!Bit(g_dataBuffer_WH_Display[510],8))||//Tc1/Tc2车停放制动传感器正常
//         (!Bit(g_dataBuffer_WH_Display[510],12))||//所有空气悬挂系统压力达到正常值
//         Bit(g_dataBuffer_WH_Display[526],12)||///zhufeng1
//         Bit(g_dataBuffer_WH_Display[526],13)||///zhufeng2
         Bit(g_dataBuffer_WH_Display[532],0)||//Tc1/Tc2转向架Bcp压力低
         Bit(g_dataBuffer_WH_Display[532],4)||//速度检测一般故障
         (bool(g_dataBuffer_WH_Display[509]&bit8)&&bool(g_dataBuffer_WH_Display[509]&bit9))||
         (bool(g_dataBuffer_WH_Display[526]&bit10)&&bool(g_dataBuffer_WH_Display[526]&bit11))||
//         Bit(g_dataBuffer_WH_Display[532],9)||//自检间断测超过24小时
//         Bit(g_dataBuffer_WH_Display[532],10)||//自检间断测超过26小时
         Bit(g_dataBuffer_WH_Display[531],0)||//Asp超出了Tc1/Tc2转向架1范围
         bool(Bit(g_dataBuffer_WH_Display[531],8))//Tc1/Tc2转向架1制动没有缓解
//         Bit(g_dataBuffer_WH_Display[533],0)||//中等故障
//         Bit(g_dataBuffer_WH_Display[532],15)//主要事件
            )



    {
        //guzhang
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR01_1))->SetCtrlText("WHL6BCUFault.PNG");

    }else if(
            Bit(g_dataBuffer_WH_Display[509],9)||//Tc1/Tc2车1轴速度传感器故障
            Bit(g_dataBuffer_WH_Display[509],8)|| //Tc1/Tc2车2轴速度传感器故障
            Bit(g_dataBuffer_WH_Display[526],10)||///can1
            Bit(g_dataBuffer_WH_Display[526],11)||///can2
            Bit(g_dataBuffer_WH_Display[533],8)||//Tc1/Tc2转向架1网关阀严重故障
            Bit(g_dataBuffer_WH_Display[534],10)||//Tc1/Tc2转向架1编码器故障
            Bit(g_dataBuffer_WH_Display[543],1)||//Tc1/Tc2轴1检测到打滑状态保持
            Bit(g_dataBuffer_WH_Display[543],0)||//Tc1/Tc2轴2检测到打滑状态保持

            //Bit(g_dataBuffer_WH_Display[526],2)||//Tc1/Tc2车 转向架1能施加常用制动
            //Bit(g_dataBuffer_WH_Display[527],0)||//Tc1/Tc2车转向1架紧急制动有效

//            Bit(g_dataBuffer_WH_Display[533],1)||
            Bit(g_dataBuffer_WH_Display[533],10)
            )
    {
        //jinggao
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR01_1))->SetCtrlText("WHL6BCUWarn.PNG");

    }else if(bool(DICT_TC1DI3AirBrk1Rls_B1) == false)
    {
        //changyongzhidong
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR01_1))->SetCtrlText("WHL6BCUServBrkApp.PNG");
    }else
    {
        //changyongzhidonghuanjie
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR01_1))->SetCtrlText("WHL6BCUServBrkRel.PNG");
    }


    ////*****CAR01-2
    /*****根据制动状态有效位做一些故障是否存在的逻辑******/
    if(!bool(BR1CT_DiagOKTc12_Bogie2_B1))
    {
         BitSet(g_dataBuffer_WH_Display[509],10,0);
         BitSet(g_dataBuffer_WH_Display[509],11,0);
         BitSet(g_dataBuffer_WH_Display[531],1,0);
         BitSet(g_dataBuffer_WH_Display[531],9,0);
         BitSet(g_dataBuffer_WH_Display[533],11,0);
         BitSet(g_dataBuffer_WH_Display[534],11,0);
         BitSet(g_dataBuffer_WH_Display[543],2,0);
         BitSet(g_dataBuffer_WH_Display[543],3,0);
    }
    if(bool(DICT_TC1DI3ParkBrkRls_B1) == false)
    {
        //tingfangzhiding
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR01_2))->SetCtrlText("WHL6BCUParkBrkApp.PNG");
    }else if(DICT_TC1DI4TcFBrk2CF_B1)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR01_2))->SetCtrlText("WHL6BCUCutOut.PNG");
        //zhidongqiechu
    }else if(BR1CT_RuningSelfTest_B1)
    {
        //zijian
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR01_2))->SetCtrlText("WHL6BCUSelfTest.PNG");
    }else if(
 //           (!Bit(g_dataBuffer_WH_Display[510],8))||//Tc1/Tc2车停放制动传感器正常
//            (!Bit(g_dataBuffer_WH_Display[510],12))||//所有空气悬挂系统压力达到正常值
//            Bit(g_dataBuffer_WH_Display[526],12)||///zhufeng1
//            Bit(g_dataBuffer_WH_Display[526],13)||///zhufeng2
            Bit(g_dataBuffer_WH_Display[532],0)||//Tc1/Tc2转向架Bcp压力低
            Bit(g_dataBuffer_WH_Display[532],4)||//速度检测一般故障
//            Bit(g_dataBuffer_WH_Display[532],9)||//自检间断测超过24小时
//            Bit(g_dataBuffer_WH_Display[532],10)||//自检间断测超过26小时
            (bool(g_dataBuffer_WH_Display[509]&bit10)&&bool(g_dataBuffer_WH_Display[509]&bit11))||
            (bool(g_dataBuffer_WH_Display[526]&bit10)&&bool(g_dataBuffer_WH_Display[526]&bit11))||
            Bit(g_dataBuffer_WH_Display[531],1)||
            bool(Bit(g_dataBuffer_WH_Display[531],9))//Tc1/Tc2转向架1制动没有缓解

//            Bit(g_dataBuffer_WH_Display[533],0)||//中等故障
//            Bit(g_dataBuffer_WH_Display[532],15)//主要事件
            )
    {
        //guzhang
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR01_2))->SetCtrlText("WHL6BCUFault.PNG");
    }else if(


            Bit(g_dataBuffer_WH_Display[509],10)||
            Bit(g_dataBuffer_WH_Display[509],11)||
            Bit(g_dataBuffer_WH_Display[526],10)||///can1
            Bit(g_dataBuffer_WH_Display[526],11)||///can2
            Bit(g_dataBuffer_WH_Display[533],11)||
            Bit(g_dataBuffer_WH_Display[534],11)||
            Bit(g_dataBuffer_WH_Display[543],2)||
            Bit(g_dataBuffer_WH_Display[543],3)||
            //            Bit(g_dataBuffer_WH_Display[526],3)||
            //            Bit(g_dataBuffer_WH_Display[527],1)||
 //           Bit(g_dataBuffer_WH_Display[533],1)||
            Bit(g_dataBuffer_WH_Display[533],13)

            )
    {
        //jinggao
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR01_2))->SetCtrlText("WHL6BCUWarn.PNG");
    }else if(bool(DICT_TC1DI3AirBrk2Rls_B1) == false)
    {
        //changyongzhidong
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR01_2))->SetCtrlText("WHL6BCUServBrkApp.PNG");
    }else
    {
        //changyongzhidonghuanjie
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR01_2))->SetCtrlText("WHL6BCUServBrkRel.PNG");
    }

    ////*******CAR02-1

    /*****根据制动状态有效位做一些故障是否存在的逻辑******/
    if(!bool(BR1CT_DiagOKMp12_Bogie1_B1))
    {
         BitSet(g_dataBuffer_WH_Display[509],12,0);
         BitSet(g_dataBuffer_WH_Display[509],13,0);
         BitSet(g_dataBuffer_WH_Display[531],2,0);
         BitSet(g_dataBuffer_WH_Display[531],10,0);
         BitSet(g_dataBuffer_WH_Display[533],14,0);
         BitSet(g_dataBuffer_WH_Display[534],12,0);
         BitSet(g_dataBuffer_WH_Display[543],4,0);
         BitSet(g_dataBuffer_WH_Display[543],5,0);
    }

    if(bool(DICT_MP1DI1MpParkBrkRls_B1) == false)
    {
        //tingfangzhiding
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR02_1))->SetCtrlText("WHL6BCUParkBrkApp.PNG");
    }else if(DICT_MP1DI1MPFBrk1CF_B1)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR02_1))->SetCtrlText("WHL6BCUCutOut.PNG");
    }else if(BR1CT_RuningSelfTest_B1)
    {
        //zijian
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR02_1))->SetCtrlText("WHL6BCUSelfTest.PNG");
    }else if(
 //           (!Bit(g_dataBuffer_WH_Display[510],9))||
//            (!Bit(g_dataBuffer_WH_Display[510],12))||
//            Bit(g_dataBuffer_WH_Display[526],12)||
//            Bit(g_dataBuffer_WH_Display[526],13)||
            Bit(g_dataBuffer_WH_Display[532],1)||
            Bit(g_dataBuffer_WH_Display[532],4)||
//            Bit(g_dataBuffer_WH_Display[532],9)||
//            Bit(g_dataBuffer_WH_Display[532],10)||
            (bool(g_dataBuffer_WH_Display[509]&bit12)&&bool(g_dataBuffer_WH_Display[509]&bit13))||
            (bool(g_dataBuffer_WH_Display[526]&bit10)&&bool(g_dataBuffer_WH_Display[526]&bit11))||
            Bit(g_dataBuffer_WH_Display[531],2)||
            bool(Bit(g_dataBuffer_WH_Display[531],10))//Tc1/Tc2转向架1制动没有缓解

//            Bit(g_dataBuffer_WH_Display[533],0)||
//            Bit(g_dataBuffer_WH_Display[532],15)


            )
    {
        //guzhang
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR02_1))->SetCtrlText("WHL6BCUFault.PNG");

    }else if(
            Bit(g_dataBuffer_WH_Display[509],12)||
            Bit(g_dataBuffer_WH_Display[509],13)||
            Bit(g_dataBuffer_WH_Display[526],10)||
            Bit(g_dataBuffer_WH_Display[526],11)||
//            Bit(g_dataBuffer_WH_Display[526],4)||
//            Bit(g_dataBuffer_WH_Display[527],2)||

            Bit(g_dataBuffer_WH_Display[533],14)||
            Bit(g_dataBuffer_WH_Display[534],12)||
            Bit(g_dataBuffer_WH_Display[543],4)||
            Bit(g_dataBuffer_WH_Display[543],5)||
  //          Bit(g_dataBuffer_WH_Display[533],1)||
            Bit(g_dataBuffer_WH_Display[534],0)
            )
    {
        //jinggao
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR02_1))->SetCtrlText("WHL6BCUWarn.PNG");

    }else if(bool(DICT_MP1DI1MpAirBrk1Rls_B1) == false)
    {
        //changyongzhidong
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR02_1))->SetCtrlText("WHL6BCUServBrkApp.PNG");
    }else
    {
        //changyongzhidonghuanjie
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR02_1))->SetCtrlText("WHL6BCUServBrkRel.PNG");
    }
    ////****CAR02-2
    /*****根据制动状态有效位做一些故障是否存在的逻辑******/
    if(!bool(BR1CT_DiagOKMp12_Bogie2_B1))
    {
         BitSet(g_dataBuffer_WH_Display[509],14,0);
         BitSet(g_dataBuffer_WH_Display[509],15,0);
         BitSet(g_dataBuffer_WH_Display[531],3,0);
         BitSet(g_dataBuffer_WH_Display[531],11,0);
         BitSet(g_dataBuffer_WH_Display[534],1,0);
         BitSet(g_dataBuffer_WH_Display[534],13,0);
         BitSet(g_dataBuffer_WH_Display[543],6,0);
         BitSet(g_dataBuffer_WH_Display[543],7,0);
    }

    if(bool(DICT_MP1DI1MpParkBrkRls_B1) == false)
    {
        //tingfangzhiding
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR02_2))->SetCtrlText("WHL6BCUParkBrkApp.PNG");
    }else if(DICT_MP1DI1MPFBrk2CF_B1)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR02_2))->SetCtrlText("WHL6BCUCutOut.PNG");
    }else if(BR1CT_RuningSelfTest_B1)
    {
        //zijian
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR02_2))->SetCtrlText("WHL6BCUSelfTest.PNG");
    }else if(
 //           (!Bit(g_dataBuffer_WH_Display[510],9))||
 //           (!Bit(g_dataBuffer_WH_Display[510],12))||
//            Bit(g_dataBuffer_WH_Display[526],12)||
//            Bit(g_dataBuffer_WH_Display[526],13)||
            Bit(g_dataBuffer_WH_Display[532],1)||
            Bit(g_dataBuffer_WH_Display[532],4)||
//            Bit(g_dataBuffer_WH_Display[532],9)||
//            Bit(g_dataBuffer_WH_Display[532],10)||
            (bool(g_dataBuffer_WH_Display[509]&bit14)&&bool(g_dataBuffer_WH_Display[509]&bit15))||
            (bool(g_dataBuffer_WH_Display[526]&bit10)&&bool(g_dataBuffer_WH_Display[526]&bit11))||
            Bit(g_dataBuffer_WH_Display[531],3)||
            bool(Bit(g_dataBuffer_WH_Display[531],11))//Tc1/Tc2转向架1制动没有缓解
//            Bit(g_dataBuffer_WH_Display[533],0)||
//            Bit(g_dataBuffer_WH_Display[532],15)

            )
    {
        //guzhang
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR02_2))->SetCtrlText("WHL6BCUFault.PNG");

    }else if(
            Bit(g_dataBuffer_WH_Display[509],14)||
            Bit(g_dataBuffer_WH_Display[509],15)||
            Bit(g_dataBuffer_WH_Display[526],10)||
            Bit(g_dataBuffer_WH_Display[526],11)||
//            Bit(g_dataBuffer_WH_Display[526],5)||
//            Bit(g_dataBuffer_WH_Display[527],3)||

            Bit(g_dataBuffer_WH_Display[534],1)||
            Bit(g_dataBuffer_WH_Display[534],13)||
            Bit(g_dataBuffer_WH_Display[543],6)||
            Bit(g_dataBuffer_WH_Display[543],7)||
//            Bit(g_dataBuffer_WH_Display[533],1)||
            Bit(g_dataBuffer_WH_Display[534],3)
            )
    {
        //jinggao
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR02_2))->SetCtrlText("WHL6BCUWarn.PNG");

    }else if(bool(DICT_MP1DI1MpAirBrk2Rls_B1) == false)
    {
        //changyongzhidong
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR02_2))->SetCtrlText("WHL6BCUServBrkApp.PNG");
    }else
    {
        //changyongzhidonghuanjie
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR02_2))->SetCtrlText("WHL6BCUServBrkRel.PNG");
    }
    ////*******CAR03-1
    /*****根据制动状态有效位做一些故障是否存在的逻辑******/
    if(!bool(BR1CT_DiagOKM12_Bogie1_B1))
    {
         BitSet(g_dataBuffer_WH_Display[510],0,0);
         BitSet(g_dataBuffer_WH_Display[510],1,0);
         BitSet(g_dataBuffer_WH_Display[531],4,0);
         BitSet(g_dataBuffer_WH_Display[531],12,0);
         BitSet(g_dataBuffer_WH_Display[534],4,0);
         BitSet(g_dataBuffer_WH_Display[534],14,0);
         BitSet(g_dataBuffer_WH_Display[543],8,0);
         BitSet(g_dataBuffer_WH_Display[543],9,0);
    }

    if(bool(DICT_M1DI1MParkBrkRls_B1) == false)
    {
        //tingfangzhiding
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR03_1))->SetCtrlText("WHL6BCUParkBrkApp.PNG");
    }else if(DICT_M1DI1MFBrk1CF_B1)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR03_1))->SetCtrlText("WHL6BCUCutOut.PNG");
    }else if(BR1CT_RuningSelfTest_B1)
    {
        //zijian
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR03_1))->SetCtrlText("WHL6BCUSelfTest.PNG");
    }else if(



//            (!Bit(g_dataBuffer_WH_Display[510],10))||
//            (!Bit(g_dataBuffer_WH_Display[510],12))||
//            Bit(g_dataBuffer_WH_Display[526],12)||
//            Bit(g_dataBuffer_WH_Display[526],13)||
            Bit(g_dataBuffer_WH_Display[532],2)||
            Bit(g_dataBuffer_WH_Display[532],4)||
//            Bit(g_dataBuffer_WH_Display[532],9)||
//            Bit(g_dataBuffer_WH_Display[532],10)||
            (bool(g_dataBuffer_WH_Display[510]&bit0)&&bool(g_dataBuffer_WH_Display[510]&bit1))||
            (bool(g_dataBuffer_WH_Display[526]&bit10)&&bool(g_dataBuffer_WH_Display[526]&bit11))||
            Bit(g_dataBuffer_WH_Display[531],4)||
            bool(Bit(g_dataBuffer_WH_Display[531],12))//Tc1/Tc2转向架1制动没有缓解
//            Bit(g_dataBuffer_WH_Display[533],0)||
//            Bit(g_dataBuffer_WH_Display[532],15)





            )
    {
        //guzhang
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR03_1))->SetCtrlText("WHL6BCUFault.PNG");

    }else if(
            Bit(g_dataBuffer_WH_Display[510],0)||
            Bit(g_dataBuffer_WH_Display[510],1)||
            Bit(g_dataBuffer_WH_Display[526],10)||
            Bit(g_dataBuffer_WH_Display[526],11)||
//            Bit(g_dataBuffer_WH_Display[526],6)||
//            Bit(g_dataBuffer_WH_Display[527],4)||

            Bit(g_dataBuffer_WH_Display[534],4)||
            Bit(g_dataBuffer_WH_Display[534],14)||
            Bit(g_dataBuffer_WH_Display[543],8)||
            Bit(g_dataBuffer_WH_Display[543],9)||
 //           Bit(g_dataBuffer_WH_Display[533],1)||
            Bit(g_dataBuffer_WH_Display[534],6)
            )
    {
        //jinggao
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR03_1))->SetCtrlText("WHL6BCUWarn.PNG");

    }else if(bool(DICT_M1DI1MAirBrk1Rls_B1) == false)
    {
        //changyongzhidong
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR03_1))->SetCtrlText("WHL6BCUServBrkApp.PNG");
    }else
    {
        //changyongzhidonghuanjie
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR03_1))->SetCtrlText("WHL6BCUServBrkRel.PNG");
    }
    ////****CAR03-2
    if(!bool(BR1CT_DiagOKM12_Bogie2_B1))
    {
         BitSet(g_dataBuffer_WH_Display[510],2,0);
         BitSet(g_dataBuffer_WH_Display[510],3,0);
         BitSet(g_dataBuffer_WH_Display[531],5,0);
         BitSet(g_dataBuffer_WH_Display[531],13,0);
         BitSet(g_dataBuffer_WH_Display[534],7,0);
         BitSet(g_dataBuffer_WH_Display[534],15,0);
         BitSet(g_dataBuffer_WH_Display[543],10,0);
         BitSet(g_dataBuffer_WH_Display[543],11,0);
    }

    if(bool(DICT_M1DI1MParkBrkRls_B1) == false)
    {
        //tingfangzhiding
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR03_2))->SetCtrlText("WHL6BCUParkBrkApp.PNG");
    }else if(DICT_M1DI1MFBrk2CF_B1)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR03_2))->SetCtrlText("WHL6BCUCutOut.PNG");
    }else if(BR1CT_RuningSelfTest_B1)
    {
        //zijian
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR03_2))->SetCtrlText("WHL6BCUSelfTest.PNG");
    }else if(

 //           (!Bit(g_dataBuffer_WH_Display[510],10))||
//            (!Bit(g_dataBuffer_WH_Display[510],12))||
//            Bit(g_dataBuffer_WH_Display[526],12)||
//            Bit(g_dataBuffer_WH_Display[526],13)||
            Bit(g_dataBuffer_WH_Display[532],2)||
            Bit(g_dataBuffer_WH_Display[532],4)||
//            Bit(g_dataBuffer_WH_Display[532],9)||
//            Bit(g_dataBuffer_WH_Display[532],10)||
            (bool(g_dataBuffer_WH_Display[510]&bit2)&&bool(g_dataBuffer_WH_Display[510]&bit3))||
            (bool(g_dataBuffer_WH_Display[526]&bit10)&&bool(g_dataBuffer_WH_Display[526]&bit11))||
            Bit(g_dataBuffer_WH_Display[531],5)||
            bool(Bit(g_dataBuffer_WH_Display[531],13))//Tc1/Tc2转向架1制动没有缓解
//            Bit(g_dataBuffer_WH_Display[533],0)||
//            Bit(g_dataBuffer_WH_Display[532],15)


             )
    {
        //guzhang
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR03_2))->SetCtrlText("WHL6BCUFault.PNG");

    }else if(


            Bit(g_dataBuffer_WH_Display[510],2)||
            Bit(g_dataBuffer_WH_Display[510],3)||
            Bit(g_dataBuffer_WH_Display[526],10)||
            Bit(g_dataBuffer_WH_Display[526],11)||
//             Bit(g_dataBuffer_WH_Display[526],7)||
//             Bit(g_dataBuffer_WH_Display[527],5)||

            Bit(g_dataBuffer_WH_Display[534],7)||
            Bit(g_dataBuffer_WH_Display[534],15)||
            Bit(g_dataBuffer_WH_Display[543],10)||
            Bit(g_dataBuffer_WH_Display[543],11)||
  //          Bit(g_dataBuffer_WH_Display[533],1)||
            Bit(g_dataBuffer_WH_Display[534],9)
            )
    {
        //jinggao
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR03_2))->SetCtrlText("WHL6BCUWarn.PNG");

    }else if(bool(DICT_M1DI1MAirBrk2Rls_B1) == false)
    {
        //changyongzhidong
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR03_2))->SetCtrlText("WHL6BCUServBrkApp.PNG");
    }else
    {
        //changyongzhidonghuanjie
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR03_2))->SetCtrlText("WHL6BCUServBrkRel.PNG");
    }


    ///car06-2
    if(!bool(BR2CT_DiagOKTc12_Bogie1_B1))
    {
         BitSet(g_dataBuffer_WH_Display[509+192],8,0);
         BitSet(g_dataBuffer_WH_Display[509+192],9,0);
         BitSet(g_dataBuffer_WH_Display[531+192],0,0);
         BitSet(g_dataBuffer_WH_Display[531+192],8,0);
         BitSet(g_dataBuffer_WH_Display[533+192],8,0);
         BitSet(g_dataBuffer_WH_Display[534+192],10,0);
         BitSet(g_dataBuffer_WH_Display[543+192],1,0);
         BitSet(g_dataBuffer_WH_Display[543+192],0,0);
    }

    if(bool(DICT_TC2DI3ParkBrkRls_B1) == false)
    {
        //tingfangzhiding
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR04_1))->SetCtrlText("WHL6BCUParkBrkApp.PNG");
    }else if(DICT_TC2DI4TcFBrk1CF_B1)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR04_1))->SetCtrlText("WHL6BCUCutOut.PNG");
    }else if(BR2CT_RuningSelfTest_B1)
    {
        //zijian
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR04_1))->SetCtrlText("WHL6BCUSelfTest.PNG");
    }else if(
 //           (!Bit(g_dataBuffer_WH_Display[510+192],8))||
 //           (!Bit(g_dataBuffer_WH_Display[510+192],12))||
//            Bit(g_dataBuffer_WH_Display[526+192],12)||
//            Bit(g_dataBuffer_WH_Display[526+192],13)||
            Bit(g_dataBuffer_WH_Display[532+192],0)||
            Bit(g_dataBuffer_WH_Display[532+192],4)||
//            Bit(g_dataBuffer_WH_Display[532+192],9)||
//            Bit(g_dataBuffer_WH_Display[532+192],10)||
            (bool(g_dataBuffer_WH_Display[509+192]&bit8)&&bool(g_dataBuffer_WH_Display[509+192]&bit9))||
            (bool(g_dataBuffer_WH_Display[526+192]&bit10)&&bool(g_dataBuffer_WH_Display[526+192]&bit11))||
            Bit(g_dataBuffer_WH_Display[531+192],0)||
            bool(Bit(g_dataBuffer_WH_Display[531+192],8))//Tc1/Tc2转向架1制动没有缓解
//            Bit(g_dataBuffer_WH_Display[533+192],0)||
//            Bit(g_dataBuffer_WH_Display[532+192],15)


            )
    {
        //guzhang
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR04_1))->SetCtrlText("WHL6BCUFault.PNG");

    }else if(
            Bit(g_dataBuffer_WH_Display[509+192],8)||
            Bit(g_dataBuffer_WH_Display[509+192],9)||
            Bit(g_dataBuffer_WH_Display[526+192],10)||
            Bit(g_dataBuffer_WH_Display[526+192],11)||
//            Bit(g_dataBuffer_WH_Display[526+192],2)||
//            Bit(g_dataBuffer_WH_Display[527+192],0)||

            Bit(g_dataBuffer_WH_Display[533+192],8)||
            Bit(g_dataBuffer_WH_Display[534+192],10)||
            Bit(g_dataBuffer_WH_Display[543+192],1)||
            Bit(g_dataBuffer_WH_Display[543+192],0)||

//            Bit(g_dataBuffer_WH_Display[533+192],1)||
            Bit(g_dataBuffer_WH_Display[533+192],10)
            )
    {
        //jinggao
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR04_1))->SetCtrlText("WHL6BCUWarn.PNG");

    }else if(bool(DICT_TC2DI3AirBrk1Rls_B1) == false)
    {
        //changyongzhidong
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR04_1))->SetCtrlText("WHL6BCUServBrkApp.PNG");
    }else
    {
        //changyongzhidonghuanjie
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR04_1))->SetCtrlText("WHL6BCUServBrkRel.PNG");
    }
    ////*****CAR06-1
    if(!bool(BR2CT_DiagOKTc12_Bogie2_B1))
    {
         BitSet(g_dataBuffer_WH_Display[509+192],10,0);
         BitSet(g_dataBuffer_WH_Display[509+192],11,0);
         BitSet(g_dataBuffer_WH_Display[531+192],1,0);
         BitSet(g_dataBuffer_WH_Display[531+192],9,0);
         BitSet(g_dataBuffer_WH_Display[533+192],11,0);
         BitSet(g_dataBuffer_WH_Display[534+192],11,0);
         BitSet(g_dataBuffer_WH_Display[543+192],3,0);
         BitSet(g_dataBuffer_WH_Display[543+192],2,0);
    }
    if(bool(DICT_TC2DI3ParkBrkRls_B1) == false)
    {
        //tingfangzhiding
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR04_2))->SetCtrlText("WHL6BCUParkBrkApp.PNG");
    }else if(DICT_TC2DI4TcFBrk2CF_B1)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR04_2))->SetCtrlText("WHL6BCUCutOut.PNG");
    }else if(BR2CT_RuningSelfTest_B1)
    {
        //zijian
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR04_2))->SetCtrlText("WHL6BCUSelfTest.PNG");
    }else if(

 //           (!Bit(g_dataBuffer_WH_Display[510+192],8))||
 //           (!Bit(g_dataBuffer_WH_Display[510+192],12))||
//            Bit(g_dataBuffer_WH_Display[526+192],12)||
//            Bit(g_dataBuffer_WH_Display[526+192],13)||
            Bit(g_dataBuffer_WH_Display[532+192],0)||
            Bit(g_dataBuffer_WH_Display[532+192],4)||
//            Bit(g_dataBuffer_WH_Display[532+192],9)||
//            Bit(g_dataBuffer_WH_Display[532+192],10)||
            (bool(g_dataBuffer_WH_Display[509+192]&bit10)&&bool(g_dataBuffer_WH_Display[509+192]&bit11))||
            (bool(g_dataBuffer_WH_Display[526+192]&bit10)&&bool(g_dataBuffer_WH_Display[526+192]&bit11))||
            Bit(g_dataBuffer_WH_Display[531+192],1)||
            bool(Bit(g_dataBuffer_WH_Display[531+192],9))//Tc1/Tc2转向架1制动没有缓解
//            Bit(g_dataBuffer_WH_Display[533+192],0)||
//            Bit(g_dataBuffer_WH_Display[532+192],15)

            )
    {
        //guzhang
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR04_2))->SetCtrlText("WHL6BCUFault.PNG");

    }else if(

            Bit(g_dataBuffer_WH_Display[509+192],10)||
            Bit(g_dataBuffer_WH_Display[509+192],11)||
            Bit(g_dataBuffer_WH_Display[526+192],10)||
            Bit(g_dataBuffer_WH_Display[526+192],11)||
//            Bit(g_dataBuffer_WH_Display[526+192],3)||
//            Bit(g_dataBuffer_WH_Display[527+192],1)||

            Bit(g_dataBuffer_WH_Display[533+192],11)||
            Bit(g_dataBuffer_WH_Display[534+192],11)||
            Bit(g_dataBuffer_WH_Display[543+192],2)||
            Bit(g_dataBuffer_WH_Display[543+192],3)||
//            Bit(g_dataBuffer_WH_Display[533+192],1)||
            Bit(g_dataBuffer_WH_Display[533+192],13)
            )
    {
        //jinggao
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR04_2))->SetCtrlText("WHL6BCUWarn.PNG");

    }else if(bool(DICT_TC2DI3AirBrk2Rls_B1) == false)
    {
        //changyongzhidong
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR04_2))->SetCtrlText("WHL6BCUServBrkApp.PNG");
    }else
    {
        //changyongzhidonghuanjie
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR04_2))->SetCtrlText("WHL6BCUServBrkRel.PNG");
    }
    ////*******CAR05-2
    if(!bool(BR2CT_DiagOKMp12_Bogie1_B1))
    {
         BitSet(g_dataBuffer_WH_Display[509+192],12,0);
         BitSet(g_dataBuffer_WH_Display[509+192],13,0);
         BitSet(g_dataBuffer_WH_Display[531+192],2,0);
         BitSet(g_dataBuffer_WH_Display[531+192],10,0);
         BitSet(g_dataBuffer_WH_Display[533+192],14,0);
         BitSet(g_dataBuffer_WH_Display[534+192],12,0);
         BitSet(g_dataBuffer_WH_Display[543+192],5,0);
         BitSet(g_dataBuffer_WH_Display[543+192],4,0);
    }
    if(bool(DICT_MP2DI1MpParkBrkRls_B1) == false)
    {
        //tingfangzhiding
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR05_1))->SetCtrlText("WHL6BCUParkBrkApp.PNG");

    }else if(DICT_MP2DI1MPFBrk1CF_B1)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR05_1))->SetCtrlText("WHL6BCUCutOut.PNG");
    }else if(BR2CT_RuningSelfTest_B1)
    {
        //zijian
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR05_1))->SetCtrlText("WHL6BCUSelfTest.PNG");
    }else if(


//            (!Bit(g_dataBuffer_WH_Display[510+192],9))||
//            (!Bit(g_dataBuffer_WH_Display[510+192],12))||
//            Bit(g_dataBuffer_WH_Display[526+192],12)||
//            Bit(g_dataBuffer_WH_Display[526+192],13)||
            Bit(g_dataBuffer_WH_Display[532+192],1)||
            Bit(g_dataBuffer_WH_Display[532+192],4)||
//            Bit(g_dataBuffer_WH_Display[532+192],9)||
//            Bit(g_dataBuffer_WH_Display[532+192],10)||
            (bool(g_dataBuffer_WH_Display[509+192]&bit12)&&bool(g_dataBuffer_WH_Display[509+192]&bit13))||
            (bool(g_dataBuffer_WH_Display[526+192]&bit10)&&bool(g_dataBuffer_WH_Display[526+192]&bit11))||
            Bit(g_dataBuffer_WH_Display[531+192],2)||
            bool(Bit(g_dataBuffer_WH_Display[531+192],10))//Tc1/Tc2转向架1制动没有缓解
//            Bit(g_dataBuffer_WH_Display[533+192],0)||
//            Bit(g_dataBuffer_WH_Display[532+192],15)




            )
    {
        //guzhang
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR05_1))->SetCtrlText("WHL6BCUFault.PNG");

    }else if(
            Bit(g_dataBuffer_WH_Display[509+192],12)||
            Bit(g_dataBuffer_WH_Display[509+192],13)||
            Bit(g_dataBuffer_WH_Display[526+192],10)||
            Bit(g_dataBuffer_WH_Display[526+192],11)||
//            Bit(g_dataBuffer_WH_Display[526+192],4)||
//            Bit(g_dataBuffer_WH_Display[527+192],2)||

            Bit(g_dataBuffer_WH_Display[533+192],14)||
            Bit(g_dataBuffer_WH_Display[534+192],12)||
            Bit(g_dataBuffer_WH_Display[543+192],4)||
            Bit(g_dataBuffer_WH_Display[543+192],5)||

 //           Bit(g_dataBuffer_WH_Display[533+192],1)||
            Bit(g_dataBuffer_WH_Display[534+192],0))
    {
        //jinggao
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR05_1))->SetCtrlText("WHL6BCUWarn.PNG");

    }else if(bool(DICT_MP2DI1MpAirBrk1Rls_B1) == false)
    {
        //changyongzhidong
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR05_1))->SetCtrlText("WHL6BCUServBrkApp.PNG");
    }else
    {
        //changyongzhidonghuanjie
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR05_1))->SetCtrlText("WHL6BCUServBrkRel.PNG");
    }
    ////****CAR05-1
    if(!bool(BR2CT_DiagOKMp12_Bogie2_B1))
    {
         BitSet(g_dataBuffer_WH_Display[509+192],14,0);
         BitSet(g_dataBuffer_WH_Display[509+192],15,0);
         BitSet(g_dataBuffer_WH_Display[531+192],3,0);
         BitSet(g_dataBuffer_WH_Display[531+192],11,0);
         BitSet(g_dataBuffer_WH_Display[534+192],1,0);
         BitSet(g_dataBuffer_WH_Display[534+192],13,0);
         BitSet(g_dataBuffer_WH_Display[543+192],7,0);
         BitSet(g_dataBuffer_WH_Display[543+192],6,0);
    }
    if(bool(DICT_MP2DI1MpParkBrkRls_B1) == false)
    {
        //tingfangzhiding
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR05_2))->SetCtrlText("WHL6BCUParkBrkApp.PNG");
    }else if(DICT_MP2DI1MPFBrk2CF_B1)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR05_2))->SetCtrlText("WHL6BCUCutOut.PNG");
    }else if(BR2CT_RuningSelfTest_B1)
    {
        //zijian
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR05_2))->SetCtrlText("WHL6BCUSelfTest.PNG");
    }else if(
 //           (!Bit(g_dataBuffer_WH_Display[510+192],9))||
 //           (!Bit(g_dataBuffer_WH_Display[510+192],12))||
//            Bit(g_dataBuffer_WH_Display[526+192],12)||
//            Bit(g_dataBuffer_WH_Display[526+192],13)||
            Bit(g_dataBuffer_WH_Display[532+192],1)||
            Bit(g_dataBuffer_WH_Display[532+192],4)||
//            Bit(g_dataBuffer_WH_Display[532+192],9)||
//            Bit(g_dataBuffer_WH_Display[532+192],10)||
            (bool(g_dataBuffer_WH_Display[509+192]&bit14)&&bool(g_dataBuffer_WH_Display[509+192]&bit15))||
            (bool(g_dataBuffer_WH_Display[526+192]&bit10)&&bool(g_dataBuffer_WH_Display[526+192]&bit11))||
            Bit(g_dataBuffer_WH_Display[531+192],3)||
            bool(Bit(g_dataBuffer_WH_Display[531+192],11))//Tc1/Tc2转向架1制动没有缓解
//            Bit(g_dataBuffer_WH_Display[533+192],0)||
//            Bit(g_dataBuffer_WH_Display[532+192],15)





            )
    {
        //guzhang
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR05_2))->SetCtrlText("WHL6BCUFault.PNG");

    }else if(
            Bit(g_dataBuffer_WH_Display[509+192],14)||
            Bit(g_dataBuffer_WH_Display[509+192],15)||
            Bit(g_dataBuffer_WH_Display[526+192],10)||
            Bit(g_dataBuffer_WH_Display[526+192],11)||
//            Bit(g_dataBuffer_WH_Display[526+192],5)||
//            Bit(g_dataBuffer_WH_Display[527+192],3)||

            Bit(g_dataBuffer_WH_Display[534+192],1)||
            Bit(g_dataBuffer_WH_Display[534+192],13)||
            Bit(g_dataBuffer_WH_Display[543+192],6)||
            Bit(g_dataBuffer_WH_Display[543+192],7)||
  //          Bit(g_dataBuffer_WH_Display[533+192],1)||
            Bit(g_dataBuffer_WH_Display[534+192],3)
            )
    {
        //jinggao
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR05_2))->SetCtrlText("WHL6BCUWarn.PNG");

    }else if(bool(DICT_MP2DI1MpAirBrk2Rls_B1) == false)
    {
        //changyongzhidong
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR05_2))->SetCtrlText("WHL6BCUServBrkApp.PNG");
    }else
    {
        //changyongzhidonghuanjie
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR05_2))->SetCtrlText("WHL6BCUServBrkRel.PNG");
    }
    ////*******CAR04-2
    if(!bool(BR2CT_DiagOKM12_Bogie1_B1))
    {
         BitSet(g_dataBuffer_WH_Display[510+192],0,0);
         BitSet(g_dataBuffer_WH_Display[510+192],1,0);
         BitSet(g_dataBuffer_WH_Display[531+192],4,0);
         BitSet(g_dataBuffer_WH_Display[531+192],12,0);
         BitSet(g_dataBuffer_WH_Display[534+192],4,0);
         BitSet(g_dataBuffer_WH_Display[534+192],14,0);
         BitSet(g_dataBuffer_WH_Display[543+192],9,0);
         BitSet(g_dataBuffer_WH_Display[543+192],8,0);
    }
    if(bool(DICT_M2DI1MParkBrkRls_B1) == false)
    {
        //tingfangzhiding
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR06_1))->SetCtrlText("WHL6BCUParkBrkApp.PNG");
    }else if(DICT_M2DI1MFBrk1CF_B1)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR06_1))->SetCtrlText("WHL6BCUCutOut.PNG");
    }else if(BR2CT_RuningSelfTest_B1)
    {
        //zijian
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR06_1))->SetCtrlText("WHL6BCUSelfTest.PNG");
    }else if(


//            (!Bit(g_dataBuffer_WH_Display[510+192],10))||
//            (!Bit(g_dataBuffer_WH_Display[510+192],12))||
//            Bit(g_dataBuffer_WH_Display[526+192],12)||
//            Bit(g_dataBuffer_WH_Display[526+192],13)||
            Bit(g_dataBuffer_WH_Display[532+192],2)||
            Bit(g_dataBuffer_WH_Display[532+192],4)||
//            Bit(g_dataBuffer_WH_Display[532+192],9)||
//            Bit(g_dataBuffer_WH_Display[532+192],10)||
            (bool(g_dataBuffer_WH_Display[510+192]&bit0)&&bool(g_dataBuffer_WH_Display[510+192]&bit1))||
            (bool(g_dataBuffer_WH_Display[526+192]&bit10)&&bool(g_dataBuffer_WH_Display[526+192]&bit11))||
            Bit(g_dataBuffer_WH_Display[531+192],4)||
            bool(Bit(g_dataBuffer_WH_Display[531+192],12))//Tc1/Tc2转向架1制动没有缓解
//            Bit(g_dataBuffer_WH_Display[533+192],0)||
//            Bit(g_dataBuffer_WH_Display[532+192],15)



            )
    {
        //guzhang
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR06_1))->SetCtrlText("WHL6BCUFault.PNG");

    }else if(
            Bit(g_dataBuffer_WH_Display[510+192],0)||
            Bit(g_dataBuffer_WH_Display[510+192],1)||
            Bit(g_dataBuffer_WH_Display[526+192],10)||
            Bit(g_dataBuffer_WH_Display[526+192],11)||
//            Bit(g_dataBuffer_WH_Display[526+192],6)||
//            Bit(g_dataBuffer_WH_Display[527+192],4)||

            Bit(g_dataBuffer_WH_Display[534+192],4)||
            Bit(g_dataBuffer_WH_Display[534+192],14)||
            Bit(g_dataBuffer_WH_Display[543+192],8)||
            Bit(g_dataBuffer_WH_Display[543+192],9)||
 //           Bit(g_dataBuffer_WH_Display[533+192],1)||
            Bit(g_dataBuffer_WH_Display[534+192],6)
            )
    {
        //jinggao
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR06_1))->SetCtrlText("WHL6BCUWarn.PNG");

    }else if(bool(DICT_M2DI1MAirBrk1Rls_B1) == false)
    {
        //changyongzhidong
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR06_1))->SetCtrlText("WHL6BCUServBrkApp.PNG");
    }else
    {
        //changyongzhidonghuanjie
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR06_1))->SetCtrlText("WHL6BCUServBrkRel.PNG");
    }
    ////****CAR04-1
    if(!bool(BR2CT_DiagOKM12_Bogie2_B1))
    {
         BitSet(g_dataBuffer_WH_Display[510+192],2,0);
         BitSet(g_dataBuffer_WH_Display[510+192],3,0);
         BitSet(g_dataBuffer_WH_Display[531+192],5,0);
         BitSet(g_dataBuffer_WH_Display[531+192],13,0);
         BitSet(g_dataBuffer_WH_Display[534+192],7,0);
         BitSet(g_dataBuffer_WH_Display[534+192],15,0);
         BitSet(g_dataBuffer_WH_Display[543+192],11,0);
         BitSet(g_dataBuffer_WH_Display[543+192],10,0);
    }
    if(bool(DICT_M2DI1MParkBrkRls_B1) == false)
    {
        //tingfangzhiding
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR06_2))->SetCtrlText("WHL6BCUParkBrkApp.PNG");
    }else if(DICT_M2DI1MFBrk2CF_B1)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR06_2))->SetCtrlText("WHL6BCUCutOut.PNG");
    }else if(BR2CT_RuningSelfTest_B1)
    {
        //zijian
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR06_2))->SetCtrlText("WHL6BCUSelfTest.PNG");
    }else if(
//            (!Bit(g_dataBuffer_WH_Display[510+192],10))||
//            (!Bit(g_dataBuffer_WH_Display[510+192],12))||
//             Bit(g_dataBuffer_WH_Display[526+192],12)||
//             Bit(g_dataBuffer_WH_Display[526+192],13)||
             Bit(g_dataBuffer_WH_Display[532+192],2)||
             Bit(g_dataBuffer_WH_Display[532+192],4)||
//             Bit(g_dataBuffer_WH_Display[532+192],9)||
//             Bit(g_dataBuffer_WH_Display[532+192],10)||
             (bool(g_dataBuffer_WH_Display[510+192]&bit2)&&bool(g_dataBuffer_WH_Display[510+192]&bit3))||
             (bool(g_dataBuffer_WH_Display[526+192]&bit10)&&bool(g_dataBuffer_WH_Display[526+192]&bit11))||
             Bit(g_dataBuffer_WH_Display[531+192],5)||
             bool(Bit(g_dataBuffer_WH_Display[531+192],13))//Tc1/Tc2转向架1制动没有缓解
//             Bit(g_dataBuffer_WH_Display[533+192],0)||
//             Bit(g_dataBuffer_WH_Display[532+192],15)



            )
    {
        //guzhang
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR06_2))->SetCtrlText("WHL6BCUFault.PNG");

    }else if(
            Bit(g_dataBuffer_WH_Display[510+192],2)||
            Bit(g_dataBuffer_WH_Display[510+192],3)||
            Bit(g_dataBuffer_WH_Display[526+192],10)||
            Bit(g_dataBuffer_WH_Display[526+192],11)||
//             Bit(g_dataBuffer_WH_Display[526+192],7)||
//             Bit(g_dataBuffer_WH_Display[527+192],5)||

            Bit(g_dataBuffer_WH_Display[534+192],7)||
            Bit(g_dataBuffer_WH_Display[534+192],15)||
            Bit(g_dataBuffer_WH_Display[543+192],10)||
            Bit(g_dataBuffer_WH_Display[543+192],11)||
  //          Bit(g_dataBuffer_WH_Display[533+192],1)||
            Bit(g_dataBuffer_WH_Display[534+192],9)
            )
    {
        //jinggao
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR06_2))->SetCtrlText("WHL6BCUWarn.PNG");
    }else if(bool(DICT_M2DI1MAirBrk2Rls_B1) == false)
    {
        //changyongzhidong
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR06_2))->SetCtrlText("WHL6BCUServBrkApp.PNG");
    }else
    {
        //changyongzhidonghuanjie
        ((CImageCtrl *)GetDlgItem(ID_LABEL_BCU_CAR06_2))->SetCtrlText("WHL6BCUServBrkRel.PNG");
    }

}
void CRunStatePage::setBCUBGStatus(CLabel* lbl,bool b1,bool b2,bool online)
{
    if(!online)
    {
        lbl->SetCtrlBKColor(Qt::white);
    }else if(b1)
    {
        lbl->SetCtrlBKColor(Qt::red);

    }else if(b2)
    {
        lbl->SetCtrlBKColor(Qt::yellow);

    }else
    {

        lbl->SetCtrlBKColor(Qt::green);
    }
}

void CRunStatePage::UpdateAircmpState()
{
    //WHL6AirCmp_On.PNG
    //WHL6AirCmp_Fault.PNG
    //WHL6AirCmp_Off.PNG
    //WHL6AirCmp_OnWarn.PNG

    if(aircmperr1 || DTiCT_Tc1ACCFlt_B1)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_AIRCMP_CAR03))->SetCtrlText("WHL6AirCmp_Fault.PNG");
    }
    else if(bool(DICT_M1DI1AirComUseful_B1) == true && bool(DICT_M1DI1AirComRun_B1) == false)
    {

        ((CImageCtrl *)GetDlgItem(ID_LABEL_AIRCMP_CAR03))->SetCtrlText("WHL6AirCmp_Off.PNG");
    }else if(bool(DICT_M1DI1AirComUseful_B1) == true && bool(DICT_M1DI1AirComRun_B1) == true)
    {
        if(bool(AX2CT_OutputVolt_U16 > 300 && DICT_MiDI1ExtPowerSta_B1) || AX1CT_OutputVolt_U16 > 300)
        {
            ((CImageCtrl *)GetDlgItem(ID_LABEL_AIRCMP_CAR03))->SetCtrlText("WHL6AirCmp_On.PNG");

        }else
        {
            ((CImageCtrl *)GetDlgItem(ID_LABEL_AIRCMP_CAR03))->SetCtrlText("WHL6AirCmp_Off.PNG");
        }
    }
    if(aircmperr2 || DTiCT_Tc2ACCFlt_B1)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_AIRCMP_CAR04))->SetCtrlText("WHL6AirCmp_Fault.PNG");
    }
    else if(bool(DICT_M2DI1AirComUseful_B1) == true && bool(DICT_M2DI1AirComRun_B1) == false)
    {

        ((CImageCtrl *)GetDlgItem(ID_LABEL_AIRCMP_CAR04))->SetCtrlText("WHL6AirCmp_Off.PNG");
    }else if(bool(DICT_M2DI1AirComUseful_B1) == true && bool(DICT_M2DI1AirComRun_B1) == true)
    {
        if(AX2CT_OutputVolt_U16 > 300 || bool(AX1CT_OutputVolt_U16 > 300 && DICT_MiDI1ExtPowerSta_B1) )
        {
            ((CImageCtrl *)GetDlgItem(ID_LABEL_AIRCMP_CAR04))->SetCtrlText("WHL6AirCmp_On.PNG");

        }else
        {
            ((CImageCtrl *)GetDlgItem(ID_LABEL_AIRCMP_CAR04))->SetCtrlText("WHL6AirCmp_Off.PNG");
        }
    }

//    if(!(DICT_M1DI1AirComUseful_B1))
//    {
//        if(m_aircmptimer1++ > 20)
//        {
//            ((CImageCtrl *)GetDlgItem(ID_LABEL_AIRCMP_CAR03))->SetCtrlText("WHL6AirCmp_Fault.PNG");
//            m_aircmptimer1 = 0;
//            aircmperr1 = true;
//        }
//    }
//    else if(bool(DICT_M1DI1AirComUseful_B1) == true && bool(DICT_M1DI1AirComRun_B1) == false)
//    {
//        aircmperr1 = false;
//        m_aircmptimer1 = 0;
//        ((CImageCtrl *)GetDlgItem(ID_LABEL_AIRCMP_CAR03))->SetCtrlText("WHL6AirCmp_Off.PNG");
//    }else if(bool(DICT_M1DI1AirComUseful_B1) == true && bool(DICT_M1DI1AirComRun_B1) == true)
//    {
//        aircmperr1 = false;
//        m_aircmptimer1 = 0;
//        if(AX2CT_OutputVolt_U16 > 300 || AX1CT_OutputVolt_U16 > 300)
//        {
//            ((CImageCtrl *)GetDlgItem(ID_LABEL_AIRCMP_CAR03))->SetCtrlText("WHL6AirCmp_On.PNG");

//        }else
//        {
//            ((CImageCtrl *)GetDlgItem(ID_LABEL_AIRCMP_CAR03))->SetCtrlText("WHL6AirCmp_Off.PNG");

//        }
//    }

//    if(!(DICT_M2DI1AirComUseful_B1))
//    {
//        if(m_aircmptimer2++ > 20)
//        {
//            ((CImageCtrl *)GetDlgItem(ID_LABEL_AIRCMP_CAR04))->SetCtrlText("WHL6AirCmp_Fault.PNG");
//            m_aircmptimer2 = 0;
//            aircmperr2 = true;

//        }
//    }else if(bool(DICT_M2DI1AirComUseful_B1) == true && bool(DICT_M2DI1AirComRun_B1) == false)
//    {
//        m_aircmptimer2 = 0;
//        ((CImageCtrl *)GetDlgItem(ID_LABEL_AIRCMP_CAR04))->SetCtrlText("WHL6AirCmp_Off.PNG");
//        aircmperr2 = false;

//    }else if(bool(DICT_M2DI1AirComUseful_B1) == true && bool(DICT_M2DI1AirComRun_B1) == true)
//    {
//        m_aircmptimer2 = 0;
//        aircmperr2 = false;

//        if(AX2CT_OutputVolt_U16 > 300 || AX1CT_OutputVolt_U16 > 300)
//        {
//            ((CImageCtrl *)GetDlgItem(ID_LABEL_AIRCMP_CAR04))->SetCtrlText("WHL6AirCmp_On.PNG");

//        }else
//        {
//            ((CImageCtrl *)GetDlgItem(ID_LABEL_AIRCMP_CAR04))->SetCtrlText("WHL6AirCmp_Off.PNG");

//        }
//    }


}
void CRunStatePage::UpdateHVACState()
{
    //WHL6HVACEmgVen.PNG
    //WHL6HVACFault.PNG
    //WHL6HVACOff.PNG
    //WHL6HVACOn.PNG
    //WHL6HVACReCool.PNG
    //WHL6HVACVen.PNG
    bool HVACfaultflag = false;
    HVACfaultflag =
        Bit(g_dataBuffer_WH_Display[1494],9)||
        Bit(g_dataBuffer_WH_Display[1494],10)||
        Bit(g_dataBuffer_WH_Display[1494],11)||
        Bit(g_dataBuffer_WH_Display[1494],12)||
        Bit(g_dataBuffer_WH_Display[1494],13)||
        Bit(g_dataBuffer_WH_Display[1494],14)||
        Bit(g_dataBuffer_WH_Display[1494],15)||
        Bit(g_dataBuffer_WH_Display[1495],0)||
        Bit(g_dataBuffer_WH_Display[1495],1)||
        Bit(g_dataBuffer_WH_Display[1495],2)||
        Bit(g_dataBuffer_WH_Display[1495],3)||
        Bit(g_dataBuffer_WH_Display[1495],4)||
        Bit(g_dataBuffer_WH_Display[1495],5)||
        Bit(g_dataBuffer_WH_Display[1496],2)||
        //Bit(g_dataBuffer_WH_Display[1496],4)||
        Bit(g_dataBuffer_WH_Display[1496],5)||
        Bit(g_dataBuffer_WH_Display[1496],6)||
        Bit(g_dataBuffer_WH_Display[1496],7)||
        Bit(g_dataBuffer_WH_Display[1496],8)||
        Bit(g_dataBuffer_WH_Display[1496],13)||
        Bit(g_dataBuffer_WH_Display[1496],14)||
        Bit(g_dataBuffer_WH_Display[1496],15)||
        Bit(g_dataBuffer_WH_Display[1497],0);
    if(!bool(CTHMI_HVAC1On_B1))
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR01_1))->SetCtrlText("WHL6HVACOff.PNG");
    }
    else if(bool(HVACfaultflag) == true )
    {
        //WHL6HVACFault
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR01_1))->SetCtrlText("WHL6HVACFault.PNG");
    }else if(0)
    {
        //WHL6HVACWarn
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR01_1))->SetCtrlText("WHL6HVACWarn.PNG");
    }else if(bool(AC1CT_EVentilation_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR01_1))->SetCtrlText("WHL6HVACEmgVen.PNG");
    }else if(bool(AC1CT_Ventilation_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR01_1))->SetCtrlText("WHL6HVACVen.PNG");
    }else if(bool(AC1CT_HalfCooling_B1) == true||bool(AC1CT_FullCooling_B1) == true||bool(AC1CT_PreCooling_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR01_1))->SetCtrlText("WHL6HVACReCool.PNG");
    }else if(bool(AC1CT_OFF_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR01_1))->SetCtrlText("WHL6HVACOff.PNG");
    }else
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR01_1))->SetCtrlText("WHL6HVACOn.PNG");
    }

    //********HVAC1-2
    HVACfaultflag  = false;
    HVACfaultflag =
            Bit(g_dataBuffer_WH_Display[1494],9)||
            Bit(g_dataBuffer_WH_Display[1495],6)||
            Bit(g_dataBuffer_WH_Display[1495],7)||
            Bit(g_dataBuffer_WH_Display[1495],8)||
            Bit(g_dataBuffer_WH_Display[1495],9)||
            Bit(g_dataBuffer_WH_Display[1495],10)||
            Bit(g_dataBuffer_WH_Display[1495],11)||
            Bit(g_dataBuffer_WH_Display[1495],12)||
            Bit(g_dataBuffer_WH_Display[1495],13)||
            Bit(g_dataBuffer_WH_Display[1495],14)||
            Bit(g_dataBuffer_WH_Display[1495],15)||
            Bit(g_dataBuffer_WH_Display[1496],0)||
            Bit(g_dataBuffer_WH_Display[1496],1)||
            Bit(g_dataBuffer_WH_Display[1496],3)||
            //Bit(g_dataBuffer_WH_Display[1496],4)||
            Bit(g_dataBuffer_WH_Display[1496],9)||
            Bit(g_dataBuffer_WH_Display[1496],10)||
            Bit(g_dataBuffer_WH_Display[1496],11)||
            Bit(g_dataBuffer_WH_Display[1496],12)||
            Bit(g_dataBuffer_WH_Display[1497],1)||
            Bit(g_dataBuffer_WH_Display[1497],2)||
            Bit(g_dataBuffer_WH_Display[1497],3)||
            Bit(g_dataBuffer_WH_Display[1497],4);

    if(!bool(CTHMI_HVAC1On_B1))
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR01_2))->SetCtrlText("WHL6HVACOff.PNG");
    }
    else if(bool(HVACfaultflag) == true )
    {
        //WHL6HVACFault
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR01_2))->SetCtrlText("WHL6HVACFault.PNG");
    }else if(0)
    {
        //WHL6HVACWarn
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR01_2))->SetCtrlText("WHL6HVACWarn.PNG");
    }else if(bool(AC1CT_EVentilation_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR01_2))->SetCtrlText("WHL6HVACEmgVen.PNG");
    }else if(bool(AC1CT_Ventilation_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR01_2))->SetCtrlText("WHL6HVACVen.PNG");
    }else if(bool(AC1CT_HalfCooling_B1) == true||bool(AC1CT_FullCooling_B1) == true||bool(AC1CT_PreCooling_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR01_2))->SetCtrlText("WHL6HVACReCool.PNG");
    }else if(bool(AC1CT_OFF_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR01_2))->SetCtrlText("WHL6HVACOff.PNG");
    }else
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR01_2))->SetCtrlText("WHL6HVACOn.PNG");
    }

    //********HVAC2-1
    HVACfaultflag = false;
    HVACfaultflag =
        Bit(g_dataBuffer_WH_Display[1494+16],9)||
        Bit(g_dataBuffer_WH_Display[1494+16],10)||
        Bit(g_dataBuffer_WH_Display[1494+16],11)||
        Bit(g_dataBuffer_WH_Display[1494+16],12)||
        Bit(g_dataBuffer_WH_Display[1494+16],13)||
        Bit(g_dataBuffer_WH_Display[1494+16],14)||
        Bit(g_dataBuffer_WH_Display[1494+16],15)||
        Bit(g_dataBuffer_WH_Display[1495+16],0)||
        Bit(g_dataBuffer_WH_Display[1495+16],1)||
        Bit(g_dataBuffer_WH_Display[1495+16],2)||
        Bit(g_dataBuffer_WH_Display[1495+16],3)||
        Bit(g_dataBuffer_WH_Display[1495+16],4)||
        Bit(g_dataBuffer_WH_Display[1495+16],5)||
        Bit(g_dataBuffer_WH_Display[1496+16],2)||
        //Bit(g_dataBuffer_WH_Display[1496+16],4)||
        Bit(g_dataBuffer_WH_Display[1496+16],5)||
        Bit(g_dataBuffer_WH_Display[1496+16],6)||
        Bit(g_dataBuffer_WH_Display[1496+16],7)||
        Bit(g_dataBuffer_WH_Display[1496+16],8)||
        Bit(g_dataBuffer_WH_Display[1496+16],13)||
        Bit(g_dataBuffer_WH_Display[1496+16],14)||
        Bit(g_dataBuffer_WH_Display[1496+16],15)||
        Bit(g_dataBuffer_WH_Display[1497+16],0);

    if(!bool(CTHMI_HVAC2On_B1))
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR02_1))->SetCtrlText("WHL6HVACOff.PNG");
    }
    else if(bool(HVACfaultflag) == true )
    {
        //WHL6HVACFault
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR02_1))->SetCtrlText("WHL6HVACFault.PNG");
    }else if(0)
    {
        //WHL6HVACWarn
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR02_1))->SetCtrlText("WHL6HVACWarn.PNG");
    }else if(bool(AC2CT_EVentilation_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR02_1))->SetCtrlText("WHL6HVACEmgVen.PNG");
    }else if(bool(AC2CT_Ventilation_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR02_1))->SetCtrlText("WHL6HVACVen.PNG");
    }else if(bool(AC2CT_HalfCooling_B1) == true||bool(AC2CT_FullCooling_B1) == true||bool(AC2CT_PreCooling_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR02_1))->SetCtrlText("WHL6HVACReCool.PNG");
    }else if(bool(AC2CT_OFF_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR02_1))->SetCtrlText("WHL6HVACOff.PNG");
    }else
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR02_1))->SetCtrlText("WHL6HVACOn.PNG");
    }

    //********HVAC2-2
    HVACfaultflag  = false;
    HVACfaultflag =
            Bit(g_dataBuffer_WH_Display[1494+16],9)||
            Bit(g_dataBuffer_WH_Display[1495+16],6)||
            Bit(g_dataBuffer_WH_Display[1495+16],7)||
            Bit(g_dataBuffer_WH_Display[1495+16],8)||
            Bit(g_dataBuffer_WH_Display[1495+16],9)||
            Bit(g_dataBuffer_WH_Display[1495+16],10)||
            Bit(g_dataBuffer_WH_Display[1495+16],11)||
            Bit(g_dataBuffer_WH_Display[1495+16],12)||
            Bit(g_dataBuffer_WH_Display[1495+16],13)||
            Bit(g_dataBuffer_WH_Display[1495+16],14)||
            Bit(g_dataBuffer_WH_Display[1495+16],15)||
            Bit(g_dataBuffer_WH_Display[1496+16],0)||
            Bit(g_dataBuffer_WH_Display[1496+16],1)||
            Bit(g_dataBuffer_WH_Display[1496+16],3)||
           // Bit(g_dataBuffer_WH_Display[1496+16],4)||
            Bit(g_dataBuffer_WH_Display[1496+16],9)||
            Bit(g_dataBuffer_WH_Display[1496+16],10)||
            Bit(g_dataBuffer_WH_Display[1496+16],11)||
            Bit(g_dataBuffer_WH_Display[1496+16],12)||
            Bit(g_dataBuffer_WH_Display[1497+16],1)||
            Bit(g_dataBuffer_WH_Display[1497+16],2)||
            Bit(g_dataBuffer_WH_Display[1497+16],3)||
            Bit(g_dataBuffer_WH_Display[1497+16],4);

    if(!bool(CTHMI_HVAC2On_B1))
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR02_2))->SetCtrlText("WHL6HVACOff.PNG");
    }
    else if(bool(HVACfaultflag) == true)
    {
        //WHL6HVACFault
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR02_2))->SetCtrlText("WHL6HVACFault.PNG");
    }else if(0)
    {
        //WHL6HVACWarn
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR02_2))->SetCtrlText("WHL6HVACWarn.PNG");
    }else if(bool(AC2CT_EVentilation_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR02_2))->SetCtrlText("WHL6HVACEmgVen.PNG");
    }else if(bool(AC2CT_Ventilation_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR02_2))->SetCtrlText("WHL6HVACVen.PNG");
    }else if(bool(AC2CT_HalfCooling_B1) == true||bool(AC2CT_FullCooling_B1) == true||bool(AC2CT_PreCooling_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR02_2))->SetCtrlText("WHL6HVACReCool.PNG");
    }else if(bool(AC2CT_OFF_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR02_2))->SetCtrlText("WHL6HVACOff.PNG");
    }else
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR02_2))->SetCtrlText("WHL6HVACOn.PNG");
    }

    //********HVAC3-1
    HVACfaultflag = false;
    HVACfaultflag =
        Bit(g_dataBuffer_WH_Display[1494+32],9)||
        Bit(g_dataBuffer_WH_Display[1494+32],10)||
        Bit(g_dataBuffer_WH_Display[1494+32],11)||
        Bit(g_dataBuffer_WH_Display[1494+32],12)||
        Bit(g_dataBuffer_WH_Display[1494+32],13)||
        Bit(g_dataBuffer_WH_Display[1494+32],14)||
        Bit(g_dataBuffer_WH_Display[1494+32],15)||
        Bit(g_dataBuffer_WH_Display[1495+32],0)||
        Bit(g_dataBuffer_WH_Display[1495+32],1)||
        Bit(g_dataBuffer_WH_Display[1495+32],2)||
        Bit(g_dataBuffer_WH_Display[1495+32],3)||
        Bit(g_dataBuffer_WH_Display[1495+32],4)||
        Bit(g_dataBuffer_WH_Display[1495+32],5)||
        Bit(g_dataBuffer_WH_Display[1496+32],2)||
        //Bit(g_dataBuffer_WH_Display[1496+32],4)||
        Bit(g_dataBuffer_WH_Display[1496+32],5)||
        Bit(g_dataBuffer_WH_Display[1496+32],6)||
        Bit(g_dataBuffer_WH_Display[1496+32],7)||
        Bit(g_dataBuffer_WH_Display[1496+32],8)||
        Bit(g_dataBuffer_WH_Display[1496+32],13)||
        Bit(g_dataBuffer_WH_Display[1496+32],14)||
        Bit(g_dataBuffer_WH_Display[1496+32],15)||
        Bit(g_dataBuffer_WH_Display[1497+32],0);

    if(!bool(CTHMI_HVAC3On_B1))
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR03_1))->SetCtrlText("WHL6HVACOff.PNG");
    }
    else if(bool(HVACfaultflag) == true )
    {
        //WHL6HVACFault
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR03_1))->SetCtrlText("WHL6HVACFault.PNG");
    }else if(0)
    {
        //WHL6HVACWarn
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR03_1))->SetCtrlText("WHL6HVACWarn.PNG");
    }else if(bool(AC3CT_EVentilation_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR03_1))->SetCtrlText("WHL6HVACEmgVen.PNG");
    }else if(bool(AC3CT_Ventilation_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR03_1))->SetCtrlText("WHL6HVACVen.PNG");
    }else if(bool(AC3CT_HalfCooling_B1) == true||bool(AC3CT_FullCooling_B1) == true||bool(AC3CT_PreCooling_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR03_1))->SetCtrlText("WHL6HVACReCool.PNG");
    }else if(bool(AC3CT_OFF_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR03_1))->SetCtrlText("WHL6HVACOff.PNG");
    }else
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR03_1))->SetCtrlText("WHL6HVACOn.PNG");
    }

    //********HVAC3-2
    HVACfaultflag  = false;
    HVACfaultflag =
            Bit(g_dataBuffer_WH_Display[1494+32],9)||
            Bit(g_dataBuffer_WH_Display[1495+32],6)||
            Bit(g_dataBuffer_WH_Display[1495+32],7)||
            Bit(g_dataBuffer_WH_Display[1495+32],8)||
            Bit(g_dataBuffer_WH_Display[1495+32],9)||
            Bit(g_dataBuffer_WH_Display[1495+32],10)||
            Bit(g_dataBuffer_WH_Display[1495+32],11)||
            Bit(g_dataBuffer_WH_Display[1495+32],12)||
            Bit(g_dataBuffer_WH_Display[1495+32],13)||
            Bit(g_dataBuffer_WH_Display[1495+32],14)||
            Bit(g_dataBuffer_WH_Display[1495+32],15)||
            Bit(g_dataBuffer_WH_Display[1496+32],0)||
            Bit(g_dataBuffer_WH_Display[1496+32],1)||
            Bit(g_dataBuffer_WH_Display[1496+32],3)||
            //Bit(g_dataBuffer_WH_Display[1496+32],4)||
            Bit(g_dataBuffer_WH_Display[1496+32],9)||
            Bit(g_dataBuffer_WH_Display[1496+32],10)||
            Bit(g_dataBuffer_WH_Display[1496+32],11)||
            Bit(g_dataBuffer_WH_Display[1496+32],12)||
            Bit(g_dataBuffer_WH_Display[1497+32],1)||
            Bit(g_dataBuffer_WH_Display[1497+32],2)||
            Bit(g_dataBuffer_WH_Display[1497+32],3)||
            Bit(g_dataBuffer_WH_Display[1497+32],4);

    if(!bool(CTHMI_HVAC3On_B1))
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR03_2))->SetCtrlText("WHL6HVACOff.PNG");
    }
    else if(bool(HVACfaultflag) == true )
    {
        //WHL6HVACFault
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR03_2))->SetCtrlText("WHL6HVACFault.PNG");
    }else if(0)
    {
        //WHL6HVACWarn
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR03_2))->SetCtrlText("WHL6HVACWarn.PNG");
    }else if(bool(AC3CT_EVentilation_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR03_2))->SetCtrlText("WHL6HVACEmgVen.PNG");
    }else if(bool(AC3CT_Ventilation_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR03_2))->SetCtrlText("WHL6HVACVen.PNG");
    }else if(bool(AC3CT_HalfCooling_B1) == true||bool(AC3CT_FullCooling_B1) == true||bool(AC3CT_PreCooling_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR03_2))->SetCtrlText("WHL6HVACReCool.PNG");
    }else if(bool(AC3CT_OFF_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR03_2))->SetCtrlText("WHL6HVACOff.PNG");
    }else
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR03_2))->SetCtrlText("WHL6HVACOn.PNG");
    }

    //********HVAC4-1
    HVACfaultflag = false;
    HVACfaultflag =
            Bit(g_dataBuffer_WH_Display[1494+48],9)||
            Bit(g_dataBuffer_WH_Display[1494+48],10)||
            Bit(g_dataBuffer_WH_Display[1494+48],11)||
            Bit(g_dataBuffer_WH_Display[1494+48],12)||
            Bit(g_dataBuffer_WH_Display[1494+48],13)||
            Bit(g_dataBuffer_WH_Display[1494+48],14)||
            Bit(g_dataBuffer_WH_Display[1494+48],15)||
            Bit(g_dataBuffer_WH_Display[1495+48],0)||
            Bit(g_dataBuffer_WH_Display[1495+48],1)||
            Bit(g_dataBuffer_WH_Display[1495+48],2)||
            Bit(g_dataBuffer_WH_Display[1495+48],3)||
            Bit(g_dataBuffer_WH_Display[1495+48],4)||
            Bit(g_dataBuffer_WH_Display[1495+48],5)||
            Bit(g_dataBuffer_WH_Display[1496+48],2)||
            //Bit(g_dataBuffer_WH_Display[1496+48],4)||
            Bit(g_dataBuffer_WH_Display[1496+48],5)||
            Bit(g_dataBuffer_WH_Display[1496+48],6)||
            Bit(g_dataBuffer_WH_Display[1496+48],7)||
            Bit(g_dataBuffer_WH_Display[1496+48],8)||
            Bit(g_dataBuffer_WH_Display[1496+48],13)||
            Bit(g_dataBuffer_WH_Display[1496+48],14)||
            Bit(g_dataBuffer_WH_Display[1496+48],15)||
            Bit(g_dataBuffer_WH_Display[1497+48],0);


    if(!bool(CTHMI_HVAC4On_B1))
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR04_1))->SetCtrlText("WHL6HVACOff.PNG");
    }
    else if(bool(HVACfaultflag) == true)
    {
        //WHL6HVACFault
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR04_1))->SetCtrlText("WHL6HVACFault.PNG");
    }else if(0)
    {
        //WHL6HVACWarn
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR04_1))->SetCtrlText("WHL6HVACWarn.PNG");
    }else if(bool(AC4CT_EVentilation_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR04_1))->SetCtrlText("WHL6HVACEmgVen.PNG");
    }else if(bool(AC4CT_Ventilation_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR04_1))->SetCtrlText("WHL6HVACVen.PNG");
    }else if(bool(AC4CT_HalfCooling_B1) == true||bool(AC4CT_FullCooling_B1) == true||bool(AC4CT_PreCooling_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR04_1))->SetCtrlText("WHL6HVACReCool.PNG");
    }else if(bool(AC4CT_OFF_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR04_1))->SetCtrlText("WHL6HVACOff.PNG");
    }else
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR04_1))->SetCtrlText("WHL6HVACOn.PNG");
    }

    //********HVAC4-2
    HVACfaultflag  = false;
    HVACfaultflag =

            Bit(g_dataBuffer_WH_Display[1494+48],9)||
            Bit(g_dataBuffer_WH_Display[1495+48],6)||
            Bit(g_dataBuffer_WH_Display[1495+48],7)||
            Bit(g_dataBuffer_WH_Display[1495+48],8)||
            Bit(g_dataBuffer_WH_Display[1495+48],9)||
            Bit(g_dataBuffer_WH_Display[1495+48],10)||
            Bit(g_dataBuffer_WH_Display[1495+48],11)||
            Bit(g_dataBuffer_WH_Display[1495+48],12)||
            Bit(g_dataBuffer_WH_Display[1495+48],13)||
            Bit(g_dataBuffer_WH_Display[1495+48],14)||
            Bit(g_dataBuffer_WH_Display[1495+48],15)||
            Bit(g_dataBuffer_WH_Display[1496+48],0)||
            Bit(g_dataBuffer_WH_Display[1496+48],1)||
            Bit(g_dataBuffer_WH_Display[1496+48],3)||
            //Bit(g_dataBuffer_WH_Display[1496+48],4)||
            Bit(g_dataBuffer_WH_Display[1496+48],9)||
            Bit(g_dataBuffer_WH_Display[1496+48],10)||
            Bit(g_dataBuffer_WH_Display[1496+48],11)||
            Bit(g_dataBuffer_WH_Display[1496+48],12)||
            Bit(g_dataBuffer_WH_Display[1497+48],1)||
            Bit(g_dataBuffer_WH_Display[1497+48],2)||
            Bit(g_dataBuffer_WH_Display[1497+48],3)||
            Bit(g_dataBuffer_WH_Display[1497+48],4);


    if(!bool(CTHMI_HVAC4On_B1))
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR04_2))->SetCtrlText("WHL6HVACOff.PNG");
    }
    else if(bool(HVACfaultflag) == true )
    {
        //WHL6HVACFault
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR04_2))->SetCtrlText("WHL6HVACFault.PNG");
    }else if(0)
    {
        //WHL6HVACWarn
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR04_2))->SetCtrlText("WHL6HVACWarn.PNG");
    }else if(bool(AC4CT_EVentilation_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR04_2))->SetCtrlText("WHL6HVACEmgVen.PNG");
    }else if(bool(AC4CT_Ventilation_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR04_2))->SetCtrlText("WHL6HVACVen.PNG");
    }else if(bool(AC4CT_HalfCooling_B1) == true||bool(AC4CT_FullCooling_B1) == true||bool(AC4CT_PreCooling_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR04_2))->SetCtrlText("WHL6HVACReCool.PNG");
    }else if(bool(AC4CT_OFF_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR04_2))->SetCtrlText("WHL6HVACOff.PNG");
    }else
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR04_2))->SetCtrlText("WHL6HVACOn.PNG");
    }
    //********HVAC5-1
    HVACfaultflag = false;
    HVACfaultflag =
            Bit(g_dataBuffer_WH_Display[1494+64],9)||
            Bit(g_dataBuffer_WH_Display[1494+64],10)||
            Bit(g_dataBuffer_WH_Display[1494+64],11)||
            Bit(g_dataBuffer_WH_Display[1494+64],12)||
            Bit(g_dataBuffer_WH_Display[1494+64],13)||
            Bit(g_dataBuffer_WH_Display[1494+64],14)||
            Bit(g_dataBuffer_WH_Display[1494+64],15)||
            Bit(g_dataBuffer_WH_Display[1495+64],0)||
            Bit(g_dataBuffer_WH_Display[1495+64],1)||
            Bit(g_dataBuffer_WH_Display[1495+64],2)||
            Bit(g_dataBuffer_WH_Display[1495+64],3)||
            Bit(g_dataBuffer_WH_Display[1495+64],4)||
            Bit(g_dataBuffer_WH_Display[1495+64],5)||
            Bit(g_dataBuffer_WH_Display[1496+64],2)||
            //Bit(g_dataBuffer_WH_Display[1496+64],4)||
            Bit(g_dataBuffer_WH_Display[1496+64],5)||
            Bit(g_dataBuffer_WH_Display[1496+64],6)||
            Bit(g_dataBuffer_WH_Display[1496+64],7)||
            Bit(g_dataBuffer_WH_Display[1496+64],8)||
            Bit(g_dataBuffer_WH_Display[1496+64],13)||
            Bit(g_dataBuffer_WH_Display[1496+64],14)||
            Bit(g_dataBuffer_WH_Display[1496+64],15)||
            Bit(g_dataBuffer_WH_Display[1497+64],0);



    if(!bool(CTHMI_HVAC5On_B1))
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR05_1))->SetCtrlText("WHL6HVACOff.PNG");
    }
    else if(bool(HVACfaultflag) == true )
    {
        //WHL6HVACFault
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR05_1))->SetCtrlText("WHL6HVACFault.PNG");
    }else if(0)
    {
        //WHL6HVACWarn
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR05_1))->SetCtrlText("WHL6HVACWarn.PNG");
    }else if(bool(AC5CT_EVentilation_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR05_1))->SetCtrlText("WHL6HVACEmgVen.PNG");
    }else if(bool(AC5CT_Ventilation_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR05_1))->SetCtrlText("WHL6HVACVen.PNG");
    }else if(bool(AC5CT_HalfCooling_B1) == true||bool(AC5CT_FullCooling_B1) == true||bool(AC5CT_PreCooling_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR05_1))->SetCtrlText("WHL6HVACReCool.PNG");
    }else if(bool(AC5CT_OFF_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR05_1))->SetCtrlText("WHL6HVACOff.PNG");
    }else
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR05_1))->SetCtrlText("WHL6HVACOn.PNG");
    }

    //********HVAC5-2
    HVACfaultflag  = false;
    HVACfaultflag =
            Bit(g_dataBuffer_WH_Display[1494+64],9)||
            Bit(g_dataBuffer_WH_Display[1495+64],6)||
            Bit(g_dataBuffer_WH_Display[1495+64],7)||
            Bit(g_dataBuffer_WH_Display[1495+64],8)||
            Bit(g_dataBuffer_WH_Display[1495+64],9)||
            Bit(g_dataBuffer_WH_Display[1495+64],10)||
            Bit(g_dataBuffer_WH_Display[1495+64],11)||
            Bit(g_dataBuffer_WH_Display[1495+64],12)||
            Bit(g_dataBuffer_WH_Display[1495+64],13)||
            Bit(g_dataBuffer_WH_Display[1495+64],14)||
            Bit(g_dataBuffer_WH_Display[1495+64],15)||
            Bit(g_dataBuffer_WH_Display[1496+64],0)||
            Bit(g_dataBuffer_WH_Display[1496+64],1)||
            Bit(g_dataBuffer_WH_Display[1496+64],3)||
            //Bit(g_dataBuffer_WH_Display[1496+64],4)||
            Bit(g_dataBuffer_WH_Display[1496+64],9)||
            Bit(g_dataBuffer_WH_Display[1496+64],10)||
            Bit(g_dataBuffer_WH_Display[1496+64],11)||
            Bit(g_dataBuffer_WH_Display[1496+64],12)||
            Bit(g_dataBuffer_WH_Display[1497+64],1)||
            Bit(g_dataBuffer_WH_Display[1497+64],2)||
            Bit(g_dataBuffer_WH_Display[1497+64],3)||
            Bit(g_dataBuffer_WH_Display[1497+64],4);

    if(!bool(CTHMI_HVAC5On_B1))
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR05_2))->SetCtrlText("WHL6HVACOff.PNG");
    }
    else if(bool(HVACfaultflag) == true)
    {
        //WHL6HVACFault
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR05_2))->SetCtrlText("WHL6HVACFault.PNG");
    }else if(0)
    {
        //WHL6HVACWarn
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR05_2))->SetCtrlText("WHL6HVACWarn.PNG");
    }else if(bool(AC5CT_EVentilation_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR05_2))->SetCtrlText("WHL6HVACEmgVen.PNG");
    }else if(bool(AC5CT_Ventilation_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR05_2))->SetCtrlText("WHL6HVACVen.PNG");
    }else if(bool(AC5CT_HalfCooling_B1) == true||bool(AC5CT_FullCooling_B1) == true||bool(AC5CT_PreCooling_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR05_2))->SetCtrlText("WHL6HVACReCool.PNG");
    }else if(bool(AC5CT_OFF_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR05_2))->SetCtrlText("WHL6HVACOff.PNG");
    }else
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR05_2))->SetCtrlText("WHL6HVACOn.PNG");
    }

    //********HVAC6-1
    HVACfaultflag = false;
    HVACfaultflag =
            Bit(g_dataBuffer_WH_Display[1494+80],9)||
            Bit(g_dataBuffer_WH_Display[1494+80],10)||
            Bit(g_dataBuffer_WH_Display[1494+80],11)||
            Bit(g_dataBuffer_WH_Display[1494+80],12)||
            Bit(g_dataBuffer_WH_Display[1494+80],13)||
            Bit(g_dataBuffer_WH_Display[1494+80],14)||
            Bit(g_dataBuffer_WH_Display[1494+80],15)||
            Bit(g_dataBuffer_WH_Display[1495+80],0)||
            Bit(g_dataBuffer_WH_Display[1495+80],1)||
            Bit(g_dataBuffer_WH_Display[1495+80],2)||
            Bit(g_dataBuffer_WH_Display[1495+80],3)||
            Bit(g_dataBuffer_WH_Display[1495+80],4)||
            Bit(g_dataBuffer_WH_Display[1495+80],5)||
            Bit(g_dataBuffer_WH_Display[1496+80],2)||
            //Bit(g_dataBuffer_WH_Display[1496+80],4)||
            Bit(g_dataBuffer_WH_Display[1496+80],5)||
            Bit(g_dataBuffer_WH_Display[1496+80],6)||
            Bit(g_dataBuffer_WH_Display[1496+80],7)||
            Bit(g_dataBuffer_WH_Display[1496+80],8)||
            Bit(g_dataBuffer_WH_Display[1496+80],13)||
            Bit(g_dataBuffer_WH_Display[1496+80],14)||
            Bit(g_dataBuffer_WH_Display[1496+80],15)||
            Bit(g_dataBuffer_WH_Display[1497+80],0);

    if(!bool(CTHMI_HVAC6On_B1))
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR06_1))->SetCtrlText("WHL6HVACOff.PNG");
    }
    else if(bool(HVACfaultflag) == true)
    {
        //WHL6HVACFault
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR06_1))->SetCtrlText("WHL6HVACFault.PNG");
    }else if(0)
    {
        //WHL6HVACWarn
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR06_1))->SetCtrlText("WHL6HVACWarn.PNG");
    }else if(bool(AC6CT_EVentilation_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR06_1))->SetCtrlText("WHL6HVACEmgVen.PNG");
    }else if(bool(AC6CT_Ventilation_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR06_1))->SetCtrlText("WHL6HVACVen.PNG");
    }else if(bool(AC6CT_HalfCooling_B1) == true||bool(AC6CT_FullCooling_B1) == true||bool(AC6CT_PreCooling_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR06_1))->SetCtrlText("WHL6HVACReCool.PNG");
    }else if(bool(AC6CT_OFF_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR06_1))->SetCtrlText("WHL6HVACOff.PNG");
    }else
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR06_1))->SetCtrlText("WHL6HVACOn.PNG");
    }

    //********HVAC6-2
    HVACfaultflag  = false;

    HVACfaultflag =
            Bit(g_dataBuffer_WH_Display[1494+80],9)||
            Bit(g_dataBuffer_WH_Display[1495+80],6)||
            Bit(g_dataBuffer_WH_Display[1495+80],7)||
            Bit(g_dataBuffer_WH_Display[1495+80],8)||
            Bit(g_dataBuffer_WH_Display[1495+80],9)||
            Bit(g_dataBuffer_WH_Display[1495+80],10)||
            Bit(g_dataBuffer_WH_Display[1495+80],11)||
            Bit(g_dataBuffer_WH_Display[1495+80],12)||
            Bit(g_dataBuffer_WH_Display[1495+80],13)||
            Bit(g_dataBuffer_WH_Display[1495+80],14)||
            Bit(g_dataBuffer_WH_Display[1495+80],15)||
            Bit(g_dataBuffer_WH_Display[1496+80],0)||
            Bit(g_dataBuffer_WH_Display[1496+80],1)||
            Bit(g_dataBuffer_WH_Display[1496+80],3)||
            //Bit(g_dataBuffer_WH_Display[1496+80],4)||
            Bit(g_dataBuffer_WH_Display[1496+80],9)||
            Bit(g_dataBuffer_WH_Display[1496+80],10)||
            Bit(g_dataBuffer_WH_Display[1496+80],11)||
            Bit(g_dataBuffer_WH_Display[1496+80],12)||
            Bit(g_dataBuffer_WH_Display[1497+80],1)||
            Bit(g_dataBuffer_WH_Display[1497+80],2)||
            Bit(g_dataBuffer_WH_Display[1497+80],3)||
            Bit(g_dataBuffer_WH_Display[1497+80],4);

    if(!bool(CTHMI_HVAC6On_B1))
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR06_2))->SetCtrlText("WHL6HVACOff.PNG");
    }
    else if(bool(HVACfaultflag) == true)
    {
        //WHL6HVACFault
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR06_2))->SetCtrlText("WHL6HVACFault.PNG");
    }else if(0)
    {
        //WHL6HVACWarn
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR06_2))->SetCtrlText("WHL6HVACWarn.PNG");
    }else if(bool(AC6CT_EVentilation_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR06_2))->SetCtrlText("WHL6HVACEmgVen.PNG");
    }else if(bool(AC6CT_Ventilation_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR06_2))->SetCtrlText("WHL6HVACVen.PNG");
    }else if(bool(AC6CT_HalfCooling_B1) == true||bool(AC6CT_FullCooling_B1) == true||bool(AC6CT_PreCooling_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR06_2))->SetCtrlText("WHL6HVACReCool.PNG");
    }else if(bool(AC6CT_OFF_B1) == true)
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR06_2))->SetCtrlText("WHL6HVACOff.PNG");
    }else
    {
        ((CImageCtrl *)GetDlgItem(ID_LABEL_HVAC_CAR06_2))->SetCtrlText("WHL6HVACOn.PNG");
    }

}

void CRunStatePage::UpdateDoor()
{
    /*****setdoor state
    0-fault
    1-alarm
    3-yichang
    4-not closed
    5-closed
    yx-fangjiya
    yjing-jinjijiesuo
    glock-geli
    */
    if(DICT_Tc1DI1CabLtDr_B1)
    {
        ((CImageCtrl *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR0DOOR1))->SetCtrlText("cabdoorblue.png");
    }else
    {
        ((CImageCtrl *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR0DOOR1))->SetCtrlText("cabdoorgray.PNG");
    }
    if(DICT_Tc1DI1CabRtDr_B1)
    {
        ((CImageCtrl *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR0DOOR2))->SetCtrlText("cabdoorblue.png");
    }else
    {
        ((CImageCtrl *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR0DOOR2))->SetCtrlText("cabdoorgray.PNG");
    }

    if(DICT_Tc2DI1CabLtDr_B1)
    {
        ((CImageCtrl *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR9DOOR1))->SetCtrlText("cabdoorblue.png");
    }else
    {
        ((CImageCtrl *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR9DOOR1))->SetCtrlText("cabdoorgray.PNG");
    }
    if(DICT_Tc2DI1CabRtDr_B1)
    {
        ((CImageCtrl *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR9DOOR2))->SetCtrlText("cabdoorblue.png");
    }else
    {
        ((CImageCtrl *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR9DOOR2))->SetCtrlText("cabdoorgray.PNG");
    }
    int CarDoorState[6][10];
    bool EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1120+1]/256 != 0 || Bit(g_dataBuffer_WH_Display[1120+1],0));
    ////****car1 door1
    CarDoorState[0][0] = 3;//fault
    if(bool(che1_door1) == false)                           CarDoorState[0][0] = 0;
    else if(bool(DR1CT_Dr1EmUnlock_B1) == true)                        CarDoorState[0][0] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR1CT_Dr1Isolated_B1) == true)                        CarDoorState[0][0] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[0][0] = 3;//fault
    else if(bool() == true)                                            CarDoorState[0][0] = 1;//alarm
    else if(bool(DR1CT_Dr1ExtPreventProcess_B1 ) == true)              CarDoorState[0][0] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR1CT_Dr1NotFullyClosed_B1) == true)                  CarDoorState[0][0] = 4;//not closed
    else if(bool(DR1CT_Dr1FullyClosed_B1 ) == true)                    CarDoorState[0][0] = 5;//closed

    ////****car1 door2
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1120+2]/256 != 0 || Bit(g_dataBuffer_WH_Display[1120+2],0));
    CarDoorState[0][1] = 3;//fault
    if(bool(che1_door2) == false)                           CarDoorState[0][1] = 0;
    else if(bool(DR1CT_Dr2EmUnlock_B1) == true)                        CarDoorState[0][1] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR1CT_Dr2Isolated_B1) == true)                        CarDoorState[0][1] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[0][1] = 3;//fault
    else if(bool() == true)                                            CarDoorState[0][1] = 1;//alarm
    else if(bool(DR1CT_Dr2ExtPreventProcess_B1 ) == true)              CarDoorState[0][1] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR1CT_Dr2NotFullyClosed_B1) == true)                  CarDoorState[0][1] = 4;//not closed
    else if(bool(DR1CT_Dr2FullyClosed_B1 ) == true)                    CarDoorState[0][1] = 5;//closed

    ////****car1 door3
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1120+3]/256 != 0 || Bit(g_dataBuffer_WH_Display[1120+3],0));
    CarDoorState[0][2] = 3;//fault
    if(bool(che1_door3) == false)                                CarDoorState[0][2] = 0;
    else if(bool(DR1CT_Dr3EmUnlock_B1) == true)                        CarDoorState[0][2] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR1CT_Dr3Isolated_B1) == true)                        CarDoorState[0][2] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[0][2] = 3;//fault
    else if(bool() == true)                                            CarDoorState[0][2] = 1;//alarm
    else if(bool(DR1CT_Dr3ExtPreventProcess_B1 ) == true)              CarDoorState[0][2] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR1CT_Dr3NotFullyClosed_B1) == true)                  CarDoorState[0][2] = 4;//not closed
    else if(bool(DR1CT_Dr3FullyClosed_B1 ) == true)                    CarDoorState[0][2] = 5;//closed

    ////****car1 door4
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1120+4]/256 != 0 || Bit(g_dataBuffer_WH_Display[1120+4],0));
    CarDoorState[0][3] = 3;//fault
    if(bool(che1_door4) == false)                                CarDoorState[0][3] = 0;
    else if(bool(DR1CT_Dr4EmUnlock_B1) == true)                        CarDoorState[0][3] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR1CT_Dr4Isolated_B1) == true)                        CarDoorState[0][3] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[0][3] = 3;//fault
    else if(bool() == true)                                            CarDoorState[0][3] = 1;//alarm
    else if(bool(DR1CT_Dr4ExtPreventProcess_B1 ) == true)              CarDoorState[0][3] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR1CT_Dr4NotFullyClosed_B1) == true)                  CarDoorState[0][3] = 4;//not closed
    else if(bool(DR1CT_Dr4FullyClosed_B1 ) == true)                    CarDoorState[0][3] = 5;//closed

    ////****car1 door5
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1120+5]/256 != 0 || Bit(g_dataBuffer_WH_Display[1120+5],0));
    CarDoorState[0][4] = 3;//fault
    if(bool(che1_door5) == false)                                CarDoorState[0][4] = 0;
    else if(bool(DR1CT_Dr5EmUnlock_B1) == true)                        CarDoorState[0][4] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR1CT_Dr5Isolated_B1) == true)                        CarDoorState[0][4] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[0][4] = 3;//fault
    else if(bool() == true)                                            CarDoorState[0][4] = 1;//alarm
    else if(bool(DR1CT_Dr5ExtPreventProcess_B1 ) == true)              CarDoorState[0][4] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR1CT_Dr5NotFullyClosed_B1) == true)                  CarDoorState[0][4] = 4;//not closed
    else if(bool(DR1CT_Dr5FullyClosed_B1 ) == true)                    CarDoorState[0][4] = 5;//closed

    ////****car1 door6
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1120+6]/256 != 0 || Bit(g_dataBuffer_WH_Display[1120+6],0));
    CarDoorState[0][5] = 3;//fault
    if(bool(che1_door6) == false)                                CarDoorState[0][5] = 0;
    else if(bool(DR1CT_Dr6EmUnlock_B1) == true)                        CarDoorState[0][5] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR1CT_Dr6Isolated_B1) == true)                        CarDoorState[0][5] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[0][5] = 3;//fault
    else if(bool() == true)                                            CarDoorState[0][5] = 1;//alarm
    else if(bool(DR1CT_Dr6ExtPreventProcess_B1 ) == true)              CarDoorState[0][5] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR1CT_Dr6NotFullyClosed_B1) == true)                  CarDoorState[0][5] = 4;//not closed
    else if(bool(DR1CT_Dr6FullyClosed_B1 ) == true)                    CarDoorState[0][5] = 5;//closed

    ////****car1 door7
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1120+7]/256 != 0 || Bit(g_dataBuffer_WH_Display[1120+7],0));
    CarDoorState[0][6] = 3;//fault
    if(bool(che1_door7) == false)                                CarDoorState[0][6] = 0;
    else if(bool(DR1CT_Dr7EmUnlock_B1) == true)                        CarDoorState[0][6] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR1CT_Dr7Isolated_B1) == true)                        CarDoorState[0][6] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[0][6] = 3;//fault
    else if(bool() == true)                                            CarDoorState[0][6] = 1;//alarm
    else if(bool(DR1CT_Dr7ExtPreventProcess_B1 ) == true)              CarDoorState[0][6] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR1CT_Dr7NotFullyClosed_B1) == true)                  CarDoorState[0][6] = 4;//not closed
    else if(bool(DR1CT_Dr7FullyClosed_B1 ) == true)                    CarDoorState[0][6] = 5;//closed

    ////****car1 door8
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1120+8]/256 != 0 || Bit(g_dataBuffer_WH_Display[1120+8],0));
    CarDoorState[0][7] = 3;//fault
    if(bool(che1_door8) == false)                                CarDoorState[0][7] = 0;
    else if(bool(DR1CT_Dr8EmUnlock_B1) == true)                        CarDoorState[0][7] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR1CT_Dr8Isolated_B1) == true)                        CarDoorState[0][7] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[0][7] = 3;//fault
    else if(bool() == true)                                            CarDoorState[0][7] = 1;//alarm
    else if(bool(DR1CT_Dr8ExtPreventProcess_B1 ) == true)              CarDoorState[0][7] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR1CT_Dr8NotFullyClosed_B1) == true)                  CarDoorState[0][7] = 4;//not closed
    else if(bool(DR1CT_Dr8FullyClosed_B1 ) == true)                    CarDoorState[0][7] = 5;//closed

    ////****car1 door9
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1120+9]/256 != 0 || Bit(g_dataBuffer_WH_Display[1120+9],0));
    CarDoorState[0][8] = 3;//fault
    if(bool(che1_door9) == false)                                CarDoorState[0][8] = 0;
    else if(bool(DR1CT_Dr9EmUnlock_B1) == true)                        CarDoorState[0][8] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR1CT_Dr9Isolated_B1) == true)                        CarDoorState[0][8] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[0][8] = 3;//fault
    else if(bool() == true)                                            CarDoorState[0][8] = 1;//alarm
    else if(bool(DR1CT_Dr9ExtPreventProcess_B1 ) == true)              CarDoorState[0][8] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR1CT_Dr9NotFullyClosed_B1) == true)                  CarDoorState[0][8] = 4;//not closed
    else if(bool(DR1CT_Dr9FullyClosed_B1 ) == true)                    CarDoorState[0][8] = 5;//closed

    ////****car1 door10
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1120+10]/256 != 0 || Bit(g_dataBuffer_WH_Display[1120+10],0));
    CarDoorState[0][9] = 3;//fault
    if(bool(che1_door10) == false)                                CarDoorState[0][9] = 0;
    else if(bool(DR1CT_Dr10EmUnlock_B1) == true)                        CarDoorState[0][9] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR1CT_Dr10Isolated_B1) == true)                        CarDoorState[0][9] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[0][9] = 3;//fault
    else if(bool() == true)                                            CarDoorState[0][9] = 1;//alarm
    else if(bool(DR1CT_Dr10ExtPreventProcess_B1 ) == true)              CarDoorState[0][9] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR1CT_Dr10NotFullyClosed_B1) == true)                  CarDoorState[0][9] = 4;//not closed
    else if(bool(DR1CT_Dr10FullyClosed_B1 ) == true)                    CarDoorState[0][9] = 5;//closed

    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR1DOOR1,CarDoorState[0][0]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR1DOOR2,CarDoorState[0][1]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR1DOOR3,CarDoorState[0][2]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR1DOOR4,CarDoorState[0][3]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR1DOOR5,CarDoorState[0][4]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR1DOOR6,CarDoorState[0][5]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR1DOOR7,CarDoorState[0][6]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR1DOOR8,CarDoorState[0][7]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR1DOOR9,CarDoorState[0][8]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR1DOOR10,CarDoorState[0][9]);



    ////****car2 door1
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1184+1]/256 != 0 || Bit(g_dataBuffer_WH_Display[1184+1],0));
    CarDoorState[1][0] = 3;//fault
    if(bool(che2_door1) == false)                                   {  CarDoorState[1][0] = 0;}
    else if(bool(DR3CT_Dr1EmUnlock_B1) == true)                        CarDoorState[1][0] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR3CT_Dr1Isolated_B1) == true)                        CarDoorState[1][0] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[1][0] = 3;//fault
    else if(bool() == true)                                            CarDoorState[1][0] = 1;//alarm
    else if(bool(DR3CT_Dr1ExtPreventProcess_B1 ) == true)              CarDoorState[1][0] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR3CT_Dr1NotFullyClosed_B1) == true)                  CarDoorState[1][0] = 4;//not closed
    else if(bool(DR3CT_Dr1FullyClosed_B1 ) == true)                    CarDoorState[1][0] = 5;//closed

    ////****car2 door2
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1184+2]/256 != 0 || Bit(g_dataBuffer_WH_Display[1184+2],0));
    CarDoorState[1][1] = 3;//fault
    if(bool(che2_door2) == false)                                CarDoorState[1][1] = 0;
    else if(bool(DR3CT_Dr2EmUnlock_B1) == true)                        CarDoorState[1][1] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR3CT_Dr2Isolated_B1) == true)                        CarDoorState[1][1] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[1][1] = 3;//fault
    else if(bool() == true)                                            CarDoorState[1][1] = 1;//alarm
    else if(bool(DR3CT_Dr2ExtPreventProcess_B1 ) == true)              CarDoorState[1][1] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR3CT_Dr2NotFullyClosed_B1) == true)                  CarDoorState[1][1] = 4;//not closed
    else if(bool(DR3CT_Dr2FullyClosed_B1 ) == true)                    CarDoorState[1][1] = 5;//closed

    ////****car2 door3
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1184+3]/256 != 0 || Bit(g_dataBuffer_WH_Display[1184+3],0));
    CarDoorState[1][2] = 3;//fault
    if(bool(che2_door3) == false)                                CarDoorState[1][2] = 0;
    else if(bool(DR3CT_Dr3EmUnlock_B1) == true)                        CarDoorState[1][2] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR3CT_Dr3Isolated_B1) == true)                        CarDoorState[1][2] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[1][2] = 3;//fault
    else if(bool() == true)                                            CarDoorState[1][2] = 1;//alarm
    else if(bool(DR3CT_Dr3ExtPreventProcess_B1 ) == true)              CarDoorState[1][2] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR3CT_Dr3NotFullyClosed_B1) == true)                  CarDoorState[1][2] = 4;//not closed
    else if(bool(DR3CT_Dr3FullyClosed_B1 ) == true)                    CarDoorState[1][2] = 5;//closed

    ////****car2 door4
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1184+4]/256 != 0 || Bit(g_dataBuffer_WH_Display[1184+4],0));
    CarDoorState[1][3] = 3;//fault
    if(bool(che2_door4) == false)                                CarDoorState[1][3] = 0;
    else if(bool(DR3CT_Dr4EmUnlock_B1) == true)                        CarDoorState[1][3] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR3CT_Dr4Isolated_B1) == true)                        CarDoorState[1][3] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[1][3] = 3;//fault
    else if(bool() == true)                                            CarDoorState[1][3] = 1;//alarm
    else if(bool(DR3CT_Dr4ExtPreventProcess_B1 ) == true)              CarDoorState[1][3] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR3CT_Dr4NotFullyClosed_B1) == true)                  CarDoorState[1][3] = 4;//not closed
    else if(bool(DR3CT_Dr4FullyClosed_B1 ) == true)                    CarDoorState[1][3] = 5;//closed1
    ////****car2 door5
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1184+5]/256 != 0 || Bit(g_dataBuffer_WH_Display[1184+5],0));
    CarDoorState[1][4] = 3;//fault
    if(bool(che2_door5) == false)                                CarDoorState[1][4] = 0;
    else if(bool(DR3CT_Dr5EmUnlock_B1) == true)                        CarDoorState[1][4] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR3CT_Dr5Isolated_B1) == true)                        CarDoorState[1][4] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[1][4] = 3;//fault
    else if(bool() == true)                                            CarDoorState[1][4] = 1;//alarm
    else if(bool(DR3CT_Dr5ExtPreventProcess_B1 ) == true)              CarDoorState[1][4] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR3CT_Dr5NotFullyClosed_B1) == true)                  CarDoorState[1][4] = 4;//not closed
    else if(bool(DR3CT_Dr5FullyClosed_B1 ) == true)                    CarDoorState[1][4] = 5;//closed

    ////****car2 door6
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1184+6]/256 != 0 || Bit(g_dataBuffer_WH_Display[1184+6],0));
    CarDoorState[1][5] = 3;//fault
    if(bool(che2_door6) == false)                                CarDoorState[1][5] = 0;
    else if(bool(DR3CT_Dr6EmUnlock_B1) == true)                        CarDoorState[1][5] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR3CT_Dr6Isolated_B1) == true)                        CarDoorState[1][5] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[1][5] = 3;//fault
    else if(bool() == true)                                            CarDoorState[1][5] = 1;//alarm
    else if(bool(DR3CT_Dr6ExtPreventProcess_B1 ) == true)              CarDoorState[1][5] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR3CT_Dr6NotFullyClosed_B1) == true)                  CarDoorState[1][5] = 4;//not closed
    else if(bool(DR3CT_Dr6FullyClosed_B1 ) == true)                    CarDoorState[1][5] = 5;//closed

    ////****car2 door7
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1184+7]/256 != 0 || Bit(g_dataBuffer_WH_Display[1184+7],0));
    CarDoorState[1][6] = 3;//fault
    if(bool(che2_door7) == false)                                CarDoorState[1][6] = 0;
    else if(bool(DR3CT_Dr7EmUnlock_B1) == true)                        CarDoorState[1][6] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR3CT_Dr7Isolated_B1) == true)                        CarDoorState[1][6] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[1][6] = 3;//fault
    else if(bool() == true)                                            CarDoorState[1][6] = 1;//alarm
    else if(bool(DR3CT_Dr7ExtPreventProcess_B1 ) == true)              CarDoorState[1][6] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR3CT_Dr7NotFullyClosed_B1) == true)                  CarDoorState[1][6] = 4;//not closed
    else if(bool(DR3CT_Dr7FullyClosed_B1 ) == true)                    CarDoorState[1][6] = 5;//closed

    ////****car2 door8
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1184+8]/256 != 0 || Bit(g_dataBuffer_WH_Display[1184+8],0));
    CarDoorState[1][7] = 3;//fault
    if(bool(che2_door8) == false)                                CarDoorState[1][7] = 0;
    else if(bool(DR3CT_Dr8EmUnlock_B1) == true)                        CarDoorState[1][7] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR3CT_Dr8Isolated_B1) == true)                        CarDoorState[1][7] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[1][7] = 3;//fault
    else if(bool() == true)                                            CarDoorState[1][7] = 1;//alarm
    else if(bool(DR3CT_Dr8ExtPreventProcess_B1 ) == true)              CarDoorState[1][7] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR3CT_Dr8NotFullyClosed_B1) == true)                  CarDoorState[1][7] = 4;//not closed
    else if(bool(DR3CT_Dr8FullyClosed_B1 ) == true)                    CarDoorState[1][7] = 5;//closed

    ////****car2 door9
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1184+9]/256 != 0 || Bit(g_dataBuffer_WH_Display[1184+9],0));
    CarDoorState[1][8] = 3;//fault
    if(bool(che2_door9) == false)                                CarDoorState[1][8] = 0;
    else if(bool(DR3CT_Dr9EmUnlock_B1) == true)                        CarDoorState[1][8] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR3CT_Dr9Isolated_B1) == true)                        CarDoorState[1][8] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[1][8] = 3;//fault
    else if(bool() == true)                                            CarDoorState[1][8] = 1;//alarm
    else if(bool(DR3CT_Dr9ExtPreventProcess_B1 ) == true)              CarDoorState[1][8] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR3CT_Dr9NotFullyClosed_B1) == true)                  CarDoorState[1][8] = 4;//not closed
    else if(bool(DR3CT_Dr9FullyClosed_B1 ) == true)                    CarDoorState[1][8] = 5;//closed

    ////****car2 door10
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1184+10]/256 != 0 || Bit(g_dataBuffer_WH_Display[1184+10],0));
    CarDoorState[1][9] = 3;//fault
    if(bool(che2_door10) == false)                                CarDoorState[1][9] = 0;
    else if(bool(DR3CT_Dr10EmUnlock_B1) == true)                        CarDoorState[1][9] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR3CT_Dr10Isolated_B1) == true)                        CarDoorState[1][9] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[1][9] = 3;//fault
    else if(bool() == true)                                            CarDoorState[1][9] = 1;//alarm
    else if(bool(DR3CT_Dr10ExtPreventProcess_B1 ) == true)              CarDoorState[1][9] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR3CT_Dr10NotFullyClosed_B1) == true)                  CarDoorState[1][9] = 4;//not closed
    else if(bool(DR3CT_Dr10FullyClosed_B1 ) == true)                    CarDoorState[1][9] = 5;//closed

    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR2DOOR1,CarDoorState[1][0]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR2DOOR2,CarDoorState[1][1]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR2DOOR3,CarDoorState[1][2]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR2DOOR4,CarDoorState[1][3]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR2DOOR5,CarDoorState[1][4]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR2DOOR6,CarDoorState[1][5]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR2DOOR7,CarDoorState[1][6]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR2DOOR8,CarDoorState[1][7]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR2DOOR9,CarDoorState[1][8]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR2DOOR10,CarDoorState[1][9]);

    ////****car3 door1
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1248+1]/256 != 0 || Bit(g_dataBuffer_WH_Display[1248+1],0));
    CarDoorState[2][0] = 3;//fault
    if(bool(che3_door1) == false)                                CarDoorState[2][0] = 0;
    else if(bool(DR5CT_Dr1EmUnlock_B1) == true)                        CarDoorState[2][0] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR5CT_Dr1Isolated_B1) == true)                        CarDoorState[2][0] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[2][0] = 3;//fault
    else if(bool() == true)                                            CarDoorState[2][0] = 1;//alarm
    else if(bool(DR5CT_Dr1ExtPreventProcess_B1 ) == true)              CarDoorState[2][0] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR5CT_Dr1NotFullyClosed_B1) == true)                  CarDoorState[2][0] = 4;//not closed
    else if(bool(DR5CT_Dr1FullyClosed_B1 ) == true)                    CarDoorState[2][0] = 5;//closed

    ////****car3 door2
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1248+2]/256 != 0 || Bit(g_dataBuffer_WH_Display[1248+2],0));
    CarDoorState[2][1] = 3;//fault
    if(bool(che3_door2) == false)                                CarDoorState[2][1] = 0;
    else if(bool(DR5CT_Dr2EmUnlock_B1) == true)                        CarDoorState[2][1] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR5CT_Dr2Isolated_B1) == true)                        CarDoorState[2][1] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[2][1] = 3;//fault
    else if(bool() == true)                                            CarDoorState[2][1] = 1;//alarm
    else if(bool(DR5CT_Dr2ExtPreventProcess_B1 ) == true)              CarDoorState[2][1] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR5CT_Dr2NotFullyClosed_B1) == true)                  CarDoorState[2][1] = 4;//not closed
    else if(bool(DR5CT_Dr2FullyClosed_B1 ) == true)                    CarDoorState[2][1] = 5;//closed

    ////****car3 door3
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1248+3]/256 != 0 || Bit(g_dataBuffer_WH_Display[1248+3],0));
    CarDoorState[2][2] = 3;//fault
    if(bool(che3_door3) == false)                                CarDoorState[2][2] = 0;
    else if(bool(DR5CT_Dr3EmUnlock_B1) == true)                        CarDoorState[2][2] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR5CT_Dr3Isolated_B1) == true)                        CarDoorState[2][2] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[2][2] = 3;//fault
    else if(bool() == true)                                            CarDoorState[2][2] = 1;//alarm
    else if(bool(DR5CT_Dr3ExtPreventProcess_B1 ) == true)              CarDoorState[2][2] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR5CT_Dr3NotFullyClosed_B1) == true)                  CarDoorState[2][2] = 4;//not closed
    else if(bool(DR5CT_Dr3FullyClosed_B1 ) == true)                    CarDoorState[2][2] = 5;//closed

    ////****car3 door4
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1248+4]/256 != 0 || Bit(g_dataBuffer_WH_Display[1248+4],0));
    CarDoorState[2][3] = 3;//fault
    if(bool(che3_door4) == false)                                CarDoorState[2][3] = 0;
    else if(bool(DR5CT_Dr4EmUnlock_B1) == true)                        CarDoorState[2][3] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR5CT_Dr4Isolated_B1) == true)                        CarDoorState[2][3] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[2][3] = 3;//fault
    else if(bool() == true)                                            CarDoorState[2][3] = 1;//alarm
    else if(bool(DR5CT_Dr4ExtPreventProcess_B1 ) == true)              CarDoorState[2][3] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR5CT_Dr4NotFullyClosed_B1) == true)                  CarDoorState[2][3] = 4;//not closed
    else if(bool(DR5CT_Dr4FullyClosed_B1 ) == true)                    CarDoorState[2][3] = 5;//closed1
    ////****car3 door5
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1248+5]/256 != 0 || Bit(g_dataBuffer_WH_Display[1248+5],0));
    CarDoorState[2][4] = 3;//fault
    if(bool(che3_door5) == false)                                CarDoorState[2][4] = 0;
    else if(bool(DR5CT_Dr5EmUnlock_B1) == true)                        CarDoorState[2][4] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR5CT_Dr5Isolated_B1) == true)                        CarDoorState[2][4] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[2][4] = 3;//fault
    else if(bool() == true)                                            CarDoorState[2][4] = 1;//alarm
    else if(bool(DR5CT_Dr5ExtPreventProcess_B1 ) == true)              CarDoorState[2][4] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR5CT_Dr5NotFullyClosed_B1) == true)                  CarDoorState[2][4] = 4;//not closed
    else if(bool(DR5CT_Dr5FullyClosed_B1 ) == true)                    CarDoorState[2][4] = 5;//closed

    ////****car3 door6
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1248+6]/256 != 0 || Bit(g_dataBuffer_WH_Display[1248+6],0));
    CarDoorState[2][5] = 3;//fault
    if(bool(che3_door6) == false)                                CarDoorState[2][5] = 0;
    else if(bool(DR5CT_Dr6EmUnlock_B1) == true)                        CarDoorState[2][5] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR5CT_Dr6Isolated_B1) == true)                        CarDoorState[2][5] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[2][5] = 3;//fault
    else if(bool() == true)                                            CarDoorState[2][5] = 1;//alarm
    else if(bool(DR5CT_Dr6ExtPreventProcess_B1 ) == true)              CarDoorState[2][5] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR5CT_Dr6NotFullyClosed_B1) == true)                  CarDoorState[2][5] = 4;//not closed
    else if(bool(DR5CT_Dr6FullyClosed_B1 ) == true)                    CarDoorState[2][5] = 5;//closed

    ////****car3 door7
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1248+7]/256 != 0 || Bit(g_dataBuffer_WH_Display[1248+7],0));
    CarDoorState[2][6] = 3;//fault
    if(bool(che3_door7) == false)                                CarDoorState[2][6] = 0;
    else if(bool(DR5CT_Dr7EmUnlock_B1) == true)                        CarDoorState[2][6] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR5CT_Dr7Isolated_B1) == true)                        CarDoorState[2][6] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[2][6] = 3;//fault
    else if(bool() == true)                                            CarDoorState[2][6] = 1;//alarm
    else if(bool(DR5CT_Dr7ExtPreventProcess_B1 ) == true)              CarDoorState[2][6] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR5CT_Dr7NotFullyClosed_B1) == true)                  CarDoorState[2][6] = 4;//not closed
    else if(bool(DR5CT_Dr7FullyClosed_B1 ) == true)                    CarDoorState[2][6] = 5;//closed

    ////****car3 door8
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1248+8]/256 != 0 || Bit(g_dataBuffer_WH_Display[1248+8],0));
    CarDoorState[2][7] = 3;//fault
    if(bool(che3_door8) == false)                                CarDoorState[2][7] = 0;
    else if(bool(DR5CT_Dr8EmUnlock_B1) == true)                        CarDoorState[2][7] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR5CT_Dr8Isolated_B1) == true)                        CarDoorState[2][7] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[2][7] = 3;//fault
    else if(bool() == true)                                            CarDoorState[2][7] = 1;//alarm
    else if(bool(DR5CT_Dr8ExtPreventProcess_B1 ) == true)              CarDoorState[2][7] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR5CT_Dr8NotFullyClosed_B1) == true)                  CarDoorState[2][7] = 4;//not closed
    else if(bool(DR5CT_Dr8FullyClosed_B1 ) == true)                    CarDoorState[2][7] = 5;//closed

    ////****car3 door9
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1248+9]/256 != 0 || Bit(g_dataBuffer_WH_Display[1248+9],0));
    CarDoorState[2][8] = 3;//fault
    if(bool(che3_door9) == false)                                CarDoorState[2][8] = 0;
    else if(bool(DR5CT_Dr9EmUnlock_B1) == true)                        CarDoorState[2][8] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR5CT_Dr9Isolated_B1) == true)                        CarDoorState[2][8] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[2][8] = 3;//fault
    else if(bool() == true)                                            CarDoorState[2][8] = 1;//alarm
    else if(bool(DR5CT_Dr9ExtPreventProcess_B1 ) == true)              CarDoorState[2][8] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR5CT_Dr9NotFullyClosed_B1) == true)                  CarDoorState[2][8] = 4;//not closed
    else if(bool(DR5CT_Dr9FullyClosed_B1 ) == true)                    CarDoorState[2][8] = 5;//closed

    ////****car3 door10
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1248+10]/256 != 0 || Bit(g_dataBuffer_WH_Display[1248+10],0));
    CarDoorState[2][9] = 3;//fault
    if(bool(che3_door10) == false)                                CarDoorState[2][9] = 0;
    else if(bool(DR5CT_Dr10EmUnlock_B1) == true)                        CarDoorState[2][9] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR5CT_Dr10Isolated_B1) == true)                        CarDoorState[2][9] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[2][9] = 3;//fault
    else if(bool() == true)                                            CarDoorState[2][9] = 1;//alarm
    else if(bool(DR5CT_Dr10ExtPreventProcess_B1 ) == true)              CarDoorState[2][9] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR5CT_Dr10NotFullyClosed_B1) == true)                  CarDoorState[2][9] = 4;//not closed
    else if(bool(DR5CT_Dr10FullyClosed_B1 ) == true)                    CarDoorState[2][9] = 5;//closed

    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR3DOOR1,CarDoorState[2][0]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR3DOOR2,CarDoorState[2][1]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR3DOOR3,CarDoorState[2][2]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR3DOOR4,CarDoorState[2][3]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR3DOOR5,CarDoorState[2][4]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR3DOOR6,CarDoorState[2][5]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR3DOOR7,CarDoorState[2][6]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR3DOOR8,CarDoorState[2][7]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR3DOOR9,CarDoorState[2][8]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR3DOOR10,CarDoorState[2][9]);

    ////****car4 door1
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1312+1]/256 != 0 || Bit(g_dataBuffer_WH_Display[1312+1],0));
    CarDoorState[3][0] = 3;//fault
    if(bool(che4_door1) == false)                                CarDoorState[3][0] = 0;
    else if(bool(DR7CT_Dr1EmUnlock_B1) == true)                        CarDoorState[3][0] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR7CT_Dr1Isolated_B1) == true)                        CarDoorState[3][0] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[3][0] = 3;//fault
    else if(bool() == true)                                            CarDoorState[3][0] = 1;//alarm
    else if(bool(DR7CT_Dr1ExtPreventProcess_B1 ) == true)              CarDoorState[3][0] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR7CT_Dr1NotFullyClosed_B1) == true)                  CarDoorState[3][0] = 4;//not closed
    else if(bool(DR7CT_Dr1FullyClosed_B1 ) == true)                    CarDoorState[3][0] = 5;//closed

    ////****car4 door2
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1312+2]/256 != 0 || Bit(g_dataBuffer_WH_Display[1312+2],0));
    CarDoorState[3][1] = 3;//fault
    if(bool(che4_door2) == false)                                CarDoorState[3][1] = 0;
    else if(bool(DR7CT_Dr2EmUnlock_B1) == true)                        CarDoorState[3][1] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR7CT_Dr2Isolated_B1) == true)                        CarDoorState[3][1] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[3][1] = 3;//fault
    else if(bool() == true)                                            CarDoorState[3][1] = 1;//alarm
    else if(bool(DR7CT_Dr2ExtPreventProcess_B1 ) == true)              CarDoorState[3][1] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR7CT_Dr2NotFullyClosed_B1) == true)                  CarDoorState[3][1] = 4;//not closed
    else if(bool(DR7CT_Dr2FullyClosed_B1 ) == true)                    CarDoorState[3][1] = 5;//closed

    ////****car4 door3
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1312+3]/256 != 0 || Bit(g_dataBuffer_WH_Display[1312+3],0));
    CarDoorState[3][2] = 3;//fault
    if(bool(che4_door3) == false)                                CarDoorState[3][2] = 0;
    else if(bool(DR7CT_Dr3EmUnlock_B1) == true)                        CarDoorState[3][2] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR7CT_Dr3Isolated_B1) == true)                        CarDoorState[3][2] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[3][2] = 3;//fault
    else if(bool() == true)                                            CarDoorState[3][2] = 1;//alarm
    else if(bool(DR7CT_Dr3ExtPreventProcess_B1 ) == true)              CarDoorState[3][2] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR7CT_Dr3NotFullyClosed_B1) == true)                  CarDoorState[3][2] = 4;//not closed
    else if(bool(DR7CT_Dr3FullyClosed_B1 ) == true)                    CarDoorState[3][2] = 5;//closed

    ////****car4 door4
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1312+4]/256 != 0 || Bit(g_dataBuffer_WH_Display[1312+4],0));
    CarDoorState[3][3] = 3;//fault
    if(bool(che4_door4) == false)                                CarDoorState[3][3] = 0;
    else if(bool(DR7CT_Dr4EmUnlock_B1) == true)                        CarDoorState[3][3] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR7CT_Dr4Isolated_B1) == true)                        CarDoorState[3][3] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[3][3] = 3;//fault
    else if(bool() == true)                                            CarDoorState[3][3] = 1;//alarm
    else if(bool(DR7CT_Dr4ExtPreventProcess_B1 ) == true)              CarDoorState[3][3] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR7CT_Dr4NotFullyClosed_B1) == true)                  CarDoorState[3][3] = 4;//not closed
    else if(bool(DR7CT_Dr4FullyClosed_B1 ) == true)                    CarDoorState[3][3] = 5;//closed1
    ////****car4 door5
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1312+5]/256 != 0 || Bit(g_dataBuffer_WH_Display[1312+5],0));
    CarDoorState[3][4] = 3;//fault
    if(bool(che4_door5) == false)                                CarDoorState[3][4] = 0;
    else if(bool(DR7CT_Dr5EmUnlock_B1) == true)                        CarDoorState[3][4] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR7CT_Dr5Isolated_B1) == true)                        CarDoorState[3][4] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[3][4] = 3;//fault
    else if(bool() == true)                                            CarDoorState[3][4] = 1;//alarm
    else if(bool(DR7CT_Dr5ExtPreventProcess_B1 ) == true)              CarDoorState[3][4] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR7CT_Dr5NotFullyClosed_B1) == true)                  CarDoorState[3][4] = 4;//not closed
    else if(bool(DR7CT_Dr5FullyClosed_B1 ) == true)                    CarDoorState[3][4] = 5;//closed

    ////****car4 door6
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1312+6]/256 != 0 || Bit(g_dataBuffer_WH_Display[1312+6],0));
    CarDoorState[3][5] = 3;//fault
    if(bool(che4_door6) == false)                                CarDoorState[3][5] = 0;
    else if(bool(DR7CT_Dr6EmUnlock_B1) == true)                        CarDoorState[3][5] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR7CT_Dr6Isolated_B1) == true)                        CarDoorState[3][5] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[3][5] = 3;//fault
    else if(bool() == true)                                            CarDoorState[3][5] = 1;//alarm
    else if(bool(DR7CT_Dr6ExtPreventProcess_B1 ) == true)              CarDoorState[3][5] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR7CT_Dr6NotFullyClosed_B1) == true)                  CarDoorState[3][5] = 4;//not closed
    else if(bool(DR7CT_Dr6FullyClosed_B1 ) == true)                    CarDoorState[3][5] = 5;//closed

    ////****car4 door7
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1312+7]/256 != 0 || Bit(g_dataBuffer_WH_Display[1312+7],0));
    CarDoorState[3][6] = 3;//fault
    if(bool(che4_door7) == false)                                CarDoorState[3][6] = 0;
    else if(bool(DR7CT_Dr7EmUnlock_B1) == true)                        CarDoorState[3][6] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR7CT_Dr7Isolated_B1) == true)                        CarDoorState[3][6] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[3][6] = 3;//fault
    else if(bool() == true)                                            CarDoorState[3][6] = 1;//alarm
    else if(bool(DR7CT_Dr7ExtPreventProcess_B1 ) == true)              CarDoorState[3][6] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR7CT_Dr7NotFullyClosed_B1) == true)                  CarDoorState[3][6] = 4;//not closed
    else if(bool(DR7CT_Dr7FullyClosed_B1 ) == true)                    CarDoorState[3][6] = 5;//closed

    ////****car4 door8
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1312+8]/256 != 0 || Bit(g_dataBuffer_WH_Display[1312+8],0));
    CarDoorState[3][7] = 3;//fault
    if(bool(che4_door8) == false)                                CarDoorState[3][7] = 0;
    else if(bool(DR7CT_Dr8EmUnlock_B1) == true)                        CarDoorState[3][7] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR7CT_Dr8Isolated_B1) == true)                        CarDoorState[3][7] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[3][7] = 3;//fault
    else if(bool() == true)                                            CarDoorState[3][7] = 1;//alarm
    else if(bool(DR7CT_Dr8ExtPreventProcess_B1 ) == true)              CarDoorState[3][7] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR7CT_Dr8NotFullyClosed_B1) == true)                  CarDoorState[3][7] = 4;//not closed
    else if(bool(DR7CT_Dr8FullyClosed_B1 ) == true)                    CarDoorState[3][7] = 5;//closed

    ////****car4 door9
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1312+9]/256 != 0 || Bit(g_dataBuffer_WH_Display[1312+9],0));
    CarDoorState[3][8] = 3;//fault
    if(bool(che4_door9) == false)                                CarDoorState[3][8] = 0;
    else if(bool(DR7CT_Dr9EmUnlock_B1) == true)                        CarDoorState[3][8] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR7CT_Dr9Isolated_B1) == true)                        CarDoorState[3][8] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[3][8] = 3;//fault
    else if(bool() == true)                                            CarDoorState[3][8] = 1;//alarm
    else if(bool(DR7CT_Dr9ExtPreventProcess_B1 ) == true)              CarDoorState[3][8] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR7CT_Dr9NotFullyClosed_B1) == true)                  CarDoorState[3][8] = 4;//not closed
    else if(bool(DR7CT_Dr9FullyClosed_B1 ) == true)                    CarDoorState[3][8] = 5;//closed

    ////****car4 door10
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1312+10]/256 != 0 || Bit(g_dataBuffer_WH_Display[1312+10],0));
    CarDoorState[3][9] = 3;//fault
    if(bool(che4_door10) == false)                                CarDoorState[3][9] = 0;
    else if(bool(DR7CT_Dr10EmUnlock_B1) == true)                        CarDoorState[3][9] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR7CT_Dr10Isolated_B1) == true)                        CarDoorState[3][9] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[3][9] = 3;//fault
    else if(bool() == true)                                            CarDoorState[3][9] = 1;//alarm
    else if(bool(DR7CT_Dr10ExtPreventProcess_B1 ) == true)              CarDoorState[3][9] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR7CT_Dr10NotFullyClosed_B1) == true)                  CarDoorState[3][9] = 4;//not closed
    else if(bool(DR7CT_Dr10FullyClosed_B1 ) == true)                    CarDoorState[3][9] = 5;//closed

    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR4DOOR1,CarDoorState[3][0]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR4DOOR2,CarDoorState[3][1]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR4DOOR3,CarDoorState[3][2]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR4DOOR4,CarDoorState[3][3]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR4DOOR5,CarDoorState[3][4]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR4DOOR6,CarDoorState[3][5]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR4DOOR7,CarDoorState[3][6]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR4DOOR8,CarDoorState[3][7]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR4DOOR9,CarDoorState[3][8]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR4DOOR10,CarDoorState[3][9]);

    ////****car5 door1
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1376+1]/256 != 0 || Bit(g_dataBuffer_WH_Display[1376+1],0));
    CarDoorState[4][0] = 3;//fault
    if(bool(che5_door1) == false)                                CarDoorState[4][0] = 0;
    else if(bool(DR9CT_Dr1EmUnlock_B1) == true)                        CarDoorState[4][0] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR9CT_Dr1Isolated_B1) == true)                        CarDoorState[4][0] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[4][0] = 3;//fault
    else if(bool() == true)                                            CarDoorState[4][0] = 1;//alarm
    else if(bool(DR9CT_Dr1ExtPreventProcess_B1 ) == true)              CarDoorState[4][0] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR9CT_Dr1NotFullyClosed_B1) == true)                  CarDoorState[4][0] = 4;//not closed
    else if(bool(DR9CT_Dr1FullyClosed_B1 ) == true)                    CarDoorState[4][0] = 5;//closed

    ////****car5 door2
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1376+2]/256 != 0 || Bit(g_dataBuffer_WH_Display[1376+2],0));
    CarDoorState[4][1] = 3;//fault
    if(bool(che5_door2) == false)                                CarDoorState[4][1] = 0;
    else if(bool(DR9CT_Dr2EmUnlock_B1) == true)                        CarDoorState[4][1] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR9CT_Dr2Isolated_B1) == true)                        CarDoorState[4][1] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[4][1] = 3;//fault
    else if(bool() == true)                                            CarDoorState[4][1] = 1;//alarm
    else if(bool(DR9CT_Dr2ExtPreventProcess_B1 ) == true)              CarDoorState[4][1] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR9CT_Dr2NotFullyClosed_B1) == true)                  CarDoorState[4][1] = 4;//not closed
    else if(bool(DR9CT_Dr2FullyClosed_B1 ) == true)                    CarDoorState[4][1] = 5;//closed

    ////****car5 door3
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1376+3]/256 != 0 || Bit(g_dataBuffer_WH_Display[1376+3],0));
    CarDoorState[4][2] = 3;//fault
    if(bool(che5_door3) == false)                                CarDoorState[4][2] = 0;
    else if(bool(DR9CT_Dr3EmUnlock_B1) == true)                        CarDoorState[4][2] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR9CT_Dr3Isolated_B1) == true)                        CarDoorState[4][2] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[4][2] = 3;//fault
    else if(bool() == true)                                            CarDoorState[4][2] = 1;//alarm
    else if(bool(DR9CT_Dr3ExtPreventProcess_B1 ) == true)              CarDoorState[4][2] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR9CT_Dr3NotFullyClosed_B1) == true)                  CarDoorState[4][2] = 4;//not closed
    else if(bool(DR9CT_Dr3FullyClosed_B1 ) == true)                    CarDoorState[4][2] = 5;//closed

    ////****car5 door4
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1376+4]/256 != 0 || Bit(g_dataBuffer_WH_Display[1376+4],0));
    CarDoorState[4][3] = 3;//fault
    if(bool(che5_door4) == false)                                CarDoorState[4][3] = 0;
    else if(bool(DR9CT_Dr4EmUnlock_B1) == true)                        CarDoorState[4][3] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR9CT_Dr4Isolated_B1) == true)                        CarDoorState[4][3] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[4][3] = 3;//fault
    else if(bool() == true)                                            CarDoorState[4][3] = 1;//alarm
    else if(bool(DR9CT_Dr4ExtPreventProcess_B1 ) == true)              CarDoorState[4][3] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR9CT_Dr4NotFullyClosed_B1) == true)                  CarDoorState[4][3] = 4;//not closed
    else if(bool(DR9CT_Dr4FullyClosed_B1 ) == true)                    CarDoorState[4][3] = 5;//closed1
    ////****car5 door5
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1376+5]/256 != 0 || Bit(g_dataBuffer_WH_Display[1376+5],0));
    CarDoorState[4][4] = 3;//fault
    if(bool(che5_door5) == false)                                CarDoorState[4][4] = 0;
    else if(bool(DR9CT_Dr5EmUnlock_B1) == true)                        CarDoorState[4][4] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR9CT_Dr5Isolated_B1) == true)                        CarDoorState[4][4] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[4][4] = 3;//fault
    else if(bool() == true)                                            CarDoorState[4][4] = 1;//alarm
    else if(bool(DR9CT_Dr5ExtPreventProcess_B1 ) == true)              CarDoorState[4][4] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR9CT_Dr5NotFullyClosed_B1) == true)                  CarDoorState[4][4] = 4;//not closed
    else if(bool(DR9CT_Dr5FullyClosed_B1 ) == true)                    CarDoorState[4][4] = 5;//closed

    ////****car5 door6
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1376+6]/256 != 0 || Bit(g_dataBuffer_WH_Display[1376+6],0));
    CarDoorState[4][5] = 3;//fault
    if(bool(che5_door6) == false)                                CarDoorState[4][5] = 0;
    else if(bool(DR9CT_Dr6EmUnlock_B1) == true)                        CarDoorState[4][5] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR9CT_Dr6Isolated_B1) == true)                        CarDoorState[4][5] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[4][5] = 3;//fault
    else if(bool() == true)                                            CarDoorState[4][5] = 1;//alarm
    else if(bool(DR9CT_Dr6ExtPreventProcess_B1 ) == true)              CarDoorState[4][5] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR9CT_Dr6NotFullyClosed_B1) == true)                  CarDoorState[4][5] = 4;//not closed
    else if(bool(DR9CT_Dr6FullyClosed_B1 ) == true)                    CarDoorState[4][5] = 5;//closed

    ////****car5 door7
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1376+7]/256 != 0 || Bit(g_dataBuffer_WH_Display[1376+7],0));
    CarDoorState[4][6] = 3;//fault
    if(bool(che5_door7) == false)                                CarDoorState[4][6] = 0;
    else if(bool(DR9CT_Dr7EmUnlock_B1) == true)                        CarDoorState[4][6] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR9CT_Dr7Isolated_B1) == true)                        CarDoorState[4][6] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[4][6] = 3;//fault
    else if(bool() == true)                                            CarDoorState[4][6] = 1;//alarm
    else if(bool(DR9CT_Dr7ExtPreventProcess_B1 ) == true)              CarDoorState[4][6] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR9CT_Dr7NotFullyClosed_B1) == true)                  CarDoorState[4][6] = 4;//not closed
    else if(bool(DR9CT_Dr7FullyClosed_B1 ) == true)                    CarDoorState[4][6] = 5;//closed

    ////****car5 door8
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1376+8]/256 != 0 || Bit(g_dataBuffer_WH_Display[1376+8],0));
    CarDoorState[4][7] = 3;//fault
    if(bool(che5_door8) == false)                                CarDoorState[4][7] = 0;
    else if(bool(DR9CT_Dr8EmUnlock_B1) == true)                        CarDoorState[4][7] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR9CT_Dr8Isolated_B1) == true)                        CarDoorState[4][7] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[4][7] = 3;//fault
    else if(bool() == true)                                            CarDoorState[4][7] = 1;//alarm
    else if(bool(DR9CT_Dr8ExtPreventProcess_B1 ) == true)              CarDoorState[4][7] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR9CT_Dr8NotFullyClosed_B1) == true)                  CarDoorState[4][7] = 4;//not closed
    else if(bool(DR9CT_Dr8FullyClosed_B1 ) == true)                    CarDoorState[4][7] = 5;//closed

    ////****car5 door9
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1376+9]/256 != 0 || Bit(g_dataBuffer_WH_Display[1376+9],0));
    CarDoorState[4][8] = 3;//fault
    if(bool(che5_door9) == false)                                CarDoorState[4][8] = 0;
    else if(bool(DR9CT_Dr9EmUnlock_B1) == true)                        CarDoorState[4][8] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR9CT_Dr9Isolated_B1) == true)                        CarDoorState[4][8] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[4][8] = 3;//fault
    else if(bool() == true)                                            CarDoorState[4][8] = 1;//alarm
    else if(bool(DR9CT_Dr9ExtPreventProcess_B1 ) == true)              CarDoorState[4][8] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR9CT_Dr9NotFullyClosed_B1) == true)                  CarDoorState[4][8] = 4;//not closed
    else if(bool(DR9CT_Dr9FullyClosed_B1 ) == true)                    CarDoorState[4][8] = 5;//closed

    ////****car5 door10
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1376+10]/256 != 0 || Bit(g_dataBuffer_WH_Display[1376+10],0));
    CarDoorState[4][9] = 3;//fault
    if(bool(che5_door10) == false)                                CarDoorState[4][9] = 0;
    else if(bool(DR9CT_Dr10EmUnlock_B1) == true)                        CarDoorState[4][9] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR9CT_Dr10Isolated_B1) == true)                        CarDoorState[4][9] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[4][9] = 3;//fault
    else if(bool() == true)                                            CarDoorState[4][9] = 1;//alarm
    else if(bool(DR9CT_Dr10ExtPreventProcess_B1 ) == true)              CarDoorState[4][9] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR9CT_Dr10NotFullyClosed_B1) == true)                  CarDoorState[4][9] = 4;//not closed
    else if(bool(DR9CT_Dr10FullyClosed_B1 ) == true)                    CarDoorState[4][9] = 5;//closed

    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR5DOOR1,CarDoorState[4][0]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR5DOOR2,CarDoorState[4][1]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR5DOOR3,CarDoorState[4][2]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR5DOOR4,CarDoorState[4][3]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR5DOOR5,CarDoorState[4][4]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR5DOOR6,CarDoorState[4][5]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR5DOOR7,CarDoorState[4][6]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR5DOOR8,CarDoorState[4][7]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR5DOOR9,CarDoorState[4][8]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR5DOOR10,CarDoorState[4][9]);

    ////****car6 door1
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1440+1]/256 != 0 || Bit(g_dataBuffer_WH_Display[1440+1],0));
    CarDoorState[5][0] = 3;//fault
    if(bool(che6_door1) == false)                                CarDoorState[5][0] = 0;
    else if(bool(DR11CT_Dr1EmUnlock_B1) == true)                        CarDoorState[5][0] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR11CT_Dr1Isolated_B1) == true)                        CarDoorState[5][0] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[5][0] = 3;//fault
    else if(bool() == true)                                            CarDoorState[5][0] = 1;//alarm
    else if(bool(DR11CT_Dr1ExtPreventProcess_B1 ) == true)              CarDoorState[5][0] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR11CT_Dr1NotFullyClosed_B1) == true)                  CarDoorState[5][0] = 4;//not closed
    else if(bool(DR11CT_Dr1FullyClosed_B1 ) == true)                    CarDoorState[5][0] = 5;//closed

    ////****car6 door2
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1440+2]/256 != 0 || Bit(g_dataBuffer_WH_Display[1440+2],0));
    CarDoorState[5][1] = 3;//fault
    if(bool(che6_door2) == false)                                CarDoorState[5][1] = 0;
    else if(bool(DR11CT_Dr2EmUnlock_B1) == true)                        CarDoorState[5][1] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR11CT_Dr2Isolated_B1) == true)                        CarDoorState[5][1] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[5][1] = 3;//fault
    else if(bool() == true)                                            CarDoorState[5][1] = 1;//alarm
    else if(bool(DR11CT_Dr2ExtPreventProcess_B1 ) == true)              CarDoorState[5][1] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR11CT_Dr2NotFullyClosed_B1) == true)                  CarDoorState[5][1] = 4;//not closed
    else if(bool(DR11CT_Dr2FullyClosed_B1 ) == true)                    CarDoorState[5][1] = 5;//closed

    ////****car6 door3
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1440+3]/256 != 0 || Bit(g_dataBuffer_WH_Display[1440+3],0));
    CarDoorState[5][2] = 3;//fault
    if(bool(che6_door3) == false)                                CarDoorState[5][2] = 0;
    else if(bool(DR11CT_Dr3EmUnlock_B1) == true)                        CarDoorState[5][2] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR11CT_Dr3Isolated_B1) == true)                        CarDoorState[5][2] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[5][2] = 3;//fault
    else if(bool() == true)                                            CarDoorState[5][2] = 1;//alarm
    else if(bool(DR11CT_Dr3ExtPreventProcess_B1 ) == true)              CarDoorState[5][2] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR11CT_Dr3NotFullyClosed_B1) == true)                  CarDoorState[5][2] = 4;//not closed
    else if(bool(DR11CT_Dr3FullyClosed_B1 ) == true)                    CarDoorState[5][2] = 5;//closed

    ////****car6 door4
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1440+4]/256 != 0 || Bit(g_dataBuffer_WH_Display[1440+4],0));
    CarDoorState[5][3] = 3;//fault
    if(bool(che6_door4) == false)                                CarDoorState[5][3] = 0;
    else if(bool(DR11CT_Dr4EmUnlock_B1) == true)                        CarDoorState[5][3] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR11CT_Dr4Isolated_B1) == true)                        CarDoorState[5][3] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[5][3] = 3;//fault
    else if(bool() == true)                                            CarDoorState[5][3] = 1;//alarm
    else if(bool(DR11CT_Dr4ExtPreventProcess_B1 ) == true)              CarDoorState[5][3] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR11CT_Dr4NotFullyClosed_B1) == true)                  CarDoorState[5][3] = 4;//not closed
    else if(bool(DR11CT_Dr4FullyClosed_B1 ) == true)                    CarDoorState[5][3] = 5;//closed1
    ////****car6 door5
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1440+5]/256 != 0 || Bit(g_dataBuffer_WH_Display[1440+5],0));
    CarDoorState[5][4] = 3;//fault
    if(bool(che6_door5) == false)                                CarDoorState[5][4] = 0;
    else if(bool(DR11CT_Dr5EmUnlock_B1) == true)                        CarDoorState[5][4] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR11CT_Dr5Isolated_B1) == true)                        CarDoorState[5][4] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[5][4] = 3;//fault
    else if(bool() == true)                                            CarDoorState[5][4] = 1;//alarm
    else if(bool(DR11CT_Dr5ExtPreventProcess_B1 ) == true)              CarDoorState[5][4] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR11CT_Dr5NotFullyClosed_B1) == true)                  CarDoorState[5][4] = 4;//not closed
    else if(bool(DR11CT_Dr5FullyClosed_B1 ) == true)                    CarDoorState[5][4] = 5;//closed

    ////****car6 door6
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1440+6]/256 != 0 || Bit(g_dataBuffer_WH_Display[1440+6],0));
    CarDoorState[5][5] = 3;//fault
    if(bool(che6_door6) == false)                                CarDoorState[5][5] = 0;
    else if(bool(DR11CT_Dr6EmUnlock_B1) == true)                        CarDoorState[5][5] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR11CT_Dr6Isolated_B1) == true)                        CarDoorState[5][5] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[5][5] = 3;//fault
    else if(bool() == true)                                            CarDoorState[5][5] = 1;//alarm
    else if(bool(DR11CT_Dr6ExtPreventProcess_B1 ) == true)              CarDoorState[5][5] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR11CT_Dr6NotFullyClosed_B1) == true)                  CarDoorState[5][5] = 4;//not closed
    else if(bool(DR11CT_Dr6FullyClosed_B1 ) == true)                    CarDoorState[5][5] = 5;//closed

    ////****car6 door7
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1440+7]/256 != 0 || Bit(g_dataBuffer_WH_Display[1440+7],0));
    CarDoorState[5][6] = 3;//fault
    if(bool(che6_door7) == false)                                CarDoorState[5][6] = 0;
    else if(bool(DR11CT_Dr7EmUnlock_B1) == true)                        CarDoorState[5][6] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR11CT_Dr7Isolated_B1) == true)                        CarDoorState[5][6] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[5][6] = 3;//fault
    else if(bool() == true)                                            CarDoorState[5][6] = 1;//alarm
    else if(bool(DR11CT_Dr7ExtPreventProcess_B1 ) == true)              CarDoorState[5][6] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR11CT_Dr7NotFullyClosed_B1) == true)                  CarDoorState[5][6] = 4;//not closed
    else if(bool(DR11CT_Dr7FullyClosed_B1 ) == true)                    CarDoorState[5][6] = 5;//closed

    ////****car6 door8
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1440+8]/256 != 0 || Bit(g_dataBuffer_WH_Display[1440+8],0));
    CarDoorState[5][7] = 3;//fault
    if(bool(che6_door8) == false)                                CarDoorState[5][7] = 0;
    else if(bool(DR11CT_Dr8EmUnlock_B1) == true)                        CarDoorState[5][7] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR11CT_Dr8Isolated_B1) == true)                        CarDoorState[5][7] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[5][7] = 3;//fault
    else if(bool() == true)                                            CarDoorState[5][7] = 1;//alarm
    else if(bool(DR11CT_Dr8ExtPreventProcess_B1 ) == true)              CarDoorState[5][7] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR11CT_Dr8NotFullyClosed_B1) == true)                  CarDoorState[5][7] = 4;//not closed
    else if(bool(DR11CT_Dr8FullyClosed_B1 ) == true)                    CarDoorState[5][7] = 5;//closed

    ////****car6 door9
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1440+9]/256 != 0 || Bit(g_dataBuffer_WH_Display[1440+9],0));
    CarDoorState[5][8] = 3;//fault
    if(bool(che6_door9) == false)                                CarDoorState[5][8] = 0;
    else if(bool(DR11CT_Dr9EmUnlock_B1) == true)                        CarDoorState[5][8] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR11CT_Dr9Isolated_B1) == true)                        CarDoorState[5][8] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[5][8] = 3;//fault
    else if(bool() == true)                                            CarDoorState[5][8] = 1;//alarm
    else if(bool(DR11CT_Dr9ExtPreventProcess_B1 ) == true)              CarDoorState[5][8] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR11CT_Dr9NotFullyClosed_B1) == true)                  CarDoorState[5][8] = 4;//not closed
    else if(bool(DR11CT_Dr9FullyClosed_B1 ) == true)                    CarDoorState[5][8] = 5;//closed

    ////****car6 door10
    EDCUfaultflag = false;
    EDCUfaultflag =
    (g_dataBuffer_WH_Display[1440+10]/256 != 0 || Bit(g_dataBuffer_WH_Display[1440+10],0));
    CarDoorState[5][9] = 3;//fault
    if(bool(che6_door10) == false)                                CarDoorState[5][9] = 0;
    else if(bool(DR11CT_Dr10EmUnlock_B1) == true)                        CarDoorState[5][9] = LABELSRATE_DOOR_YJING;//jiesuo
    else if(bool(DR11CT_Dr10Isolated_B1) == true)                        CarDoorState[5][9] = LABELSRATE_DOOR_GLOCK;//bypass
    else if(bool(EDCUfaultflag) == true)                                            CarDoorState[5][9] = 3;//fault
    else if(bool() == true)                                            CarDoorState[5][9] = 1;//alarm
    else if(bool(DR11CT_Dr10ExtPreventProcess_B1 ) == true)              CarDoorState[5][9] = LABELSRATE_DOOR_YX;//jiya
    else if(bool(DR11CT_Dr10NotFullyClosed_B1) == true)                  CarDoorState[5][9] = 4;//not closed
    else if(bool(DR11CT_Dr10FullyClosed_B1 ) == true)                    CarDoorState[5][9] = 5;//closed
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR8DOOR1,CarDoorState[5][0]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR8DOOR2,CarDoorState[5][1]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR8DOOR3,CarDoorState[5][2]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR8DOOR4,CarDoorState[5][3]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR8DOOR5,CarDoorState[5][4]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR8DOOR6,CarDoorState[5][5]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR8DOOR7,CarDoorState[5][6]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR8DOOR8,CarDoorState[5][7]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR8DOOR9,CarDoorState[5][8]);
    SetDoorLabelColor(ID_PIBRUNSTATE_LABEL_CAR8DOOR10,CarDoorState[5][9]);

    for(int i = 0; i < 10 ; i++)
    {
        for(int j = 0; j< 6 ;j++)
        {
            CarDoorState[j][i] = 0;
        }
    }
}

void CRunStatePage::updateArrFinalStation()
{

#ifdef PAGE_HEADER_OLD

    if(run_status_data3 == run_status_data6)
        arrive_final_station = 1;
    else
        arrive_final_station = 0;

    if (Bit(arrive_final_station,1))
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL1_ARRIVETERMINALFLAG))->ShowLabel();
    else
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL1_ARRIVETERMINALFLAG))->HideLabel();

#endif

}
#ifdef PAGE_BUTTON_BAR_NEW
    void CRunStatePage::OnComBtn1Clk()
    {
        //ChangePage(PAGE_INDEX_RUNSTATE);

    }

    void CRunStatePage::OnComBtn2Clk()
    {
        ChangePage(PAGE_INDEX_MAINTAIN);
    }

    void CRunStatePage::OnComBtn3Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS3);
    }

    void CRunStatePage::OnComBtn4Clk()
    {
       // ChangePage(PAGE_INDEX_CARSTATUS3);

         ChangePage(PAGE_INDEX_TCUBLOCKREASON);
    }

    void CRunStatePage::OnComBtn5Clk()
    {
         ChangePage(PAGE_INDEX_INSTANCYBROADCAST);
    }

    void CRunStatePage::OnComBtn6Clk()
    {
        ChangePage(PAGE_INDEX_FASPage);
    }
    void CRunStatePage::OnComBtn7Clk()
    {
        ChangePage(PAGE_INDEX_PISALARM);
    }

    void CRunStatePage::OnComBtn8Clk()
    {
        ((CButton *)GetDlgItem(IDLB_COM_BTN8))->loadbtnpic("WHL6PIS_ArrivP.PNG");
        ((CButton *)GetDlgItem(IDLB_COM_BTN8))->ChangeButtonAutoUpState(false);

        HMiCT_ArrivePA_B1 = true;

    }
    void CRunStatePage::OnComBtn9Clk()
    {
        ((CButton *)GetDlgItem(IDLB_COM_BTN9))->loadbtnpic("WHL6PIS_LeaveP.PNG");
        ((CButton *)GetDlgItem(IDLB_COM_BTN9))->ChangeButtonAutoUpState(false);

        HMiCT_LeavePA_B1 = true;

    }
    void CRunStatePage::OnComBtn11Clk()
    {
        ((CButton *)GetDlgItem(IDLB_COM_BTN11))->ChangeButtonState(LBUTTON_DOWN);
        ((CButton *)GetDlgItem(IDLB_COM_BTN11))->ChangeButtonAutoUpState(false);
        HMiCT_ForJumpStation_B1 = true;
    }
    void CRunStatePage::OnComBtn10Clk()
    {
        ((CButton *)GetDlgItem(IDLB_COM_BTN10))->ChangeButtonState(LBUTTON_DOWN);
        ((CButton *)GetDlgItem(IDLB_COM_BTN10))->ChangeButtonAutoUpState(false);
        HMiCT_BackJumpStation_B1 = true;
    }
    void CRunStatePage::OnComBtn12Clk()
    {
        ChangePage(PAGE_INDEX_RUNHELP1);
    }
#else
    void CRunStatePage::OnComBtn1Clk()
    {
        ChangePage(PAGE_INDEX_MAIN);
    }

    void CRunStatePage::OnComBtn2Clk()
    {

    }

    void CRunStatePage::OnComBtn3Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS1);
    }

    void CRunStatePage::OnComBtn4Clk()
    {
         ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void CRunStatePage::OnComBtn5Clk()
    {
         ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void CRunStatePage::OnComBtn6Clk()
    {
        ChangePage(PAGE_INDEX_RUNHELP1);
    }
#endif


void CRunStatePage::OnBroadCastBtnClk()
{
    ChangePage(PAGE_INDEX_INSTANCYBROADCAST);
}




void CRunStatePage::UpdateCompressorStatus()
{

}



void CRunStatePage::UpdateBCUPressure()
{

}

void CRunStatePage::UpdateWarning()
{
//    int warning1_color  = 0;
//    int warning2_color  = 0;
//    int warning3_color  = 0;
//    int warning4_color  = 0;
//    int warning5_color  = 0;
//    int warning6_color  = 0;
//    int warning7_color  = 0;
//    int warning8_color  = 0;
//    int warning9_color  = 0;
//    int warning10_color = 0;
//    int warning11_color = 0;
//    int warning12_color = 0;
//    int warning13_color = 0;
//    int warning14_color = 0;
//    int warning15_color = 0;
//    int warning16_color = 0;


//    if (Bit( PIS_Master_9i1_4, 9) == 0)
//    {
//        warning1_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_4, 9) == 1)
//    {
//        warning1_color = 1;
//    }

//    if (Bit( PIS_Master_9i1_4, 11) == 0)
//    {
//        warning2_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_4, 11) == 1)
//    {
//        warning2_color = 1;
//    }

//    if (Bit( PIS_Master_9i1_4, 13) == 0)
//    {
//        warning3_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_4, 13) == 1)
//    {
//        warning3_color = 1;
//    }

//    if (Bit( PIS_Master_9i1_4, 15) == 0)
//    {
//        warning4_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_4, 15) == 1)
//    {
//        warning4_color = 1;
//    }

//    if (Bit( PIS_Master_9i1_4, 1) == 0)
//    {
//        warning5_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_4, 1) == 1)
//    {
//        warning5_color = 1;
//    }

//    if (Bit( PIS_Master_9i1_4, 3) == 0)
//    {
//        warning6_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_4, 3) == 1)
//    {
//        warning6_color = 1;
//    }

//    if (Bit( PIS_Master_9i1_4, 5) == 0)
//    {
//        warning7_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_4, 5) == 1)
//    {
//        warning7_color = 1;
//    }

//    if (Bit( PIS_Master_9i1_4, 7) == 0)
//    {
//        warning8_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_4, 7) == 1)
//    {
//        warning8_color = 1;
//    }

//    if (Bit( PIS_Master_9i1_5, 9) == 0)
//    {
//        warning9_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_5, 9) == 1)
//    {
//        warning9_color = 1;
//    }

//    if (Bit( PIS_Master_9i1_5, 11) == 0)
//    {
//        warning10_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_5, 11) == 1)
//    {
//        warning10_color = 1;
//    }

//    if (Bit( PIS_Master_9i1_5, 13) == 0)
//    {
//        warning11_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_5, 13) == 1)
//    {
//        warning11_color = 1;
//    }

//    if (Bit( PIS_Master_9i1_5, 15) == 0)
//    {
//        warning12_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_5, 15) == 1)
//    {
//        warning12_color = 1;
//    }
//    if (Bit( PIS_Master_9i1_5, 1) == 0)
//    {
//        warning13_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_5, 1) == 1)
//    {
//        warning13_color = 1;
//    }
//    if (Bit( PIS_Master_9i1_5, 3) == 0)
//    {
//        warning14_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_5, 3) == 1)
//    {
//        warning14_color = 1;
//    }
//    if (Bit( PIS_Master_9i1_5, 5) == 0)
//    {
//        warning15_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_5, 5) == 1)
//    {
//        warning15_color = 1;
//    }
//    if (Bit( PIS_Master_9i1_5, 7) == 0)
//    {
//        warning16_color = 0;
//    }
//    else if (Bit( PIS_Master_9i1_5, 7) == 1)
//    {
//        warning16_color = 1;
//    }

//    SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR1WARNING1, warning1_color);
//    SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR1WARNING2, warning2_color);
//    SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR2WARNING1, warning3_color);
//    SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR2WARNING2, warning4_color);
//    SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR3WARNING1, warning5_color);
//    SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR3WARNING2, warning6_color);
//    SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR4WARNING1, warning7_color);
//    SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR4WARNING2, warning8_color);
//    SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR5WARNING1, warning9_color);
//    SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR5WARNING2, warning10_color);
//    SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR6WARNING1, warning11_color);
//    SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR6WARNING2, warning12_color);
//    SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR7WARNING1, warning13_color);
//    SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR7WARNING2, warning14_color);
//    SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR8WARNING1, warning15_color);
//    SetWarningLabelColor(ID_PIBRUNSTATE_LABEL_CAR8WARNING2, warning16_color);

}

void CRunStatePage::UpdateASPressure()
{
}

void CRunStatePage::UpdatePlaceStatus()
{}
void CRunStatePage::UpdateBCUSeparater()
{
}

void CRunStatePage::UpdateNETMode()
{
}

void CRunStatePage::UpdateATOMode()
{


    if(CTBR_ConditionBrakeMod_B1)
    {
        ((CLabel *)GetDlgItem(ID_LABEL_CTBR_ConditionBrakeMod_B1))->ShowLabel();
    }else
    {
        ((CLabel *)GetDlgItem(ID_LABEL_CTBR_ConditionBrakeMod_B1))->HideLabel();
    }

    if(CTHM_TransportMode_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ATOMODE))->SetCtrlText(QObject::trUtf8("运输模式"));
    }else if(CTHM_ATC1On_B1)
    {
        if(ATCT_ATB_B1)
        {
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ATOMODE))->SetCtrlText(QObject::trUtf8("ATB模式"));
        }else if(ATCT_AMC_B1)
        {
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ATOMODE))->SetCtrlText(QObject::trUtf8("ATO模式"));
        }else if(ATCT_MCS_B1)
        {
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ATOMODE))->SetCtrlText(QObject::trUtf8("ATP模式"));
        }else if(ATCT_RMR_B1||ATCT_RMF_B1)
        {
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ATOMODE))->SetCtrlText(QObject::trUtf8("RM模式"));
        }else if(DICT_TC2DI4SlowMode_B1||DICT_TC1DI4SlowMode_B1)
        {
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ATOMODE))->SetCtrlText(QObject::trUtf8("慢行模式"));
        }else
        {
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ATOMODE))->SetCtrlText(QObject::trUtf8("URM模式"));
        }
    }
    else if(DICT_TC2DI4SlowMode_B1||DICT_TC1DI4SlowMode_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ATOMODE))->SetCtrlText(QObject::trUtf8("慢行模式"));
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ATOMODE))->SetCtrlText(QObject::trUtf8("URM模式"));
    }

//    if(CTHM_TransportMode_B1)
//    {
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ATOMODE))->ShowLabel();
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ATOMODE))->SetCtrlText(QObject::trUtf8("运输模式"));
//    }else if(ATCT_AMC_B1)
//    {
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ATOMODE))->ShowLabel();
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ATOMODE))->SetCtrlText(QObject::trUtf8("ATO模式"));
//    }else if(DICT_TC2DI4SlowMode_B1||DICT_TC1DI4SlowMode_B1)
//    {
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ATOMODE))->ShowLabel();
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ATOMODE))->SetCtrlText(QObject::trUtf8("慢行模式"));

//    }else if ( ATCT_MCS_B1)
//    {
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ATOMODE))->ShowLabel();
//        if ( ATCT_RMR_B1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ATOMODE))->SetCtrlText(QObject::trUtf8("人工向后"));
//        }
//        else if(ATCT_RMF_B1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ATOMODE))->SetCtrlText(QObject::trUtf8("人工向前"));
//        }else
//        {
//            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ATOMODE))->SetCtrlText(QObject::trUtf8("手动模式"));
//        }
//    }else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ATOMODE))->SetCtrlText("");
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_ATOMODE))->HideLabel();
//    }


    if(BR1CT_WSPTc12_B1||
       BR1CT_WSPMp12_B1||
       BR1CT_WSPM12_B1||
       BR2CT_WSPTc12_B1||
       BR2CT_WSPMp12_B1||
       BR2CT_WSPM12_B1)
    {
        ((CLabel *)GetDlgItem(ID_LABEL_BRiCT_WSP_B1))->ShowLabel();

    }else
    {
        ((CLabel *)GetDlgItem(ID_LABEL_BRiCT_WSP_B1))->HideLabel();

    }

    if(TR1CT_DCUCode0CWSD_B1||TR2CT_DCUCode0CWSD_B1||TR3CT_DCUCode0CWSD_B1||TR4CT_DCUCode0CWSD_B1)
    {
        if(CTHMI_Traction_B1)
        {
            ((CLabel *)GetDlgItem(ID_LABEL_TORBWSP))->ShowLabel();
            ((CLabel *)GetDlgItem(ID_LABEL_TORBWSP))->SetCtrlText(QObject::trUtf8("牵引系统\n检测到空转"));

        }else if(CTHMI_Brake_B1)
        {
            ((CLabel *)GetDlgItem(ID_LABEL_TORBWSP))->ShowLabel();
            ((CLabel *)GetDlgItem(ID_LABEL_TORBWSP))->SetCtrlText(QObject::trUtf8("牵引系统\n检测到打滑"));
        }else
        {
            ((CLabel *)GetDlgItem(ID_LABEL_TORBWSP))->HideLabel();
        }

    }else
    {
        ((CLabel *)GetDlgItem(ID_LABEL_TORBWSP))->HideLabel();
    }
    if(HMiCT_PISMODE_B1)
    {
        ((CLabel *)GetDlgItem(ID_LABEL_PISMODE_B1))->SetCtrlText(QObject::trUtf8("手动报站模式"));
        ((CLabel *)GetDlgItem(ID_LABEL_PISMODE_B1))->SetCtrlBKColor(Qt::yellow);

    }else
    {
        ((CLabel *)GetDlgItem(ID_LABEL_PISMODE_B1))->SetCtrlText(QObject::trUtf8("自动报站模式"));
        ((CLabel *)GetDlgItem(ID_LABEL_PISMODE_B1))->SetCtrlBKColor(Qt::green);

    }



}




void CRunStatePage::UpdateAValue()
{



}

void CRunStatePage::UpdateVValue()
{


}

void CRunStatePage::UpdateStation()
{



}


void CRunStatePage::UpdateCarTem()
{/*
    if (CTHM_HVAC1_Online_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1SIDETEMP))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1SIDETEMP))->SetCtrlText(QString::number(int(AC1CT_IndoorTemp_U8-40) ));

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1SIDETEMP))->SetCtrlBKColor(Qt::white);
    }


    if (CTHM_HVAC2_Online_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3SIDETEMP))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3SIDETEMP))->SetCtrlText(QString::number(int(AC2CT_IndoorTemp_U8-40) ));
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3SIDETEMP))->SetCtrlBKColor(Qt::white);
    }

    if (CTHM_HVAC3_Online_B1)
    {
         ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4SIDETEMP))->SetCtrlBKColor(Qt::black);
         ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4SIDETEMP))->SetCtrlText(QString::number(int(AC3CT_IndoorTemp_U8-40) ));

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4SIDETEMP))->SetCtrlBKColor(Qt::white);
    }

    if (CTHM_HVAC4_Online_B1)
    {
         ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5SIDETEMP))->SetCtrlBKColor(Qt::black);
         ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5SIDETEMP))->SetCtrlText(QString::number(int(AC4CT_IndoorTemp_U8-40) ));
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5SIDETEMP))->SetCtrlBKColor(Qt::white);
    }

    if (CTHM_HVAC5_Online_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6SIDETEMP))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6SIDETEMP))->SetCtrlText(QString::number(int(AC5CT_IndoorTemp_U8-40) ));

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6SIDETEMP))->SetCtrlBKColor(Qt::white);
    }



    if (CTHM_HVAC6_Online_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8SIDETEMP))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8SIDETEMP))->SetCtrlText(QString::number(int(AC6CT_IndoorTemp_U8-40) ));

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8SIDETEMP))->SetCtrlBKColor(Qt::white);
    }

*/
}






void CRunStatePage::UpdateTractionBrak()
{
#ifdef PAGE_HEADER_OLD

    UpdateTractionLevel(ID_PIBRUNSTATE_LABEL_TRACTIONMODEL);

#endif

}

void CRunStatePage::UpdateSpeed()
{
#ifdef PAGE_HEADER_OLD

    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_SPEED))->SetCtrlText(QString::number(udp_num));

#endif

}

void CRunStatePage::UpdateContravariant()
{
//    if (1 == Bit(currency_data6,14) )
//    {
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CONTRAVARIANTMODE))->SetCtrlBKColor(Qt::green);

//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CONTRAVARIANTMODE))->HideLabel();

//    }
    //((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CONTRAVARIANTMODE))->SetCtrlBKColor(Qt::green);
}

void CRunStatePage::UpdateTowMode()
{
//    if (Bit(CCU_HMI_222_9, 8 )|| Bit(CCU_HMI_222_9, 7 ))
//    {

//        if ( (Bit( CCU_HMI_222_15, 9 ) ) == 1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_TOWMODE))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_TOWMODE))->HideLabel();
//        }
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_TOWMODE))->HideLabel();

//    }

}

void CRunStatePage::UpdateWashCarMode()
{/*
    if(0)
    {
    if (Bit(DI_110_1,9)  ||Bit(DI_180_1,9) )
    {

            if(Bit(DI_110_1,9))
            {
                if (1 == Bit( DI_110_2, 9 ) )
                {

                    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);

                }
                else
                {
                      ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_WASHCARMODE))->HideLabel();
                }
            }
            if(Bit(DI_180_1,9))
            {
                if (1 == Bit( DI_180_2, 9 ) )
                {

                    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);

                }
                else
                {
                      ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_WASHCARMODE))->HideLabel();
                }
            }

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_WASHCARMODE))->HideLabel();
    }
}
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::red);

    }

*/}


void CRunStatePage::UpdateEmergencyBroadcast()
{
//    if (reserve_hide)
//    {
     // ((CButton *)GetDlgItem(ID_PIBRUNSTATE_BUTTON_EMERGENCYBROADCAST))->ShowButton();

//    }
//    else
//    {
//        ((CButton *)GetDlgItem(ID_PIBRUNSTATE_BUTTON_EMERGENCYBROADCAST))->HideButton();
//    }
}

void CRunStatePage::SetCommInterruptLabelColor(int id, int colorVal)
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


void CRunStatePage::SetDoorLabelColor(int id, int colorVal)
{
    if (3 == colorVal )
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::cyan);
    }
    else if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    else if (4 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::blue);
    }
    else if (5 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::gray);
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
    else if (LABELSRATE_DOOR_YX == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
        ((CLabel *)GetDlgItem(id))->SetLabelState(LABELSRATE_DOOR_YX);
    }
    else if (LABELSRATE_DOOR_YJING == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
        ((CLabel *)GetDlgItem(id))->SetLabelState(LABELSRATE_DOOR_YJING);
    }
    else if (LABELSRATE_DOOR_GLOCK == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::gray);
        ((CLabel *)GetDlgItem(id))->SetLabelState(LABELSRATE_DOOR_GLOCK);
    }
    return;
}

void CRunStatePage::SetStation(int id, QString station)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(station);

    return;
}

void CRunStatePage::SetCompressorStatusLabelColor(int id, int colorVal)
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

void CRunStatePage::SetTCUStatusLabelColor(int id, int colorVal)
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

void CRunStatePage::SetBCUPressureLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::black);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }

    return;
}

void CRunStatePage::SetWarningLabelColor(int id, int colorVal)
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

void CRunStatePage::SetASPressureLabelColor(int id, int colorVal)
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

void CRunStatePage::SetPlaceStatusLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 3));
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
    else if (2 <= colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
        ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::white);
    }
    return;
}

void CRunStatePage::SetBCUSeparaterLabelColor(int id, int colorVal)
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

void CRunStatePage::SetNETModeLabelColor(int id, int colorVal)
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

void CRunStatePage::SetATOModeLabelColor(int id, int colorVal)
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

void CRunStatePage::SetTCUStatusLsbelColor(int id,int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 5));
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

//void CRunStatePage::OnEmergencyResuce()
//{
//    if (0 == EmergencyResuce)
//    {
//        EmergencyResuce = 1;
//        ((CButton*)GetDlgItem(ID_PIBRUNSTATE_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_DOWN);
//    }
//    else
//    {
//        EmergencyResuce = 0;
//        ((CButton*)GetDlgItem(ID_PIBRUNSTATE_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_UP);
//    }
//}
void CRunStatePage::OnFASpageBtnClk()
{
    ChangePage(PAGE_INDEX_FASPage);

//    CRealTimeFaultsWarnningDialog dlg;

//    dlg.SetRomIdx(4);
//    dlg.move(GetParentDlg()->x()+60,GetParentDlg()->y()+140);
//    dlg.exec();
}

void CRunStatePage::OnRealTimeFaultsWarnningIconClk()
{

    if (0 == g_RealTimeFaultsNum)
    {
        return;
    }
    g_backtoprepage = true;
    SetFaultType(E_FAULTS_TYPE_REALTIME);
    ChangePage(PAGE_INDEX_REALTIMEFAULT);
}

void CRunStatePage::UpdateTcu_Enable()
{
//    if (1 == Bit(DI_110_1,16) )
//    {
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_TCU_ENABLE1))->SetCtrlBKColor(Qt::green);

//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_TCU_ENABLE1))->HideLabel();

//    }
//    if (1 == Bit(DI_180_1,16) )
//    {
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_TCU_ENABLE2))->SetCtrlBKColor(Qt::green);

//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_TCU_ENABLE2))->HideLabel();

//    }
}

void CRunStatePage::SetAcuLabelColor(int id, int colorVal)
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

void CRunStatePage::SetKauxLabelColor(int id, int colorVal)
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

void CRunStatePage::UpdateRidingRate()
{
    if(DTHM_LoadRate1_U8<101)
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1RIDINGRATE))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1RIDINGRATE))->SetCtrlText(QString::number(DTHM_LoadRate1_U8).append(" %"));

    }
    else
    {
        if(DTHM_LoadRate1_U8<255)
        {
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1RIDINGRATE))->SetCtrlBKColor(Qt::red);
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1RIDINGRATE))->SetCtrlText(QString::number(DTHM_LoadRate1_U8).append(" %"));
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1RIDINGRATE))->SetCtrlBKColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1RIDINGRATE))->SetCtrlText("--");

        }

    }

    if(DTHM_LoadRate2_U8<101)
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3RIDINGRATE))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3RIDINGRATE))->SetCtrlText(QString::number(DTHM_LoadRate2_U8).append(" %"));

    }
    else
    {
        if(DTHM_LoadRate2_U8<255)
        {
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3RIDINGRATE))->SetCtrlBKColor(Qt::red);
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3RIDINGRATE))->SetCtrlText(QString::number(DTHM_LoadRate2_U8).append(" %"));
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3RIDINGRATE))->SetCtrlBKColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3RIDINGRATE))->SetCtrlText("--");

        }

    }

    if(DTHM_LoadRate3_U8<101)
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4RIDINGRATE))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4RIDINGRATE))->SetCtrlText(QString::number(DTHM_LoadRate3_U8).append(" %"));

    }
    else
    {
        if(DTHM_LoadRate3_U8<255)
        {
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4RIDINGRATE))->SetCtrlBKColor(Qt::red);
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4RIDINGRATE))->SetCtrlText(QString::number(DTHM_LoadRate3_U8).append(" %"));
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4RIDINGRATE))->SetCtrlBKColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4RIDINGRATE))->SetCtrlText("--");

        }

    }

    if(DTHM_LoadRate4_U8<101)
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5RIDINGRATE))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5RIDINGRATE))->SetCtrlText(QString::number(DTHM_LoadRate4_U8).append(" %"));

    }
    else
    {
        if(DTHM_LoadRate4_U8<255)
        {
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5RIDINGRATE))->SetCtrlBKColor(Qt::red);
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5RIDINGRATE))->SetCtrlText(QString::number(DTHM_LoadRate4_U8).append(" %"));
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5RIDINGRATE))->SetCtrlBKColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5RIDINGRATE))->SetCtrlText("--");

        }

    }

    if(DTHM_LoadRate5_U8<101)
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6RIDINGRATE))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6RIDINGRATE))->SetCtrlText(QString::number(DTHM_LoadRate5_U8).append(" %"));

    }
    else
    {
        if(DTHM_LoadRate5_U8<255)
        {
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6RIDINGRATE))->SetCtrlBKColor(Qt::red);
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6RIDINGRATE))->SetCtrlText(QString::number(DTHM_LoadRate5_U8).append(" %"));
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6RIDINGRATE))->SetCtrlBKColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6RIDINGRATE))->SetCtrlText("--");

        }

    }

    if(DTHM_LoadRate6_U8<101)
    {
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8RIDINGRATE))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8RIDINGRATE))->SetCtrlText(QString::number(DTHM_LoadRate6_U8).append(" %"));

    }
    else
    {
        if(DTHM_LoadRate6_U8<255)
        {
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8RIDINGRATE))->SetCtrlBKColor(Qt::red);
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8RIDINGRATE))->SetCtrlText(QString::number(DTHM_LoadRate6_U8).append(" %"));
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8RIDINGRATE))->SetCtrlBKColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8RIDINGRATE))->SetCtrlText("--");

        }

    }


//    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1RIDINGRATE))->SetCtrlText(QString::number(DTHM_LoadRate1_U8).append(" %"));
//    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR1RIDINGRATE))->SetCtrlBKColor(Qt::red);
//    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR2RIDINGRATE))->SetCtrlText(QString::number(ERM_F00_12%256).append(" %"));
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR3RIDINGRATE))->SetCtrlText(QString::number(DTHM_LoadRate2_U8).append(" %"));
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR4RIDINGRATE))->SetCtrlText(QString::number(DTHM_LoadRate3_U8).append(" %"));
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR5RIDINGRATE))->SetCtrlText(QString::number(DTHM_LoadRate4_U8).append(" %"));
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR6RIDINGRATE))->SetCtrlText(QString::number(DTHM_LoadRate5_U8).append(" %"));
//    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR7RIDINGRATE))->SetCtrlText(QString::number(ERM_F00_14/256).append(" %"));
    ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_CAR8RIDINGRATE))->SetCtrlText(QString::number(DTHM_LoadRate6_U8).append(" %"));


}

void CRunStatePage::UpdateFAS_status_Hide()
{

       /* if(Bit(FAS_B10_2,7)||Bit(FAS_B10_2,3)||Bit(FAS_B10_2,15)||Bit(FAS_B10_2,11)||Bit(FAS_B10_3,7)||Bit(FAS_B10_3,3)||Bit(FAS_B10_3,15)||Bit(FAS_B10_3,11)||Bit(FAS_B10_4,7)||Bit(FAS_B10_4,3)||Bit(FAS_B10_4,15)||Bit(FAS_B10_4,11)
         ||Bit(FAS_B10_5,7)||Bit(FAS_B10_5,3)||Bit(FAS_B10_5,15)||Bit(FAS_B10_5,11)||Bit(FAS_B10_6,7)||Bit(FAS_B10_6,3)||Bit(FAS_B10_6,15)||Bit(FAS_B10_6,11)||Bit(FAS_B10_7,7)||Bit(FAS_B10_7,3)||Bit(FAS_B10_7,15)||Bit(FAS_B10_7,11)
         ||Bit(FAS_B10_8,7)||Bit(FAS_B10_8,3)||Bit(FAS_B10_8,15)||Bit(FAS_B10_8,11)||Bit(FAS_B10_9,7)||Bit(FAS_B10_6,3)||Bit(FAS_B10_9,15)||Bit(FAS_B10_9,11)||Bit(FAS_B10_10,7)||Bit(FAS_B10_10,3)||Bit(FAS_B10_10,15)||Bit(FAS_B10_10,11)
         ||Bit(FAS_B10_11,7)||Bit(FAS_B10_11,3)||Bit(FAS_B10_11,15)||Bit(FAS_B10_11,11)||Bit(FAS_B10_12,7)||Bit(FAS_B10_12,3)||Bit(FAS_B10_12,15)||Bit(FAS_B10_12,11)||Bit(FAS_B10_13,7)||Bit(FAS_B10_13,3)||Bit(FAS_B10_13,15)||Bit(FAS_B10_13,11)
         ||Bit(FAS_B10_14,7)||Bit(FAS_B10_14,3))
         */

        if(DICT_Tc1DI1FireAlarm_B1||DICT_Tc2DI1FireAlarm_B1||DICT_MP1DI1FireAlarm_B1||DICT_MP2DI1FireAlarm_B1||DICT_M1DI1FireAlarm_B1||DICT_M2DI1FireAlarm_B1)
        {
            ((CLabel *)GetDlgItem(ID_LABEL_FIRE))->ShowLabel();
        }else
        {
            ((CLabel *)GetDlgItem(ID_LABEL_FIRE))->HideLabel();
        }

}
void CRunStatePage::UpdateByPass_Hide()
{

    if(  DICT_TC1DI4ATCCutoff_B1||DICT_TC1DI1CabDrBp_B1||DICT_TC1DI1DrZeroBp_B1||DICT_TC1DI2CylinderOKBp_B1||DICT_TC1DI2PhPmtBp_B1||DICT_TC1DI3AlertBp_B1||DICT_TC1DI3DrClsBp_B1||DICT_TC1DI3ParkBrkBp_B1||DICT_TC1DI3AllBrkRlsBp_B1
      || DICT_TC2DI4ATCCutoff_B1||DICT_TC2DI1CabDrBp_B1||DICT_TC2DI1DrZeroBp_B1||DICT_TC2DI2CylinderOKBp_B1||DICT_TC2DI2PhPmtBp_B1||DICT_TC2DI3AlertBp_B1||DICT_TC2DI3DrClsBp_B1||DICT_TC2DI3ParkBrkBp_B1||DICT_TC2DI3AllBrkRlsBp_B1)

    {
        ((CLabel *)GetDlgItem(ID_LABEL_BYPASS))->ShowLabel();
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_LABEL_BYPASS))->HideLabel();
    }
}
void CRunStatePage::UpdatePisAlarm()
{
    if((g_dataBuffer_WH_Display[1648+3]%256 != 0)||(g_dataBuffer_WH_Display[1648+2]!= 0))// only when master pis alarms
    {
        ((CLabel *)GetDlgItem(ID_LABEL_PASSAGEALARM))->ShowLabel();
    }else
    {
        ((CLabel *)GetDlgItem(ID_LABEL_PASSAGEALARM))->HideLabel();
    }
}

void CRunStatePage::UpdateDisEBTest()
{

//    if(0)
//    {
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_DisEBTest))->ShowLabel();
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBRUNSTATE_LABEL_DisEBTest))->HideLabel();
//    }

}

//QString  CRunStatePage::GetCarriageString(char position)
//{
//    QString str = "- ";
//    switch (position)
//    {
//    case D_POS_A:
//        str = "Tc1 ";
//        break;
//    case D_POS_B:
//        str = "Mp1  ";
//        break;
//    case D_POS_C:
//        str = "M1  ";
//        break;
//    case D_POS_D:
//        str = "M2  ";
//        break;
//    case D_POS_E:
//        str = "Mp2  ";
//        break;
//    case D_POS_F:
//        str = "Tc2 ";
//        break;
//    case D_POS_G:
//        str = "---";
//        break;
//    case D_POS_H:
//        str = "---";
//        break;
//    default:
//        break;
//    }

//    return str;
//}

