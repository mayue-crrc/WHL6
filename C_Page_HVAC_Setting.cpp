 #include "C_Page_HVAC_Setting.h"
#include "c_page_hvac_heater.h"

ROMDATA g_PicRom_HVACSetting[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */

#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW_WH
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif
//    D_COMMON_PAGE_HEADER(QObject::trUtf8("空调设置"))


//    {"",                   D_FONT_BOLD(4),      QRect(178, 108, 600,  70),            Qt::black,                Qt::gray,                CONTROL_TRAIN,          ID_CHVACSET_TRAIN                         },
//    {"RIGHT",              D_FONT_BOLD(6),      QRect(700, 140,  45,  20),            Qt::white,                Qt::white,               CONTROL_ARROW,          ID_CHVACSET_ARROW_RIGHT                   },
//    {"LEFT",               D_FONT_BOLD(6),      QRect( 58, 140,  45,  20),            Qt::white,                Qt::white,               CONTROL_ARROW,          ID_CHVACSET_ARROW_LEFT                    },

    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("空调") )
    {"",                       D_FONT_BOLD(4),      QRect(100, 70, 600,  70),          Qt::black,                Qt::gray,                 CONTROL_TRAIN,           ID_CHVACSET_TRAIN                      },
    {"RIGHT",                  D_FONT_BOLD(6),      QRect(715, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_CHVACSET_ARROW_RIGHT                },
    {"LEFT",                   D_FONT_BOLD(6),      QRect( 40, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_CHVACSET_ARROW_LEFT                 },

    {"",                   D_FONT_BOLD(6),      QRect( 10, 180-30, 690,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 10, 210-30, 690,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 10, 240-30, 690,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 10, 270-30, 690,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 10, 300-30, 690,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 10, 330-30, 690,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 10, 360-30, 690,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 10, 390-30, 690,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 10, 420-30, 690,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect( 10, 450-30, 690,   1),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },

    {"",                   D_FONT_BOLD(6),      QRect( 10, 180-30,   1, 270),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(100, 180-30,   1, 270),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(200, 180-30,   1, 270),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(300, 180-30,   1, 270),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(400, 180-30,   1, 270),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(500, 180-30,   1, 270),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(600, 180-30,   1, 270),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
//    {"",                   D_FONT_BOLD(6),      QRect(550, 180-30,   1, 279),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
//    {"",                   D_FONT_BOLD(6),      QRect(625, 180-30,   1, 279),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },
    {"",                   D_FONT_BOLD(6),      QRect(700-1, 180-30,   1, 270),            Qt::white,                Qt::black,               CONTROL_LINE,           ID_IGNORE         },

   // {QObject::trUtf8("自动制冷"),       D_FONT_BOLD(8),      QRect(10,  480, 180,  60),            Qt::white,                Qt::black,               CONTROL_LABEL,          ID_CHVACSET_LABEL_DEBUG                },


    //{QObject::trUtf8("自动制冷"),       D_FONT_BOLD(8),      QRect(130,  435, 115,  30),            Qt::white,                Qt::black,               CONTROL_LABEL,          ID_CHVACSET_LABEL_RUNMODEL                },

    //{QObject::trUtf8("设置温度"),      D_FONT_BOLD(8),      QRect(250,  435,  80,  30),             Qt::white,                Qt::black,              CONTROL_LABEL,           ID_IGNORE         },
    //    {QObject::trUtf8("强   冷"),      D_FONT_BOLD(8),      QRect( 212, 455+21, 85,  33),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_STRONGCOLD             },
    //    {QObject::trUtf8("弱   冷"),      D_FONT_BOLD(8),      QRect( 309, 455+21, 85,  33),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_WEAKCOLD               },
    //    {QObject::trUtf8("自动制冷"),      D_FONT_BOLD(8),      QRect( 406, 455+21, 85,  33),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_AUTOCOLD               },

    //   {QObject::trUtf8("紧急通风\n停止"),  D_FONT_BOLD(6),      QRect( 697, 455+8, 85,  38),            Qt::black,                Qt::green,               CONTROL_LABEL,          ID_CHVACSET_LABEL_EmergencyModeStatus             },
   //   {QObject::trUtf8("全   暖"),      D_FONT_BOLD(8),      QRect( 155, 500, 100,  40),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_FULLWARM               },


//    {QObject::trUtf8("全   暖"),      D_FONT_BOLD(8),      QRect( 212, 500+14, 85,  33),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_FULLWARM             },
//    {QObject::trUtf8("半   暖"),   D_FONT_BOLD(8),         QRect( 309, 500+14, 85,  33),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_HALFWARM               },
//    {QObject::trUtf8("自动制暖"),   D_FONT_BOLD(8),         QRect( 406, 500+14, 85,  33),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_AUTOWARM               },
    //    {QObject::trUtf8("停   止"),      D_FONT_BOLD(8),      QRect( 600, 500+14, 85,  33),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_STOP                   },


    {QObject::trUtf8("-2"),                D_FONT_BOLD(8),      QRect( 20,  427,   40,  30),            Qt::black,                Qt::white,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_TEMPDOWN2               },
    {QObject::trUtf8("+2"),                D_FONT_BOLD(8),      QRect( 20,  467,   40,  30),            Qt::black,                Qt::white,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_TEMPUP2                 },
    {QObject::trUtf8("-1"),                D_FONT_BOLD(8),      QRect( 80,  427,   40,  30),            Qt::black,                Qt::white,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_TEMPDOWN               },
    {QObject::trUtf8("+1"),                D_FONT_BOLD(8),      QRect( 80,  467,   40,  30),            Qt::black,                Qt::white,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_TEMPUP                 },
    {QObject::trUtf8("确   定"),      D_FONT_BOLD(8),      QRect( 640,  437, 100,  30),            Qt::black,                Qt::white,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_CONFIRM                },
    {QObject::trUtf8("紧急通风"),      D_FONT_BOLD(8),      QRect( 508, 427, 85,  30),            Qt::black,                Qt::white,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_AMERGEWIND                   },
    {QObject::trUtf8("通   风"),      D_FONT_BOLD(8),      QRect( 508, 467, 85,  30),            Qt::black,                Qt::white,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_WIND                   },
    {QObject::trUtf8("火灾模式"),      D_FONT_BOLD(8),      QRect( 280, 427, 85,  30),            Qt::black,                Qt::white,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_FireMC                   },
    {QObject::trUtf8("测试模式"),      D_FONT_BOLD(8),      QRect( 408, 467, 85,  30),            Qt::black,                Qt::white,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_Test                   },

    {QObject::trUtf8("UIC\n模式"),      D_FONT_BOLD(8),      QRect( 150, 437, 50,  50),            Qt::black,                Qt::white,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_UIC                   },
    {QObject::trUtf8("自动模式"),      D_FONT_BOLD(8),      QRect( 408, 427, 85,  30),            Qt::black,                Qt::white,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_AUTO                   },

    {QObject::trUtf8("预冷停止"),      D_FONT_BOLD(8),      QRect( 280, 467, 85,  30),            Qt::black,                Qt::white,               CONTROL_BUTTON,          ID_CHVACSET_BUTTON_PCOff                   },

    {QObject::trUtf8("全车"),         D_FONT_BOLD(6),      QRect( 13, 182-30,  84,  27),             Qt::white,                Qt::gray,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR                     },
    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(103, 182-30,  96,  27),             Qt::white,                Qt::gray,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1                    },
//    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(178, 182-30,  70,  27),             Qt::white,                Qt::gray,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2                    },
    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(203, 182-30,  96,  27),             Qt::white,                Qt::gray,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3                    },
    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(303, 182-30,  96,  27),             Qt::white,                Qt::gray,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4                    },
    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(403, 182-30,  96,  27),             Qt::white,                Qt::gray,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5                    },
    {QObject::trUtf8("5"),           D_FONT_BOLD(6),      QRect(503, 182-30,  96,  27),             Qt::white,                Qt::gray,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6                    },
//    {QObject::trUtf8("7"),           D_FONT_BOLD(6),      QRect(553, 182-30,  70,  27),             Qt::white,                Qt::gray,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7                    },
    {QObject::trUtf8("6"),           D_FONT_BOLD(6),      QRect(603, 182-30,  96,  27),             Qt::white,                Qt::gray,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8                    },


    {QObject::trUtf8("控制模式"),      D_FONT_BOLD(6),      QRect( 13, 212-30 ,  86,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("自动制冷"),            D_FONT_BOLD(4), QRect(103, 212-30 ,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CONTROLMODELCAR1      },
    {QObject::trUtf8("自动制冷"),            D_FONT_BOLD(4), QRect(203, 212-30 ,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CONTROLMODELCAR2      },
    {QObject::trUtf8("自动制冷"),            D_FONT_BOLD(4), QRect(303, 212-30 ,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CONTROLMODELCAR3      },
    {QObject::trUtf8("自动制冷"),            D_FONT_BOLD(4), QRect(403, 212-30 ,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CONTROLMODELCAR4      },
    {QObject::trUtf8("自动制冷"),            D_FONT_BOLD(4), QRect(503, 212-30 ,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CONTROLMODELCAR5      },
    {QObject::trUtf8("自动制冷"),            D_FONT_BOLD(4), QRect(603, 212-30 ,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CONTROLMODELCAR6      },



    {QObject::trUtf8("运行模式"),      D_FONT_BOLD(6),      QRect( 13, 242-30 ,  86,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8(""),            D_FONT_BOLD(6),      QRect(103, 242-30 ,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1RUNMODEL      },
    {QObject::trUtf8(""),            D_FONT_BOLD(6),      QRect(203, 242-30 ,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2RUNMODEL      },
    {QObject::trUtf8(""),            D_FONT_BOLD(6),      QRect(303, 242-30 ,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3RUNMODEL      },
    {QObject::trUtf8(""),            D_FONT_BOLD(6),      QRect(403, 242-30 ,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4RUNMODEL      },
    {QObject::trUtf8(""),            D_FONT_BOLD(6),      QRect(503, 242-30 ,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5RUNMODEL      },
    {QObject::trUtf8(""),            D_FONT_BOLD(6),      QRect(603, 242-30 ,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6RUNMODEL      },

    {QObject::trUtf8("设置温度"),      D_FONT_BOLD(6),      QRect( 13, 272-30,  84,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("23 ℃"),            D_FONT_BOLD(6),      QRect(103, 272-30,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_SETTEMPERATURECAR1     },
    {QObject::trUtf8("23 ℃"),            D_FONT_BOLD(6),      QRect(203, 272-30,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_SETTEMPERATURECAR2     },
    {QObject::trUtf8("23 ℃"),            D_FONT_BOLD(6),      QRect(303, 272-30,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_SETTEMPERATURECAR3     },
    {QObject::trUtf8("23 ℃"),            D_FONT_BOLD(6),      QRect(403, 272-30,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_SETTEMPERATURECAR4     },
    {QObject::trUtf8("23 ℃"),            D_FONT_BOLD(6),      QRect(503, 272-30,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_SETTEMPERATURECAR5     },
    {QObject::trUtf8("23 ℃"),            D_FONT_BOLD(6),      QRect(603, 272-30,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_SETTEMPERATURECAR6     },

    {QObject::trUtf8("车内(外)温度"),      D_FONT_BOLD(4),      QRect( 13, 302-30,  84,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("25 ℃"),            D_FONT_BOLD(6),      QRect(103, 302-30,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_TEMPERATURECAR1        },
    {QObject::trUtf8("25 ℃"),            D_FONT_BOLD(6),      QRect(203, 302-30,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_TEMPERATURECAR2        },
    {QObject::trUtf8("25 ℃"),            D_FONT_BOLD(6),      QRect(303, 302-30,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_TEMPERATURECAR3        },
    {QObject::trUtf8("25 ℃"),            D_FONT_BOLD(6),      QRect(403, 302-30,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_TEMPERATURECAR4        },
    {QObject::trUtf8("25 ℃"),            D_FONT_BOLD(6),      QRect(503, 302-30,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_TEMPERATURECAR5        },
    {QObject::trUtf8("25 ℃"),            D_FONT_BOLD(6),      QRect(603, 302-30,  96,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_TEMPERATURECAR6        },

    {QObject::trUtf8("压缩机"),       D_FONT_BOLD(6),      QRect( 13, 332-30,  86,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(103, 334-30,  23,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1COMPRESS1          },
    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(127, 334-30,  23,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1COMPRESS2          },
    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(151, 334-30,  23,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1COMPRESS3          },
    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(175, 334-30,  23,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1COMPRESS4          },

    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(203, 334-30,  23,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2COMPRESS1          },
    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(227, 334-30,  23,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2COMPRESS2          },
    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(251, 334-30,  23,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2COMPRESS3          },
    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(275, 334-30,  23,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2COMPRESS4          },

    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(303, 334-30,  23,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3COMPRESS1          },
    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(327, 334-30,  23,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3COMPRESS2          },
    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(351, 334-30,  23,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3COMPRESS3          },
    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(375, 334-30,  23,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3COMPRESS4          },

    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(403, 334-30,  23,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4COMPRESS1          },
    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(427, 334-30,  23,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4COMPRESS2          },
    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(451, 334-30,  23,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4COMPRESS3          },
    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(475, 334-30,  23,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4COMPRESS4          },

    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(503, 334-30,  23,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5COMPRESS1          },
    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(527, 334-30,  23,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5COMPRESS2          },
    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(551, 334-30,  23,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5COMPRESS3          },
    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(575, 334-30,  23,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5COMPRESS4          },

    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(603, 334-30,  23,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6COMPRESS1          },
    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(627, 334-30,  23,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6COMPRESS2          },
    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(651, 334-30,  23,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6COMPRESS3          },
    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(675, 334-30,  23,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6COMPRESS4          },

//    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(553, 274-30,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7COMPRESS1          },
//    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(571, 274-30,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7COMPRESS2          },
//    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(589, 274-30,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7COMPRESS3          },
//    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(607, 274-30,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7COMPRESS4          },
//    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(628, 274-30,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8COMPRESS4          },
//    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(646, 274-30,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8COMPRESS3          },
//    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(664, 274-30,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8COMPRESS2          },
//    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(682, 274-30,  17,  22),             Qt::black,                Qt::green,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8COMPRESS1          },
    {QObject::trUtf8("冷凝机"),       D_FONT_BOLD(6),      QRect( 13, 362-30,  86,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(103, 364-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1COLD1             },
    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(127, 364-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1COLD2             },
    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(151, 364-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1COLD3             },
    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(175, 364-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1COLD4             },

    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(203, 364-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2COLD1             },
    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(227, 364-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2COLD2             },
    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(251, 364-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2COLD3             },
    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(275, 364-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2COLD4             },

    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(303, 364-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3COLD1             },
    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(327, 364-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3COLD2             },
    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(351, 364-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3COLD3             },
    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(375, 364-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3COLD4             },

    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(403, 364-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4COLD1             },
    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(427, 364-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4COLD2             },
    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(451, 364-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4COLD3             },
    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(475, 364-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4COLD4             },

    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(503, 364-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5COLD1             },
    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(527, 364-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5COLD2             },
    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(551, 364-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5COLD3             },
    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(575, 364-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5COLD4             },

    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(603, 364-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6COLD1             },
    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(627, 364-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6COLD2             },
    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(651, 364-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6COLD3             },
    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(675, 364-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6COLD4             },

//    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(553, 304-30,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7COLD1             },
//    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(571, 304-30,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7COLD2             },
//    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(589, 304-30,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7COLD3             },
//    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(607, 304-30,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7COLD4             },
//    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(628, 304-30,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8COLD4             },
//    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(646, 304-30,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8COLD3             },
//    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(664, 304-30,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8COLD2             },
//    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(682, 304-30,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8COLD1             },

    {QObject::trUtf8("通风机"),       D_FONT_BOLD(6),      QRect( 13, 392-30,  86,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(103, 394-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1WIND1             },
    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(127, 394-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1WIND2             },
    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(151, 394-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1WIND3             },
    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(175, 394-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1WIND4             },

    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(203, 394-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2WIND1             },
    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(227, 394-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2WIND2             },
    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(251, 394-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2WIND3             },
    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(275, 394-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2WIND4             },

    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(303, 394-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3WIND1             },
    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(327, 394-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3WIND2             },
    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(351, 394-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3WIND3             },
    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(375, 394-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3WIND4             },

    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(403, 394-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4WIND1             },
    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(427, 394-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4WIND2             },
    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(451, 394-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4WIND3             },
    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(475, 394-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4WIND4             },

    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(503, 394-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5WIND1             },
    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(527, 394-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5WIND2             },
    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(551, 394-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5WIND3             },
    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(575, 394-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5WIND4             },

    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(603, 394-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6WIND1             },
    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(627, 394-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6WIND2             },
    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(651, 394-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6WIND3             },
    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(675, 394-30,  23,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6WIND4             },



{QObject::trUtf8("客室加热"),       D_FONT_BOLD(6),      QRect( 13, 422-30,  86,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
{QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(103, 424-30,  47,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1HEAT1             },
{QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(151, 424-30,  47,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1HEAT3             },

{QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(203, 424-30,  47,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2HEAT1             },
{QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(251, 424-30,  47,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2HEAT3             },

{QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(303, 424-30,  47,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3HEAT1             },
{QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(351, 424-30,  47,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3HEAT3             },

{QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(403, 424-30,  47,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4HEAT1             },
{QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(451, 424-30,  47,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4HEAT3             },

{QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(503, 424-30,  47,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5HEAT1             },
{QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(551, 424-30,  47,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5HEAT3             },

{QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(603, 424-30,  47,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6HEAT1             },
{QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(651, 424-30,  47,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6HEAT3             },



//    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(553, 334-30,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7WIND1             },
//    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(571, 334-30,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7WIND2             },
//    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(589, 334-30,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7WIND3             },
//    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(607, 334-30,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7WIND4             },
//    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(628, 334-30,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8WIND4             },
//    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(646, 334-30,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8WIND3             },
//    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(664, 334-30,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8WIND2             },
//    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(682, 334-30,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8WIND1             },

//    {QObject::trUtf8("电热"),         D_FONT_BOLD(6),      QRect( 13, 392-30,  86,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(104, 394-30,  45,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1LIGHTEM1          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(153, 394-30,  45,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1LIGHTEM2          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(178, 394-30,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2LIGHTEM1          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(214, 394-30,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2LIGHTEM2          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(204, 394-30,  45,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3LIGHTEM1          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(253, 394-30,  45,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3LIGHTEM2          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(304, 394-30,  45,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4LIGHTEM1          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(353, 394-30,  45,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4LIGHTEM2          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(404, 394-30,  45,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5LIGHTEM1          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(453, 394-30,  45,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5LIGHTEM2          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(504, 394-30,  45,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6LIGHTEM1          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(553, 394-30,  45,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6LIGHTEM2          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(553, 394-30,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7LIGHTEM1          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(589, 394-30,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7LIGHTEM2          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(604, 394-30,  45,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8LIGHTEM2          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(653, 394-30,  45,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8LIGHTEM1          },


//    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(103, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1LIGHTEM1          },
//    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(121, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1LIGHTEM2          },
//    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(139, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1LIGHTEM3          },
//    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(157, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1LIGHTEM4          },
//    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(178, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2LIGHTEM1          },
//    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(196, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2LIGHTEM2          },
//    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(214, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2LIGHTEM3          },
//    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(232, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2LIGHTEM4          },
//    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(253, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3LIGHTEM1          },
//    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(271, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3LIGHTEM2          },
//    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(289, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3LIGHTEM3          },
//    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(307, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3LIGHTEM4          },
//    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(328, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4LIGHTEM1          },
//    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(346, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4LIGHTEM2          },
//    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(364, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4LIGHTEM3          },
//    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(382, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4LIGHTEM4          },
//    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(403, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5LIGHTEM1          },
//    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(421, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5LIGHTEM2          },
//    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(439, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5LIGHTEM3          },
//    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(457, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5LIGHTEM4          },
//    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(478, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6LIGHTEM1          },
//    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(496, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6LIGHTEM2          },
//    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(514, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6LIGHTEM3          },
//    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(532, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6LIGHTEM4          },
//    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(553, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7LIGHTEM1          },
//    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(571, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7LIGHTEM2          },
//    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(589, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7LIGHTEM3          },
//    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(607, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7LIGHTEM4          },
//    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(628, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8LIGHTEM1          },
//    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(646, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8LIGHTEM2          },
//    {QObject::trUtf8("2"),           D_FONT_BOLD(6),      QRect(664, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8LIGHTEM3          },
//    {QObject::trUtf8("1"),           D_FONT_BOLD(6),      QRect(682, 394,  17,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8LIGHTEM4          },

//    {QObject::trUtf8("新风阀"),       D_FONT_BOLD(6),      QRect( 13, 362-30 ,  86,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(104, 364-30 ,  45,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1NEWWIND1          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(153, 364-30 ,  45,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1NEWWIND2          },
//    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(139, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1LIGHTEM3          },
//    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(157, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1LIGHTEM4          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(203, 364-30 ,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2NEWWIND1          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(214, 364-30 ,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2NEWWIND2          },
//    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(214, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2LIGHTEM3          },
//    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(232, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2LIGHTEM4          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(204, 364-30 ,  45,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3NEWWIND1          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(253, 364-30 ,  45,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3NEWWIND2          },
//    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(289, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3LIGHTEM3          },
//    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(307, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3LIGHTEM4          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(304, 364-30 ,  45,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4NEWWIND1          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(353, 364-30 ,  45,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4NEWWIND2          },
//    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(364, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4LIGHTEM3          },
//    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(382, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4LIGHTEM4          },
//    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(403, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5LIGHTEM1          },
//    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(421, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5LIGHTEM2          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(404, 364-30 ,  45,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5NEWWIND1          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(453, 364-30 ,  45,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5NEWWIND2          },
//    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(478, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6LIGHTEM1          },
//    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(496, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6LIGHTEM2          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(504, 364-30 ,  45,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6NEWWIND1          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(553, 364-30 ,  45,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6NEWWIND2          },
//    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(553, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7LIGHTEM1          },
//    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(571, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7LIGHTEM2          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(553, 364-30 ,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7NEWWIND1          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(589, 364-30 ,  34,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7NEWWIND2          },
//    {QObject::trUtf8("4"),           D_FONT_BOLD(6),      QRect(628, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8LIGHTEM1          },
//    {QObject::trUtf8("3"),           D_FONT_BOLD(6),      QRect(646, 364 ,  17,  22),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8LIGHTEM2          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(604, 364-30 ,  45,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8NEWWIND2          },
//    {QObject::trUtf8(""),           D_FONT_BOLD(6),      QRect(653, 364-30 ,  45,  22),             Qt::black,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8NEWWIND1          },

//    {QObject::trUtf8("运行模式"),      D_FONT_BOLD(6),      QRect( 13, 392 ,  86,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_IGNORE         },
//    {QObject::trUtf8("通  风"),            D_FONT_BOLD(6),      QRect(103, 392 ,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR1RUNMODEL      },
//    {QObject::trUtf8("通  风"),            D_FONT_BOLD(6),      QRect(178, 392 ,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR2RUNMODEL      },
//    {QObject::trUtf8("通  风"),            D_FONT_BOLD(6),      QRect(253, 392 ,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR3RUNMODEL      },
//    {QObject::trUtf8("通  风"),            D_FONT_BOLD(6),      QRect(328, 392 ,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR4RUNMODEL      },
//    {QObject::trUtf8("通  风"),            D_FONT_BOLD(6),      QRect(403, 392 ,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR5RUNMODEL      },
//    {QObject::trUtf8("通  风"),            D_FONT_BOLD(6),      QRect(478, 392 ,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR6RUNMODEL      },
//    {QObject::trUtf8("通  风"),            D_FONT_BOLD(6),      QRect(553, 392 ,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR7RUNMODEL      },
//    {QObject::trUtf8("通  风"),            D_FONT_BOLD(6),      QRect(628, 392 ,  70,  27),             Qt::white,                Qt::black,                CONTROL_LABEL,          ID_CHVACSET_LABEL_CAR8RUNMODEL      },





};
int g_HVACSettingRomLen = sizeof(g_PicRom_HVACSetting)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CHVACSettingPage,CPage)
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



        ON_BTNCLK(ID_CHVACSET_BUTTON_PCOff, OnPCOffClk)
        ON_BTNCLK(ID_CHVACSET_BUTTON_FireMC, OnfireMCClk)
        ON_BTNCLK(ID_CHVACSET_BUTTON_Test, OntestmodeClk)
        ON_BTNCLK(ID_CHVACSET_BUTTON_UIC, OnUICmodeClk)
        ON_BTNCLK(ID_CHVACSET_BUTTON_AUTO, OnAutoModeClk)

        ON_BTNCLK(ID_CHVACSET_BUTTON_AMERGEWIND, OnAMERGEWINDClk)
        ON_BTNCLK(ID_CHVACSET_BUTTON_WIND, OnWINDClk)
        ON_LBUTTONDOWN(ID_CHVACSET_BUTTON_TEMPDOWN, OnThempDownClk)
        ON_LBUTTONDOWN(ID_CHVACSET_BUTTON_TEMPUP, OnThempUpClk)
        ON_LBUTTONDOWN(ID_CHVACSET_BUTTON_TEMPDOWN2, OnThempDown2Clk)
        ON_LBUTTONDOWN(ID_CHVACSET_BUTTON_TEMPUP2, OnThempUp2Clk)

        ON_BTNCLK(ID_CHVACSET_LABEL_CAR,OnCarClk);
        ON_BTNCLK(ID_CHVACSET_LABEL_CAR1,OnCar1Clk);
//        ON_BTNCLK(ID_CHVACSET_LABEL_CAR2,OnCar2Clk);
        ON_BTNCLK(ID_CHVACSET_LABEL_CAR3,OnCar3Clk);
        ON_BTNCLK(ID_CHVACSET_LABEL_CAR4,OnCar4Clk);
        ON_BTNCLK(ID_CHVACSET_LABEL_CAR5,OnCar5Clk);
        ON_BTNCLK(ID_CHVACSET_LABEL_CAR6,OnCar6Clk);
//        ON_BTNCLK(ID_CHVACSET_LABEL_CAR7,OnCar7Clk);
        ON_BTNCLK(ID_CHVACSET_LABEL_CAR8,OnCar8Clk);
        ON_BTNCLK(ID_LABEL_REALTIMEFAULTCONFIRM, OnRealtimefaultBtnClk)
END_MESSAGE_MAP()

CHVACSettingPage::CHVACSettingPage()
{
        m_bpreAutoTempV = false;  //预留暂时没有使用
        m_bAutoTempV = false;   //只有自动制冷，自动制暖模式下 才可以设置温度
        m_bBtnPress=false;     //是否有按钮按下，如果有按钮按下则必须等按钮弹起后才可以点击其它按钮


        for(int i = 0; i < 6 ; i++)
        {
            m_PCOffSAVEflag[i] = false;
            m_FireSAVEflag[i]  = false;
            m_ModeSAVEflag[i]  = false;
        }
        m_UICTemFlag = false;
}

void CHVACSettingPage::OnUpdatePage()
{
/*
    ((CButton*)GetDlgItem(ID_CHVACSET_LABEL_DEBUG))->SetCtrlText(QString::number(m_bAutoTempV)
                                                                 +QString::number(m_bBtnPress)
                                                                 +QString::number(HVAC_command_hide)
                                                                 +QString::number(HVAC_button_color)
                                                                 +QString::number(HVAC_mode_se1ect)
                                                                 +QString::number(m_PressBtnID)
                                                                 +QString::number(HVAC_valid_timer)
                                                                 );
*/
  updateTrain(ID_CHVACSET_TRAIN);
    updateArrow(ID_CHVACSET_ARROW_LEFT,ID_CHVACSET_ARROW_RIGHT);

    //updateErrorLine(ID_CHVACSET_TRAIN);
    UpdateCarTem();
    UpdateIndoorCarTem();

    UpdateHMIActive();
    UpdateHVAC_mode();
    //UpdateHVAC_RUNmode();
    UpdateHVACState();
    UpdateHVAC_Compressor();
    UpdateHVAC_Condenser();
    UpdateHVAC_EvaporatorFan();
    UpdateHVAC_HotElectricity();
    UpdateHVAC_NewWind();
    updateTempV();
    UpdateEmergencyMode();

    if (m_bBtnPress==false)
    {
        //空调模式设置按钮只有在司机室钥匙激活侧司机室才可以按下
        updateCtrl();
    }


    HMiCT_SAVEHVACMode1_B1 = (m_ModeSAVEflag[0])||m_PCOffSAVEflag[0]||m_FireSAVEflag[0];
    HMiCT_SAVEHVACMode2_B1 = (m_ModeSAVEflag[1])||m_PCOffSAVEflag[1]||m_FireSAVEflag[1];
    HMiCT_SAVEHVACMode3_B1 = (m_ModeSAVEflag[2])||m_PCOffSAVEflag[2]||m_FireSAVEflag[2];
    HMiCT_SAVEHVACMode4_B1 = (m_ModeSAVEflag[3])||m_PCOffSAVEflag[3]||m_FireSAVEflag[3];
    HMiCT_SAVEHVACMode5_B1 = (m_ModeSAVEflag[4])||m_PCOffSAVEflag[4]||m_FireSAVEflag[4];
    HMiCT_SAVEHVACMode6_B1 = (m_ModeSAVEflag[5])||m_PCOffSAVEflag[5]||m_FireSAVEflag[5];
    if(bool(bool(HMiCT_SAVEHVACMode1_B1)||bool(HMiCT_SAVEHVACMode2_B1)||bool(HMiCT_SAVEHVACMode3_B1)||
       bool(HMiCT_SAVEHVACMode4_B1)||bool(HMiCT_SAVEHVACMode5_B1)||bool(HMiCT_SAVEHVACMode6_B1)||bool(m_UICTemFlag)))
    {
        //HMiCT_SetFlagChecker_U8 = 0xaa;
    }else
    {
        //HMiCT_SetFlagChecker_U8 = 0x55;
    }
    UpdateRealtimefaults();
}

void CHVACSettingPage::OnInitPage()
{

  // TC1_HMI = 1;
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COMPRESS1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COMPRESS2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COMPRESS3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COMPRESS4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COMPRESS1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COMPRESS2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COMPRESS3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COMPRESS4))->SetBorderColor(Qt::white);

//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COMPRESS1))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COMPRESS2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COMPRESS3))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COMPRESS4))->SetBorderColor(Qt::white);

//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COMPRESS1))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COMPRESS2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COMPRESS3))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COMPRESS4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COLD1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COLD2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COLD3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COLD4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COLD1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COLD2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COLD3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COLD4))->SetBorderColor(Qt::white);

//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COLD1))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COLD2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COLD3))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7COLD4))->SetBorderColor(Qt::white);

//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COLD1))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COLD2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COLD3))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8COLD4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5WIND1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5WIND2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5WIND3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5WIND4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6WIND1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6WIND2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6WIND3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6WIND4))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1HEAT1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1HEAT3))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2HEAT1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2HEAT3))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3HEAT1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3HEAT3))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4HEAT1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4HEAT3))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5HEAT1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5HEAT3))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6HEAT1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6HEAT3))->SetBorderColor(Qt::white);

//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7WIND1))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7WIND2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7WIND3))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7WIND4))->SetBorderColor(Qt::white);

//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8WIND1))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8WIND2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8WIND3))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8WIND4))->SetBorderColor(Qt::white);

//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1LIGHTEM1))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1LIGHTEM2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1LIGHTEM3))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1LIGHTEM4))->SetBorderColor(Qt::white);

//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2LIGHTEM1))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2LIGHTEM2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2LIGHTEM3))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2LIGHTEM4))->SetBorderColor(Qt::white);

//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3LIGHTEM1))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3LIGHTEM2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3LIGHTEM3))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3LIGHTEM4))->SetBorderColor(Qt::white);

//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4LIGHTEM1))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4LIGHTEM2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4LIGHTEM3))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4LIGHTEM4))->SetBorderColor(Qt::white);

//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5LIGHTEM1))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5LIGHTEM2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5LIGHTEM3))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5LIGHTEM4))->SetBorderColor(Qt::white);

//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6LIGHTEM1))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6LIGHTEM2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6LIGHTEM3))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6LIGHTEM4))->SetBorderColor(Qt::white);

//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7LIGHTEM1))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7LIGHTEM2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7LIGHTEM3))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7LIGHTEM4))->SetBorderColor(Qt::white);

//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8LIGHTEM1))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8LIGHTEM2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8LIGHTEM3))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8LIGHTEM4))->SetBorderColor(Qt::white);

//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND1))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND1))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND1))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND1))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND1))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND1))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND1))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND2))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND1))->SetBorderColor(Qt::white);
//    ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND2))->SetBorderColor(Qt::white);

    //((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_RUNMODEL))->SetBorderColor(Qt::white);
    //((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_TEMPV))->SetBorderColor(Qt::white);


    //初始化 空调模式设置按钮和温度设定确定按钮设置为不可按，不自动弹起
//    int nIDArray[] =
//    {
//      ID_CHVACSET_BUTTON_STRONGCOLD,
//      ID_CHVACSET_BUTTON_WEAKCOLD,
//      ID_CHVACSET_BUTTON_AUTOCOLD,
//      ID_CHVACSET_BUTTON_AMERGEWIND,
//      ID_CHVACSET_BUTTON_FULLWARM,
//      ID_CHVACSET_BUTTON_HALFWARM,
//      ID_CHVACSET_BUTTON_AUTOWARM,
//     ID_CHVACSET_BUTTON_WIND,
//      ID_CHVACSET_BUTTON_CONFIRM,
////      ID_CHVACSET_BUTTON_STOP,
//    };
//    for (int i = 0; i < 3; i++)
//    {
//        ((CButton*)GetDlgItem(nIDArray[i]))->m_bAutoUpState = false;
//        ((CButton*)GetDlgItem(nIDArray[i]))->SetCtrlEnable(false);
//    }
    //温度增加和减少按钮初始化设置为不可按，自动暖，自动冷模式下按钮才可以按

    ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_AUTO))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_Test))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_FireMC))->m_bAutoUpState = false;

    ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_AMERGEWIND))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_WIND))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPDOWN))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPUP))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPDOWN2))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPUP2))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_CHVACSET_BUTTON_UIC))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_CHVACSET_BUTTON_PCOff))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_CHVACSET_BUTTON_CONFIRM))->HideButton();

    //默认选择设置全车
    OnCarClk();
    //暂时隐藏   by lishizhi 2015-5-19
}

void CHVACSettingPage::OnShowPage()
{


#ifdef PAGE_BUTTON_BAR_NEW
//    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("主菜单"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8("运   行"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8("制动状态"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8("牵引状态"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8("辅助状态"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("旁路状态"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QObject::trUtf8("空调状态"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QObject::trUtf8("帮   助"));
((CButton *)GetDlgItem(IDLB_COM_BTN10))->SetCtrlText(QObject::trUtf8(""));
((CButton *)GetDlgItem(IDLB_COM_BTN11))->SetCtrlText(QObject::trUtf8(""));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("主菜单"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8("运   行"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8("车辆状态"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8("故   障"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("帮   助"));
#endif

    //update ctrl
    updateCtrl();

    this->InitPageHeader();
   // HVAC_valid_timer = 4;
}

void CHVACSettingPage::UpdateRealtimefaults()
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

void CHVACSettingPage::OnRealtimefaultBtnClk()
{
    g_faultsrom[g_romidx].confirm = true;
    g_realtimeFaultsbarList.removeAt(g_faultcount);
    if(g_faultcount>0)
    g_faultcount--;
    //m_faultcount--;

}

//空调模式设置按钮只有在司机室钥匙激活侧司机室才可以按下
void CHVACSettingPage::updateCtrl()
{
//    int nIDArray[] =
//    {
////      ID_CHVACSET_BUTTON_STRONGCOLD,
////      ID_CHVACSET_BUTTON_WEAKCOLD,
////      ID_CHVACSET_BUTTON_AUTOCOLD,
//      ID_CHVACSET_BUTTON_AMERGEWIND,
////      ID_CHVACSET_BUTTON_FULLWARM,
////      ID_CHVACSET_BUTTON_HALFWARM,
////      ID_CHVACSET_BUTTON_AUTOWARM,
//      ID_CHVACSET_BUTTON_WIND,
////      ID_CHVACSET_BUTTON_STOP,
//    };

//   for (int i = 0; i < 2; i++)
//   {
//       if (Bit(HVAC_command_hide,0))
//       {
//           ((CButton*)GetDlgItem(nIDArray[i]))->SetCtrlEnable(true);
//       }
//       else
//       {
//           ((CButton*)GetDlgItem(nIDArray[i]))->SetCtrlEnable(false);
//       }
//   }
}

void CHVACSettingPage::OnComBtn1Clk()
{
    ChangePage(PAGE_INDEX_RUNSTATE);
}

void CHVACSettingPage::OnComBtn2Clk()
{
    ChangePage(PAGE_INDEX_MAINTAIN);
}

void CHVACSettingPage::OnComBtn3Clk()
{
     ChangePage(PAGE_INDEX_CARSTATUS3);
}

void CHVACSettingPage::OnComBtn4Clk()
{
   // ChangePage(PAGE_INDEX_CARSTATUS3);

     ChangePage(PAGE_INDEX_TCUBLOCKREASON);
}

void CHVACSettingPage::OnComBtn5Clk()
{
     ChangePage(PAGE_INDEX_INSTANCYBROADCAST);
}

void CHVACSettingPage::OnComBtn6Clk()
{
    ChangePage(PAGE_INDEX_FASPage);
}
void CHVACSettingPage::OnComBtn7Clk()
{
    ChangePage(PAGE_INDEX_PISALARM);
}
void CHVACSettingPage::OnComBtn8Clk()
{
}
void CHVACSettingPage::OnComBtn9Clk()
{
}
void CHVACSettingPage::OnComBtn10Clk()
{
}
void CHVACSettingPage::OnComBtn11Clk()
{
}
void CHVACSettingPage::OnComBtn12Clk()
{
    ChangePage(PAGE_INDEX_HVACSETTINGHELP);
}


void CHVACSettingPage::OnCarClk()
{
    HVAC_select_color = 0;
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR,0);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR1,1);
//    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR2,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR3,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR4,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR5,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR6,1);
//    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR7,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR8,1);
}

void CHVACSettingPage::OnCar1Clk()
{
    HVAC_select_color = 1;
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR1,0);
//    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR2,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR3,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR4,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR5,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR6,1);
//    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR7,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR8,1);
}

void CHVACSettingPage::OnCar2Clk()
{


}

void CHVACSettingPage::OnCar3Clk()
{
    HVAC_select_color = 2;
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR1,1);
//    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR2,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR3,0);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR4,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR5,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR6,1);
//    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR7,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR8,1);

}

void CHVACSettingPage::OnCar4Clk()
{
    HVAC_select_color = 3;
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR1,1);
//    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR2,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR3,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR4,0);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR5,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR6,1);
//    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR7,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR8,1);

}

void CHVACSettingPage::OnCar5Clk()
{
    HVAC_select_color = 4;
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR1,1);
//    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR2,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR3,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR4,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR5,0);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR6,1);
//    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR7,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR8,1);
}

void CHVACSettingPage::OnCar6Clk()
{
    HVAC_select_color = 5;
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR1,1);
//    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR2,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR3,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR4,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR5,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR6,0);
//    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR7,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR8,1);
}

void CHVACSettingPage::OnCar7Clk()
{

}

void CHVACSettingPage::OnCar8Clk()
{
    HVAC_select_color = 6;
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR1,1);
//    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR2,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR3,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR4,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR5,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR6,1);
//    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR7,1);
    SetLabelBkColorCar(ID_CHVACSET_LABEL_CAR8,0);
}

void CHVACSettingPage::SetLabelBkColorCar(int id, int colorVal)
{
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::blue);
    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::gray);
    }
}


void CHVACSettingPage::UpdateHMIActive()
{
    if (TC1_HMI == 1)
    {

            if (CTHM_TC1Active_B1)
            {
                HVAC_command_hide=1;
            }
            else
            {
                HVAC_command_hide=0;
            }

    }
    if (TC2_HMI == 1)
    {
            if (CTHM_TC2Active_B1)
            {
                HVAC_command_hide=1;
            }
            else
            {
                HVAC_command_hide=0;
            }
    }

    static int preHide = -1;
    if(preHide !=  Bit(HVAC_command_hide,0))
    {
        updateCtrl();
        preHide = Bit(HVAC_command_hide,0);
    }
}







void CHVACSettingPage::OnAMERGEWINDClk()
{
    if(HMiCT_HVAC1EmgcyVenti_B1||HMiCT_HVAC2EmgcyVenti_B1||HMiCT_HVAC3EmgcyVenti_B1||
        HMiCT_HVAC4EmgcyVenti_B1||HMiCT_HVAC5EmgcyVenti_B1||HMiCT_HVAC6EmgcyVenti_B1)
    {
        HMiCT_HVAC1EmgcyVenti_B1=false;
        HMiCT_HVAC2EmgcyVenti_B1=false;
        HMiCT_HVAC3EmgcyVenti_B1 =false;
        HMiCT_HVAC4EmgcyVenti_B1 =false;
        HMiCT_HVAC5EmgcyVenti_B1=false;
        HMiCT_HVAC6EmgcyVenti_B1=false;
        for(int i = 0; i < 6 ; i++)
        {
            m_ModeSAVEflag[i] = false;
        }
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_WIND))->SetCtrlEnable(true);
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_AUTO))->SetCtrlEnable(true);
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_Test))->SetCtrlEnable(true);
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_AMERGEWIND))->SetCtrlEnable(true);

    }else
    {
        if (HVAC_select_color==0)  // All Car
        {
            HMiCT_HVAC1EmgcyVenti_B1 = true;
            HMiCT_HVAC2EmgcyVenti_B1 = true;
            HMiCT_HVAC3EmgcyVenti_B1 = true;
            HMiCT_HVAC4EmgcyVenti_B1 = true;
            HMiCT_HVAC5EmgcyVenti_B1 = true;
            HMiCT_HVAC6EmgcyVenti_B1 = true;

            for(int i = 0; i < 6 ; i++)
            {
                m_ModeSAVEflag[i] = true;
            }

        }
        if (HVAC_select_color==1)
        {
            HMiCT_HVAC1EmgcyVenti_B1 = true;
            m_ModeSAVEflag[0] = true;
            //HMiCT_SAVEHVACMode1_B1=true; //TC1车空调设定使能
        }
        if (HVAC_select_color==2)
        {
            HMiCT_HVAC2EmgcyVenti_B1 = true;
            m_ModeSAVEflag[1] = true;
            //HMiCT_SAVEHVACMode2_B1=true; //
        }
        if (HVAC_select_color==3)
        {
            HMiCT_HVAC3EmgcyVenti_B1 = true;
            m_ModeSAVEflag[2] = true;
            //HMiCT_SAVEHVACMode3_B1=true; //
        }
        if (HVAC_select_color==4)
        {
            HMiCT_HVAC4EmgcyVenti_B1 = true;
            m_ModeSAVEflag[3] = true;
            //HMiCT_SAVEHVACMode4_B1=true; //
        }
        if (HVAC_select_color==5)
        {
            HMiCT_HVAC5EmgcyVenti_B1 = true;
            m_ModeSAVEflag[4] = true;
            //HMiCT_SAVEHVACMode5_B1=true; //
        }
        if (HVAC_select_color==6)
        {
            HMiCT_HVAC6EmgcyVenti_B1 = true;
            m_ModeSAVEflag[5] = true;
            //HMiCT_SAVEHVACMode6_B1=true; //
        }
        //HMiCT_SetFlagChecker_U8 = 0xaa;
        SetCtrlButtonState(ID_CHVACSET_BUTTON_AMERGEWIND);

    }
}

void CHVACSettingPage::OnAutoModeClk()
{
    if(HMiCT_HVAC1Auto_B1||HMiCT_HVAC2Auto_B1||HMiCT_HVAC3Auto_B1||
        HMiCT_HVAC4Auto_B1||HMiCT_HVAC5Auto_B1||HMiCT_HVAC6Auto_B1)
    {
        HMiCT_HVAC1Auto_B1=false;
        HMiCT_HVAC2Auto_B1=false;
        HMiCT_HVAC3Auto_B1 =false;
        HMiCT_HVAC4Auto_B1 =false;
        HMiCT_HVAC5Auto_B1=false;
        HMiCT_HVAC6Auto_B1=false;
        for(int i = 0; i < 6 ; i++)
        {
            m_ModeSAVEflag[i] = false;
        }
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_WIND))->SetCtrlEnable(true);
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_AUTO))->SetCtrlEnable(true);
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_Test))->SetCtrlEnable(true);
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_AMERGEWIND))->SetCtrlEnable(true);
        //HMiCT_SetFlagChecker_U8 = 0x55;

    }else
    {
        if (HVAC_select_color==0)  // All Car
        {
            HMiCT_HVAC1Auto_B1=true;
            HMiCT_HVAC2Auto_B1=true;
            HMiCT_HVAC3Auto_B1 =true;
            HMiCT_HVAC4Auto_B1 =true;
            HMiCT_HVAC5Auto_B1=true;
            HMiCT_HVAC6Auto_B1=true;
            for(int i = 0; i < 6 ; i++)
            {
                m_ModeSAVEflag[i] = true;
            }

        }
        if (HVAC_select_color==1)
        {
            HMiCT_HVAC1Auto_B1=true;
            m_ModeSAVEflag[0] = true;
            //HMiCT_SAVEHVACMode1_B1=true; //TC1车空调设定使能
        }
        if (HVAC_select_color==2)
        {
            HMiCT_HVAC2Auto_B1=true;
            m_ModeSAVEflag[1] = true;
            //HMiCT_SAVEHVACMode2_B1=true; //MP1车空调设定使能
        }
        if (HVAC_select_color==3)
        {
            HMiCT_HVAC3Auto_B1=true;
            m_ModeSAVEflag[2] = true;
            //HMiCT_SAVEHVACMode3_B1 =true; //M1车空调设定使能
        }
        if (HVAC_select_color==4)
        {
            HMiCT_HVAC4Auto_B1=true;
            m_ModeSAVEflag[3] = true;
            //HMiCT_SAVEHVACMode4_B1 =true; //M2车空调设定使能
        }
        if (HVAC_select_color==5)
        {
            HMiCT_HVAC5Auto_B1=true;
            m_ModeSAVEflag[4] = true;
            //HMiCT_SAVEHVACMode5_B1=true; //MP2车空调设定使能
        }
        if (HVAC_select_color==6)
        {
            HMiCT_HVAC6Auto_B1=true;
            m_ModeSAVEflag[5] = true;
            //HMiCT_SAVEHVACMode6_B1=true; //TC2车空调设定使能
        }
        SetCtrlButtonState(ID_CHVACSET_BUTTON_AUTO);

        //HMiCT_SetFlagChecker_U8 = 0xaa;
    }
}

void CHVACSettingPage::OnWINDClk()
{
    if(HMiCT_HVAC1Venti_B1||HMiCT_HVAC1Venti_B1||HMiCT_HVAC1Venti_B1||
        HMiCT_HVAC1Venti_B1||HMiCT_HVAC1Venti_B1||HMiCT_HVAC1Venti_B1)
    {
        HMiCT_HVAC1Venti_B1=false;
        HMiCT_HVAC2Venti_B1=false;
        HMiCT_HVAC3Venti_B1 =false;
        HMiCT_HVAC4Venti_B1 =false;
        HMiCT_HVAC5Venti_B1=false;
        HMiCT_HVAC6Venti_B1=false;
        for(int i = 0; i < 6 ; i++)
        {
            m_ModeSAVEflag[i] = false;
        }
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_WIND))->SetCtrlEnable(true);
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_AUTO))->SetCtrlEnable(true);
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_Test))->SetCtrlEnable(true);
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_AMERGEWIND))->SetCtrlEnable(true);
        //HMiCT_SetFlagChecker_U8 = 0x55;

    }else
    {
        if (HVAC_select_color==0)  // All Car
        {
            HMiCT_HVAC1Venti_B1=true;
            HMiCT_HVAC2Venti_B1=true;
            HMiCT_HVAC3Venti_B1 =true;
            HMiCT_HVAC4Venti_B1 =true;
            HMiCT_HVAC5Venti_B1=true;
            HMiCT_HVAC6Venti_B1=true;
            for(int i = 0; i < 6 ; i++)
            {
                m_ModeSAVEflag[i] = true;
            }

        }
        if (HVAC_select_color==1)
        {
            HMiCT_HVAC1Venti_B1=true;
            m_ModeSAVEflag[0] = true;
            //HMiCT_SAVEHVACMode1_B1=true; //TC1车空调设定使能
        }
        if (HVAC_select_color==2)
        {
            HMiCT_HVAC2Venti_B1=true;
            m_ModeSAVEflag[1] = true;
            //HMiCT_SAVEHVACMode2_B1=true; //MP1车空调设定使能
        }
        if (HVAC_select_color==3)
        {
            HMiCT_HVAC3Venti_B1=true;
            m_ModeSAVEflag[2] = true;
            //HMiCT_SAVEHVACMode3_B1 =true; //M1车空调设定使能
        }
        if (HVAC_select_color==4)
        {
            HMiCT_HVAC4Venti_B1=true;
            m_ModeSAVEflag[3] = true;
            //HMiCT_SAVEHVACMode4_B1 =true; //M2车空调设定使能
        }
        if (HVAC_select_color==5)
        {
            HMiCT_HVAC5Venti_B1=true;
            m_ModeSAVEflag[4] = true;
            //HMiCT_SAVEHVACMode5_B1=true; //MP2车空调设定使能
        }
        if (HVAC_select_color==6)
        {
            HMiCT_HVAC6Venti_B1=true;
            m_ModeSAVEflag[5] = true;
            //HMiCT_SAVEHVACMode6_B1=true; //TC2车空调设定使能
        }
        SetCtrlButtonState(ID_CHVACSET_BUTTON_WIND);

        //HMiCT_SetFlagChecker_U8 = 0xaa;
    }

}


void CHVACSettingPage::OnPCOffClk()
{
//    m_bBtnPress = true;
//    m_PressBtnID = ID_CHVACSET_BUTTON_PCOff;
//    if (HVAC_valid_timer==0)
//    {
//        HVAC_valid_timer=4;

//        //当有任意一个模式按钮按下，则被按下按钮保持按下状态4秒钟，且其它按钮这4秒钟内不可以按下
//        SetCtrlButtonState(ID_CHVACSET_BUTTON_PCOff);

    if(HMiCT_HVAC1PreOff_B1||HMiCT_HVAC2PreOff_B1||HMiCT_HVAC3PreOff_B1||
        HMiCT_HVAC4PreOff_B1||HMiCT_HVAC5PreOff_B1||HMiCT_HVAC6PreOff_B1)
    {

        HMiCT_HVAC1PreOff_B1=false;
        HMiCT_HVAC2PreOff_B1=false;
        HMiCT_HVAC3PreOff_B1 =false;
        HMiCT_HVAC4PreOff_B1 =false;
        HMiCT_HVAC5PreOff_B1=false;
        HMiCT_HVAC6PreOff_B1=false;
        for(int i = 0; i < 6 ; i++)
        {
            m_PCOffSAVEflag[i]=false;
        }
        //HMiCT_SetFlagChecker_U8 = 0x55;
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_PCOff))->ChangeButtonState(LBUTTON_UP);

    }else
    {
        if (HVAC_select_color==0)  // All Car
        {
            HMiCT_HVAC1PreOff_B1=true;
            HMiCT_HVAC2PreOff_B1=true;
            HMiCT_HVAC3PreOff_B1 =true;
            HMiCT_HVAC4PreOff_B1 =true;
            HMiCT_HVAC5PreOff_B1=true;
            HMiCT_HVAC6PreOff_B1=true;
            for(int i = 0; i < 6 ; i++)
            {
                m_PCOffSAVEflag[i]=true;
            }

        }
        if (HVAC_select_color==1)
        {
            HMiCT_HVAC1PreOff_B1=true;
            m_PCOffSAVEflag[0]=true; //TC1车空调设定使能
        }
        if (HVAC_select_color==2)
        {
            HMiCT_HVAC2PreOff_B1=true;
            m_PCOffSAVEflag[1]=true; //MP1车空调设定使能
        }
        if (HVAC_select_color==3)
        {
            HMiCT_HVAC3PreOff_B1=true;
            m_PCOffSAVEflag[2]=true; //M1车空调设定使能
        }
        if (HVAC_select_color==4)
        {
            HMiCT_HVAC4PreOff_B1=true;
            m_PCOffSAVEflag[3]=true; //M2车空调设定使能
        }
        if (HVAC_select_color==5)
        {
            HMiCT_HVAC5PreOff_B1=true;
            m_PCOffSAVEflag[4]=true; //MP2车空调设定使能
        }
        if (HVAC_select_color==6)
        {
            HMiCT_HVAC6PreOff_B1=true;
            m_PCOffSAVEflag[5]=true; //TC2车空调设定使能
        }
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_PCOff))->ChangeButtonState(LBUTTON_DOWN);
        //HMiCT_SetFlagChecker_U8 = 0xaa;
    }


//    }
}
void CHVACSettingPage::OnfireMCClk()
{
//    m_bBtnPress = true;
//    m_PressBtnID = ID_CHVACSET_BUTTON_FireMC;
//   if (HVAC_valid_timer==0)

//        HVAC_mode_se1ect=8;
//        HVAC_valid_timer=4;

        //当有任意一个模式按钮按下，则被按下按钮保持按下状态4秒钟，且其它按钮这4秒钟内不可以按下
        //SetCtrlButtonState(ID_CHVACSET_BUTTON_FireMC);
    if(HMiCT_HVAC1FireMode_B1||HMiCT_HVAC2FireMode_B1||HMiCT_HVAC3FireMode_B1||
        HMiCT_HVAC4FireMode_B1||HMiCT_HVAC5FireMode_B1||HMiCT_HVAC6FireMode_B1)
    {


        HMiCT_HVAC1FireMode_B1=false;
        HMiCT_HVAC2FireMode_B1=false;
        HMiCT_HVAC3FireMode_B1 =false;
        HMiCT_HVAC4FireMode_B1 =false;
        HMiCT_HVAC5FireMode_B1=false;
        HMiCT_HVAC6FireMode_B1=false;
        for(int i = 0; i < 6 ; i++)
        {
            m_FireSAVEflag[i] = false;
        }

        //HMiCT_SetFlagChecker_U8 = 0x55;
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_FireMC))->ChangeButtonState(LBUTTON_UP);

    }
    else
    {
        if (HVAC_select_color==0)  // All Car
        {
            HMiCT_HVAC1FireMode_B1=true;
            HMiCT_HVAC2FireMode_B1=true;
            HMiCT_HVAC3FireMode_B1 =true;
            HMiCT_HVAC4FireMode_B1 =true;
            HMiCT_HVAC5FireMode_B1=true;
            HMiCT_HVAC6FireMode_B1=true;
            for(int i = 0; i < 6 ; i++)
            {
                m_FireSAVEflag[i] = true;
            }
        }
        if (HVAC_select_color==1)
        {
            HMiCT_HVAC1FireMode_B1=true;
            m_FireSAVEflag[0] = true;
            //HMiCT_SAVEHVACMode1_B1=true; //TC1车空调设定使能
        }
        if (HVAC_select_color==2)
        {
            HMiCT_HVAC2FireMode_B1=true;
            m_FireSAVEflag[1] = true;
            //HMiCT_SAVEHVACMode2_B1=true; //MP1车空调设定使能
        }
        if (HVAC_select_color==3)
        {
            HMiCT_HVAC3FireMode_B1=true;
            m_FireSAVEflag[2] = true;
            //HMiCT_SAVEHVACMode3_B1 =true; //M1车空调设定使能
        }
        if (HVAC_select_color==4)
        {
            HMiCT_HVAC4FireMode_B1=true;
            m_FireSAVEflag[3] = true;
            //HMiCT_SAVEHVACMode4_B1 =true; //M2车空调设定使能
        }
        if (HVAC_select_color==5)
        {
            HMiCT_HVAC5FireMode_B1=true;
            m_FireSAVEflag[4] = true;
            //HMiCT_SAVEHVACMode5_B1=true; //MP2车空调设定使能
        }
        if (HVAC_select_color==6)
        {
            HMiCT_HVAC6FireMode_B1=true;
            m_FireSAVEflag[5] = true;
            //HMiCT_SAVEHVACMode6_B1=true; //TC2车空调设定使能
        }
        //HMiCT_SetFlagChecker_U8 = 0xaa;
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_FireMC))->ChangeButtonState(LBUTTON_DOWN);
    }



}
void CHVACSettingPage::OntestmodeClk()
{
    if(HMiCT_HVAC1Test_B1||HMiCT_HVAC2Test_B1||HMiCT_HVAC3Test_B1||
        HMiCT_HVAC4Test_B1||HMiCT_HVAC5Test_B1||HMiCT_HVAC6Test_B1)
    {
        HMiCT_HVAC1Test_B1=false;
        HMiCT_HVAC2Test_B1=false;
        HMiCT_HVAC3Test_B1 =false;
        HMiCT_HVAC4Test_B1 =false;
        HMiCT_HVAC5Test_B1=false;
        HMiCT_HVAC6Test_B1=false;
        for(int i = 0; i < 6 ; i++)
        {
            m_ModeSAVEflag[i] = false;
        }
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_WIND))->SetCtrlEnable(true);
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_AUTO))->SetCtrlEnable(true);
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_Test))->SetCtrlEnable(true);
        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_AMERGEWIND))->SetCtrlEnable(true);
        //HMiCT_SetFlagChecker_U8 = 0x55;

    }else
    {
        if (HVAC_select_color==0)  // All Car
        {
            HMiCT_HVAC1Test_B1=true;
            HMiCT_HVAC2Test_B1=true;
            HMiCT_HVAC3Test_B1 =true;
            HMiCT_HVAC4Test_B1 =true;
            HMiCT_HVAC5Test_B1=true;
            HMiCT_HVAC6Test_B1=true;
            for(int i = 0; i < 6 ; i++)
            {
                m_ModeSAVEflag[i] = true;
            }
        }
        if (HVAC_select_color==1)
        {
            HMiCT_HVAC1Test_B1=true;
            m_ModeSAVEflag[0] = true;
            //HMiCT_SAVEHVACMode1_B1=true; //TC1车空调设定使能
        }
        if (HVAC_select_color==2)
        {
            HMiCT_HVAC2Test_B1=true;
            m_ModeSAVEflag[1] = true;
            //HMiCT_SAVEHVACMode2_B1=true; //MP1车空调设定使能
        }
        if (HVAC_select_color==3)
        {
            HMiCT_HVAC3Test_B1=true;
            m_ModeSAVEflag[2] = true;
            //HMiCT_SAVEHVACMode3_B1 =true; //M1车空调设定使能
        }
        if (HVAC_select_color==4)
        {
            HMiCT_HVAC4Test_B1=true;
            m_ModeSAVEflag[3] = true;
            //HMiCT_SAVEHVACMode4_B1 =true; //M2车空调设定使能
        }
        if (HVAC_select_color==5)
        {
            HMiCT_HVAC5Test_B1=true;
            m_ModeSAVEflag[4] = true;
            //HMiCT_SAVEHVACMode5_B1=true; //MP2车空调设定使能
        }
        if (HVAC_select_color==6)
        {
            HMiCT_HVAC6Test_B1=true;
            m_ModeSAVEflag[5] = true;
            //HMiCT_SAVEHVACMode6_B1=true; //TC2车空调设定使能
        }
        SetCtrlButtonState(ID_CHVACSET_BUTTON_Test);

        //HMiCT_SetFlagChecker_U8 = 0xaa;
    }




}
void CHVACSettingPage::OnUICmodeClk()
{

    if(HMiCT_UICMode_B1)
    {
        HMiCT_UICMode_B1 = false;
        m_UICTemFlag = false;
        ((CButton *)GetDlgItem(ID_CHVACSET_BUTTON_UIC))->ChangeButtonState(LBUTTON_UP);

    }else
    {
        HMiCT_Reduce1_B1 = false;
        HMiCT_Reduce2_B1 = false;
        HMiCT_Add1_B1 = false;
        HMiCT_Add2_B1 = false;
        HMiCT_UICMode_B1 = false;
        ((CButton *)GetDlgItem(ID_CHVACSET_BUTTON_TEMPDOWN))->ChangeButtonState(LBUTTON_UP);
        ((CButton *)GetDlgItem(ID_CHVACSET_BUTTON_TEMPDOWN2))->ChangeButtonState(LBUTTON_UP);
        ((CButton *)GetDlgItem(ID_CHVACSET_BUTTON_TEMPUP))->ChangeButtonState(LBUTTON_UP);
        ((CButton *)GetDlgItem(ID_CHVACSET_BUTTON_TEMPUP2))->ChangeButtonState(LBUTTON_UP);
        ((CButton *)GetDlgItem(ID_CHVACSET_BUTTON_UIC))->ChangeButtonState(LBUTTON_UP);
        m_UICTemFlag = true;
        HMiCT_UICMode_B1 = true;
        //HMiCT_SetFlagChecker_U8 = 0xaa;
        ((CButton *)GetDlgItem(ID_CHVACSET_BUTTON_UIC))->ChangeButtonState(LBUTTON_DOWN);
    }


}
void CHVACSettingPage::OnThempDownClk()
{
    if(HMiCT_Reduce1_B1)
    {
        HMiCT_Reduce1_B1 = false;
        m_UICTemFlag = false;
        //HMiCT_SetFlagChecker_U8 = 0x55;
        ((CButton *)GetDlgItem(ID_CHVACSET_BUTTON_TEMPDOWN))->ChangeButtonState(LBUTTON_UP);

    }else
    {
        HMiCT_Reduce1_B1 = false;
        HMiCT_Reduce2_B1 = false;
        HMiCT_Add1_B1 = false;
        HMiCT_Add2_B1 = false;
        HMiCT_UICMode_B1 = false;
        ((CButton *)GetDlgItem(ID_CHVACSET_BUTTON_TEMPDOWN))->ChangeButtonState(LBUTTON_UP);
        ((CButton *)GetDlgItem(ID_CHVACSET_BUTTON_TEMPDOWN2))->ChangeButtonState(LBUTTON_UP);
        ((CButton *)GetDlgItem(ID_CHVACSET_BUTTON_TEMPUP))->ChangeButtonState(LBUTTON_UP);
        ((CButton *)GetDlgItem(ID_CHVACSET_BUTTON_TEMPUP2))->ChangeButtonState(LBUTTON_UP);
        ((CButton *)GetDlgItem(ID_CHVACSET_BUTTON_UIC))->ChangeButtonState(LBUTTON_UP);
        m_UICTemFlag = true;
        HMiCT_Reduce1_B1 = true;
        //HMiCT_SetFlagChecker_U8 = 0xaa;
        ((CButton *)GetDlgItem(ID_CHVACSET_BUTTON_TEMPDOWN))->ChangeButtonState(LBUTTON_DOWN);
    }


}
void CHVACSettingPage::OnThempUpClk()
{
    if(HMiCT_Add1_B1)
    {
        HMiCT_Add1_B1 = false;
        m_UICTemFlag = false;
        ((CButton *)GetDlgItem(ID_CHVACSET_BUTTON_TEMPUP))->ChangeButtonState(LBUTTON_UP);
    }else
    {
        HMiCT_Reduce1_B1 = false;
        HMiCT_Reduce2_B1 = false;
        HMiCT_Add1_B1 = false;
        HMiCT_Add2_B1 = false;
        HMiCT_UICMode_B1 = false;
        ((CButton *)GetDlgItem(ID_CHVACSET_BUTTON_TEMPDOWN))->ChangeButtonState(LBUTTON_UP);
        ((CButton *)GetDlgItem(ID_CHVACSET_BUTTON_TEMPDOWN2))->ChangeButtonState(LBUTTON_UP);
        ((CButton *)GetDlgItem(ID_CHVACSET_BUTTON_TEMPUP))->ChangeButtonState(LBUTTON_UP);
        ((CButton *)GetDlgItem(ID_CHVACSET_BUTTON_TEMPUP2))->ChangeButtonState(LBUTTON_UP);
        ((CButton *)GetDlgItem(ID_CHVACSET_BUTTON_UIC))->ChangeButtonState(LBUTTON_UP);
        m_UICTemFlag = true;
        HMiCT_Add1_B1 = true;
        //HMiCT_SetFlagChecker_U8 = 0xaa;
        ((CButton *)GetDlgItem(ID_CHVACSET_BUTTON_TEMPUP))->ChangeButtonState(LBUTTON_DOWN);
    }
}
void CHVACSettingPage::OnThempDown2Clk()
{
    if(HMiCT_Reduce2_B1)
    {
        HMiCT_Reduce2_B1 = false;
        m_UICTemFlag = false;
        ((CButton *)GetDlgItem(ID_CHVACSET_BUTTON_TEMPDOWN2))->ChangeButtonState(LBUTTON_UP);
    }else
    {
        HMiCT_Reduce1_B1 = false;
        HMiCT_Reduce2_B1 = false;
        HMiCT_Add1_B1 = false;
        HMiCT_Add2_B1 = false;
        HMiCT_UICMode_B1 = false;
        ((CButton *)GetDlgItem(ID_CHVACSET_BUTTON_TEMPDOWN))->ChangeButtonState(LBUTTON_UP);
        ((CButton *)GetDlgItem(ID_CHVACSET_BUTTON_TEMPDOWN2))->ChangeButtonState(LBUTTON_UP);
        ((CButton *)GetDlgItem(ID_CHVACSET_BUTTON_TEMPUP))->ChangeButtonState(LBUTTON_UP);
        ((CButton *)GetDlgItem(ID_CHVACSET_BUTTON_TEMPUP2))->ChangeButtonState(LBUTTON_UP);
        ((CButton *)GetDlgItem(ID_CHVACSET_BUTTON_UIC))->ChangeButtonState(LBUTTON_UP);
        m_UICTemFlag = true;
        HMiCT_Reduce2_B1 = true;
        //HMiCT_SetFlagChecker_U8 = 0xaa;
        ((CButton *)GetDlgItem(ID_CHVACSET_BUTTON_TEMPDOWN2))->ChangeButtonState(LBUTTON_DOWN);
    }
}
void CHVACSettingPage::OnThempUp2Clk()
{
    if(HMiCT_Add2_B1)
    {
        HMiCT_Add2_B1 = false;
        m_UICTemFlag = false;
        ((CButton *)GetDlgItem(ID_CHVACSET_BUTTON_TEMPUP2))->ChangeButtonState(LBUTTON_UP);
    }else
    {

        HMiCT_Reduce1_B1 = false;
        HMiCT_Reduce2_B1 = false;
        HMiCT_Add1_B1 = false;
        HMiCT_Add2_B1 = false;
        HMiCT_UICMode_B1 = false;
        ((CButton *)GetDlgItem(ID_CHVACSET_BUTTON_TEMPDOWN))->ChangeButtonState(LBUTTON_UP);
        ((CButton *)GetDlgItem(ID_CHVACSET_BUTTON_TEMPDOWN2))->ChangeButtonState(LBUTTON_UP);
        ((CButton *)GetDlgItem(ID_CHVACSET_BUTTON_TEMPUP))->ChangeButtonState(LBUTTON_UP);
        ((CButton *)GetDlgItem(ID_CHVACSET_BUTTON_TEMPUP2))->ChangeButtonState(LBUTTON_UP);
        ((CButton *)GetDlgItem(ID_CHVACSET_BUTTON_UIC))->ChangeButtonState(LBUTTON_UP);

        m_UICTemFlag = true;
        HMiCT_Add2_B1 = true;
        //HMiCT_SetFlagChecker_U8 = 0xaa;
        ((CButton *)GetDlgItem(ID_CHVACSET_BUTTON_TEMPUP2))->ChangeButtonState(LBUTTON_DOWN);
    }
}


//自动制冷、自动制暖当前状态
void CHVACSettingPage::UpdateHVACState()
{

//首先判断选择要设置的车厢位置，如果是整车设置则判断是否有处于网控且处于自动制冷和自动制暖的车厢，
//然后计算这些车厢中自动制冷和自动制暖状态的车厢个数，个数多的状态即为当前要设置的温度值的模式。
//制热范围：12-26  制冷范围：22-28
    if (HVAC_select_color==0)  // All Car
    {
        //ControlMode 控制状态	1网络控制，0面板控制
//        TC1车HVAC1			端口地址：0x910
//        MP1车HVAC2			端口地址：0x920
//        M1车HVAC3			端口地址：0x930
//        M2车HVAC4			端口地址：0x940
//        MP2车HVAC5			端口地址：0x950
//        TC2车HVAC6			端口地址：0x960



        if(  ( ((CTHM_SetHVACModeTC1_U8==1)&&AC1CT_ControlMode_B1)
            ||((CTHM_SetHVACModeMP1_U8==1)&&AC2CT_ControlMode_B1)
            ||((CTHM_SetHVACModeM1_U8==1) &&AC3CT_ControlMode_B1)
            ||((CTHM_SetHVACModeM2_U8==1) &&AC4CT_ControlMode_B1)
            ||((CTHM_SetHVACModeMP2_U8==1)&&AC5CT_ControlMode_B1)
            ||((CTHM_SetHVACModeTC2_U8==1)&&AC6CT_ControlMode_B1))||
            ( ((CTHM_SetHVACModeTC1_U8==5)&&AC1CT_ControlMode_B1)
            ||((CTHM_SetHVACModeMP1_U8==5)&&AC2CT_ControlMode_B1)
            ||((CTHM_SetHVACModeM1_U8==5) &&AC3CT_ControlMode_B1)
            ||((CTHM_SetHVACModeM2_U8==5) &&AC4CT_ControlMode_B1)
            ||((CTHM_SetHVACModeMP2_U8==5)&&AC5CT_ControlMode_B1)
            ||((CTHM_SetHVACModeTC2_U8==5)&&AC6CT_ControlMode_B1))  )


            {

                int Auto_Warm_num=0;
                int Auto_Cool_num=0;

                if((CTHM_SetHVACModeTC1_U8==1)&&AC1CT_ControlMode_B1)
                {
                   Auto_Cool_num++;
                }
                if((CTHM_SetHVACModeMP1_U8==1)&&AC2CT_ControlMode_B1)
                {
                     Auto_Cool_num++;
                }
                if((CTHM_SetHVACModeM1_U8==1)&&AC3CT_ControlMode_B1)
                {
                    Auto_Cool_num++;
                }
                if((CTHM_SetHVACModeM2_U8==1)&&AC4CT_ControlMode_B1)
                {
                     Auto_Cool_num++;
                }
                if((CTHM_SetHVACModeMP2_U8==1)&&AC5CT_ControlMode_B1)
                {
                     Auto_Cool_num++;
                }
                if((CTHM_SetHVACModeTC2_U8==1)&&AC6CT_ControlMode_B1)
                {
                     Auto_Cool_num++;
                }


                if((CTHM_SetHVACModeTC1_U8==5)&&AC1CT_ControlMode_B1)
                {
                    Auto_Warm_num++;
                }
                if((CTHM_SetHVACModeMP1_U8==5)&&AC2CT_ControlMode_B1)
                {
                    Auto_Warm_num++;
                }
                if((CTHM_SetHVACModeM1_U8==5)&&AC3CT_ControlMode_B1)
                {
                    Auto_Warm_num++;
                }
                if((CTHM_SetHVACModeM2_U8==5)&&AC4CT_ControlMode_B1)
                {
                    Auto_Warm_num++;
                }
                if((CTHM_SetHVACModeMP2_U8==5)&&AC5CT_ControlMode_B1)
                {
                    Auto_Warm_num++;
                }
                if((CTHM_SetHVACModeTC2_U8==5)&&AC6CT_ControlMode_B1)
                {
                    Auto_Warm_num++;
                }

                if(Auto_Cool_num>=Auto_Warm_num)
                {
                    HVAC_state = QObject::trUtf8("自动制冷");
                    m_bAutoTempV = true;

                }
                else
                {
                    HVAC_state = QObject::trUtf8("自动制暖");
                    m_bAutoTempV = true;
                }

            }
        else
        {
            HVAC_state = QObject::trUtf8("");
            m_bAutoTempV = false;

        }
    }
    if (HVAC_select_color==1)
    {
        if(  ((CTHM_SetHVACModeTC1_U8==1)||(CTHM_SetHVACModeTC1_U8==5))&&AC1CT_ControlMode_B1)
        {
            if(CTHM_SetHVACModeTC1_U8==1)
            {
                HVAC_state = QObject::trUtf8("自动制冷");
                m_bAutoTempV = true;
            }
            if(CTHM_SetHVACModeTC1_U8==5)
            {
                HVAC_state = QObject::trUtf8("自动制暖");
                m_bAutoTempV = true;
            }

        }
        else
        {
            HVAC_state = QObject::trUtf8("");
            m_bAutoTempV = false;

        }

    }
    if (HVAC_select_color==2)
    {
        if(  ((CTHM_SetHVACModeMP1_U8==1)||(CTHM_SetHVACModeMP1_U8==5))&&AC2CT_ControlMode_B1)
        {
            if(CTHM_SetHVACModeMP1_U8==1)
            {
                HVAC_state = QObject::trUtf8("自动制冷");
                m_bAutoTempV = true;
            }
            if(CTHM_SetHVACModeMP1_U8==5)
            {
                HVAC_state = QObject::trUtf8("自动制暖");
                m_bAutoTempV = true;
            }

        }
        else
        {
            HVAC_state = QObject::trUtf8("");
            m_bAutoTempV = false;

        }
    }
    if (HVAC_select_color==3)
    {
        if(  ((CTHM_SetHVACModeM1_U8==1)||(CTHM_SetHVACModeM1_U8==5))&&AC3CT_ControlMode_B1)
        {
            if(CTHM_SetHVACModeM1_U8==1)
            {
                HVAC_state = QObject::trUtf8("自动制冷");
                m_bAutoTempV = true;
            }
            if(CTHM_SetHVACModeM1_U8==5)
            {
                HVAC_state = QObject::trUtf8("自动制暖");
                m_bAutoTempV = true;
            }

        }
        else
        {
            HVAC_state = QObject::trUtf8("");
            m_bAutoTempV = false;

        }
    }
    if (HVAC_select_color==4)
    {
        if(  ((CTHM_SetHVACModeM2_U8==1)||(CTHM_SetHVACModeM2_U8==5))&&AC4CT_ControlMode_B1)
        {
            if(CTHM_SetHVACModeM2_U8==1)
            {
                HVAC_state = QObject::trUtf8("自动制冷");
                m_bAutoTempV = true;
            }
            if(CTHM_SetHVACModeM2_U8==5)
            {
                HVAC_state = QObject::trUtf8("自动制暖");
                m_bAutoTempV = true;
            }

        }
        else
        {
            HVAC_state = QObject::trUtf8("");
            m_bAutoTempV = false;

        }
    }
    if (HVAC_select_color==5)
    {
        if(  ((CTHM_SetHVACModeMP2_U8==1)||(CTHM_SetHVACModeMP2_U8==5))&&AC5CT_ControlMode_B1)
        {
            if(CTHM_SetHVACModeMP2_U8==1)
            {
                HVAC_state = QObject::trUtf8("自动制冷");
                m_bAutoTempV = true;
            }
            if(CTHM_SetHVACModeMP2_U8==5)
            {
                HVAC_state = QObject::trUtf8("自动制暖");
                m_bAutoTempV = true;
            }

        }
        else
        {
            HVAC_state = QObject::trUtf8("");
            m_bAutoTempV = false;

        }
    }
    if (HVAC_select_color==6)
    {
        if(  ((CTHM_SetHVACModeTC2_U8==1)||(CTHM_SetHVACModeTC2_U8==5))&&AC6CT_ControlMode_B1)
        {
            if(CTHM_SetHVACModeTC2_U8==1)
            {
                HVAC_state = QObject::trUtf8("自动制冷");
                m_bAutoTempV = true;
            }
            if(CTHM_SetHVACModeTC2_U8==5)
            {
                HVAC_state = QObject::trUtf8("自动制暖");
                m_bAutoTempV = true;
            }

        }
        else
        {
            HVAC_state = QObject::trUtf8("");
            m_bAutoTempV = false;

        }
    }

    if (m_bBtnPress==false)
    {
        SpecialButtonState();
    }
    //((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_RUNMODEL))->SetCtrlText(HVAC_state);
}

//        if(  (    ((AC1CT_WorkMode_U8==1)&&AC1CT_ControlMode_B1)
//                ||((AC2CT_WorkMode_U8==1)&&AC2CT_ControlMode_B1)
//                ||((AC3CT_WorkMode_U8==1)&&AC3CT_ControlMode_B1)
//                ||((AC4CT_WorkMode_U8==1)&&AC4CT_ControlMode_B1)
//                ||((AC5CT_WorkMode_U8==1)&&AC5CT_ControlMode_B1)
//                ||((AC6CT_WorkMode_U8==1)&&AC6CT_ControlMode_B1)  ) ||
//             (    ((AC1CT_WorkMode_U8==5)&&AC1CT_ControlMode_B1)
//                ||((AC2CT_WorkMode_U8==5)&&AC2CT_ControlMode_B1)
//                ||((AC3CT_WorkMode_U8==5)&&AC3CT_ControlMode_B1)
//                ||((AC4CT_WorkMode_U8==5)&&AC4CT_ControlMode_B1)
//                ||((AC5CT_WorkMode_U8==5)&&AC5CT_ControlMode_B1)
//                ||((AC6CT_WorkMode_U8==5)&&AC6CT_ControlMode_B1)  )

//           )
//        {

//            int Auto_Warm_num=0;
//            int Auto_Cool_num=0;

//            if((AC1CT_WorkMode_U8==1)&&AC1CT_ControlMode_B1)
//            {
//               Auto_Cool_num++;
//            }
//            if((AC2CT_WorkMode_U8==1)&&AC2CT_ControlMode_B1)
//            {
//                 Auto_Cool_num++;
//            }
//            if((AC3CT_WorkMode_U8==1)&&AC3CT_ControlMode_B1)
//            {
//                Auto_Cool_num++;
//            }
//            if((AC4CT_WorkMode_U8==1)&&AC4CT_ControlMode_B1)
//            {
//                 Auto_Cool_num++;
//            }
//            if((AC5CT_WorkMode_U8==1)&&AC5CT_ControlMode_B1)
//            {
//                 Auto_Cool_num++;
//            }
//            if((AC6CT_WorkMode_U8==1)&&AC6CT_ControlMode_B1)
//            {
//                 Auto_Cool_num++;
//            }


//            if((AC1CT_WorkMode_U8==5)&&AC1CT_ControlMode_B1)
//            {
//                Auto_Warm_num++;
//            }
//            if((AC2CT_WorkMode_U8==5)&&AC2CT_ControlMode_B1)
//            {
//                Auto_Warm_num++;
//            }
//            if((AC3CT_WorkMode_U8==5)&&AC3CT_ControlMode_B1)
//            {
//                Auto_Warm_num++;
//            }
//            if((AC4CT_WorkMode_U8==5)&&AC4CT_ControlMode_B1)
//            {
//                Auto_Warm_num++;
//            }
//            if((AC5CT_WorkMode_U8==5)&&AC5CT_ControlMode_B1)
//            {
//                Auto_Warm_num++;
//            }
//            if((AC6CT_WorkMode_U8==5)&&AC6CT_ControlMode_B1)
//            {
//                Auto_Warm_num++;
//            }

//            if(Auto_Cool_num>=Auto_Warm_num)
//            {
//                HVAC_state = QObject::trUtf8("自动制冷");
//                m_bAutoTempV = true;

//            }
//            else
//            {
//                HVAC_state = QObject::trUtf8("自动制暖");
//                m_bAutoTempV = true;
//            }

//        }
//        else
//        {
//            HVAC_state = QObject::trUtf8("");
//            m_bAutoTempV = false;

//        }

//    }
//    if (HVAC_select_color==1)
//    {
//        if(  ((AC1CT_WorkMode_U8==1)||(AC1CT_WorkMode_U8==5))&&AC1CT_ControlMode_B1)
//        {
//            if(AC1CT_WorkMode_U8==1)
//            {
//                HVAC_state = QObject::trUtf8("自动制冷");
//                m_bAutoTempV = true;
//            }
//            if(AC1CT_WorkMode_U8==5)
//            {
//                HVAC_state = QObject::trUtf8("自动制暖");
//                m_bAutoTempV = true;
//            }

//        }
//        else
//        {
//            HVAC_state = QObject::trUtf8("");
//            m_bAutoTempV = false;

//        }

//    }
/*    if (HVAC_select_color==2)
    {
        if(  ((AC2CT_WorkMode_U8==1)||(AC2CT_WorkMode_U8==5))&&AC2CT_ControlMode_B1)
        {
            if(AC2CT_WorkMode_U8==1)
            {
                HVAC_state = QObject::trUtf8("自动制冷");
                m_bAutoTempV = true;
            }
            if(AC2CT_WorkMode_U8==5)
            {
                HVAC_state = QObject::trUtf8("自动制暖");
                m_bAutoTempV = true;
            }

        }
        else
        {
            HVAC_state = QObject::trUtf8("");
            m_bAutoTempV = false;

        }
    }
    if (HVAC_select_color==3)
    {
        if(  ((AC3CT_WorkMode_U8==1)||(AC3CT_WorkMode_U8==5))&&AC3CT_ControlMode_B1)
        {
            if(AC3CT_WorkMode_U8==1)
            {
                HVAC_state = QObject::trUtf8("自动制冷");
                m_bAutoTempV = true;
            }
            if(AC3CT_WorkMode_U8==5)
            {
                HVAC_state = QObject::trUtf8("自动制暖");
                m_bAutoTempV = true;
            }

        }
        else
        {
            HVAC_state = QObject::trUtf8("");
            m_bAutoTempV = false;

        }
    }
    if (HVAC_select_color==4)
    {
        if(  ((AC4CT_WorkMode_U8==1)||(AC4CT_WorkMode_U8==5))&&AC4CT_ControlMode_B1)
        {
            if(AC4CT_WorkMode_U8==1)
            {
                HVAC_state = QObject::trUtf8("自动制冷");
                m_bAutoTempV = true;
            }
            if(AC4CT_WorkMode_U8==5)
            {
                HVAC_state = QObject::trUtf8("自动制暖");
                m_bAutoTempV = true;
            }

        }
        else
        {
            HVAC_state = QObject::trUtf8("");
            m_bAutoTempV = false;

        }
    }
    if (HVAC_select_color==5)
    {
        if(  ((AC5CT_WorkMode_U8==1)||(AC5CT_WorkMode_U8==5))&&AC5CT_ControlMode_B1)
        {
            if(AC5CT_WorkMode_U8==1)
            {
                HVAC_state = QObject::trUtf8("自动制冷");
                m_bAutoTempV = true;
            }
            if(AC5CT_WorkMode_U8==5)
            {
                HVAC_state = QObject::trUtf8("自动制暖");
                m_bAutoTempV = true;
            }

        }
        else
        {
            HVAC_state = QObject::trUtf8("");
            m_bAutoTempV = false;

        }
    }
    if (HVAC_select_color==6)
    {
        if(  ((AC6CT_WorkMode_U8==1)||(AC6CT_WorkMode_U8==5))&&AC6CT_ControlMode_B1)
        {
            if(AC6CT_WorkMode_U8==1)
            {
                HVAC_state = QObject::trUtf8("自动制冷");
                m_bAutoTempV = true;
            }
            if(AC6CT_WorkMode_U8==5)
            {
                HVAC_state = QObject::trUtf8("自动制暖");
                m_bAutoTempV = true;
            }

        }
        else
        {
            HVAC_state = QObject::trUtf8("");
            m_bAutoTempV = false;

        }
    }

    if (m_bBtnPress==false)
    {
        SpecialButtonState();
    }
    ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_RUNMODEL))->SetCtrlText(HVAC_state);
}
*/
//设置温度
void CHVACSettingPage::UpdateCarTem()
{

    ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_SETTEMPERATURECAR1))->SetCtrlText(QString::number(float(AC1CT_STemp_I16)/10,10,1)+QObject::trUtf8(" ℃"));
    ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_SETTEMPERATURECAR2))->SetCtrlText(QString::number(float(AC2CT_STemp_I16)/10,10,1)+QObject::trUtf8(" ℃"));
    ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_SETTEMPERATURECAR3))->SetCtrlText(QString::number(float(AC3CT_STemp_I16)/10,10,1)+QObject::trUtf8(" ℃"));
    ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_SETTEMPERATURECAR4))->SetCtrlText(QString::number(float(AC4CT_STemp_I16)/10,10,1)+QObject::trUtf8(" ℃"));
    ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_SETTEMPERATURECAR5))->SetCtrlText(QString::number(float(AC5CT_STemp_I16)/10,10,1)+QObject::trUtf8(" ℃"));
    ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_SETTEMPERATURECAR6))->SetCtrlText(QString::number(float(AC6CT_STemp_I16)/10,10,1)+QObject::trUtf8(" ℃"));

}

//车内（外）温度
void CHVACSettingPage::UpdateIndoorCarTem()
{
    if (CTHMI_HVAC1On_B1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR1))->SetCtrlBKColor(Qt::black);

        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR1))->SetCtrlText(QString::number(float(AC1CT_RTemp_I16)/10,10,1)+QObject::trUtf8("(")+QString::number(float(AC1CT_FTemp_I16)/10,10,1)+QObject::trUtf8(")")+QObject::trUtf8("℃"));

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR1))->SetCtrlBKColor(Qt::white);
    }

    if (CTHMI_HVAC2On_B1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR2))->SetCtrlBKColor(Qt::black);

        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR2))->SetCtrlText(QString::number(float(AC2CT_RTemp_I16)/10,10,1)+QObject::trUtf8("(")+QString::number(float(AC2CT_FTemp_I16)/10,10,1)+QObject::trUtf8(")")+QObject::trUtf8("℃"));

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR2))->SetCtrlBKColor(Qt::white);
    }

    if (CTHMI_HVAC3On_B1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR3))->SetCtrlBKColor(Qt::black);

        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR3))->SetCtrlText(QString::number(float(AC3CT_RTemp_I16)/10,10,1)+QObject::trUtf8("(")+QString::number(float(AC3CT_FTemp_I16)/10,10,1)+QObject::trUtf8(")")+QObject::trUtf8("℃"));

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR3))->SetCtrlBKColor(Qt::white);
    }


    if (CTHMI_HVAC4On_B1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR4))->SetCtrlBKColor(Qt::black);

        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR4))->SetCtrlText(QString::number(float(AC4CT_RTemp_I16)/10,10,1)+QObject::trUtf8("(")+QString::number(float(AC4CT_FTemp_I16)/10,10,1)+QObject::trUtf8(")")+QObject::trUtf8("℃"));

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR4))->SetCtrlBKColor(Qt::white);
    }

    if (CTHMI_HVAC5On_B1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR5))->SetCtrlBKColor(Qt::black);

        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR5))->SetCtrlText(QString::number(float(AC5CT_RTemp_I16)/10,10,1)+QObject::trUtf8("(")+QString::number(float(AC5CT_FTemp_I16)/10,10,1)+QObject::trUtf8(")")+QObject::trUtf8("℃"));

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR5))->SetCtrlBKColor(Qt::white);
    }

    if (CTHMI_HVAC6On_B1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR6))->SetCtrlBKColor(Qt::black);

        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR6))->SetCtrlText(QString::number(float(AC6CT_RTemp_I16)/10,10,1)+QObject::trUtf8("(")+QString::number(float(AC6CT_FTemp_I16)/10,10,1)+QObject::trUtf8(")")+QObject::trUtf8("℃"));

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR6))->SetCtrlBKColor(Qt::white);
    }
/*
    if (CTHM_HVAC1_Online_B1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR1))->SetCtrlBKColor(Qt::black);

        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR1))->SetCtrlText(QString::number(AC1CT_IndoorTemp_U8)+QObject::trUtf8(" ( ")+QString::number(AC1CT_OutdoorTemp_U8)+QObject::trUtf8(")")+QObject::trUtf8(" ℃"));

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR1))->SetCtrlBKColor(Qt::white);
    }

    if (CTHM_HVAC2_Online_B1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR2))->SetCtrlBKColor(Qt::black);

        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR2))->SetCtrlText(QString::number(AC2CT_IndoorTemp_U8)+QObject::trUtf8(" ( ")+QString::number(AC2CT_OutdoorTemp_U8)+QObject::trUtf8(")")+QObject::trUtf8(" ℃"));

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR2))->SetCtrlBKColor(Qt::white);
    }

    if (CTHM_HVAC3_Online_B1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR3))->SetCtrlBKColor(Qt::black);

        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR3))->SetCtrlText(QString::number(AC3CT_IndoorTemp_U8)+QObject::trUtf8(" ( ")+QString::number(AC3CT_OutdoorTemp_U8)+QObject::trUtf8(")")+QObject::trUtf8(" ℃"));

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR3))->SetCtrlBKColor(Qt::white);
    }


    if (CTHM_HVAC4_Online_B1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR4))->SetCtrlBKColor(Qt::black);

        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR4))->SetCtrlText(QString::number(AC4CT_IndoorTemp_U8)+QObject::trUtf8(" ( ")+QString::number(AC4CT_OutdoorTemp_U8)+QObject::trUtf8(")")+QObject::trUtf8(" ℃"));

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR4))->SetCtrlBKColor(Qt::white);
    }

    if (CTHM_HVAC5_Online_B1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR5))->SetCtrlBKColor(Qt::black);

        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR5))->SetCtrlText(QString::number(AC5CT_IndoorTemp_U8)+QObject::trUtf8(" ( ")+QString::number(AC5CT_OutdoorTemp_U8)+QObject::trUtf8(")")+QObject::trUtf8(" ℃"));

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR5))->SetCtrlBKColor(Qt::white);
    }

    if (CTHM_HVAC6_Online_B1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR6))->SetCtrlBKColor(Qt::black);

        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR6))->SetCtrlText(QString::number(AC6CT_IndoorTemp_U8)+QObject::trUtf8(" ( ")+QString::number(AC6CT_OutdoorTemp_U8)+QObject::trUtf8(")")+QObject::trUtf8(" ℃"));

    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPERATURECAR6))->SetCtrlBKColor(Qt::white);
    }


 */
}


void CHVACSettingPage::SetCarTem(int lableId,qreal temperature)
{
    char buff[10] = {'\0'};
    sprintf(buff, "%.1f", temperature);
    ((CLabel *)GetDlgItem(lableId))->SetCtrlText(QString(buff).append(QObject::trUtf8("℃")));
}

//控制模式
void CHVACSettingPage::UpdateHVAC_mode()
{
    if (AC1CT_CentralizedControl_B1)
    {
        HVAC_mode1=QObject::trUtf8("集控 ");
        HVAC_RUNmode1 = QObject::trUtf8("");

        if(AC1CT_OFF_B1)
        {
            HVAC_RUNmode1 = QObject::trUtf8("停  止");
        }
        if(AC1CT_Auto_B1)
        {
            HVAC_RUNmode1 = QObject::trUtf8("自   动");
        }
        if(AC1CT_HalfCooling_B1)
        {
            HVAC_RUNmode1 = QObject::trUtf8("半   冷");
        }
        if(AC1CT_FullCooling_B1)
        {
            HVAC_RUNmode1 = QObject::trUtf8("全   冷");
        }
        if(AC1CT_HalfHeating_B1)
        {
            HVAC_RUNmode1 = QObject::trUtf8("半   暖");
        }
        if(AC1CT_FullHeating_B1)
        {
            HVAC_RUNmode1 = QObject::trUtf8("全   暖");
        }
        if(AC1CT_Ventilation_B1)
        {
            HVAC_RUNmode1 = QObject::trUtf8("通  风");
        }
        if(AC1CT_EVentilation_B1)
        {
            HVAC_RUNmode1 = QObject::trUtf8("紧急通风");
        }
        if(AC1CT_FireMode_B1)
        {
            HVAC_RUNmode1 = QObject::trUtf8("火灾模式");
        }
    }
    else
    {
        HVAC_mode1=QObject::trUtf8("本控");
        HVAC_RUNmode1 = QObject::trUtf8("");
    }
    if (AC2CT_CentralizedControl_B1)
    {
        HVAC_mode2=QObject::trUtf8("集控 ");
        HVAC_RUNmode2 = QObject::trUtf8("");

        if(AC2CT_OFF_B1)
        {
            HVAC_RUNmode2 = QObject::trUtf8("停  止");
        }
        if(AC2CT_Auto_B1)
        {
            HVAC_RUNmode2 = QObject::trUtf8("自   动");
        }
        if(AC2CT_HalfCooling_B1)
        {
            HVAC_RUNmode2 = QObject::trUtf8("半   冷");
        }
        if(AC2CT_FullCooling_B1)
        {
            HVAC_RUNmode2 = QObject::trUtf8("全   冷");
        }
        if(AC2CT_HalfHeating_B1)
        {
            HVAC_RUNmode2 = QObject::trUtf8("半   暖");
        }
        if(AC2CT_FullHeating_B1)
        {
            HVAC_RUNmode2 = QObject::trUtf8("全   暖");
        }
        if(AC2CT_Ventilation_B1)
        {
            HVAC_RUNmode2 = QObject::trUtf8("通  风");
        }
        if(AC2CT_EVentilation_B1)
        {
            HVAC_RUNmode2 = QObject::trUtf8("紧急通风");
        }
        if(AC2CT_FireMode_B1)
        {
            HVAC_RUNmode2 = QObject::trUtf8("火灾模式");
        }
    }
    else
    {
        HVAC_mode2=QObject::trUtf8("本控");
        HVAC_RUNmode2 = QObject::trUtf8("");
    }

    if (AC3CT_CentralizedControl_B1)
    {
        HVAC_mode3=QObject::trUtf8("集控 ");
        HVAC_RUNmode3 = QObject::trUtf8("");

        if(AC3CT_OFF_B1)
        {
            HVAC_RUNmode3 = QObject::trUtf8("停  止");
        }
        if(AC3CT_Auto_B1)
        {
            HVAC_RUNmode3 = QObject::trUtf8("自   动");
        }
        if(AC3CT_HalfCooling_B1)
        {
            HVAC_RUNmode3 = QObject::trUtf8("半   冷");
        }
        if(AC3CT_FullCooling_B1)
        {
            HVAC_RUNmode3 = QObject::trUtf8("全   冷");
        }
        if(AC3CT_HalfHeating_B1)
        {
            HVAC_RUNmode3 = QObject::trUtf8("半   暖");
        }
        if(AC3CT_FullHeating_B1)
        {
            HVAC_RUNmode3 = QObject::trUtf8("全   暖");
        }
        if(AC3CT_Ventilation_B1)
        {
            HVAC_RUNmode3 = QObject::trUtf8("通  风");
        }
        if(AC3CT_EVentilation_B1)
        {
            HVAC_RUNmode3 = QObject::trUtf8("紧急通风");
        }
        if(AC3CT_FireMode_B1)
        {
            HVAC_RUNmode3 = QObject::trUtf8("火灾模式");
        }
    }
    else
    {
        HVAC_mode3=QObject::trUtf8("本控");
        HVAC_RUNmode3 = QObject::trUtf8("");
    }


    if (AC4CT_CentralizedControl_B1)
    {
        HVAC_mode4=QObject::trUtf8("集控 ");
        HVAC_RUNmode4 = QObject::trUtf8("");

        if(AC4CT_OFF_B1)
        {
            HVAC_RUNmode4 = QObject::trUtf8("停  止");
        }
        if(AC4CT_Auto_B1)
        {
            HVAC_RUNmode4 = QObject::trUtf8("自   动");
        }
        if(AC4CT_HalfCooling_B1)
        {
            HVAC_RUNmode4 = QObject::trUtf8("半   冷");
        }
        if(AC4CT_FullCooling_B1)
        {
            HVAC_RUNmode4 = QObject::trUtf8("全   冷");
        }
        if(AC4CT_HalfHeating_B1)
        {
            HVAC_RUNmode4 = QObject::trUtf8("半   暖");
        }
        if(AC4CT_FullHeating_B1)
        {
            HVAC_RUNmode4 = QObject::trUtf8("全   暖");
        }
        if(AC4CT_Ventilation_B1)
        {
            HVAC_RUNmode4 = QObject::trUtf8("通  风");
        }
        if(AC4CT_EVentilation_B1)
        {
            HVAC_RUNmode4 = QObject::trUtf8("紧急通风");
        }
        if(AC4CT_FireMode_B1)
        {
            HVAC_RUNmode4 = QObject::trUtf8("火灾模式");
        }
    }
    else
    {
        HVAC_mode4=QObject::trUtf8("本控");
        HVAC_RUNmode4 = QObject::trUtf8("");
    }

    if (AC5CT_CentralizedControl_B1)
    {
        HVAC_mode5=QObject::trUtf8("集控 ");
        HVAC_RUNmode5 = QObject::trUtf8("");

        if(AC5CT_OFF_B1)
        {
            HVAC_RUNmode5 = QObject::trUtf8("停  止");
        }
        if(AC5CT_Auto_B1)
        {
            HVAC_RUNmode5 = QObject::trUtf8("自   动");
        }
        if(AC5CT_HalfCooling_B1)
        {
            HVAC_RUNmode5 = QObject::trUtf8("半   冷");
        }
        if(AC5CT_FullCooling_B1)
        {
            HVAC_RUNmode5 = QObject::trUtf8("全   冷");
        }
        if(AC5CT_HalfHeating_B1)
        {
            HVAC_RUNmode5 = QObject::trUtf8("半   暖");
        }
        if(AC5CT_FullHeating_B1)
        {
            HVAC_RUNmode5 = QObject::trUtf8("全   暖");
        }
        if(AC5CT_Ventilation_B1)
        {
            HVAC_RUNmode5 = QObject::trUtf8("通  风");
        }
        if(AC5CT_EVentilation_B1)
        {
            HVAC_RUNmode5 = QObject::trUtf8("紧急通风");
        }
        if(AC5CT_FireMode_B1)
        {
            HVAC_RUNmode5 = QObject::trUtf8("火灾模式");
        }
    }
    else
    {
        HVAC_mode5=QObject::trUtf8("本控");
        HVAC_RUNmode5 = QObject::trUtf8("");
    }


    if (AC6CT_CentralizedControl_B1)
    {
        HVAC_mode6=QObject::trUtf8("集控 ");
        HVAC_RUNmode6 = QObject::trUtf8("");

        if(AC6CT_OFF_B1)
        {
            HVAC_RUNmode6 = QObject::trUtf8("停  止");
        }
        if(AC6CT_Auto_B1)
        {
            HVAC_RUNmode6 = QObject::trUtf8("自   动");
        }
        if(AC6CT_HalfCooling_B1)
        {
            HVAC_RUNmode6 = QObject::trUtf8("半   冷");
        }
        if(AC6CT_FullCooling_B1)
        {
            HVAC_RUNmode6 = QObject::trUtf8("全   冷");
        }
        if(AC6CT_HalfHeating_B1)
        {
            HVAC_RUNmode6 = QObject::trUtf8("半   暖");
        }
        if(AC6CT_FullHeating_B1)
        {
            HVAC_RUNmode6 = QObject::trUtf8("全   暖");
        }
        if(AC6CT_Ventilation_B1)
        {
            HVAC_RUNmode6 = QObject::trUtf8("通  风");
        }
        if(AC6CT_EVentilation_B1)
        {
            HVAC_RUNmode6 = QObject::trUtf8("紧急通风");
        }
        if(AC6CT_FireMode_B1)
        {
            HVAC_RUNmode6 = QObject::trUtf8("火灾模式");
        }
    }
    else
    {
        HVAC_mode6=QObject::trUtf8("本控");
        HVAC_RUNmode6 = QObject::trUtf8("");
    }
    SetHVAC_mode(ID_CHVACSET_LABEL_CONTROLMODELCAR1,HVAC_mode1);
    SetHVAC_mode(ID_CHVACSET_LABEL_CONTROLMODELCAR2,HVAC_mode2);
    SetHVAC_mode(ID_CHVACSET_LABEL_CONTROLMODELCAR3,HVAC_mode3);
    SetHVAC_mode(ID_CHVACSET_LABEL_CONTROLMODELCAR4,HVAC_mode4);
    SetHVAC_mode(ID_CHVACSET_LABEL_CONTROLMODELCAR5,HVAC_mode5);
    SetHVAC_mode(ID_CHVACSET_LABEL_CONTROLMODELCAR6,HVAC_mode6);

    SetHVAC_mode(ID_CHVACSET_LABEL_CAR1RUNMODEL,HVAC_RUNmode1);
    SetHVAC_mode(ID_CHVACSET_LABEL_CAR2RUNMODEL,HVAC_RUNmode2);
    SetHVAC_mode(ID_CHVACSET_LABEL_CAR3RUNMODEL,HVAC_RUNmode3);
    SetHVAC_mode(ID_CHVACSET_LABEL_CAR4RUNMODEL,HVAC_RUNmode4);
    SetHVAC_mode(ID_CHVACSET_LABEL_CAR5RUNMODEL,HVAC_RUNmode5);
    SetHVAC_mode(ID_CHVACSET_LABEL_CAR6RUNMODEL,HVAC_RUNmode6);
}

//运行模式
void CHVACSettingPage::UpdateHVAC_RUNmode()
{   
    if (CTHM_HVAC1_Online_B1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_CAR1RUNMODEL))->SetCtrlBKColor(Qt::black);
        if(AC1CT_OFF_B1==1)
        {
            HVAC_RUNmode1 = QObject::trUtf8("停  止");
        }
        if(AC1CT_Auto_B1==1)
        {
            HVAC_RUNmode1 = QObject::trUtf8("自   动");
        }
        if(AC1CT_HalfCooling_B1==1)
        {
            HVAC_RUNmode1 = QObject::trUtf8("半   冷");
        }
        if(AC1CT_FullCooling_B1==1)
        {
            HVAC_RUNmode1 = QObject::trUtf8("全   冷");
        }
        if(AC1CT_HalfHeating_B1==1)
        {
            HVAC_RUNmode1 = QObject::trUtf8("半   暖");
        }
        if(AC1CT_FullHeating_B1==1)
        {
            HVAC_RUNmode1 = QObject::trUtf8("全   暖");
        }
        if(AC1CT_Ventilation_B1==1)
        {
            HVAC_RUNmode1 = QObject::trUtf8("通  风");
        }
        if(AC1CT_EVentilation_B1==1)
        {
            HVAC_RUNmode1 = QObject::trUtf8("紧急通风");
        }
        if(AC1CT_FireMode_B1)
        {
            HVAC_RUNmode1 = QObject::trUtf8("火灾模式");
        }
    }else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_CAR1RUNMODEL))->SetCtrlBKColor(Qt::white);
    }

    if (CTHM_HVAC2_Online_B1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_CAR2RUNMODEL))->SetCtrlBKColor(Qt::black);
        if(AC2CT_OFF_B1==1)
        {
            HVAC_RUNmode2 = QObject::trUtf8("停  止");
        }
        if(AC2CT_Auto_B1==1)
        {
            HVAC_RUNmode2 = QObject::trUtf8("自   动");
        }
        if(AC2CT_HalfCooling_B1==1)
        {
            HVAC_RUNmode2 = QObject::trUtf8("半   冷");
        }
        if(AC2CT_FullCooling_B1==1)
        {
            HVAC_RUNmode2 = QObject::trUtf8("全   冷");
        }
        if(AC2CT_HalfHeating_B1==1)
        {
            HVAC_RUNmode2 = QObject::trUtf8("半   暖");
        }
        if(AC2CT_FullHeating_B1==1)
        {
            HVAC_RUNmode2 = QObject::trUtf8("全   暖");
        }
        if(AC2CT_Ventilation_B1==1)
        {
            HVAC_RUNmode2 = QObject::trUtf8("通  风");
        }
        if(AC2CT_EVentilation_B1==1)
        {
            HVAC_RUNmode2 = QObject::trUtf8("紧急通风");
        }
        if(AC2CT_FireMode_B1)
        {
            HVAC_RUNmode2 = QObject::trUtf8("火灾模式");
        }
    }else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_CAR2RUNMODEL))->SetCtrlBKColor(Qt::white);
    }

    if (CTHM_HVAC3_Online_B1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_CAR3RUNMODEL))->SetCtrlBKColor(Qt::black);
        if(AC3CT_OFF_B1==1)
        {
            HVAC_RUNmode3 = QObject::trUtf8("停  止");
        }
        if(AC3CT_Auto_B1==1)
        {
            HVAC_RUNmode3 = QObject::trUtf8("自   动");
        }
        if(AC3CT_HalfCooling_B1==1)
        {
            HVAC_RUNmode3 = QObject::trUtf8("半   冷");
        }
        if(AC3CT_FullCooling_B1==1)
        {
            HVAC_RUNmode3 = QObject::trUtf8("全   冷");
        }
        if(AC3CT_HalfHeating_B1==1)
        {
            HVAC_RUNmode3 = QObject::trUtf8("半   暖");
        }
        if(AC3CT_FullHeating_B1==1)
        {
            HVAC_RUNmode3 = QObject::trUtf8("全   暖");
        }
        if(AC3CT_Ventilation_B1==1)
        {
            HVAC_RUNmode3 = QObject::trUtf8("通  风");
        }
        if(AC3CT_EVentilation_B1==1)
        {
            HVAC_RUNmode3 = QObject::trUtf8("紧急通风");
        }
        if(AC3CT_FireMode_B1)
        {
            HVAC_RUNmode3 = QObject::trUtf8("火灾模式");
        }
    }else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_CAR3RUNMODEL))->SetCtrlBKColor(Qt::white);
    }

    if (CTHM_HVAC4_Online_B1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_CAR4RUNMODEL))->SetCtrlBKColor(Qt::black);
        if(AC4CT_OFF_B1==1)
        {
            HVAC_RUNmode4 = QObject::trUtf8("停  止");
        }
        if(AC4CT_Auto_B1==1)
        {
            HVAC_RUNmode4 = QObject::trUtf8("自   动");
        }
        if(AC4CT_HalfCooling_B1==1)
        {
            HVAC_RUNmode4 = QObject::trUtf8("半   冷");
        }
        if(AC4CT_FullCooling_B1==1)
        {
            HVAC_RUNmode4 = QObject::trUtf8("全   冷");
        }
        if(AC4CT_HalfHeating_B1==1)
        {
            HVAC_RUNmode4 = QObject::trUtf8("半   暖");
        }
        if(AC4CT_FullHeating_B1==1)
        {
            HVAC_RUNmode4 = QObject::trUtf8("全   暖");
        }
        if(AC4CT_Ventilation_B1==1)
        {
            HVAC_RUNmode4 = QObject::trUtf8("通  风");
        }
        if(AC4CT_EVentilation_B1==1)
        {
            HVAC_RUNmode4 = QObject::trUtf8("紧急通风");
        }
        if(AC4CT_FireMode_B1)
        {
            HVAC_RUNmode4 = QObject::trUtf8("火灾模式");
        }
    }else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_CAR4RUNMODEL))->SetCtrlBKColor(Qt::white);
    }

    if (CTHM_HVAC5_Online_B1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_CAR5RUNMODEL))->SetCtrlBKColor(Qt::black);
        if(AC5CT_OFF_B1==1)
        {
            HVAC_RUNmode5 = QObject::trUtf8("停  止");
        }
        if(AC5CT_Auto_B1==1)
        {
            HVAC_RUNmode5 = QObject::trUtf8("自   动");
        }
        if(AC5CT_HalfCooling_B1==1)
        {
            HVAC_RUNmode5 = QObject::trUtf8("半   冷");
        }
        if(AC5CT_FullCooling_B1==1)
        {
            HVAC_RUNmode5 = QObject::trUtf8("全   冷");
        }
        if(AC5CT_HalfHeating_B1==1)
        {
            HVAC_RUNmode5 = QObject::trUtf8("半   暖");
        }
        if(AC5CT_FullHeating_B1==1)
        {
            HVAC_RUNmode5 = QObject::trUtf8("全   暖");
        }
        if(AC5CT_Ventilation_B1==1)
        {
            HVAC_RUNmode5 = QObject::trUtf8("通  风");
        }
        if(AC5CT_EVentilation_B1==1)
        {
            HVAC_RUNmode5 = QObject::trUtf8("紧急通风");
        }
        if(AC5CT_FireMode_B1)
        {
            HVAC_RUNmode5 = QObject::trUtf8("火灾模式");
        }
    }else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_CAR5RUNMODEL))->SetCtrlBKColor(Qt::white);
    }

    if (CTHM_HVAC6_Online_B1)
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_CAR6RUNMODEL))->SetCtrlBKColor(Qt::black);
        if(AC6CT_OFF_B1==1)
        {
            HVAC_RUNmode6 = QObject::trUtf8("停  止");
        }
        if(AC6CT_Auto_B1==1)
        {
            HVAC_RUNmode6 = QObject::trUtf8("自   动");
        }
        if(AC6CT_HalfCooling_B1==1)
        {
            HVAC_RUNmode6 = QObject::trUtf8("半   冷");
        }
        if(AC6CT_FullCooling_B1==1)
        {
            HVAC_RUNmode6 = QObject::trUtf8("全   冷");
        }
        if(AC6CT_HalfHeating_B1==1)
        {
            HVAC_RUNmode6 = QObject::trUtf8("半   暖");
        }
        if(AC6CT_FullHeating_B1==1)
        {
            HVAC_RUNmode6 = QObject::trUtf8("全   暖");
        }
        if(AC6CT_Ventilation_B1==1)
        {
            HVAC_RUNmode6 = QObject::trUtf8("通  风");
        }
        if(AC6CT_EVentilation_B1==1)
        {
            HVAC_RUNmode6 = QObject::trUtf8("紧急通风");
        }
        if(AC6CT_FireMode_B1)
        {
            HVAC_RUNmode6 = QObject::trUtf8("火灾模式");
        }
    }else
    {
        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_CAR6RUNMODEL))->SetCtrlBKColor(Qt::white);
    }



}

void CHVACSettingPage::SetHVAC_mode(int lableId, QString modeValue)
{
    ((CLabel *)GetDlgItem(lableId))->SetCtrlText(modeValue);

}

//压缩机
void CHVACSettingPage::UpdateHVAC_Compressor()
{
    if(AC1CT_CompWorkStatus11_B1) {car1_Compressor1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS1))->SetTxtColor(Qt::black);} else{car1_Compressor1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS1))->SetTxtColor(Qt::white);}
    if(AC1CT_CompWorkStatus12_B1) {car1_Compressor2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS2))->SetTxtColor(Qt::black);} else{car1_Compressor2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS2))->SetTxtColor(Qt::white);}
    if(AC1CT_CompWorkStatus21_B1) {car1_Compressor3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS3))->SetTxtColor(Qt::black);} else{car1_Compressor3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS3))->SetTxtColor(Qt::white);}
    if(AC1CT_CompWorkStatus22_B1) {car1_Compressor4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS4))->SetTxtColor(Qt::black);} else{car1_Compressor4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COMPRESS4))->SetTxtColor(Qt::white);}
    if(AC2CT_CompWorkStatus11_B1) {car2_Compressor1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS1))->SetTxtColor(Qt::black);} else{car2_Compressor1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS1))->SetTxtColor(Qt::white);}
    if(AC2CT_CompWorkStatus12_B1) {car2_Compressor2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS2))->SetTxtColor(Qt::black);} else{car2_Compressor2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS2))->SetTxtColor(Qt::white);}
    if(AC2CT_CompWorkStatus21_B1) {car2_Compressor3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS3))->SetTxtColor(Qt::black);} else{car2_Compressor3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS3))->SetTxtColor(Qt::white);}
    if(AC2CT_CompWorkStatus22_B1) {car2_Compressor4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS4))->SetTxtColor(Qt::black);} else{car2_Compressor4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COMPRESS4))->SetTxtColor(Qt::white);}
    if(AC3CT_CompWorkStatus11_B1) {car3_Compressor1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS1))->SetTxtColor(Qt::black);} else{car3_Compressor1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS1))->SetTxtColor(Qt::white);}
    if(AC3CT_CompWorkStatus12_B1) {car3_Compressor2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS2))->SetTxtColor(Qt::black);} else{car3_Compressor2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS2))->SetTxtColor(Qt::white);}
    if(AC3CT_CompWorkStatus21_B1) {car3_Compressor3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS3))->SetTxtColor(Qt::black);} else{car3_Compressor3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS3))->SetTxtColor(Qt::white);}
    if(AC3CT_CompWorkStatus22_B1) {car3_Compressor4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS4))->SetTxtColor(Qt::black);} else{car3_Compressor4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COMPRESS4))->SetTxtColor(Qt::white);}
    if(AC4CT_CompWorkStatus11_B1) {car4_Compressor1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS1))->SetTxtColor(Qt::black);} else{car4_Compressor1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS1))->SetTxtColor(Qt::white);}
    if(AC4CT_CompWorkStatus12_B1) {car4_Compressor2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS2))->SetTxtColor(Qt::black);} else{car4_Compressor2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS2))->SetTxtColor(Qt::white);}
    if(AC4CT_CompWorkStatus21_B1) {car4_Compressor3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS3))->SetTxtColor(Qt::black);} else{car4_Compressor3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS3))->SetTxtColor(Qt::white);}
    if(AC4CT_CompWorkStatus22_B1) {car4_Compressor4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS4))->SetTxtColor(Qt::black);} else{car4_Compressor4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COMPRESS4))->SetTxtColor(Qt::white);}
    if(AC5CT_CompWorkStatus11_B1) {car5_Compressor1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COMPRESS1))->SetTxtColor(Qt::black);} else{car5_Compressor1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COMPRESS1))->SetTxtColor(Qt::white);}
    if(AC5CT_CompWorkStatus12_B1) {car5_Compressor2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COMPRESS2))->SetTxtColor(Qt::black);} else{car5_Compressor2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COMPRESS2))->SetTxtColor(Qt::white);}
    if(AC5CT_CompWorkStatus21_B1) {car5_Compressor3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COMPRESS3))->SetTxtColor(Qt::black);} else{car5_Compressor3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COMPRESS3))->SetTxtColor(Qt::white);}
    if(AC5CT_CompWorkStatus22_B1) {car5_Compressor4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COMPRESS4))->SetTxtColor(Qt::black);} else{car5_Compressor4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COMPRESS4))->SetTxtColor(Qt::white);}
    if(AC6CT_CompWorkStatus11_B1) {car6_Compressor1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COMPRESS1))->SetTxtColor(Qt::black);} else{car6_Compressor1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COMPRESS1))->SetTxtColor(Qt::white);}
    if(AC6CT_CompWorkStatus12_B1) {car6_Compressor2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COMPRESS2))->SetTxtColor(Qt::black);} else{car6_Compressor2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COMPRESS2))->SetTxtColor(Qt::white);}
    if(AC6CT_CompWorkStatus21_B1) {car6_Compressor3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COMPRESS3))->SetTxtColor(Qt::black);} else{car6_Compressor3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COMPRESS3))->SetTxtColor(Qt::white);}
    if(AC6CT_CompWorkStatus22_B1) {car6_Compressor4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COMPRESS4))->SetTxtColor(Qt::black);} else{car6_Compressor4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COMPRESS4))->SetTxtColor(Qt::white);}

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1COMPRESS1, car1_Compressor1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1COMPRESS2, car1_Compressor2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1COMPRESS3, car1_Compressor3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1COMPRESS4, car1_Compressor4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2COMPRESS1, car2_Compressor1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2COMPRESS2, car2_Compressor2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2COMPRESS3, car2_Compressor3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2COMPRESS4, car2_Compressor4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3COMPRESS1, car3_Compressor1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3COMPRESS2, car3_Compressor2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3COMPRESS3, car3_Compressor3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3COMPRESS4, car3_Compressor4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4COMPRESS1, car4_Compressor1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4COMPRESS2, car4_Compressor2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4COMPRESS3, car4_Compressor3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4COMPRESS4, car4_Compressor4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5COMPRESS1, car5_Compressor1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5COMPRESS2, car5_Compressor2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5COMPRESS3, car5_Compressor3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5COMPRESS4, car5_Compressor4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6COMPRESS1, car6_Compressor1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6COMPRESS2, car6_Compressor2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6COMPRESS3, car6_Compressor3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6COMPRESS4, car6_Compressor4);


}
//冷凝机
void CHVACSettingPage::UpdateHVAC_Condenser()
{
    if(AC1CT_CFanWorkStatus11_B1) {car1_Condenser1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD1))->SetTxtColor(Qt::black);} else{car1_Condenser1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD1))->SetTxtColor(Qt::white);}
    if(AC1CT_CFanWorkStatus12_B1) {car1_Condenser2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD2))->SetTxtColor(Qt::black);} else{car1_Condenser2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD2))->SetTxtColor(Qt::white);}
    if(AC1CT_CFanWorkStatus21_B1) {car1_Condenser3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD3))->SetTxtColor(Qt::black);} else{car1_Condenser3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD3))->SetTxtColor(Qt::white);}
    if(AC1CT_CFanWorkStatus22_B1) {car1_Condenser4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD4))->SetTxtColor(Qt::black);} else{car1_Condenser4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1COLD4))->SetTxtColor(Qt::white);}
    if(AC2CT_CFanWorkStatus11_B1) {car2_Condenser1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD1))->SetTxtColor(Qt::black);} else{car2_Condenser1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD1))->SetTxtColor(Qt::white);}
    if(AC2CT_CFanWorkStatus12_B1) {car2_Condenser2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD2))->SetTxtColor(Qt::black);} else{car2_Condenser2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD2))->SetTxtColor(Qt::white);}
    if(AC2CT_CFanWorkStatus21_B1) {car2_Condenser3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD3))->SetTxtColor(Qt::black);} else{car2_Condenser3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD3))->SetTxtColor(Qt::white);}
    if(AC2CT_CFanWorkStatus22_B1) {car2_Condenser4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD4))->SetTxtColor(Qt::black);} else{car2_Condenser4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2COLD4))->SetTxtColor(Qt::white);}
    if(AC3CT_CFanWorkStatus11_B1) {car3_Condenser1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD1))->SetTxtColor(Qt::black);} else{car3_Condenser1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD1))->SetTxtColor(Qt::white);}
    if(AC3CT_CFanWorkStatus12_B1) {car3_Condenser2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD2))->SetTxtColor(Qt::black);} else{car3_Condenser2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD2))->SetTxtColor(Qt::white);}
    if(AC3CT_CFanWorkStatus21_B1) {car3_Condenser3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD3))->SetTxtColor(Qt::black);} else{car3_Condenser3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD3))->SetTxtColor(Qt::white);}
    if(AC3CT_CFanWorkStatus22_B1) {car3_Condenser4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD4))->SetTxtColor(Qt::black);} else{car3_Condenser4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3COLD4))->SetTxtColor(Qt::white);}
    if(AC4CT_CFanWorkStatus11_B1) {car4_Condenser1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD1))->SetTxtColor(Qt::black);} else{car4_Condenser1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD1))->SetTxtColor(Qt::white);}
    if(AC4CT_CFanWorkStatus12_B1) {car4_Condenser2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD2))->SetTxtColor(Qt::black);} else{car4_Condenser2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD2))->SetTxtColor(Qt::white);}
    if(AC4CT_CFanWorkStatus21_B1) {car4_Condenser3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD3))->SetTxtColor(Qt::black);} else{car4_Condenser3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD3))->SetTxtColor(Qt::white);}
    if(AC4CT_CFanWorkStatus22_B1) {car4_Condenser4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD4))->SetTxtColor(Qt::black);} else{car4_Condenser4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4COLD4))->SetTxtColor(Qt::white);}
    if(AC5CT_CFanWorkStatus11_B1) {car5_Condenser1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COLD1))->SetTxtColor(Qt::black);} else{car5_Condenser1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COLD1))->SetTxtColor(Qt::white);}
    if(AC5CT_CFanWorkStatus12_B1) {car5_Condenser2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COLD2))->SetTxtColor(Qt::black);} else{car5_Condenser2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COLD2))->SetTxtColor(Qt::white);}
    if(AC5CT_CFanWorkStatus21_B1) {car5_Condenser3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COLD3))->SetTxtColor(Qt::black);} else{car5_Condenser3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COLD3))->SetTxtColor(Qt::white);}
    if(AC5CT_CFanWorkStatus22_B1) {car5_Condenser4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COLD4))->SetTxtColor(Qt::black);} else{car5_Condenser4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5COLD4))->SetTxtColor(Qt::white);}
    if(AC6CT_CFanWorkStatus11_B1) {car6_Condenser1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COLD1))->SetTxtColor(Qt::black);} else{car6_Condenser1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COLD1))->SetTxtColor(Qt::white);}
    if(AC6CT_CFanWorkStatus12_B1) {car6_Condenser2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COLD2))->SetTxtColor(Qt::black);} else{car6_Condenser2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COLD2))->SetTxtColor(Qt::white);}
    if(AC6CT_CFanWorkStatus21_B1) {car6_Condenser3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COLD3))->SetTxtColor(Qt::black);} else{car6_Condenser3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COLD3))->SetTxtColor(Qt::white);}
    if(AC6CT_CFanWorkStatus22_B1) {car6_Condenser4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COLD4))->SetTxtColor(Qt::black);} else{car6_Condenser4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6COLD4))->SetTxtColor(Qt::white);}





    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1COLD1, car1_Condenser1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1COLD2, car1_Condenser2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1COLD3, car1_Condenser3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1COLD4, car1_Condenser4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2COLD1, car2_Condenser1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2COLD2, car2_Condenser2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2COLD3, car2_Condenser3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2COLD4, car2_Condenser4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3COLD1, car3_Condenser1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3COLD2, car3_Condenser2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3COLD3, car3_Condenser3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3COLD4, car3_Condenser4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4COLD1, car4_Condenser1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4COLD2, car4_Condenser2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4COLD3, car4_Condenser3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4COLD4, car4_Condenser4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5COLD1, car5_Condenser1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5COLD2, car5_Condenser2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5COLD3, car5_Condenser3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5COLD4, car5_Condenser4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6COLD1, car6_Condenser1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6COLD2, car6_Condenser2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6COLD3, car6_Condenser3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6COLD4, car6_Condenser4);


}
//通风机
void CHVACSettingPage::UpdateHVAC_EvaporatorFan()
{
    if(AC1CT_EFanWorkStatus11_B1) {car1_EvaporatorFan1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND1))->SetTxtColor(Qt::black);} else{car1_EvaporatorFan1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND1))->SetTxtColor(Qt::white);}
    if(AC1CT_EFanWorkStatus12_B1) {car1_EvaporatorFan2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND2))->SetTxtColor(Qt::black);} else{car1_EvaporatorFan2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND2))->SetTxtColor(Qt::white);}
    if(AC1CT_EFanWorkStatus21_B1) {car1_EvaporatorFan3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND3))->SetTxtColor(Qt::black);} else{car1_EvaporatorFan3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND3))->SetTxtColor(Qt::white);}
    if(AC1CT_EFanWorkStatus22_B1) {car1_EvaporatorFan4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND4))->SetTxtColor(Qt::black);} else{car1_EvaporatorFan4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1WIND4))->SetTxtColor(Qt::white);}
    if(AC2CT_EFanWorkStatus11_B1) {car2_EvaporatorFan1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND1))->SetTxtColor(Qt::black);} else{car2_EvaporatorFan1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND1))->SetTxtColor(Qt::white);}
    if(AC2CT_EFanWorkStatus12_B1) {car2_EvaporatorFan2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND2))->SetTxtColor(Qt::black);} else{car2_EvaporatorFan2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND2))->SetTxtColor(Qt::white);}
    if(AC2CT_EFanWorkStatus21_B1) {car2_EvaporatorFan3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND3))->SetTxtColor(Qt::black);} else{car2_EvaporatorFan3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND3))->SetTxtColor(Qt::white);}
    if(AC2CT_EFanWorkStatus22_B1) {car2_EvaporatorFan4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND4))->SetTxtColor(Qt::black);} else{car2_EvaporatorFan4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2WIND4))->SetTxtColor(Qt::white);}
    if(AC3CT_EFanWorkStatus11_B1) {car3_EvaporatorFan1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND1))->SetTxtColor(Qt::black);} else{car3_EvaporatorFan1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND1))->SetTxtColor(Qt::white);}
    if(AC3CT_EFanWorkStatus12_B1) {car3_EvaporatorFan2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND2))->SetTxtColor(Qt::black);} else{car3_EvaporatorFan2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND2))->SetTxtColor(Qt::white);}
    if(AC3CT_EFanWorkStatus21_B1) {car3_EvaporatorFan3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND3))->SetTxtColor(Qt::black);} else{car3_EvaporatorFan3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND3))->SetTxtColor(Qt::white);}
    if(AC3CT_EFanWorkStatus22_B1) {car3_EvaporatorFan4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND4))->SetTxtColor(Qt::black);} else{car3_EvaporatorFan4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3WIND4))->SetTxtColor(Qt::white);}
    if(AC4CT_EFanWorkStatus11_B1) {car4_EvaporatorFan1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND1))->SetTxtColor(Qt::black);} else{car4_EvaporatorFan1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND1))->SetTxtColor(Qt::white);}
    if(AC4CT_EFanWorkStatus12_B1) {car4_EvaporatorFan2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND2))->SetTxtColor(Qt::black);} else{car4_EvaporatorFan2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND2))->SetTxtColor(Qt::white);}
    if(AC4CT_EFanWorkStatus21_B1) {car4_EvaporatorFan3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND3))->SetTxtColor(Qt::black);} else{car4_EvaporatorFan3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND3))->SetTxtColor(Qt::white);}
    if(AC4CT_EFanWorkStatus22_B1) {car4_EvaporatorFan4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND4))->SetTxtColor(Qt::black);} else{car4_EvaporatorFan4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4WIND4))->SetTxtColor(Qt::white);}
    if(AC5CT_EFanWorkStatus11_B1) {car5_EvaporatorFan1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5WIND1))->SetTxtColor(Qt::black);} else{car5_EvaporatorFan1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5WIND1))->SetTxtColor(Qt::white);}
    if(AC5CT_EFanWorkStatus12_B1) {car5_EvaporatorFan2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5WIND2))->SetTxtColor(Qt::black);} else{car5_EvaporatorFan2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5WIND2))->SetTxtColor(Qt::white);}
    if(AC5CT_EFanWorkStatus21_B1) {car5_EvaporatorFan3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5WIND3))->SetTxtColor(Qt::black);} else{car5_EvaporatorFan3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5WIND3))->SetTxtColor(Qt::white);}
    if(AC5CT_EFanWorkStatus22_B1) {car5_EvaporatorFan4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5WIND4))->SetTxtColor(Qt::black);} else{car5_EvaporatorFan4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5WIND4))->SetTxtColor(Qt::white);}
    if(AC6CT_EFanWorkStatus11_B1) {car6_EvaporatorFan1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6WIND1))->SetTxtColor(Qt::black);} else{car6_EvaporatorFan1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6WIND1))->SetTxtColor(Qt::white);}
    if(AC6CT_EFanWorkStatus12_B1) {car6_EvaporatorFan2=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6WIND2))->SetTxtColor(Qt::black);} else{car6_EvaporatorFan2=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6WIND2))->SetTxtColor(Qt::white);}
    if(AC6CT_EFanWorkStatus21_B1) {car6_EvaporatorFan3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6WIND3))->SetTxtColor(Qt::black);} else{car6_EvaporatorFan3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6WIND3))->SetTxtColor(Qt::white);}
    if(AC6CT_EFanWorkStatus22_B1) {car6_EvaporatorFan4=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6WIND4))->SetTxtColor(Qt::black);} else{car6_EvaporatorFan4=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6WIND4))->SetTxtColor(Qt::white);}





    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1WIND1, car1_EvaporatorFan1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1WIND2, car1_EvaporatorFan2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1WIND3, car1_EvaporatorFan3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1WIND4, car1_EvaporatorFan4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2WIND1, car2_EvaporatorFan1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2WIND2, car2_EvaporatorFan2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2WIND3, car2_EvaporatorFan3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2WIND4, car2_EvaporatorFan4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3WIND1, car3_EvaporatorFan1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3WIND2, car3_EvaporatorFan2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3WIND3, car3_EvaporatorFan3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3WIND4, car3_EvaporatorFan4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4WIND1, car4_EvaporatorFan1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4WIND2, car4_EvaporatorFan2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4WIND3, car4_EvaporatorFan3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4WIND4, car4_EvaporatorFan4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5WIND1, car5_EvaporatorFan1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5WIND2, car5_EvaporatorFan2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5WIND3, car5_EvaporatorFan3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5WIND4, car5_EvaporatorFan4);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6WIND1, car6_EvaporatorFan1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6WIND2, car6_EvaporatorFan2);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6WIND3, car6_EvaporatorFan3);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6WIND4, car6_EvaporatorFan4);


}
//预热器
void CHVACSettingPage::UpdateHVAC_HotElectricity()
{
    if(AC1CT_SHeaterWorkStatus1_B1) {car1_HotElectricity1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1HEAT1))->SetTxtColor(Qt::black);} else{car1_HotElectricity1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1HEAT1))->SetTxtColor(Qt::white);}
    if(AC1CT_SHeaterWorkStatus2_B1) {car1_HotElectricity3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1HEAT3))->SetTxtColor(Qt::black);} else{car1_HotElectricity3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1HEAT3))->SetTxtColor(Qt::white);}
    if(AC2CT_SHeaterWorkStatus1_B1) {car2_HotElectricity1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2HEAT1))->SetTxtColor(Qt::black);} else{car2_HotElectricity1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2HEAT1))->SetTxtColor(Qt::white);}
    if(AC2CT_SHeaterWorkStatus2_B1) {car2_HotElectricity3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2HEAT3))->SetTxtColor(Qt::black);} else{car2_HotElectricity3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2HEAT3))->SetTxtColor(Qt::white);}
    if(AC3CT_SHeaterWorkStatus1_B1) {car3_HotElectricity1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3HEAT1))->SetTxtColor(Qt::black);} else{car3_HotElectricity1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3HEAT1))->SetTxtColor(Qt::white);}
    if(AC3CT_SHeaterWorkStatus2_B1) {car3_HotElectricity3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3HEAT3))->SetTxtColor(Qt::black);} else{car3_HotElectricity3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3HEAT3))->SetTxtColor(Qt::white);}
    if(AC4CT_SHeaterWorkStatus1_B1) {car4_HotElectricity1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4HEAT1))->SetTxtColor(Qt::black);} else{car4_HotElectricity1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4HEAT1))->SetTxtColor(Qt::white);}
    if(AC4CT_SHeaterWorkStatus2_B1) {car4_HotElectricity3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4HEAT3))->SetTxtColor(Qt::black);} else{car4_HotElectricity3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4HEAT3))->SetTxtColor(Qt::white);}
    if(AC5CT_SHeaterWorkStatus1_B1) {car5_HotElectricity1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5HEAT1))->SetTxtColor(Qt::black);} else{car5_HotElectricity1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5HEAT1))->SetTxtColor(Qt::white);}
    if(AC5CT_SHeaterWorkStatus2_B1) {car5_HotElectricity3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5HEAT3))->SetTxtColor(Qt::black);} else{car5_HotElectricity3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5HEAT3))->SetTxtColor(Qt::white);}
    if(AC6CT_SHeaterWorkStatus1_B1) {car6_HotElectricity1=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6HEAT1))->SetTxtColor(Qt::black);} else{car6_HotElectricity1=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6HEAT1))->SetTxtColor(Qt::white);}
    if(AC6CT_SHeaterWorkStatus2_B1) {car6_HotElectricity3=1;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6HEAT3))->SetTxtColor(Qt::black);} else{car6_HotElectricity3=0;((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6HEAT3))->SetTxtColor(Qt::white);}

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1HEAT1, car1_HotElectricity1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1HEAT3, car1_HotElectricity3);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2HEAT1, car2_HotElectricity1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2HEAT3, car2_HotElectricity3);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3HEAT1, car3_HotElectricity1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3HEAT3, car3_HotElectricity3);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4HEAT1, car4_HotElectricity1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4HEAT3, car4_HotElectricity3);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5HEAT1, car5_HotElectricity1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5HEAT3, car5_HotElectricity3);

    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6HEAT1, car6_HotElectricity1);
    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6HEAT3, car6_HotElectricity3);


}

void CHVACSettingPage::SetHVACStateColor(int id, int colorVal)
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
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }

    return;
}

void CHVACSettingPage::UpdateHVACError()
{

    car1_HVAC_error1=Bit( hvac_status_data20, 16 )||(Bit( hvac_status_data20, 12 ))||(Bit( hvac_status_data20, 8 ))||(Bit( hvac_status_data20, 4 ))||(Bit( hvac_status_data28, 16 ))||(Bit( hvac_status_data28, 12 ))||(Bit( hvac_status_data28, 8 ));
    car1_HVAC_error2=Bit( hvac_status_data20, 15 )||(Bit( hvac_status_data20, 11 ))||(Bit( hvac_status_data20, 7 ))||(Bit( hvac_status_data20, 3 ))||(Bit( hvac_status_data28, 15 ))||(Bit( hvac_status_data28, 11 ))||(Bit( hvac_status_data28, 7 ));
    car1_HVAC_error3=Bit( hvac_status_data20, 14 )||(Bit( hvac_status_data20, 10 ))||(Bit( hvac_status_data20, 6 ))||(Bit( hvac_status_data20, 2 ))||(Bit( hvac_status_data28, 14))||(Bit( hvac_status_data28, 10 ))||(Bit( hvac_status_data28, 6 ));
    car1_HVAC_error4=Bit( hvac_status_data20, 13)||(Bit( hvac_status_data20, 9 ))||(Bit( hvac_status_data20, 5 ))||(Bit( hvac_status_data20, 1 ))||(Bit( hvac_status_data28, 13))||(Bit( hvac_status_data28, 9 ))||(Bit( hvac_status_data28, 5 ));

    car2_HVAC_error1=Bit( hvac_status_data21, 16 )||(Bit( hvac_status_data21, 12 ))||(Bit( hvac_status_data21, 8 ))||(Bit( hvac_status_data21, 4 ))||(Bit( hvac_status_data29, 16 ))||(Bit( hvac_status_data29, 12 ))||(Bit( hvac_status_data29, 8 ));
    car2_HVAC_error2=Bit( hvac_status_data21, 15 )||(Bit( hvac_status_data21, 11 ))||(Bit( hvac_status_data21, 7 ))||(Bit( hvac_status_data21, 3 ))||(Bit( hvac_status_data29, 15 ))||(Bit( hvac_status_data29, 11 ))||(Bit( hvac_status_data29, 7 ));
    car2_HVAC_error3=Bit( hvac_status_data21, 14 )||(Bit( hvac_status_data21, 10 ))||(Bit( hvac_status_data21, 6 ))||(Bit( hvac_status_data21, 2 ))||(Bit( hvac_status_data29, 14))||(Bit( hvac_status_data29, 10 ))||(Bit( hvac_status_data29, 6 ));
    car2_HVAC_error4=Bit( hvac_status_data21, 13)||(Bit( hvac_status_data21, 9 ))||(Bit( hvac_status_data21, 5 ))||(Bit( hvac_status_data21, 1 ))||(Bit( hvac_status_data29, 13))||(Bit( hvac_status_data29, 9 ))||(Bit( hvac_status_data29, 5 ));

    car3_HVAC_error1=Bit( hvac_status_data22, 16 )||(Bit( hvac_status_data22, 12 ))||(Bit( hvac_status_data22, 8 ))||(Bit( hvac_status_data22, 4 ))||(Bit( hvac_status_data30, 16 ))||(Bit( hvac_status_data30, 12 ))||(Bit( hvac_status_data30, 8 ));
    car3_HVAC_error2=Bit( hvac_status_data22, 15 )||(Bit( hvac_status_data22, 11 ))||(Bit( hvac_status_data22, 7 ))||(Bit( hvac_status_data22, 3 ))||(Bit( hvac_status_data30, 15 ))||(Bit( hvac_status_data30, 11 ))||(Bit( hvac_status_data30, 7 ));
    car3_HVAC_error3=Bit( hvac_status_data22, 14 )||(Bit( hvac_status_data22, 10 ))||(Bit( hvac_status_data22, 6 ))||(Bit( hvac_status_data22, 2 ))||(Bit( hvac_status_data30, 14))||(Bit( hvac_status_data30, 10 ))||(Bit( hvac_status_data30, 6 ));
    car3_HVAC_error4=Bit( hvac_status_data22, 13)||(Bit( hvac_status_data22, 9 ))||(Bit( hvac_status_data22, 5 ))||(Bit( hvac_status_data22, 1 ))||(Bit( hvac_status_data30, 13))||(Bit( hvac_status_data30, 9 ))||(Bit( hvac_status_data30, 5 ));

    car4_HVAC_error1=Bit( hvac_status_data23, 16 )||(Bit( hvac_status_data23, 12 ))||(Bit( hvac_status_data23, 8 ))||(Bit( hvac_status_data23, 4 ))||(Bit( hvac_status_data31, 16 ))||(Bit( hvac_status_data31, 12 ))||(Bit( hvac_status_data31, 8 ));
    car4_HVAC_error2=Bit( hvac_status_data23, 15 )||(Bit( hvac_status_data23, 11 ))||(Bit( hvac_status_data23, 7 ))||(Bit( hvac_status_data23, 3 ))||(Bit( hvac_status_data31, 15 ))||(Bit( hvac_status_data31, 11 ))||(Bit( hvac_status_data31, 7 ));
    car4_HVAC_error3=Bit( hvac_status_data23, 14 )||(Bit( hvac_status_data23, 10 ))||(Bit( hvac_status_data23, 6 ))||(Bit( hvac_status_data23, 2 ))||(Bit( hvac_status_data31, 14))||(Bit( hvac_status_data31, 10 ))||(Bit( hvac_status_data31, 6 ));
    car4_HVAC_error4=Bit( hvac_status_data23, 13)||(Bit( hvac_status_data23, 9 ))||(Bit( hvac_status_data23, 5 ))||(Bit( hvac_status_data23, 1 ))||(Bit( hvac_status_data31, 13))||(Bit( hvac_status_data31, 9 ))||(Bit( hvac_status_data31, 5 ));

    car5_HVAC_error1=Bit( hvac_status_data24, 16 )||(Bit( hvac_status_data24, 12 ))||(Bit( hvac_status_data24, 8 ))||(Bit( hvac_status_data24, 4 ))||(Bit( hvac_status_data32, 16 ))||(Bit( hvac_status_data32, 12 ))||(Bit( hvac_status_data32, 8 ));
    car5_HVAC_error2=Bit( hvac_status_data24, 15 )||(Bit( hvac_status_data24, 11 ))||(Bit( hvac_status_data24, 7 ))||(Bit( hvac_status_data24, 3 ))||(Bit( hvac_status_data32, 15 ))||(Bit( hvac_status_data32, 11 ))||(Bit( hvac_status_data32, 7 ));
    car5_HVAC_error3=Bit( hvac_status_data24, 14 )||(Bit( hvac_status_data24, 10 ))||(Bit( hvac_status_data24, 6 ))||(Bit( hvac_status_data24, 2 ))||(Bit( hvac_status_data32, 14))||(Bit( hvac_status_data32, 10 ))||(Bit( hvac_status_data32, 6 ));
    car5_HVAC_error4=Bit( hvac_status_data24, 13)||(Bit( hvac_status_data24, 9 ))||(Bit( hvac_status_data24, 5 ))||(Bit( hvac_status_data24, 1 ))||(Bit( hvac_status_data32, 13))||(Bit( hvac_status_data32, 9 ))||(Bit( hvac_status_data32, 5 ));

    car6_HVAC_error1=Bit( hvac_status_data26, 16 )||(Bit( hvac_status_data26, 12 ))||(Bit( hvac_status_data26, 8 ))||(Bit( hvac_status_data26, 4 ))||(Bit( hvac_status_data33, 16 ))||(Bit( hvac_status_data33, 12 ))||(Bit( hvac_status_data33, 8 ));
    car6_HVAC_error2=Bit( hvac_status_data26, 15 )||(Bit( hvac_status_data26, 11 ))||(Bit( hvac_status_data26, 7 ))||(Bit( hvac_status_data26, 3 ))||(Bit( hvac_status_data33, 15 ))||(Bit( hvac_status_data33, 11 ))||(Bit( hvac_status_data33, 7 ));
    car6_HVAC_error3=Bit( hvac_status_data26, 14 )||(Bit( hvac_status_data26, 10 ))||(Bit( hvac_status_data26, 6 ))||(Bit( hvac_status_data26, 2 ))||(Bit( hvac_status_data33, 14))||(Bit( hvac_status_data33, 10 ))||(Bit( hvac_status_data33, 6 ));
    car6_HVAC_error4=Bit( hvac_status_data26, 13)||(Bit( hvac_status_data26, 9 ))||(Bit( hvac_status_data26, 5 ))||(Bit( hvac_status_data26, 1 ))||(Bit( hvac_status_data33, 13))||(Bit( hvac_status_data33, 9 ))||(Bit( hvac_status_data33, 5 ));
}
//当有任意一个模式按钮按下，则被按下按钮保持按下状态4秒钟，且其它按钮这4秒钟内不可以按下
void CHVACSettingPage::SetCtrlButtonState(int nID)
{

    int nIDArray[] =
    {

        //ID_CHVACSET_BUTTON_UIC,
        ID_CHVACSET_BUTTON_AMERGEWIND,
        //ID_CHVACSET_BUTTON_PCOff,
        ID_CHVACSET_BUTTON_AUTO,
        ID_CHVACSET_BUTTON_WIND,
        ID_CHVACSET_BUTTON_Test

    };

    ((CButton*)GetDlgItem(nID))->ChangeButtonState(LBUTTON_DOWN);

   for (int i = 0; i <4; i++)
   {
       if (nID != nIDArray[i])
          ((CButton*)GetDlgItem(nIDArray[i]))->SetCtrlEnable(false);
   }
}
//模式按钮设置完成弹起后，所有按钮恢复可按状态，并且判断是否处于自动制冷、自动制暖状态，
//如果处于自动制冷、自动制暖状态则显示设置温度，并且可以改变温度
void CHVACSettingPage::ReSetCtrlButtonState()
{
    int nIDArray[] =
    {
        //ID_CHVACSET_BUTTON_UIC,
        ID_CHVACSET_BUTTON_AMERGEWIND,
        //ID_CHVACSET_BUTTON_PCOff,
        ID_CHVACSET_BUTTON_AUTO,
        ID_CHVACSET_BUTTON_WIND,
        ID_CHVACSET_BUTTON_Test,
    };


   for (int i = 0; i < 4; i++)
   {
      ((CButton*)GetDlgItem(nIDArray[i]))->SetCtrlEnable(true);
   }
   //m_bAutoTempV  只有自动制冷，自动制暖模式下 才可以设置温度
   //if(m_bAutoTempV && Bit(HVAC_command_hide,0))
   //{
//       ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_CONFIRM))->SetCtrlEnable(true);
//       ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPDOWN))->SetCtrlEnable(true);
//       ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPUP))->SetCtrlEnable(true);
//       ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPDOWN2))->SetCtrlEnable(true);
//       ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPUP2))->SetCtrlEnable(true);
   //}
}

void CHVACSettingPage::updateTempV()
{
//    if (m_bAutoTempV && Bit(HVAC_command_hide,0))
//    {

//        if (HVAC_state==QObject::trUtf8("自动制冷")||HVAC_state==QObject::trUtf8("自动制暖"))
//        {
//            if (HVAC_state==QObject::trUtf8("自动制冷"))
//            {
//                ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPV))->SetCtrlText(QString::number(setting_temp,'f',0).append(QObject::trUtf8(" ℃")));
//            }
//            if (HVAC_state==QObject::trUtf8("自动制暖"))
//            {
//                ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPV))->SetCtrlText(QString::number(setting_temp2,'f',0).append(QObject::trUtf8(" ℃")));
//            }

//        }
//        else
//        {
//            ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPV))->SetCtrlText(QObject::trUtf8("    ℃"));
//        }
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_CHVACSET_LABEL_TEMPV))->SetCtrlText(QObject::trUtf8("    ℃"));
//    }
}

void CHVACSettingPage::SpecialButtonState()
{
    //m_bAutoTempV  只有自动制冷，自动制暖模式下 才可以设置温度
    //if(m_bAutoTempV && Bit(HVAC_command_hide,0))
    //{
//        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_CONFIRM))->SetCtrlEnable(true);
//        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPDOWN))->SetCtrlEnable(true);
//        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPUP))->SetCtrlEnable(true);
//        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPDOWN2))->SetCtrlEnable(true);
//        ((CButton*)GetDlgItem(ID_CHVACSET_BUTTON_TEMPUP2))->SetCtrlEnable(true);
    //}
}


void CHVACSettingPage::UpdateHVAC_NewWind()
{
    if(Bit( HVAC_810_9, 2 )||Bit( HVAC_810_9, 16 )||Bit( HVAC_810_9, 14 ))
    {
        car1_NewWind1=1;
        if(Bit( HVAC_810_9, 2 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND1))->SetCtrlText(QObject::trUtf8("100%"));
        }
        if(Bit( HVAC_810_9, 16 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND1))->SetCtrlText(QObject::trUtf8("30%"));
        }
        if(Bit( HVAC_810_9, 14 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND1))->SetCtrlText(QObject::trUtf8("60%"));
        }

    }
    else
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND1))->SetCtrlText(QObject::trUtf8(""));
        if(Bit( HVAC_810_9, 12 ))
        {
            car1_NewWind1=0;
        }
        else
        {
            car1_NewWind1=3;
        }

    }
    if(Bit( HVAC_810_9, 1 )||Bit( HVAC_810_9, 15 )||Bit( HVAC_810_9, 13 ))
    {
        car1_NewWind2=1;
        if(Bit( HVAC_810_9, 1 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND2))->SetCtrlText(QObject::trUtf8("100%"));
        }
        if(Bit( HVAC_810_9, 15 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND2))->SetCtrlText(QObject::trUtf8("30%"));
        }
        if(Bit( HVAC_810_9, 13 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND2))->SetCtrlText(QObject::trUtf8("60%"));
        }

    }
    else
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND2))->SetCtrlText(QObject::trUtf8(""));
        if(Bit( HVAC_810_9, 11 ))
        {
            car1_NewWind2=0;
        }
        else
        {
            car1_NewWind2=3;
        }

    }
    if(Bit( HVAC_820_9, 2)||Bit( HVAC_820_9, 16)||Bit( HVAC_820_9, 14 ))
    {
        car2_NewWind1=1;
        if(Bit( HVAC_820_9, 2 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND1))->SetCtrlText(QObject::trUtf8("100%"));
        }
        if(Bit( HVAC_820_9, 16 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND1))->SetCtrlText(QObject::trUtf8("30%"));
        }
        if(Bit( HVAC_820_9, 14 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND1))->SetCtrlText(QObject::trUtf8("60%"));
        }

    }
    else
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND1))->SetCtrlText(QObject::trUtf8(""));
        if(Bit( HVAC_820_9, 12 ))
        {
            car2_NewWind1=0;
        }
        else
        {
            car2_NewWind1=3;
        }


    }
    if(Bit( HVAC_820_9, 1 )||Bit( HVAC_820_9, 15 )||Bit( HVAC_820_9, 13 ))
    {
        car2_NewWind2=1;
        if(Bit( HVAC_820_9, 1 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND2))->SetCtrlText(QObject::trUtf8("100%"));
        }
        if(Bit( HVAC_820_9, 15 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND2))->SetCtrlText(QObject::trUtf8("30%"));
        }
        if(Bit( HVAC_820_9, 13 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND2))->SetCtrlText(QObject::trUtf8("60%"));
        }

    }
    else
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND2))->SetCtrlText(QObject::trUtf8(""));
        if(Bit( HVAC_820_9, 11 ))
        {
            car2_NewWind2=0;
        }
        else
        {
            car2_NewWind2=3;
        }


    }
    if(Bit( HVAC_830_9, 2)||Bit( HVAC_830_9, 16 )||Bit( HVAC_830_9, 14 ))
    {
        car3_NewWind1=1;
        if(Bit( HVAC_830_9, 2 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND1))->SetCtrlText(QObject::trUtf8("100%"));
        }
        if(Bit( HVAC_830_9, 16 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND1))->SetCtrlText(QObject::trUtf8("30%"));
        }
        if(Bit( HVAC_830_9, 14 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND1))->SetCtrlText(QObject::trUtf8("60%"));
        }

    }
    else
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND1))->SetCtrlText(QObject::trUtf8(""));
        if(Bit( HVAC_830_9, 12 ))
        {
            car3_NewWind1=0;
        }
        else
        {
            car3_NewWind1=3;
        }


    }
    if(Bit( HVAC_830_9, 1 )||Bit( HVAC_830_9, 15 )||Bit( HVAC_830_9, 13 ))
    {
        car3_NewWind2=1;
        if(Bit( HVAC_830_9, 1 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND2))->SetCtrlText(QObject::trUtf8("100%"));
        }
        if(Bit( HVAC_830_9, 15))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND2))->SetCtrlText(QObject::trUtf8("30%"));
        }
        if(Bit( HVAC_830_9, 13))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND2))->SetCtrlText(QObject::trUtf8("60%"));
        }

    }
    else
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND2))->SetCtrlText(QObject::trUtf8(""));
        if(Bit( HVAC_830_9, 11 ))
        {
            car3_NewWind2=0;
        }
        else
        {
            car3_NewWind2=3;
        }


    }
    if(Bit( HVAC_840_9, 16 )||Bit( HVAC_840_9, 14 )||Bit( HVAC_840_9, 2 ))
    {
        car4_NewWind1=1;
        if(Bit( HVAC_840_9, 2 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND1))->SetCtrlText(QObject::trUtf8("100%"));
        }
        if(Bit( HVAC_840_9, 16 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND1))->SetCtrlText(QObject::trUtf8("30%"));
        }
        if(Bit( HVAC_840_9, 14 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND1))->SetCtrlText(QObject::trUtf8("60%"));
        }

    }
    else
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND1))->SetCtrlText(QObject::trUtf8(""));
        if(Bit( HVAC_840_9, 12 ))
        {
            car4_NewWind1=0;
        }
        else
        {
            car4_NewWind1=3;
        }


    }
    if(Bit( HVAC_840_9, 1 )||Bit( HVAC_840_9, 15 )||Bit( HVAC_840_9, 13 ))
    {
        car4_NewWind2=1;
        if(Bit( HVAC_840_9, 1 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND2))->SetCtrlText(QObject::trUtf8("100%"));
        }
        if(Bit( HVAC_840_9, 15 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND2))->SetCtrlText(QObject::trUtf8("30%"));
        }
        if(Bit( HVAC_840_9, 13 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND2))->SetCtrlText(QObject::trUtf8("60%"));
        }

    }
    else
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND2))->SetCtrlText(QObject::trUtf8(""));
        if(Bit( HVAC_840_9, 11 ))
        {
            car4_NewWind2=0;
        }
        else
        {
            car4_NewWind2=3;
        }


    }
    if(Bit( HVAC_850_9, 16 )||Bit( HVAC_850_9, 14 )||Bit( HVAC_850_9, 2 ))
    {
        car5_NewWind1=1;
        if(Bit( HVAC_850_9, 2 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND1))->SetCtrlText(QObject::trUtf8("100%"));
        }
        if(Bit( HVAC_850_9, 16 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND1))->SetCtrlText(QObject::trUtf8("30%"));
        }
        if(Bit( HVAC_850_9, 14 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND1))->SetCtrlText(QObject::trUtf8("60%"));
        }

    }
    else
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND1))->SetCtrlText(QObject::trUtf8(""));
        if(Bit( HVAC_850_9, 12 ))
        {
            car5_NewWind1=0;
        }
        else
        {
            car5_NewWind1=3;
        }


    }
    if(Bit( HVAC_850_9, 1 )||Bit( HVAC_850_9, 15 )||Bit( HVAC_850_9, 13 ))
    {
        car5_NewWind2=1;
        if(Bit( HVAC_850_9, 1))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND2))->SetCtrlText(QObject::trUtf8("100%"));
        }
        if(Bit( HVAC_850_9, 15 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND2))->SetCtrlText(QObject::trUtf8("30%"));
        }
        if(Bit( HVAC_850_9, 13 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND2))->SetCtrlText(QObject::trUtf8("60%"));
        }

    }
    else
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND2))->SetCtrlText(QObject::trUtf8(""));
        if(Bit( HVAC_850_9, 11 ))
        {
            car5_NewWind2=0;
        }
        else
        {
            car5_NewWind2=3;
        }


    }
    if(Bit( HVAC_860_9, 16 )||Bit( HVAC_860_9, 14 )||Bit( HVAC_860_9, 2 ))
    {
        car6_NewWind1=1;
        if(Bit( HVAC_860_9, 2 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND1))->SetCtrlText(QObject::trUtf8("100%"));
        }
        if(Bit( HVAC_860_9, 16 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND1))->SetCtrlText(QObject::trUtf8("30%"));
        }
        if(Bit( HVAC_860_9, 14 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND1))->SetCtrlText(QObject::trUtf8("60%"));
        }

    }
    else
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND1))->SetCtrlText(QObject::trUtf8(""));
        if(Bit( HVAC_860_9, 12))
        {
            car6_NewWind1=0;
        }
        else
        {
            car6_NewWind1=3;
        }


    }
    if(Bit( HVAC_860_9, 1 )||Bit( HVAC_860_9, 15 )||Bit( HVAC_860_9, 13 ))
    {
        car6_NewWind2=1;
        if(Bit( HVAC_860_9, 1 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND2))->SetCtrlText(QObject::trUtf8("100%"));
        }
        if(Bit( HVAC_860_9, 15 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND2))->SetCtrlText(QObject::trUtf8("30%"));
        }
        if(Bit( HVAC_860_9, 13 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND2))->SetCtrlText(QObject::trUtf8("60%"));
        }

    }
    else
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND2))->SetCtrlText(QObject::trUtf8(""));
        if(Bit( HVAC_860_9, 11))
        {
            car6_NewWind2=0;
        }
        else
        {
            car6_NewWind2=3;
        }


    }
    if(Bit( HVAC_870_9, 16 )||Bit( HVAC_870_9, 14 )||Bit( HVAC_870_9, 2 ))
    {
        car7_NewWind1=1;
        if(Bit( HVAC_870_9, 2 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND1))->SetCtrlText(QObject::trUtf8("100%"));
        }
        if(Bit( HVAC_870_9, 16 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND1))->SetCtrlText(QObject::trUtf8("30%"));
        }
        if(Bit( HVAC_870_9, 14 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND1))->SetCtrlText(QObject::trUtf8("60%"));
        }

    }
    else
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND1))->SetCtrlText(QObject::trUtf8(""));
        if(Bit( HVAC_870_9, 12))
        {
            car7_NewWind1=0;
        }
        else
        {
            car7_NewWind1=3;
        }


    }
    if(Bit( HVAC_870_9, 1 )||Bit( HVAC_870_9, 15 )||Bit( HVAC_870_9, 13 ))
    {
        car7_NewWind2=1;
        if(Bit( HVAC_870_9, 1 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND2))->SetCtrlText(QObject::trUtf8("100%"));
        }
        if(Bit( HVAC_870_9, 15 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND2))->SetCtrlText(QObject::trUtf8("30%"));
        }
        if(Bit( HVAC_870_9, 13 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND2))->SetCtrlText(QObject::trUtf8("60%"));
        }

    }
    else
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND2))->SetCtrlText(QObject::trUtf8(""));
        if(Bit( HVAC_870_9, 11))
        {
            car7_NewWind2=0;
        }
        else
        {
            car7_NewWind2=3;
        }


    }
    if(Bit( HVAC_880_9, 16 )||Bit( HVAC_880_9, 14 )||Bit( HVAC_880_9, 2 ))
    {
        car8_NewWind1=1;
        if(Bit( HVAC_880_9, 2 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND1))->SetCtrlText(QObject::trUtf8("100%"));
        }
        if(Bit( HVAC_880_9, 16 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND1))->SetCtrlText(QObject::trUtf8("30%"));
        }
        if(Bit( HVAC_880_9, 14 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND1))->SetCtrlText(QObject::trUtf8("60%"));
        }

    }
    else
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND1))->SetCtrlText(QObject::trUtf8(""));
        if(Bit( HVAC_880_9, 12))
        {
            car8_NewWind1=0;
        }
        else
        {
            car8_NewWind1=3;
        }


    }
    if(Bit( HVAC_880_9, 1 )||Bit( HVAC_880_9, 15 )||Bit( HVAC_880_9, 13 ))
    {
        car8_NewWind2=1;
        if(Bit( HVAC_880_9, 1 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND2))->SetCtrlText(QObject::trUtf8("100%"));
        }
        if(Bit( HVAC_880_9, 15 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND2))->SetCtrlText(QObject::trUtf8("30%"));
        }
        if(Bit( HVAC_880_9, 13 ))
        {
//            ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND2))->SetCtrlText(QObject::trUtf8("60%"));
        }

    }
    else
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND2))->SetCtrlText(QObject::trUtf8(""));
        if(Bit( HVAC_880_9, 11))
        {
            car8_NewWind2=0;
        }
        else
        {
            car8_NewWind2=3;
        }


    }
    if(Bit( HVAC_810_12, 4 ))
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND1))->SetCtrlText(QObject::trUtf8(""));
        car1_NewWind1=2;
    }
    if(Bit( HVAC_810_12, 3 ))
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR1NEWWIND2))->SetCtrlText(QObject::trUtf8(""));
        car1_NewWind2=2;
    }

    if(Bit( HVAC_820_12, 4 ))
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND1))->SetCtrlText(QObject::trUtf8(""));
        car2_NewWind1=2;
    }
    if(Bit( HVAC_820_12, 3 ))
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR2NEWWIND2))->SetCtrlText(QObject::trUtf8(""));
        car2_NewWind2=2;
    }

    if(Bit( HVAC_830_12, 4 ))
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND1))->SetCtrlText(QObject::trUtf8(""));
        car3_NewWind1=2;
    }
    if(Bit( HVAC_830_12, 3 ))
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR3NEWWIND2))->SetCtrlText(QObject::trUtf8(""));
        car3_NewWind2=2;
    }

    if(Bit( HVAC_840_12, 4 ))
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND1))->SetCtrlText(QObject::trUtf8(""));
        car4_NewWind1=2;
    }
    if(Bit( HVAC_840_12, 3 ))
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR4NEWWIND2))->SetCtrlText(QObject::trUtf8(""));
        car4_NewWind2=2;
    }

    if(Bit( HVAC_850_12, 4 ))
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND1))->SetCtrlText(QObject::trUtf8(""));
        car5_NewWind1=2;
    }
    if(Bit( HVAC_850_12, 3 ))
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR5NEWWIND2))->SetCtrlText(QObject::trUtf8(""));
        car5_NewWind2=2;
    }

    if(Bit( HVAC_860_12, 4 ))
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND1))->SetCtrlText(QObject::trUtf8(""));
        car6_NewWind1=2;
    }
    if(Bit( HVAC_860_12, 3 ))
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR6NEWWIND2))->SetCtrlText(QObject::trUtf8(""));
        car6_NewWind2=2;
    }

    if(Bit( HVAC_870_12, 4 ))
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND1))->SetCtrlText(QObject::trUtf8(""));
        car7_NewWind1=2;
    }
    if(Bit( HVAC_870_12, 3 ))
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR7NEWWIND2))->SetCtrlText(QObject::trUtf8(""));
        car7_NewWind2=2;
    }

    if(Bit( HVAC_880_12, 4 ))
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND1))->SetCtrlText(QObject::trUtf8(""));
        car8_NewWind1=2;
    }
    if(Bit( HVAC_880_12, 3 ))
    {
//        ((CLabel *) GetDlgItem(ID_CHVACSET_LABEL_CAR8NEWWIND2))->SetCtrlText(QObject::trUtf8(""));
        car8_NewWind2=2;
    }

//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1NEWWIND1,car1_NewWind1);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR1NEWWIND2,car1_NewWind2);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2NEWWIND1,car2_NewWind1);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR2NEWWIND2,car2_NewWind2);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3NEWWIND1,car3_NewWind1);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR3NEWWIND2,car3_NewWind2);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4NEWWIND1,car4_NewWind1);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR4NEWWIND2,car4_NewWind2);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5NEWWIND1,car5_NewWind1);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR5NEWWIND2,car5_NewWind2);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6NEWWIND1,car6_NewWind1);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR6NEWWIND2,car6_NewWind2);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR7NEWWIND1,car7_NewWind1);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR7NEWWIND2,car7_NewWind2);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR8NEWWIND1,car8_NewWind1);
//    SetHVACStateColor(ID_CHVACSET_LABEL_CAR8NEWWIND2,car8_NewWind2);
}

void CHVACSettingPage::UpdateEmergencyMode()
{



}

