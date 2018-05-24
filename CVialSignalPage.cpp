#include "CVialSignalPage.h"

ROMDATA g_PicRom_VialSignal[] =
{
    D_COMMON_PAGE_HEADER(QObject::trUtf8("生命信号"))
    {"",                            D_FONT_BOLD(4),      QRect(60, 44, 720, 70),           Qt::black,                Qt::gray,                 CONTROL_TRAIN,          ID_PIBVSP_TRAIN               },
//    {"RIGHT",                       D_FONT_BOLD(6),      QRect(710, 75, 45,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBVIP_RIGHTARROW          },
//    {"LEFT",                        D_FONT_BOLD(6),      QRect(70,  75, 45,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBVIP_LEFTARROW           },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 120, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 150, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 180, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 210, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 240, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 270, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 300, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 330, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 360, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 390, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 420, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 450, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 480, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 510, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect( 5, 540, 775,   1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                       D_FONT_BOLD(6),      QRect( 5, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(60, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(180, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(300, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(420, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(540, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(660, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(600, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                       D_FONT_BOLD(6),      QRect(690, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                       D_FONT_BOLD(6),      QRect(780, 120,   1, 420),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QObject::trUtf8("CCU"),        D_FONT_BOLD(6),      QRect( 6, 121,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("IO-GW"),      D_FONT_BOLD(6),      QRect( 6, 151,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("BCU"),        D_FONT_BOLD(6),      QRect( 6, 181,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("DCU"),          D_FONT_BOLD(6),      QRect( 6, 211,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("DOOR"),            D_FONT_BOLD(6),      QRect( 6, 241,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("HVAC"),            D_FONT_BOLD(6),      QRect( 6, 271,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("PIS"),        D_FONT_BOLD(6),      QRect( 6, 301,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("RTU"),           D_FONT_BOLD(6),      QRect( 6, 331,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("ATC"),          D_FONT_BOLD(6),      QRect( 6, 361,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("ACU"),          D_FONT_BOLD(6),      QRect( 6, 391,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("HMI"),          D_FONT_BOLD(6),      QRect( 6, 421,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("REC"),          D_FONT_BOLD(6),      QRect( 6, 451,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("LAT"),          D_FONT_BOLD(6),      QRect( 6, 481,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("RLD"),          D_FONT_BOLD(6),      QRect( 6, 511,  53, 29),           Qt::white,                Qt::transparent,                CONTROL_LABEL,           ID_IGNORE        },

//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 61,121, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_CCU1            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 691,121, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_CCU2            },


    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(  61,121, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_CCU1            },
    {QObject::trUtf8("ERM1"),                   D_FONT_BOLD(6),      QRect( 181,121, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 301,121, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DCCU1            },
//    {QObject::trUtf8("- -"),                      D_FONT_BOLD(6),      QRect( 331,121, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QObject::trUtf8("- -"),                      D_FONT_BOLD(6),      QRect( 421,121, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("ERM2"),                   D_FONT_BOLD(6),      QRect( 421,121, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 541,121, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DCCU2            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 661,121, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_CCU2            },

    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 61,151, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVSP_LABEL_IO_GW11            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 151,151, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_IO_GW22            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 181,151, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_IO_GW33            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 301,151, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_IO_GW44            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 421,151, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_IO_GW55            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 541,151, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_IO_GW66            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 601,151, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_IO_GW77            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 661,151, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_IO_GW88            },

    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 61,181, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVSP_LABEL_BCU11            },
//    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 151,181, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 181,181, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 301,181, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_BCU44            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 421,181, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_BCU55            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 541,181, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 601,181, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 661,181, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_BCU88           },

    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 61,211, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_IGNORE            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 151,211, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_TCU22            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(181,211, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_TCU33            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 301,211, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_TCU44            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 421,211, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_TCU55            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 541,211, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_TCU66            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 601,211, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_TCU77            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 661,211, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },

    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 61,241, 115, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVSP_LABEL_DOORGWTOP1            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 151,241, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGWTOP2            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 181,241, 115, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGWTOP3            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 301,241, 115, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGWTOP4            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 421,241, 115, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGWTOP5            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 541,241, 115, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGWTOP6            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 601,241, 88, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGWTOP7            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 661,241, 115, 15),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGWTOP8            },

    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 61,256, 115, 14),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVSP_LABEL_DOORGW1            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 151,256, 88, 14),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGW2            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 181,256, 115, 14),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGW3            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 301,256, 115, 14),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGW4            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 421,256, 115, 14),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGW5            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 541,256, 115, 14),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGW6            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 601,256, 88, 14),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGW7            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(4),      QRect( 661,256, 115, 14),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_DOORGW8            },

    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 61,271, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVSP_LABEL_HVAC11            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 151,271, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_HVAC22            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 181,271, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_HVAC33            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 301,271, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_HVAC44            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 421,271, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_HVAC55            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 541,271, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_HVAC66            },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 601,271, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_HVAC77            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 661,271, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_HVAC88            },


    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 61,301, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVSP_LABEL_PA11            },
//    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 151,301, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 181,301, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 301,301, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 421,301, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 541,301, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 601,301, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 661,301, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_PA88            },

    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 61,331, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVSP_LABEL_FAS1            },
//    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 151,331, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 181,331, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 301,331, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 421,331, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 541,331, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 601,331, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 661,331, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_FAS8            },

    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 61,361, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVSP_LABEL_ATC10            },
//    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 151,361, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 181,361, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 301,361, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 421,361, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 541,361, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 601,361, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 661,361, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_ATC11            },

    {QObject::trUtf8(""),                      D_FONT_BOLD(3),      QRect( 61,391, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVSP_LABEL_ACU11            },
//    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 151,391, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 181,391, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 301,391, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 421,391, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 541,391, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 601,391, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(3),      QRect( 661,391, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_ACU88            },


    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 61, 421, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVSP_LABEL_HMI1            },
//    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 151,421, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 181,421, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 301,421, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 421,421, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 541,421, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 601,421, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 661,421, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_HMI2            },

{QObject::trUtf8(""),                      D_FONT_BOLD(3),      QRect( 61, 451, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVSP_LABEL_REC1            },
//    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 151,421, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
{QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 181,451, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
{QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 301,451, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
{QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 421,451, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
{QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 541,451, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
//    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 601,421, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
{QObject::trUtf8(""),                      D_FONT_BOLD(3),      QRect( 661,451, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_REC2            },

{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 61, 481, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVSP_LABEL_LAT1            },
//    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 151,421, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
{QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 181,481, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_LAT2            },
{QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 301,481, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_LAT3            },
{QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 421,481, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_LAT4            },
{QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 541,481, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_LAT5            },
//    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 601,421, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 661,481, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_LAT6            },

{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 61, 511, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,            ID_PIBVSP_LABEL_RLD1            },
//    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 151,421, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
{QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 181,511, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_RLD2            },
{QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 301,511, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_RLD3            },
{QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 421,511, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_RLD4            },
{QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 541,511, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_RLD5            },
//    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect( 601,421, 88, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE            },
{QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 661,511, 115, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBVSP_LABEL_RLD6            },

    D_COMMON_PAGE_BUTTON_BAR
};
int g_VialSignalRomLen = sizeof(g_PicRom_VialSignal)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CVialSignalPage,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(IDLB_COM_BTN1, OnComBtn1Clk)
        ON_BTNCLK(IDLB_COM_BTN2, OnComBtn2Clk)
        ON_BTNCLK(IDLB_COM_BTN3, OnComBtn3Clk)
        ON_BTNCLK(IDLB_COM_BTN4, OnComBtn4Clk)
        ON_BTNCLK(IDLB_COM_BTN5, OnComBtn5Clk)
        ON_BTNCLK(IDLB_COM_BTN6, OnComBtn6Clk)
END_MESSAGE_MAP()

CVialSignalPage::CVialSignalPage()
{
}

void CVialSignalPage::OnUpdatePage()
{
    UpdateVialSignal();
    updateTrain(ID_PIBVSP_TRAIN);

    //updateErrorLine(ID_PIBVSP_TRAIN);
   // updateArrow(ID_PIBVSP_LEFTARROW,ID_PIBVSP_RIGHTARROW);
}

void CVialSignalPage::OnInitPage()
{

}

void CVialSignalPage::OnShowPage()
{
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返  回"));
    this->InitPageHeader();
}

void CVialSignalPage::OnComBtn1Clk()
{
    ChangePage(PAGE_INDEX_DEBUGMAIN);
}

void CVialSignalPage::OnComBtn2Clk()
{

}

void CVialSignalPage::OnComBtn3Clk()
{

}

void CVialSignalPage::OnComBtn4Clk()
{

}

void CVialSignalPage::OnComBtn5Clk()
{

}

void CVialSignalPage::OnComBtn6Clk()
{

}

void CVialSignalPage::UpdateVialSignal()
{

//    QString door_gw1 = 0;
//    QString door_gw2 = 0;
//    QString door_gw3 = 0;
//    QString door_gw4 = 0;
//    QString door_gw5 = 0;
//    QString door_gw6 = 0;


    ACU_LifeSign1="ACU-GW:"+QString::number(AX1CT_GWLfSign_U8)+" ACU:"+QString::number(AX1CT_AcuLfSign_U16);
    ACU_LifeSign2="ACU-GW:"+QString::number(AX2CT_GWLfSign_U8)+" ACU:"+QString::number(AX2CT_AcuLfSign_U16);


     SetVSDataLabelString(ID_PIBVSP_LABEL_CCU1, CTALL_LifeSign_U16);

//    // lijian
    SetVSDataLabelString(ID_PIBVSP_LABEL_DCCU1, DT1CT_ERMLfSginal_U16);
    SetVSDataLabelString(ID_PIBVSP_LABEL_DCCU2, DT2CT_ERMLfSginal_U16);


    SetVSDataLabelString(ID_PIBVSP_LABEL_IO_GW11,GWCT_Tc1GWLifeSign1_U8 );
//    SetVSDataLabelString(ID_PIBVSP_LABEL_IO_GW22,DI_120_9%256 );
    SetVSDataLabelString(ID_PIBVSP_LABEL_IO_GW33,GWCT_RIOMMp1GWLfSign1_U8 );
    SetVSDataLabelString(ID_PIBVSP_LABEL_IO_GW44,GWCT_RIOMM1GWLfSign1_U8 );
    SetVSDataLabelString(ID_PIBVSP_LABEL_IO_GW55,GWCT_RIOMM2GWLfSign1_U8 );
    SetVSDataLabelString(ID_PIBVSP_LABEL_IO_GW66,GWCT_RIOMMp2GWLfSign1_U8 );
//    SetVSDataLabelString(ID_PIBVSP_LABEL_IO_GW77,DI_170_9%256 );
    SetVSDataLabelString(ID_PIBVSP_LABEL_IO_GW88,GWCT_Tc2GWLifeSign1_U8 );

    SetVSDataLabelString(ID_PIBVSP_LABEL_BCU11,BR1CT_LifeSgn_I16);
    SetVSDataLabelString(ID_PIBVSP_LABEL_BCU44,BR2CT_LifeSgn_I16);
    SetVSDataLabelString(ID_PIBVSP_LABEL_BCU55,BR3CT_LifeSgn_I16);
    SetVSDataLabelString(ID_PIBVSP_LABEL_BCU88,BR4CT_LifeSgn_I16);

    int DCU1,DCU2,DCU3,DCU4;
    if(TR1CT_DCUCheckAnswer_B1)
    {
        DCU1 = 1;
    }else
    {
        DCU1 = 0;
    }
    if(TR2CT_DCUCheckAnswer_B1)
    {
        DCU2 = 1;
    }else
    {
        DCU2 = 0;
    }
    if(TR3CT_DCUCheckAnswer_B1)
    {
        DCU3 = 1;
    }else
    {
        DCU3 = 0;
    }
    if(TR4CT_DCUCheckAnswer_B1)
    {
        DCU4 = 1;
    }else
    {
        DCU4 = 0;
    }

    TCU_LifeSign3="DCU-GW:"+QString::number(TR1CT_GWLfSign_U8)+"\nDCU:"+QString::number(DCU1);
    TCU_LifeSign4="DCU-GW:"+QString::number(TR2CT_GWLfSign_U8)+"\nDCU:"+QString::number(DCU2);
    TCU_LifeSign5="DCU-GW:"+QString::number(TR3CT_GWLfSign_U8)+"\nDCU:"+QString::number(DCU3);
    TCU_LifeSign6="DCU-GW:"+QString::number(TR4CT_GWLfSign_U8)+"\nDCU:"+QString::number(DCU4);

//    SetVSDataLabelString(ID_PIBVSP_LABEL_TCU22,TCU_510_1);
    SetVialSigLabelString(ID_PIBVSP_LABEL_TCU33,TCU_LifeSign3);
    SetVialSigLabelString(ID_PIBVSP_LABEL_TCU44,TCU_LifeSign4);
    SetVialSigLabelString(ID_PIBVSP_LABEL_TCU55,TCU_LifeSign5);
    SetVialSigLabelString(ID_PIBVSP_LABEL_TCU66,TCU_LifeSign6);
//    SetVSDataLabelString(ID_PIBVSP_LABEL_TCU77,TCU_560_1);


    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGWTOP1, DR1CT_LifeSign_U16);
    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGWTOP3, DR3CT_LifeSign_U16);
    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGWTOP4, DR5CT_LifeSign_U16);
    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGWTOP5, DR7CT_LifeSign_U16);
    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGWTOP6, DR9CT_LifeSign_U16);
    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGWTOP8, DR11CT_LifeSign_U16);

    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGW1, DR2CT_LifeSign_U16);
    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGW3, DR4CT_LifeSign_U16);
    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGW4, DR6CT_LifeSign_U16);
    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGW5, DR8CT_LifeSign_U16);
    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGW6, DR10CT_LifeSign_U16);
    SetVSDataLabelString(ID_PIBVSP_LABEL_DOORGW8, DR12CT_LifeSign_U16);

    SetVSDataLabelString(ID_PIBVSP_LABEL_HVAC11, AC1CT_LifeSgn_U16);
    SetVSDataLabelString(ID_PIBVSP_LABEL_HVAC33, AC2CT_LifeSgn_U16);
    SetVSDataLabelString(ID_PIBVSP_LABEL_HVAC44, AC3CT_LifeSgn_U16);
    SetVSDataLabelString(ID_PIBVSP_LABEL_HVAC55, AC4CT_LifeSgn_U16);
    SetVSDataLabelString(ID_PIBVSP_LABEL_HVAC66, AC5CT_LifeSgn_U16);
    SetVSDataLabelString(ID_PIBVSP_LABEL_HVAC88, AC6CT_LifeSgn_U16);

    SetVSDataLabelString(ID_PIBVSP_LABEL_PA11, PIS1CT_LifeSgn_U16);
    SetVSDataLabelString(ID_PIBVSP_LABEL_PA88, PIS2CT_LifeSgn_U16);

    SetVSDataLabelString(ID_PIBVSP_LABEL_FAS1, RT1CT_GWLfSign_U8);
    SetVSDataLabelString(ID_PIBVSP_LABEL_FAS8, RT2CT_GWLfSign_U8);

    SetVSDataLabelString(ID_PIBVSP_LABEL_ATC10, ATCT_LifeSgn_U16);
    //SetVSDataLabelString(ID_PIBVSP_LABEL_ATC11, g_dataBuffer_MVB[1600]);

    SetVialSigLabelString(ID_PIBVSP_LABEL_ACU11, ACU_LifeSign1);
    SetVialSigLabelString(ID_PIBVSP_LABEL_ACU88, ACU_LifeSign2);

    SetVialSigLabelString(ID_PIBVSP_LABEL_REC1, "REC-GW:"+QString::number(RE1CT_GWLfSign_U8)+" REC:"+QString::number(RE1CT_RECLfSign_U8));
    SetVialSigLabelString(ID_PIBVSP_LABEL_REC2, "REC-GW:"+QString::number(RE2CT_GWLfSign_U8)+" REC:"+QString::number(RE2CT_RECLfSign_U8));

    if(TC1_HMI == 1)
    {
        SetVSDataLabelString(ID_PIBVSP_LABEL_HMI1,HMI_HMCT_LifeSignal_U16 );
        SetVSDataLabelString(ID_PIBVSP_LABEL_HMI2,HM2CT_LifeSignal_U16);
    }else if(TC2_HMI == 1)
    {
        SetVSDataLabelString(ID_PIBVSP_LABEL_HMI1,HM1CT_LifeSignal_U16 );
        SetVSDataLabelString(ID_PIBVSP_LABEL_HMI2,HMI_HMCT_LifeSignal_U16);
    }else
    {
        SetVSDataLabelString(ID_PIBVSP_LABEL_HMI1,HMI_HMCT_LifeSignal_U16 );
        SetVSDataLabelString(ID_PIBVSP_LABEL_HMI2,HM2CT_LifeSignal_U16);
    }



    SetVSDataLabelString(ID_PIBVSP_LABEL_LAT1, GWCT_Tc1LAT_B1?1:0);
    SetVSDataLabelString(ID_PIBVSP_LABEL_LAT2, GWCT_RIOMMp1LAT_B1?1:0);
    SetVSDataLabelString(ID_PIBVSP_LABEL_LAT3, GWCT_RIOMM1LAT_B1?1:0);
    SetVSDataLabelString(ID_PIBVSP_LABEL_LAT4, GWCT_RIOMM2LAT_B1?1:0);
    SetVSDataLabelString(ID_PIBVSP_LABEL_LAT5, GWCT_RIOMMp2LAT_B1?1:0);
    SetVSDataLabelString(ID_PIBVSP_LABEL_LAT6, GWCT_Tc2LAT_B1?1:0);

    SetVSDataLabelString(ID_PIBVSP_LABEL_RLD1, GWCT_Tc1RLD_B1?1:0);
    SetVSDataLabelString(ID_PIBVSP_LABEL_RLD2, GWCT_RIOMMp1RLD_B1?1:0);
    SetVSDataLabelString(ID_PIBVSP_LABEL_RLD3, GWCT_RIOMM1RLD_B1?1:0);
    SetVSDataLabelString(ID_PIBVSP_LABEL_RLD4, GWCT_RIOMM2RLD_B1?1:0);
    SetVSDataLabelString(ID_PIBVSP_LABEL_RLD5, GWCT_RIOMMp2RLD_B1?1:0);
    SetVSDataLabelString(ID_PIBVSP_LABEL_RLD6, GWCT_Tc2RLD_B1?1:0);

//    // lijian
//    SetVialSigLabelString(ID_PIBVSP_LABEL_DCCU2, software_version1);

//    SetVSDataLabelString(ID_PIBVSP_LABEL_HMI2, run_status_data97);
//    SetVSDataLabelString(ID_PIBVSP_LABEL_GW2, comm_status_data78);
//    SetVSDataLabelString(ID_PIBVSP_LABEL_ATC20, comm_status_data73);
//    SetVSDataLabelString(ID_PIBVSP_LABEL_ATC21, comm_status_data74);


//    door_gw1 = StrFromInt(comm_status_data79/256, 2);
//    door_gw2 = StrFromInt(comm_status_data80/256, 2);
//    door_gw3 = StrFromInt(comm_status_data81/256, 2);
//    door_gw4 = StrFromInt(comm_status_data82/256, 2);
//    door_gw5 = StrFromInt(comm_status_data83/256, 2);
//    door_gw6 = StrFromInt(comm_status_data84/256, 2);



//    return;
}

void CVialSignalPage::SetVSDataLabelString(int id, int DataVal)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(DataVal));

    return;
}

void CVialSignalPage::SetVialSigLabelString(int id, QString StringVal)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(StringVal);

    return;
}
