#include "C_Page_Bypass_Status.h"


ROMDATA g_PicRom_CarStatus3[] =
{


#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW_WH
#else
    {QObject::trUtf8("第3页/共3页"),           D_FONT_BOLD(6),      QRect(675, 480, 120,  20),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
    {"<<",                        D_FONT_BOLD(6),      QRect(675, 500,  50,  39),          Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBCARS3_BUTTON_PAGEDOWN           },
    {">>",                        D_FONT_BOLD(6),      QRect(725, 500,  50,  39),          Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBCARS3_BUTTON_PAGEUP             },

#endif
#ifdef PAGE_HEADER_NEW
//    D_COMMON_PAGE_HEADER_NEW(QObject::trUtf8("旁路状态") )
//    {"",                          D_FONT_BOLD(4),      QRect(178, 108, 600,  70),          Qt::black,                Qt::gray,                 CONTROL_TRAIN,          ID_PIBCARS3_TRAIN                      },
//    {"RIGHT",                  D_FONT_BOLD(6),      QRect(700+2, 140,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBCARS3_ARROW_RIGHT                },
//    {"LEFT",                   D_FONT_BOLD(6),      QRect( 58-4, 140,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBCARS3_ARROW_LEFT                 },

    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("旁路") )
    {"",                       D_FONT_BOLD(4),      QRect(100, 70, 600,  70),          Qt::black,                Qt::gray,                 CONTROL_TRAIN,          ID_PIBCARS3_TRAIN                      },
    {"RIGHT",                  D_FONT_BOLD(6),      QRect(715, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBCARS3_ARROW_RIGHT                },
    {"LEFT",                   D_FONT_BOLD(6),      QRect( 40, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBCARS3_ARROW_LEFT                 },

#endif

#ifdef PAGE_HEADER_OLD
    D_COMMON_PAGE_BUTTON_BAR
    D_COMMON_PAGE_HEADER(QObject::trUtf8("车辆状态") )

    {QObject::trUtf8("通信中断"),                D_FONT_BOLD(8),      QRect( 20, 6,  162, 30),          Qt::red,                  Qt::white,                CONTROL_LABEL,           ID_PIBCARS3_COMMINTERRUPT          },
    {QObject::trUtf8("网压"),                   D_FONT_BOLD(8),      QRect(40, 45, 120, 20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(40, 66, 120, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_V                },

    {QObject::trUtf8("网流"),                   D_FONT_BOLD(8),      QRect(180, 45, 120, 20),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(180,66, 120, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_A                },

    {QObject::trUtf8("牵引*制动级位"),            D_FONT_BOLD(8),      QRect(470, 45, 150, 20),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(470, 66, 150, 30),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_TRACTIONMODEL    },

    {QObject::trUtf8("速度"),                   D_FONT_BOLD(8),      QRect(630, 45, 80, 20),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(630, 66, 80, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_SPEED            },
    {"FaultRed.PNG",                D_DEFAULT_FONT,      QRect(720, 50, 65,  65),           Qt::black,                Qt::red,                  CONTROL_IMAGE,           ID_PIBCARS3_ICON_WARNNING          },

    {"",                            D_FONT_BOLD(4),      QRect(178,110,600, 60),           Qt::black,                Qt::gray,                 CONTROL_TRAIN,           ID_PIBCARS3_TRAIN                  },
    {"RIGHT",                       D_FONT_BOLD(6),      QRect(700,128, 45, 20),           Qt::white,                Qt::white,                CONTROL_ARROW,           ID_PIBCARS3_ARROW_RIGHT            },
    {"LEFT",                        D_FONT_BOLD(6),      QRect(58, 128, 45, 20),           Qt::white,                Qt::white,                CONTROL_ARROW,           ID_PIBCARS3_ARROW_LEFT             },

#endif
    {"",                            D_FONT_BOLD(6),      QRect(10, 150, 690, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(10, 180, 690, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(10, 210, 690, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(10, 240, 690, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(10, 270, 690, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(10, 300, 690, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(10, 330, 690, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(10, 360, 690, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(10, 390, 690, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(10, 420, 690, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(10, 450, 690, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    //{"",                            D_FONT_BOLD(6),      QRect(10, 480, 690, 1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },


    {"",                            D_FONT_BOLD(6),      QRect(10, 150, 1, 300),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(100, 150, 1, 300),          Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 150, 1, 300),          Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(300, 150, 1, 300),          Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(400, 150, 1, 300),          Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(500, 150, 1, 300),          Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(600, 150, 1, 300),          Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(700-1, 150, 1, 300),          Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    {QObject::trUtf8("车号"),                   D_FONT_BOLD(4),      QRect(11, 151, 88, 28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("门零速旁路"),            D_FONT_BOLD(4),      QRect(11, 181, 88, 30),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("司机室门旁路"),                 D_FONT_BOLD(4),      QRect(11, 211, 88, 28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("总风压力\n可用旁路"),            D_FONT_BOLD(4),      QRect(11, 241, 88, 30),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("允许升弓旁路"),            D_FONT_BOLD(4),      QRect(11,271, 88, 30),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("警惕按钮旁路"),            D_FONT_BOLD(4),      QRect(11, 301, 88, 28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("门关好旁路"),            D_FONT_BOLD(4),      QRect(11, 331, 88, 28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("停放制动旁路"),                D_FONT_BOLD(4),      QRect(11, 361, 88, 28),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("ATC切除"),               D_FONT_BOLD(4),      QRect(11, 391, 88, 30),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    //{QObject::trUtf8("紧急牵引"),               D_FONT_BOLD(4),      QRect(11, 421, 88, 30),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("所有制动\n缓解旁路"),               D_FONT_BOLD(4),      QRect(11, 421, 88, 30),          Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },


    {QObject::trUtf8("1"),                   D_FONT_BOLD(6),      QRect(103, 153,  94,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("2"),                   D_FONT_BOLD(6),      QRect(203, 153,  94,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("3"),                   D_FONT_BOLD(6),      QRect(303, 153,  94,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("4"),                   D_FONT_BOLD(6),      QRect(403, 153,  94,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("5"),                   D_FONT_BOLD(6),      QRect(503, 153,  94,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("6"),                   D_FONT_BOLD(6),      QRect(603, 153,  94,  28),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

    //门零速旁路
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(103, 184, 94, 23),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR1ATCDOORCUTOFF      },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(203, 184, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR2ATCDOORCUTOFF         },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(303, 184, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR3ATCDOORCUTOFF         },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(403, 184, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR4ATCDOORCUTOFF         },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(503, 184, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR5ATCDOORCUTOFF          },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(603, 184, 94, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR6ATCDOORCUTOFF     },

    //	司机室门旁路
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(103, 214, 94, 23),          Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBCARS3_LABEL_CAR1DOORLINECUTOFF         },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(203, 214, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,            ID_PIBCARS3_LABEL_CAR2DOORLINECUTOFF      },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(303, 214, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,            ID_PIBCARS3_LABEL_CAR3DOORLINECUTOFF       },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(403, 214, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,            ID_PIBCARS3_LABEL_CAR4DOORLINECUTOFF       },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(503, 214, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,            ID_PIBCARS3_LABEL_CAR5DOORLINECUTOFF       },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(603, 214, 94, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBCARS3_LABEL_CAR6DOORLINECUTOFF          },

    //总风压力\n可用旁路
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(103, 244, 94, 23),          Qt::white,                Qt::black,                  CONTROL_LABEL,         ID_PIBCARS3_LABEL_CAR1PARBRKCUTOFF     },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(203, 244, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR2PARBRKCUTOFF        },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(303, 244, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR3PARBRKCUTOFF         },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(403, 244, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR4PARBRKCUTOFF         },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(503, 244, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR5PARBRKCUTOFF         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(603, 244, 94, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR6PARBRKCUTOFF      },

    //   允许升弓旁路
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(103, 274, 94, 23),          Qt::white,                Qt::black,                  CONTROL_LABEL,          ID_PIBCARS3_LABEL_CAR1BRKNORELSCUTOFF },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(203, 274, 94, 23),           Qt::white,                Qt::black,          CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR2BRKNORELSCUTOFF       },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(303, 274, 94, 23),           Qt::white,                Qt::black,          CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR3BRKNORELSCUTOFF         },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(403, 274, 94, 23),           Qt::white,                Qt::black,          CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR4BRKNORELSCUTOFF       },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(503, 274, 94, 23),           Qt::white,                Qt::black,          CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR5BRKNORELSCUTOFF        },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(603, 274, 94, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR6BRKNORELSCUTOFF },

    //    警惕按钮旁路
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(103, 304, 94, 23),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBCARS3_LABEL_CAR1EBCUTOFF    },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(203, 304, 94, 23),           Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS3_LABEL_CAR2EBCUTOFF         },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(303, 304, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS3_LABEL_CAR3EBCUTOFF         },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(403, 304, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS3_LABEL_CAR4EBCUTOFF          },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(503, 304, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS3_LABEL_CAR5EBCUTOFF          },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(603, 304, 94, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBCARS3_LABEL_CAR6EBCUTOFF     },

    //      门关好旁路
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(103, 334, 94, 23),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR1EBISOFF  },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(203, 334, 94, 23),           Qt::white,                Qt::black,          CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR2EBISOFF        },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(303, 334, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR3EBISOFF        },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(403, 334, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR4EBISOFF         },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(503, 334, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR5EBISOFF         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(603, 334, 94, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR6EBISOFF   },

    //停放制动旁路
    {QObject::trUtf8(""),                        D_FONT_BOLD(6),      QRect(103, 364, 94, 23),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR1ALERTCUTOFF     },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(203, 364, 94, 23),           Qt::white,                Qt::black,          CONTROL_LABEL,         ID_PIBCARS3_LABEL_CAR2ALERTCUTOFF          },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(303, 364, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCARS3_LABEL_CAR3ALERTCUTOFF         },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(403, 364, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,         ID_PIBCARS3_LABEL_CAR4ALERTCUTOFF          },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(503, 364, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,         ID_PIBCARS3_LABEL_CAR5ALERTCUTOFF         },
    {QObject::trUtf8(""),                        D_FONT_BOLD(6),      QRect(603, 364, 94, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR6ALERTCUTOFF    },

    // ATC切除
    {QObject::trUtf8(""),                        D_FONT_BOLD(6),      QRect(103, 394, 94, 23),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBCARS3_LABEL_CAR1ATCCUTOFF   },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(203, 394, 94, 23),           Qt::white,                Qt::black,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(303, 394, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(403, 394, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(503, 394, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                        D_FONT_BOLD(6),      QRect(603, 394, 94, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR6ATCCUTOFF    },
    //紧急牵引
//    {QObject::trUtf8(""),                        D_FONT_BOLD(6),      QRect(103, 424, 94, 23),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBCARS3_LABEL_CAR1ETCUTOFF   },
//    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(203, 424, 94, 23),           Qt::white,                Qt::black,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(303, 424, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(403, 424, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(503, 424, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                        D_FONT_BOLD(6),      QRect(603, 424, 94, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR6ETCUTOFF    },
    //制动缓解
    {QObject::trUtf8(""),                        D_FONT_BOLD(6),      QRect(103, 424, 94, 23),          Qt::white,                Qt::black,                CONTROL_LABEL,          ID_PIBCARS3_LABEL_CAR1ALLCUTOFF   },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(203, 424, 94, 23),           Qt::white,                Qt::black,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(303, 424, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(403, 424, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("-- --"),                   D_FONT_BOLD(6),      QRect(503, 424, 94, 23),          Qt::white,                Qt::black,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                        D_FONT_BOLD(6),      QRect(603, 424, 94, 23),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS3_LABEL_CAR6ALLCUTOFF    },




};
int g_CarStatus3RomLen = sizeof(g_PicRom_CarStatus3)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CCarStatus3Page,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(IDLB_COM_BTN1, OnComBtn1Clk)
        ON_BTNCLK(IDLB_COM_BTN2, OnComBtn2Clk)

        ON_BTNCLK(IDLB_COM_BTN4, OnComBtn4Clk)
        ON_BTNCLK(IDLB_COM_BTN5, OnComBtn5Clk)
        ON_BTNCLK(IDLB_COM_BTN6, OnComBtn6Clk)

#ifdef PAGE_BUTTON_BAR_NEW
        ON_BTNCLK(IDLB_COM_BTN3, OnComBtn3Clk)
        ON_BTNCLK(IDLB_COM_BTN7, OnComBtn7Clk)
        ON_BTNCLK(IDLB_COM_BTN8, OnComBtn8Clk)
        ON_BTNCLK(IDLB_COM_BTN12, OnComBtn12Clk)

#else
        ON_BTNCLK(  ID_PIBCARS3_BUTTON_PAGEDOWN, OnPageDownBtnClk)
#endif
        ON_BTNCLK(ID_LABEL_REALTIMEFAULTCONFIRM, OnRealtimefaultBtnClk)
        //ON_BTNCLK(ID_PIBCARS3_BUTTON_EMERGENCYBROADCAST,OnBroadCastBtnCl)
     //   ON_BTNCLK(ID_PIBCARS3_BUTTON_EMERGENCYRESCUE, OnEmergencyResuce)
        ON_BTNCLK(ID_PIBCARS3_ICON_WARNNING, OnRealTimeFaultsWarnningIconClk)
       // ON_BTNCLK(ID_PIBCARS3_BUTTON_FASPAGE, OnFASpageBtnClk)

END_MESSAGE_MAP()

CCarStatus3Page::CCarStatus3Page()
{
}

void CCarStatus3Page::OnUpdatePage()
{
    //UpdateColor();
    UpdateR1DI1state();
    UpdateR1DI2state();
    UpdateR1DI3state();
    UpdateR1DI4state();
    UpdateTowMode();
    UpdateRealtimefaults();
    updateTrain(ID_PIBCARS3_TRAIN);
    updateArrow(ID_PIBCARS3_ARROW_LEFT,ID_PIBCARS3_ARROW_RIGHT);

    //updateErrorLine(ID_PIBCARS3_TRAIN);


    UpdateTractionBrak();
    UpdateSpeed();
    UpdateVValue();
    UpdateAValue();
#ifdef PAGE_HEADER_OLD
    UpdateCommInterrupt(ID_PIBCARS3_COMMINTERRUPT);
    updateFault(ID_PIBCARS3_ICON_WARNNING);
#endif
//    UpdateEmergencyBroadcast();


}


void CCarStatus3Page::OnInitPage()
{

#ifdef PAGE_HEADER_OLD
    ((CLabel *) GetDlgItem(ID_PIBCARS3_LABEL_V))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBCARS3_LABEL_A))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_PIBCARS3_LABEL_TRACTIONMODEL))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBCARS3_LABEL_SPEED))->SetBorderColor(Qt::white);
#endif
 //   ((CButton*)GetDlgItem(ID_PIBCARS3_BUTTON_EMERGENCYRESCUE))->m_bAutoUpState = false;

//    ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_ATOMODE))->SetBorderColor(Qt::white);
//    ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_NETMODE))->SetBorderColor(Qt::white);
//    ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_CONTRAVARIANTMODE))->SetBorderColor(Qt::white);
//    ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_WASHCARMODE))->SetBorderColor(Qt::white);
   // ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_TOWMODE))->SetBorderColor(Qt::white);

}

void CCarStatus3Page::OnShowPage()
{

#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN10))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN11))->SetCtrlText(QObject::trUtf8(""));
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
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8("运   行"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8("紧急广播"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8("空调设置"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8("故   障"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("帮   助"));
#endif
//    if (1 == EmergencyResuce)
//        ((CButton*)GetDlgItem(ID_PIBCARS3_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_DOWN);
//    else
//        ((CButton*)GetDlgItem(ID_PIBCARS3_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_UP);
    this->InitPageHeader();
}
void CCarStatus3Page::UpdateRealtimefaults()
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

void CCarStatus3Page::OnRealtimefaultBtnClk()
{
    g_faultsrom[g_romidx].confirm = true;
    g_realtimeFaultsbarList.removeAt(g_faultcount);
    if(g_faultcount>0)
    g_faultcount--;
    //m_faultcount--;

}
void CCarStatus3Page::OnFASpageBtnClk()
{
    ChangePage(PAGE_INDEX_FASPage);
}

#ifdef PAGE_BUTTON_BAR_NEW

void CCarStatus3Page::OnComBtn1Clk()
{
    ChangePage(PAGE_INDEX_RUNSTATE);
}

void CCarStatus3Page::OnComBtn2Clk()
{
    ChangePage(PAGE_INDEX_MAINTAIN);
}

void CCarStatus3Page::OnComBtn3Clk()
{
     ChangePage(PAGE_INDEX_CARSTATUS3);
}

void CCarStatus3Page::OnComBtn4Clk()
{
     ChangePage(PAGE_INDEX_TCUBLOCKREASON);
}

void CCarStatus3Page::OnComBtn5Clk()
{
     ChangePage(PAGE_INDEX_INSTANCYBROADCAST);
}

void CCarStatus3Page::OnComBtn6Clk()
{
    ChangePage(PAGE_INDEX_FASPage);
}
void CCarStatus3Page::OnComBtn7Clk()
{
    ChangePage(PAGE_INDEX_PISALARM);
}

    void CCarStatus3Page::OnComBtn8Clk()
    {
    }
    void CCarStatus3Page::OnComBtn12Clk()
    {
        ChangePage(PAGE_INDEX_CARSTATUS3HELP);
    }
#else
    void CCarStatus3Page::OnComBtn1Clk()
    {
        ChangePage(PAGE_INDEX_MAIN);
    }

    void CCarStatus3Page::OnComBtn2Clk()
    {
        ChangePage(PAGE_INDEX_RUNSTATE);
    }

    void CCarStatus3Page::OnComBtn3Clk()
    {
        ChangePage(PAGE_INDEX_INSTANCYBROADCAST);
    }

    void CCarStatus3Page::OnComBtn4Clk()
    {
        ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void CCarStatus3Page::OnComBtn5Clk()
    {
        ChangePage(PAGE_INDEX_FAULT);
    }

    void CCarStatus3Page::OnComBtn6Clk()
    {
        ChangePage(PAGE_INDEX_CARSTATUS3HELP);
    }


#endif
    void CCarStatus3Page::OnPageDownBtnClk()
    {
#ifdef PAGE_BUTTON_BAR_NEW

#else
        ChangePage(PAGE_INDEX_CARSTATUS2);
#endif

    }

void CCarStatus3Page:: UpdateR1DI1state()
{

    int car1state1 = 0;
    int car1state2 = 0;


    int car6state1 = 0;
    int car6state2 = 0;

    if(CTHM_TC1DI1On_B1)
    {
        if(DICT_TC1DI1CabDrBp_B1)
        {
            car1state1 = 1;
        }else
        {
            car1state1 = 0;
        }

        if(DICT_TC1DI1DrZeroBp_B1)
        {
            car1state2 = 1;
        }else
        {
            car1state2 = 0;
        }
    }

    if(CTHM_TC2DI1On_B1)
    {
        if(DICT_TC2DI1CabDrBp_B1)
        {
            car6state1 = 1;
        }else
        {
            car6state1 = 0;
        }

        if(DICT_TC2DI1DrZeroBp_B1)
        {
            car6state2 = 1;
        }else
        {
            car6state2 = 0;
        }
    }
    SetLabelColor(ID_PIBCARS3_LABEL_CAR1ATCDOORCUTOFF,car1state2);
    SetLabelColor(ID_PIBCARS3_LABEL_CAR6ATCDOORCUTOFF,car6state2);
    SetLabelColor(ID_PIBCARS3_LABEL_CAR1DOORLINECUTOFF,car1state1);
    SetLabelColor(ID_PIBCARS3_LABEL_CAR6DOORLINECUTOFF,car6state1);
}
void CCarStatus3Page::UpdateR1DI2state()
{
    int car1state3 = 0;
    int car1state4 = 0;

    int car6state3 = 0;
    int car6state4 = 0;

    if(CTHM_TC1DI2On_B1)
    {
        if(DICT_TC1DI2CylinderOKBp_B1)
        {
            car1state3 = 1;
        }else
        {
            car1state3 = 0;
        }

        if(DICT_TC1DI2PhPmtBp_B1)
        {
            car1state4 = 1;
        }else
        {
            car1state4 = 0;
        }
    }
    if(CTHM_TC2DI2On_B1)
    {
        if(DICT_TC2DI2CylinderOKBp_B1)
        {
            car6state3 = 1;
        }else
        {
            car6state3 = 0;
        }

        if(DICT_TC2DI2PhPmtBp_B1)
        {
            car6state4 = 1;
        }else
        {
            car6state4 = 0;
        }
    }
    SetLabelColor(ID_PIBCARS3_LABEL_CAR1PARBRKCUTOFF,car1state3);
    SetLabelColor(ID_PIBCARS3_LABEL_CAR6PARBRKCUTOFF,car6state3);
    SetLabelColor(ID_PIBCARS3_LABEL_CAR1BRKNORELSCUTOFF,car1state4);
    SetLabelColor(ID_PIBCARS3_LABEL_CAR6BRKNORELSCUTOFF,car6state4);
}
void CCarStatus3Page::UpdateR1DI3state()
{
    int car1state5 = 0;
    int car1state6 = 0;
    int car1state7 = 0;
    int car1state10 = 0;

    int car6state5 = 0;
    int car6state6 = 0;
    int car6state7 = 0;
    int car6state10 = 0;
    if(CTHM_TC1DI3On_B1)
    {
        if(DICT_TC1DI3AlertBp_B1 )
        {
            car1state5 = 1;
        }else
        {
            car1state5 = 0;
        }

        if(DICT_TC1DI3DrClsBp_B1)
        {
            car1state6 = 1;
        }else
        {
            car1state6 = 0;
        }
        if(DICT_TC1DI3ParkBrkBp_B1 )
        {
            car1state7 = 1;
        }else
        {
            car1state7 = 0;
        }

        if(DICT_TC1DI3AllBrkRlsBp_B1)
        {
            car1state10 = 1;
        }else
        {
            car1state10 = 0;
        }
    }
    if(CTHM_TC2DI3On_B1)
    {
        if(DICT_TC2DI3AlertBp_B1 )
        {
            car6state5 = 1;
        }else
        {
            car6state5 = 0;
        }

        if(DICT_TC2DI3DrClsBp_B1)
        {
            car6state6 = 1;
        }else
        {
            car6state6 = 0;
        }
        if(DICT_TC2DI3ParkBrkBp_B1 )
        {
            car6state7 = 1;
        }else
        {
            car6state7 = 0;
        }

        if(DICT_TC2DI3AllBrkRlsBp_B1)
        {
            car6state10 = 1;
        }else
        {
            car6state10 = 0;
        }
    }
    SetLabelColor(ID_PIBCARS3_LABEL_CAR1EBCUTOFF,car1state5);
    SetLabelColor(ID_PIBCARS3_LABEL_CAR6EBCUTOFF,car6state5);
    SetLabelColor(ID_PIBCARS3_LABEL_CAR1EBISOFF,car1state6);
    SetLabelColor(ID_PIBCARS3_LABEL_CAR6EBISOFF,car6state6);
    SetLabelColor(ID_PIBCARS3_LABEL_CAR1ALERTCUTOFF,car1state7);
    SetLabelColor(ID_PIBCARS3_LABEL_CAR6ALERTCUTOFF,car6state7);
    SetLabelColor(ID_PIBCARS3_LABEL_CAR1ALLCUTOFF,car1state10);
    SetLabelColor(ID_PIBCARS3_LABEL_CAR6ALLCUTOFF,car6state10);
}
void CCarStatus3Page::UpdateR1DI4state()
{
    int car1state8 = 0;
    //int car1state9 = 0;
    int car6state8 = 0;
    //int car6state9 = 0;
    if(CTHM_TC1DI4On_B1)
    {
        if(DICT_TC1DI4ATCCutoff_B1)
        {
            car1state8 = 1;
        }else
        {
            car1state8 = 0;
        }
    }

    if(CTHM_TC2DI4On_B1)
    {
        if(DICT_TC2DI4ATCCutoff_B1)
        {
            car6state8 = 1;
        }else
        {
            car6state8 = 0;
        }
    }

    SetLabelColor(ID_PIBCARS3_LABEL_CAR1ATCCUTOFF,car1state8);
    SetLabelColor(ID_PIBCARS3_LABEL_CAR6ATCCUTOFF,car6state8);
}


void CCarStatus3Page::OnBroadCastBtnCl()
{
  ChangePage(PAGE_INDEX_INSTANCYBROADCAST);
}

void CCarStatus3Page::UpdateAValue()
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

    SetAValue(ID_PIBCARS3_LABEL_A, webflow);
#endif
}

void CCarStatus3Page::UpdateVValue()
{

#ifdef PAGE_HEADER_OLD
    UpdateVoltage(ID_PIBCARS3_LABEL_V);
#endif
}

void CCarStatus3Page::UpdateTractionBrak()
{

#ifdef PAGE_HEADER_OLD
    UpdateTractionLevel(ID_PIBCARS3_LABEL_TRACTIONMODEL);
#endif
}

void CCarStatus3Page::UpdateSpeed()
{
#ifdef PAGE_HEADER_OLD
    ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_SPEED))->SetCtrlText(QString::number(currency_data4));
#endif

}


void CCarStatus3Page::UpdateATOMode()
{

    //首先判断两侧司机室 DIOM4 是否在线 ，如果两个DIOM4都不在线则显示通信异常
    if(CTHM_RIOM1_DIM4_IsOnline_B1 ||CTHM_RIOM6_DIM4_IsOnline_B1)
    {
             if((CTHM_RIOM1_DIM4_IsOnline_B1 &&CTHM_TC1Active_B1)||(CTHM_RIOM6_DIM4_IsOnline_B1 &&CTHM_TC2Active_B1))
             {
                    // Tc1车RIOM4在线且Tc1车司机钥匙激活
                    if(CTHM_RIOM1_DIM4_IsOnline_B1 &&CTHM_TC1Active_B1)
                    {
                        //如果以下6种状态都无效，这显示ATC无效
                        ATC_status = QObject::trUtf8("ATC无效");
                        ATC_invalid = 1;

                         if ( RIOM1CT_DIM4DI8_B1)
                         {
                             ATC_status = QObject::trUtf8("ATB模式");
                             ATC_invalid = 0;
                         }
                         if ( RIOM1CT_DIM4DI7_B1)
                         {
                             ATC_status = QObject::trUtf8("IATP模式");
                             ATC_invalid = 0;
                         }
                         if ( RIOM1CT_DIM4DI6_B1)
                         {
                             ATC_status = QObject::trUtf8("RM模式");
                             ATC_invalid = 0;
                         }
                         if ( RIOM1CT_DIM4DI5_B1)
                         {
                             ATC_status = QObject::trUtf8("ATP模式");
                             ATC_invalid = 0;
                         }

                         if ( RIOM1CT_DIM4DI4_B1)
                         {
                             ATC_status = QObject::trUtf8("ATO模式");
                             ATC_invalid = 0;
                         }
                         if ( RIOM1CT_DIM4DI3_B1)
                         {
                             ATC_status = QObject::trUtf8("ATC切除");
                             ATC_invalid = 0;
                         }

                   }

                   if(CTHM_RIOM6_DIM4_IsOnline_B1 &&CTHM_TC2Active_B1)
                   {
                         //如果以下6种状态都无效，这显示ATC无效
                         ATC_status = QObject::trUtf8("ATC无效");
                         ATC_invalid = 1;

                         if ( RIOM6CT_DIM4DI8_B1)
                         {
                             ATC_status = QObject::trUtf8("ATB模式");
                             ATC_invalid = 0;
                         }
                         if ( RIOM6CT_DIM4DI7_B1)
                         {
                             ATC_status = QObject::trUtf8("IATP模式");
                             ATC_invalid = 0;
                         }
                         if ( RIOM6CT_DIM4DI6_B1)
                         {
                             ATC_status = QObject::trUtf8("RM模式");
                             ATC_invalid = 0;
                         }
                         if ( RIOM6CT_DIM4DI5_B1)
                         {
                             ATC_status = QObject::trUtf8("ATP模式");
                             ATC_invalid = 0;
                         }

                         if ( RIOM6CT_DIM4DI4_B1)
                         {
                             ATC_status = QObject::trUtf8("ATO模式");
                             ATC_invalid = 0;
                         }
                         if ( RIOM6CT_DIM4DI3_B1)
                         {
                             ATC_status = QObject::trUtf8("ATC切除");
                             ATC_invalid = 0;
                         }
                 }
             }
             else
             {
                     ATC_status = QObject::trUtf8("ATC无效");
                     ATC_invalid = 1;
             }

    }
    else
    {
              ATC_status = QObject::trUtf8("ATC\n通信异常");
              ATC_invalid = 2;

    }

    SetATOModeLabelColor(ID_PIBCARS3_LABEL_ATOMODE, ATC_invalid);
    GetDlgItem(ID_PIBCARS3_LABEL_ATOMODE)->SetCtrlText(ATC_status);
}

void CCarStatus3Page::UpdateNETMode()
{

    int modecolor = 0;

    if (CTHM_CCU1On_B1|| CTHM_CCU2On_B1)
    {

        if ( RIOM1CT_DIM4DI2_B1||RIOM6CT_DIM4DI2_B1)
        {
            net_mode = QObject::trUtf8("紧急运行\n模式");
            modecolor = 1;
        }
        else
        {
            net_mode = QObject::trUtf8("网络模式");
            modecolor = 0;
        }
    }
    else
    {
        net_mode = QObject::trUtf8("MVB\n网络异常");
        modecolor = 2;
    }
    ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_NETMODE))->SetCtrlText(net_mode);
    SetNETModeLabelColor(ID_PIBCARS3_LABEL_NETMODE, modecolor);
}

void CCarStatus3Page::UpdateContravariant()
{
//    if (1 == Bit(currency_data6,14) )
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_CONTRAVARIANTMODE))->SetCtrlBKColor(Qt::green);
//
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_CONTRAVARIANTMODE))->HideLabel();
//
//    }
    ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_CONTRAVARIANTMODE))->HideLabel();
}

void CCarStatus3Page::UpdateTowMode()
{
//    if (Bit(CCU_HMI_222_9, 8 )|| Bit(CCU_HMI_222_9, 7 )== 1)
//    {

//        if ( (Bit( CCU_HMI_222_15, 9 ) ) == 1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_TOWMODE))->SetCtrlBKColor(Qt::green);
//        }
//        else
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_TOWMODE))->HideLabel();
//        }
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_TOWMODE))->HideLabel();

//    }

}

void CCarStatus3Page::UpdateWashCarMode()
{
//    if (1 == Bit(currency_data6,12) )
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);
//
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_WASHCARMODE))->HideLabel();
//
//    }
    if (Bit(DI_110_1,9)  ||Bit(DI_180_1,9) == 1)
    {

            if(Bit(DI_110_1,9))
            {
                if (1 == Bit( DI_110_2, 9 ) )
                {

                    ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);

                }
                else
                {
                      ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_WASHCARMODE))->HideLabel();
                }
            }
            if(Bit(DI_180_1,9))
            {
                if (1 == Bit( DI_180_2, 9 ) )
                {

                    ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_WASHCARMODE))->SetCtrlBKColor(Qt::green);

                }
                else
                {
                      ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_WASHCARMODE))->HideLabel();
                }
            }

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PIBCARS3_LABEL_WASHCARMODE))->HideLabel();
    }
}

//void CCarStatus3Page::UpdateEmergencyBroadcast()
//{
//    if (reserve_hide)
//    {
//        ((CButton *)GetDlgItem(IDLB_COM_BTN3))->ShowButton();
//
//    }
//    else
//    {
//        ((CButton *)GetDlgItem(IDLB_COM_BTN3))->HideButton();
//    }
//}

void CCarStatus3Page::SetNETModeLabelColor(int id, int colorVal)
{
//    ASSERT((colorVal >= 0) && (colorVal <= 1));
//    if (0 == colorVal)
//    {
//        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
//    }
//    else if (1 == colorVal)
//    {
//        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
//    }

//    return;
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


void CCarStatus3Page::SetATOModeLabelColor(int id,int colorVal)
{
//    ASSERT((colorVal >= 0) && (colorVal <= 1));
//    if (0 == colorVal)
//    {
//        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
//    }
//    else if (1 == colorVal)
//    {
//        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
//    }

//    return;
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


void CCarStatus3Page::SetLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 1));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
    }
    return;
}

//void CCarStatus3Page::OnEmergencyResuce()
//{
//    if (0 == EmergencyResuce)
//    {
//        EmergencyResuce = 1;
//        ((CButton*)GetDlgItem(ID_PIBCARS3_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_DOWN);
//    }
//    else
//    {
//        EmergencyResuce = 0;
//        ((CButton*)GetDlgItem(ID_PIBCARS3_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_UP);
//    }
//}

void CCarStatus3Page::OnRealTimeFaultsWarnningIconClk()
{
    if (0 == g_RealTimeFaultsNum)
    {
        return;
    }
    g_backtoprepage = true;
    SetFaultType(E_FAULTS_TYPE_REALTIME);
    ChangePage(PAGE_INDEX_REALTIMEFAULT);
}

