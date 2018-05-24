#include "C_Debug_RIOM_Total.h"


ROMDATA g_PicRom_RIOMDebug[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    D_COMMON_PAGE_HEADER(QObject::trUtf8("RIOM调试"))
    {"",                            D_FONT_BOLD(4),      QRect(130,  44, 640,  65),           Qt::black,                Qt::gray,                CONTROL_TRAIN,            ID_PIBIDP_TRAIN            },
//    {"RIGHT",                       D_FONT_BOLD(6),      QRect(710,  67,  45,  20),           Qt::white,                Qt::white,               CONTROL_ARROW,            ID_PIBIDP_RIGHTARROW       },
//    {"LEFT",                        D_FONT_BOLD(6),      QRect(130,  67,  45,  20),           Qt::white,                Qt::white,               CONTROL_ARROW,            ID_PIBIDP_LEFTARROW        },
//  {QObject::trUtf8("B4011"),                 D_FONT_BOLD(6),      QRect(220,  56,  48,  34),           Qt::black,                Qt::gray,                CONTROL_LABEL,            ID_IGNORE         },
//  {QObject::trUtf8("B4012"),                 D_FONT_BOLD(6),      QRect(285,  56,  68,  34),           Qt::black,                Qt::gray,                CONTROL_LABEL,            ID_IGNORE         },
//  {QObject::trUtf8("B4013"),                 D_FONT_BOLD(6),      QRect(366,  56,  68,  34),           Qt::black,                Qt::gray,                CONTROL_LABEL,            ID_IGNORE         },
//  {QObject::trUtf8("B4014"),                 D_FONT_BOLD(6),      QRect(447,  56,  68,  34),           Qt::black,                Qt::gray,                CONTROL_LABEL,            ID_IGNORE         },
//  {QObject::trUtf8("B4015"),                 D_FONT_BOLD(6),      QRect(528,  56,  68,  34),           Qt::black,                Qt::gray,                CONTROL_LABEL,            ID_IGNORE         },
//  {QObject::trUtf8("B4016"),                 D_FONT_BOLD(6),      QRect(613,  56,  48,  34),           Qt::black,                Qt::gray,                CONTROL_LABEL,            ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect( 15,  115, 745,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 15,  140, 745,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 15,  165, 745,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 15,  190, 745,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 15,  215, 745,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 15,  240, 745,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 15,  265, 745,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 15,  290, 745,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 15,  315, 745,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 15,  340, 745,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 15,  365, 745,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 15,  390, 745,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 15,  415, 745,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 15,  440, 745,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 15,  465, 745,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 15,  490, 745,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 15,  515, 745,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 15,  540, 745,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect( 15,  115, 1,  425),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(130,  115, 1,  425),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(235,  115, 1,  425),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(340,  115, 1,  425),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(445,  115, 1,  425),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(550,  115, 1,  425),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(655,  115, 1,  425),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(600,  115, 1,  426),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect(680,  115, 1,  425),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(760,  115, 1,  426),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(131,  116 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM1_1         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(201,  116 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM1_2         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(236,  116 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM1_3         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(341,  116 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM1_4         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(446,  116 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM1_5         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(551,  116 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM1_6         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(601,  116 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM1_7         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(656,  116 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM1_8         },

    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(131,  141 , 100, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM1_LIFE1     },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(201,  141 , 79, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM1_LIFE2     },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(236,  141 , 100, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM1_LIFE3     },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(341,  141 , 100, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM1_LIFE4     },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(446,  141 , 100, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM1_LIFE5     },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(551,  141 , 100, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM1_LIFE6     },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(601,  141 , 79, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM1_LIFE7     },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(656,  141 , 100, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM1_LIFE8     },

    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(131,  166 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM2_1         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(201,  166 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM2_2         },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect(236,  166 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM2_3         },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect(341,  166 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM2_4         },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect(446,  166 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM2_5         },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect(551,  166 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM2_6         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(601,  166 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM2_7         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(656,  166 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM2_8         },

    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(131,  191 , 100, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM2_LIFE1     },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(201,  191 , 79, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM2_LIFE2     },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(236,  191 , 100, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM2_LIFE3     },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(341,  191 , 100, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM2_LIFE4     },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(446,  191 , 100, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM2_LIFE5     },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(551,  191 , 100, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM2_LIFE6     },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(601,  191 , 79, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM2_LIFE7     },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(656,  191 , 100, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM2_LIFE8     },

    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(131,  216 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM3_1         },
//    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(201,  216 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(236,  216 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(341,  216 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(446,  216 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(551,  216 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(601,  216 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(656,  216 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM3_8         },

    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(131,  241 , 100, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM3_LIFE1     },
//    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(201,  241 , 79, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(236,  241 , 100, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(341,  241 , 100, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(446,  241 , 100, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(551,  241 , 100, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(601,  241 , 79, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(656,  241 , 100, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM3_LIFE8     },

    {QObject::trUtf8("PWM2:"),                    D_FONT_BOLD(4),      QRect(238,  266 , 40, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("PWM1:"),                    D_FONT_BOLD(4),      QRect(281,  266 , 32, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("PWM3:"),                    D_FONT_BOLD(4),      QRect(343,  266 , 40, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("PWM3:"),                    D_FONT_BOLD(4),      QRect(448,  266 , 40, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("PWM1:"),                    D_FONT_BOLD(4),      QRect(491,  266 , 40, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("PWM2:"),                    D_FONT_BOLD(4),      QRect(553,  266 , 40, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("PWM4:"),                    D_FONT_BOLD(4),      QRect(238,  291 , 40, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("PWM4:"),                    D_FONT_BOLD(4),      QRect(553,  291 , 40, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_IGNORE         },


    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(131,  266 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM4_1         },
//    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(201+30,  266 , 45, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_AIM1_PWM1_1         },
    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(286,  266 , 30, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_AIM1_PWM2_1         },
    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(391,  266 , 30, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_AIM1_PWM3_1         },
    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(496,  266 , 30, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_AIM1_PWM3_8         },
    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(601,  266 , 30, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_AIM1_PWM2_8         },
//    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(601+30,  266 , 45, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_AIM1_PWM1_8         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(656,  266 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM4_8         },

    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(131,  291 , 100, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM4_LIFE1     },
//    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(201+30,  291 , 45, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_AIM1_PWM4_1         },
    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(286,  291 , 30, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(341,  291 , 100, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(446,  291 , 100, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(601,  291 , 30, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(601+30,  291 , 45, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_AIM1_PWM4_8         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(656,  291 , 100, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DIM4_LIFE8     },

    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(131,  316 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DOM1_1         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(201,  316 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DOM1_2         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(236,  316 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DOM1_3         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(341,  316 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DOM1_4         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(446,  316 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DOM1_5         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(551,  316 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DOM1_6         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(601,  316 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DOM1_7         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(656,  316 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DOM1_8         },

    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(131,  341 , 100, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DOM1_LIFE1     },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(201,  341 , 79, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DOM1_LIFE2     },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(236,  341 , 100, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DOM1_LIFE3     },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(341,  341 , 100, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DOM1_LIFE4     },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(446,  341 , 100, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DOM1_LIFE5     },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(551,  341 , 100, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DOM1_LIFE6     },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(601,  341 , 79, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DOM1_LIFE7     },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(656,  341 , 100, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DOM1_LIFE8     },

    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect(131,  366 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DOM2_1         },
//    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(201,  366 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(236,  366 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(341,  366 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(446,  366 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(551,  366 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(601,  366 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect(656,  366 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DOM2_8         },

    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect(131,  391 , 100, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DOM2_LIFE1     },
//    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(201,  391 , 79, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(236,  391 , 100, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(341,  391 , 100, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(446,  391 , 100, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(551,  391 , 100, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(601,  391 , 79, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect(656,  391 , 100, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_DOM2_LIFE8     },

    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(131,  416 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_AIM1_AI1_1    },
//    {QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(201,  416 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,             ID_PIBIDP_AIM1_AI2_1         },
    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(236,  416 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(341,  416 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,             ID_PIBIDP_AIM1_AI4_1         },
    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(446,  416 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(551,  416 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                    D_FONT_BOLD(6),      QRect(601,  416 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,             ID_PIBIDP_AIM1_AI2_8         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(656,  416 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_AIM1_AI1_8    },

    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(131,  441 , 100, 24),           Qt::yellow,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_AIM1_LIFE_1    },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(201,  441 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_AIM1_LIFE_2    },
    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(236,  441 , 100, 24),           Qt::yellow,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("--"),                      D_FONT_BOLD(6),      QRect(341,  441 , 100, 24),           Qt::yellow,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_AIM1_LIFE_4    },
    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(446,  441 , 100, 24),           Qt::yellow,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(551,  441 , 100, 24),           Qt::yellow,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(601,  441 , 79, 24),           Qt::yellow,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_AIM1_LIFE_7    },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(656,  441 , 100, 24),           Qt::yellow,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_AIM1_LIFE_8    },

    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(131,  466 , 100, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_IO_GW123_1    },
//    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(201,  466 , 79, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_IO_GW123_2         },
    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(236,  466 , 100, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_IO_GW123_3         },
    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(341,  466 , 100, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_IO_GW123_4         },
    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(446,  466 , 100, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_IO_GW123_5         },
    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(551,  466 , 100, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_IO_GW123_6         },
//    {QObject::trUtf8("--"),                    D_FONT_BOLD(6),      QRect(601,  466 , 79, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_IO_GW123_7         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(656,  466 , 100, 24),           Qt::yellow,               Qt::black,                CONTROL_LABEL,           ID_PIBIDP_IO_GW123_8    },

    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(131,  491 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_LAT1           },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(236,  491 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_LAT2           },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(236,  491 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_LAT3           },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(341,  491 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_LAT4           },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(446,  491 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_LAT5           },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(551,  491 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_LAT6           },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(601,  491 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_LAT7           },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(656,  491 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_LAT8           },

    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(131,  516 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_RLD1           },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(201,  516 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_RLD2           },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(236,  516 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_RLD3           },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(341,  516 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_RLD4           },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(446,  516 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_RLD5           },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(551,  516 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_RLD6           },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(601,  516 , 79, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_RLD7           },
    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect(656,  516 , 100, 24),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_RLD8           },

    {QObject::trUtf8("DIM1(16进制)"),          D_FONT_BOLD(6),      QRect( 15,  115, 105, 25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("DIM1_life"),             D_FONT_BOLD(6),      QRect( 15,  140, 105, 25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("DIM2(16进制)"),          D_FONT_BOLD(6),      QRect( 15,  165, 105, 25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("DIM2_life"),             D_FONT_BOLD(6),      QRect( 15,  190, 105, 25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("DIM3(16进制)"),          D_FONT_BOLD(6),      QRect( 15,  215, 105, 25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("DIM3_life"),             D_FONT_BOLD(6),      QRect( 15,  240, 105, 25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("DIM4(16进制)"),          D_FONT_BOLD(6),      QRect( 15,  265, 105, 25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("DIM4_life"),             D_FONT_BOLD(6),      QRect( 15,  290, 105, 25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("DOM1(16进制)"),          D_FONT_BOLD(6),      QRect( 15,  315, 105, 25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("DOM1_life"),             D_FONT_BOLD(6),      QRect( 15,  340, 105, 25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("DOM2(16进制)"),          D_FONT_BOLD(6),      QRect( 15,  365, 105, 25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("DOM2_life"),             D_FONT_BOLD(6),      QRect( 15,  390, 105, 25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("AIOM1"),             D_FONT_BOLD(6),      QRect( 15,  415, 105, 25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("AIOM1_life"),             D_FONT_BOLD(6),      QRect( 15,  440, 105, 25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("IO_GW123_life"),             D_FONT_BOLD(6),      QRect( 15,  465, 105, 25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("A线故障"),                   D_FONT_BOLD(6),      QRect( 15,  490, 105, 25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("B线故障"),                   D_FONT_BOLD(6),      QRect( 15,  515, 105, 25),           Qt::white,                Qt::transparent,          CONTROL_LABEL,           ID_IGNORE         },

//    {QObject::trUtf8("HMI1_GW"),               D_FONT_BOLD(6),      QRect( 685,  365, 100, 25),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 685,  390, 100, 25),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_HMI1_GW1         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 685,  415, 100, 25),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_HMI1_GW2         },
//    {QObject::trUtf8("HMI2_GW"),               D_FONT_BOLD(6),      QRect( 685,  465, 100, 25),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 685,  490, 100, 25),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_HMI2_GW1         },
//    {QObject::trUtf8(""),                      D_FONT_BOLD(6),      QRect( 685,  515, 100, 25),          Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBIDP_HMI2_GW2         },

    D_COMMON_PAGE_BUTTON_BAR
};
int g_RIOMDebugRomLen = sizeof(g_PicRom_RIOMDebug)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CRIOMDebugPage,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(IDLB_COM_BTN1, OnComBtn1Clk)
        ON_BTNCLK(IDLB_COM_BTN2, OnComBtn2Clk)
        ON_BTNCLK(IDLB_COM_BTN3, OnComBtn3Clk)
        ON_BTNCLK(IDLB_COM_BTN4, OnComBtn4Clk)
        ON_BTNCLK(IDLB_COM_BTN5, OnComBtn5Clk)
        ON_BTNCLK(IDLB_COM_BTN6, OnComBtn6Clk)
END_MESSAGE_MAP()

CRIOMDebugPage::CRIOMDebugPage()
{
}

void CRIOMDebugPage::OnUpdatePage()
{
    UpdateRIOMDEBUG();
    updateTrain(ID_PIBIDP_TRAIN);

    //updateErrorLine(ID_PIBIDP_TRAIN);
 //   updateArrow(ID_PIBIDP_LEFTARROW,ID_PIBIDP_RIGHTARROW);
}

void CRIOMDebugPage::OnInitPage()
{

}

void CRIOMDebugPage::OnShowPage()
{
     ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返  回"));
     ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8("详细信息"));
     ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText("");

     this->InitPageHeader();
}

void CRIOMDebugPage::OnComBtn1Clk()
{
    ChangePage(PAGE_INDEX_DEBUGMAIN);
}

void CRIOMDebugPage::OnComBtn2Clk()
{

}

void CRIOMDebugPage::OnComBtn3Clk()
{

}

void CRIOMDebugPage::OnComBtn4Clk()
{

}

void CRIOMDebugPage::OnComBtn5Clk()
{
    ChangePage(PAGE_INDEX_IOTCTABLE);
}

void CRIOMDebugPage::OnComBtn6Clk()
{

}

void CRIOMDebugPage::UpdateRIOMDEBUG()
{
    QString data_DIM1_1 = 0;
    QString data_DIM1_2 = 0;
    QString data_DIM1_3 = 0;
    QString data_DIM1_4 = 0;
    QString data_DIM1_5 = 0;
    QString data_DIM1_6 = 0;
    QString data_DIM1_7 = 0;
    QString data_DIM1_8 = 0;
    QString data_DIM2_1 = 0;
    QString data_DIM2_2 = 0;
    QString data_DIM2_3 = 0;
    QString data_DIM2_4 = 0;
    QString data_DIM2_5 = 0;
    QString data_DIM2_6 = 0;
    QString data_DIM2_7 = 0;
    QString data_DIM2_8 = 0;
    QString data_DIM3_1 = 0;
    QString data_DIM3_8 = 0;
    QString data_DIM4_1 = 0;
    QString data_DIM4_8 = 0;
    QString data_DOM1_1 = 0;
    QString data_DOM1_2 = 0;
    QString data_DOM1_3 = 0;
    QString data_DOM1_4 = 0;
    QString data_DOM1_5 = 0;
    QString data_DOM1_6 = 0;
    QString data_DOM1_7 = 0;
    QString data_DOM1_8 = 0;
    QString data_DOM2_1 = 0;
    QString data_DOM2_8 = 0;

    QString data_temp1 = 0;
    QString data_temp2 = 0;

    int data_lat1 = 0;
    int data_lat2 = 0;
    int data_lat3 = 0;
    int data_lat4 = 0;
    int data_lat5 = 0;
    int data_lat6 = 0;
    int data_lat7 = 0;
    int data_lat8 = 0;
    int data_rld1 = 0;
    int data_rld2 = 0;
    int data_rld3 = 0;
    int data_rld4 = 0;
    int data_rld5 = 0;
    int data_rld6 = 0;
    int data_rld7 = 0;
    int data_rld8 = 0;
    int data_hmi1_gw1 = 0;
    int data_hmi1_gw2 = 0;
    int data_hmi2_gw1 = 0;
    int data_hmi2_gw2 = 0;
    //data_temp1.sprintf("%#06X",Change_BigEen(RIOM1CT_DIM1DI_1_U16));
    data_temp1.sprintf("%04X",Change_BigEen(RIOM1CT_DIM1DI_1_U16));
    data_temp2.sprintf("%02X",RIOM1CT_DIM1DI_2_U16%256);
    data_DIM1_1=data_temp1+data_temp2;
    data_temp1.sprintf("%04X",Change_BigEen(RIOM2CT_DIM1DI_1_U16));
    data_temp2.sprintf("%02X",RIOM2CT_DIM1DI_2_U16%256);
    data_DIM1_2=data_temp1+data_temp2;
    data_temp1.sprintf("%04X",Change_BigEen(RIOM3CT_DIM1DI_1_U16));
    data_temp2.sprintf("%02X",RIOM3CT_DIM1DI_2_U16%256);
    data_DIM1_3=data_temp1+data_temp2;
    data_temp1.sprintf("%04X",Change_BigEen(RIOM4CT_DIM1DI_1_U16));
    data_temp2.sprintf("%02X",RIOM4CT_DIM1DI_2_U16%256);
    data_DIM1_4=data_temp1+data_temp2;
    data_temp1.sprintf("%04X",Change_BigEen(RIOM5CT_DIM1DI_1_U16));
    data_temp2.sprintf("%02X",RIOM5CT_DIM1DI_2_U16%256);
    data_DIM1_5=data_temp1+data_temp2;
    data_temp1.sprintf("%04X",Change_BigEen(RIOM6CT_DIM1DI_1_U16));
    data_temp2.sprintf("%02X",RIOM6CT_DIM1DI_2_U16%256);
    data_DIM1_6=data_temp1+data_temp2;
//    data_temp1.sprintf("%04X",Change_BigEen(DI_170_1));
//    data_temp2.sprintf("%02X",DI_170_2/256);
//    data_DIM1_7=data_temp2+data_temp1;
//    data_temp1.sprintf("%04X",Change_BigEen(DI_180_1));
//    data_temp2.sprintf("%02X",DI_180_2/256);
//    data_DIM1_8=data_temp2+data_temp1;

    SetRIOMLabelString( ID_PIBIDP_DIM1_1,data_DIM1_1 );
//    SetRIOMLabelString( ID_PIBIDP_DIM1_2,data_DIM1_2 );
    SetRIOMLabelString( ID_PIBIDP_DIM1_3,data_DIM1_2 );
    SetRIOMLabelString( ID_PIBIDP_DIM1_4,data_DIM1_3 );
    SetRIOMLabelString( ID_PIBIDP_DIM1_5,data_DIM1_4 );
    SetRIOMLabelString( ID_PIBIDP_DIM1_6,data_DIM1_5 );
//    SetRIOMLabelString( ID_PIBIDP_DIM1_7,data_DIM1_7 );
    SetRIOMLabelString( ID_PIBIDP_DIM1_8,data_DIM1_6 );

    SetRIOMDataLabelString(ID_PIBIDP_DIM1_LIFE1, DICT_Tc1DI1LifeSign_U8);
    SetRIOMDataLabelString(ID_PIBIDP_DIM1_LIFE3, DICT_RIOMMp1DI1LfSign_U8);
    SetRIOMDataLabelString(ID_PIBIDP_DIM1_LIFE4, DICT_RIOMM1DI1LfSign_U8);
    SetRIOMDataLabelString(ID_PIBIDP_DIM1_LIFE5, DICT_RIOMM2DI1LfSign_U8);
    SetRIOMDataLabelString(ID_PIBIDP_DIM1_LIFE6, DICT_RIOMMp2DI1LfSign_U8);
    SetRIOMDataLabelString(ID_PIBIDP_DIM1_LIFE8, DICT_Tc2DI1LifeSign_U8);


    data_temp1.sprintf("%04X",Change_BigEen(RIOM1CT_DIM1DI_3_U16));
    data_temp2.sprintf("%02X",RIOM1CT_DIM1DI_2_U16/256);
    data_DIM2_1=data_temp2+data_temp1;
    data_temp1.sprintf("%04X",Change_BigEen(RIOM2CT_DIM1DI_3_U16));
    data_temp2.sprintf("%02X",RIOM2CT_DIM1DI_2_U16/256);
    data_DIM2_2=data_temp2+data_temp1;
    data_temp1.sprintf("%04X",Change_BigEen(RIOM3CT_DIM1DI_3_U16));
    data_temp2.sprintf("%02X",RIOM3CT_DIM1DI_2_U16/256);
    data_DIM2_3=data_temp2+data_temp1;
    data_temp1.sprintf("%04X",Change_BigEen(RIOM4CT_DIM1DI_3_U16));
    data_temp2.sprintf("%02X",RIOM4CT_DIM1DI_2_U16/256);
    data_DIM2_4=data_temp2+data_temp1;
    data_temp1.sprintf("%04X",Change_BigEen(RIOM5CT_DIM1DI_3_U16));
    data_temp2.sprintf("%02X",RIOM5CT_DIM1DI_2_U16/256);
    data_DIM2_5=data_temp2+data_temp1;
    data_temp1.sprintf("%04X",Change_BigEen(RIOM6CT_DIM1DI_3_U16));
    data_temp2.sprintf("%02X",RIOM6CT_DIM1DI_2_U16/256);
    data_DIM2_6=data_temp2+data_temp1;


    SetRIOMLabelString( ID_PIBIDP_DIM2_1,data_DIM2_1 );
    SetRIOMLabelString( ID_PIBIDP_DIM2_8,data_DIM2_6 );

    SetRIOMDataLabelString(ID_PIBIDP_DIM2_LIFE1, DICT_Tc1DI2LifeSign_U8);
    SetRIOMDataLabelString(ID_PIBIDP_DIM2_LIFE8, DICT_Tc2DI2LifeSign_U8);

    data_temp1.sprintf("%04X",Change_BigEen(RIOM1CT_DIM1DI_4_U16));
    data_temp2.sprintf("%02X",RIOM1CT_DIM1DI_5_U16%256);
    data_DIM3_1=data_temp1+data_temp2;
    data_temp1.sprintf("%04X",Change_BigEen(RIOM6CT_DIM1DI_4_U16));
    data_temp2.sprintf("%02X",RIOM6CT_DIM1DI_5_U16%256);
    data_DIM3_8=data_temp1+data_temp2;
    SetRIOMLabelString( ID_PIBIDP_DIM3_1,data_DIM3_1 );
    SetRIOMLabelString( ID_PIBIDP_DIM3_8,data_DIM3_8);

    SetRIOMDataLabelString(ID_PIBIDP_DIM3_LIFE1, DICT_Tc1DI3LifeSign_U8);
    SetRIOMDataLabelString(ID_PIBIDP_DIM3_LIFE8, DICT_Tc2DI3LifeSign_U8);

    data_temp1.sprintf("%04X",Change_BigEen(RIOM1CT_DIM1DI_11_U16));
    data_temp2.sprintf("%02X",RIOM1CT_DIM1DI_12_U16%256);
    data_DIM4_1=data_temp1+data_temp2;
    data_temp1.sprintf("%04X",Change_BigEen(RIOM6CT_DIM1DI_11_U16));
    data_temp2.sprintf("%02X",RIOM6CT_DIM1DI_12_U16%256);
    data_DIM4_8=data_temp1+data_temp2;

    SetRIOMLabelString( ID_PIBIDP_DIM4_1,data_DIM4_1);
    SetRIOMLabelString( ID_PIBIDP_DIM4_8,data_DIM4_8);

    SetRIOMDataLabelString(ID_PIBIDP_DIM4_LIFE1,DICT_Tc1DI4LifeSign_U8);
    SetRIOMDataLabelString(ID_PIBIDP_DIM4_LIFE8,DICT_Tc2DI4LifeSign_U8);







    data_temp1.sprintf("%04X",Change_BigEen(CTRIOM1_DOM1DI_1_U16));
    data_temp2.sprintf("%02X",CTRIOM1_DOM1DI_2_U16%256);
    data_DOM1_1=data_temp2+data_temp1;
    data_temp1.sprintf("%04X",Change_BigEen(CTRIOM2_DOM1DI_1_U16));
    data_temp2.sprintf("%02X",CTRIOM2_DOM1DI_2_U16%256);
    data_DOM1_2=data_temp2+data_temp1;
    data_temp1.sprintf("%04X",Change_BigEen(CTRIOM3_DOM1DI_1_U16));
    data_temp2.sprintf("%02X",CTRIOM3_DOM1DI_2_U16%256);
    data_DOM1_3=data_temp2+data_temp1;
    data_temp1.sprintf("%04X",Change_BigEen(CTRIOM4_DOM1DI_1_U16));
    data_temp2.sprintf("%02X",CTRIOM4_DOM1DI_2_U16%256);
    data_DOM1_4=data_temp2+data_temp1;
    data_temp1.sprintf("%04X",Change_BigEen(CTRIOM5_DOM1DI_1_U16));
    data_temp2.sprintf("%02X",CTRIOM5_DOM1DI_2_U16%256);
    data_DOM1_5=data_temp2+data_temp1;
    data_temp1.sprintf("%04X",Change_BigEen(CTRIOM6_DOM1DI_1_U16));
    data_temp2.sprintf("%02X",CTRIOM6_DOM1DI_2_U16%256);
    data_DOM1_6=data_temp2+data_temp1;

    SetRIOMLabelString(ID_PIBIDP_DOM1_1, data_DOM1_1);
    SetRIOMLabelString(ID_PIBIDP_DOM1_3, data_DOM1_2);
    SetRIOMLabelString(ID_PIBIDP_DOM1_4, data_DOM1_3);
    SetRIOMLabelString(ID_PIBIDP_DOM1_5, data_DOM1_4);
    SetRIOMLabelString(ID_PIBIDP_DOM1_6, data_DOM1_5);
    SetRIOMLabelString(ID_PIBIDP_DOM1_8, data_DOM1_6);

    SetRIOMDataLabelString(ID_PIBIDP_DOM1_LIFE1, DOCT_Tc1DO1LifeSign_U8);
    SetRIOMDataLabelString(ID_PIBIDP_DOM1_LIFE3, DOCT_RIOMMp1DO1LfSign_U8);
    SetRIOMDataLabelString(ID_PIBIDP_DOM1_LIFE4, DOCT_RIOMM1DO1LfSign_U8);
    SetRIOMDataLabelString(ID_PIBIDP_DOM1_LIFE5, DOCT_RIOMM2DO1LfSign_U8);
    SetRIOMDataLabelString(ID_PIBIDP_DOM1_LIFE6, DOCT_RIOMMp2DO1LfSign_U8);
    SetRIOMDataLabelString(ID_PIBIDP_DOM1_LIFE8, DOCT_Tc2DO1LifeSign_U8);

    data_temp1.sprintf("%04X",Change_BigEen(CTRIOM1_DOM1DI_3_U16));
    data_temp2.sprintf("%02X",CTRIOM1_DOM1DI_2_U16/256);
    data_DOM2_1=data_temp2+data_temp1;
    data_temp1.sprintf("%04X",Change_BigEen(CTRIOM6_DOM1DI_3_U16));
    data_temp2.sprintf("%02X",CTRIOM6_DOM1DI_2_U16/256);
    data_DOM2_8=data_temp2+data_temp1;
    SetRIOMLabelString(ID_PIBIDP_DOM2_1, data_DOM2_1);
    SetRIOMLabelString(ID_PIBIDP_DOM2_8, data_DOM2_8);

    SetRIOMDataLabelString(ID_PIBIDP_DOM2_LIFE1, DOCT_Tc1DO2LifeSign_U8);
    SetRIOMDataLabelString(ID_PIBIDP_DOM2_LIFE8, DOCT_Tc2DO2LifeSign_U8);

//    SetRIOMDataLabelString(ID_PIBIDP_AIM1_PWM1_1, AX_114_1);
    SetRIOMDataLabelString(ID_PIBIDP_AIM1_PWM2_1, AX_114_2);
    SetRIOMDataLabelString(ID_PIBIDP_AIM1_PWM3_1, AX_114_3);
//    SetRIOMDataLabelString(ID_PIBIDP_AIM1_PWM4_1, AX_114_4);
//    SetRIOMDataLabelString(ID_PIBIDP_AIM1_PWM4_8, AX_184_4);
    SetRIOMDataLabelString(ID_PIBIDP_AIM1_PWM3_8, AX_184_3);
    SetRIOMDataLabelString(ID_PIBIDP_AIM1_PWM2_8, AX_184_2);
//    SetRIOMDataLabelString(ID_PIBIDP_AIM1_PWM1_8, AX_184_1);

    SetRIOMDataLabelString(ID_PIBIDP_IO_GW123_1, GWCT_Tc1GWLifeSign1_U8);
    SetRIOMDataLabelString(ID_PIBIDP_IO_GW123_3, GWCT_RIOMMp1GWLfSign1_U8);
    SetRIOMDataLabelString(ID_PIBIDP_IO_GW123_4, GWCT_RIOMM1GWLfSign1_U8);
    SetRIOMDataLabelString(ID_PIBIDP_IO_GW123_5, GWCT_RIOMM2GWLfSign1_U8);
    SetRIOMDataLabelString(ID_PIBIDP_IO_GW123_6, GWCT_RIOMMp2GWLfSign1_U8);
    SetRIOMDataLabelString(ID_PIBIDP_IO_GW123_8, GWCT_Tc2GWLifeSign1_U8);

    QString R1AIM78,R2AIM78;
    data_temp1.sprintf("%04X",Change_BigEen(RIOM1CT_AIOM1AI7_U16));
    data_temp2.sprintf("%04X",Change_BigEen(RIOM1CT_AIOM1AI8_U16));
    R1AIM78=data_temp1+data_temp2;
    data_temp1.sprintf("%04X",Change_BigEen(RIOM6CT_AIOM1AI7_U16));
    data_temp2.sprintf("%04X",Change_BigEen(RIOM6CT_AIOM1AI8_U16));
    R2AIM78=data_temp1+data_temp2;
    SetRIOMLabelString(ID_PIBIDP_AIM1_AI1_1, R1AIM78);
    SetRIOMLabelString(ID_PIBIDP_AIM1_AI1_8, R2AIM78);
    SetRIOMDataLabelString(ID_PIBIDP_AIM1_LIFE_1, AICT_Tc1AX1LifeSign_U8);
    SetRIOMDataLabelString(ID_PIBIDP_AIM1_LIFE_8, AICT_Tc2AX1LifeSign_U8);


//    SetRIOMDataLabelString(ID_PIBIDP_LAT1, GWCT_Tc1LAT_B1);
////    SetRIOMDataLabelString(ID_PIBIDP_LAT2, data_lat2);
//    SetRIOMDataLabelString(ID_PIBIDP_LAT3, GWCT_RIOMMp1LAT_B1);
//    SetRIOMDataLabelString(ID_PIBIDP_LAT4, GWCT_RIOMM1LAT_B1);
//    SetRIOMDataLabelString(ID_PIBIDP_LAT5, GWCT_RIOMM2LAT_B1);
//    SetRIOMDataLabelString(ID_PIBIDP_LAT6, GWCT_RIOMMp2LAT_B1);
////    SetRIOMDataLabelString(ID_PIBIDP_LAT7, data_lat7);
//    SetRIOMDataLabelString(ID_PIBIDP_LAT8, GWCT_Tc2LAT_B1);



//    SetRIOMDataLabelString(ID_PIBIDP_RLD1, GWCT_Tc1RLD_B1);
////    SetRIOMDataLabelString(ID_PIBIDP_RLD2, data_rld2);
//    SetRIOMDataLabelString(ID_PIBIDP_RLD3, GWCT_RIOMMp1RLD_B1);
//    SetRIOMDataLabelString(ID_PIBIDP_RLD4, GWCT_RIOMM1RLD_B1);
//    SetRIOMDataLabelString(ID_PIBIDP_RLD5, GWCT_RIOMM2RLD_B1);
//    SetRIOMDataLabelString(ID_PIBIDP_RLD6, GWCT_RIOMMp2RLD_B1);
////    SetRIOMDataLabelString(ID_PIBIDP_RLD7, data_rld7);
//    SetRIOMDataLabelString(ID_PIBIDP_RLD8, GWCT_Tc2RLD_B1);

    if(CTHM_TC1RIOMGWOn_B1)
    {
        if(GWCT_Tc1RLD_B1&&!(GWCT_Tc1LAT_B1))
        {
            ((CLabel *)GetDlgItem(ID_PIBIDP_RLD1))->SetCtrlBKColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBIDP_RLD1))->SetCtrlText("0");
            ((CLabel *)GetDlgItem(ID_PIBIDP_LAT1))->SetCtrlBKColor(Qt::red);
            ((CLabel *)GetDlgItem(ID_PIBIDP_LAT1))->SetCtrlText("1");
        }else if(GWCT_Tc1RLD_B1&&(GWCT_Tc1LAT_B1))
        {

            ((CLabel *)GetDlgItem(ID_PIBIDP_LAT1))->SetCtrlBKColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBIDP_LAT1))->SetCtrlText("0");
            ((CLabel *)GetDlgItem(ID_PIBIDP_RLD1))->SetCtrlBKColor(Qt::red);
            ((CLabel *)GetDlgItem(ID_PIBIDP_RLD1))->SetCtrlText("1");
        }else
        {
            ((CLabel *)GetDlgItem(ID_PIBIDP_RLD1))->SetCtrlBKColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBIDP_RLD1))->SetCtrlText("0");
            ((CLabel *)GetDlgItem(ID_PIBIDP_LAT1))->SetCtrlBKColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBIDP_LAT1))->SetCtrlText("0");
        }
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBIDP_RLD1))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBIDP_RLD1))->SetCtrlText(QObject::trUtf8("网关不在线"));
        ((CLabel *)GetDlgItem(ID_PIBIDP_LAT1))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBIDP_LAT1))->SetCtrlText(QObject::trUtf8("网关不在线"));
    }



    if(CTHM_Mp1RIOMGWOn_B1)
    {
        if(GWCT_RIOMMp1RLD_B1&&!(GWCT_RIOMMp1LAT_B1))
        {
            ((CLabel *)GetDlgItem(ID_PIBIDP_RLD3))->SetCtrlBKColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBIDP_RLD3))->SetCtrlText("0");
            ((CLabel *)GetDlgItem(ID_PIBIDP_LAT3))->SetCtrlBKColor(Qt::red);
            ((CLabel *)GetDlgItem(ID_PIBIDP_LAT3))->SetCtrlText("1");
        }else if(GWCT_RIOMMp1RLD_B1&&(GWCT_RIOMMp1LAT_B1))
        {

            ((CLabel *)GetDlgItem(ID_PIBIDP_LAT3))->SetCtrlBKColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBIDP_LAT3))->SetCtrlText("0");
            ((CLabel *)GetDlgItem(ID_PIBIDP_RLD3))->SetCtrlBKColor(Qt::red);
            ((CLabel *)GetDlgItem(ID_PIBIDP_RLD3))->SetCtrlText("1");
        }else
        {
            ((CLabel *)GetDlgItem(ID_PIBIDP_RLD3))->SetCtrlBKColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBIDP_RLD3))->SetCtrlText("0");
            ((CLabel *)GetDlgItem(ID_PIBIDP_LAT3))->SetCtrlBKColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBIDP_LAT3))->SetCtrlText("0");
        }
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBIDP_RLD3))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBIDP_RLD3))->SetCtrlText(QObject::trUtf8("网关不在线"));
        ((CLabel *)GetDlgItem(ID_PIBIDP_LAT3))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBIDP_LAT3))->SetCtrlText(QObject::trUtf8("网关不在线"));
    }

    if(CTHM_M1RIOMGWOn_B1)
    {
        if(GWCT_RIOMM1RLD_B1&&!(GWCT_RIOMM1LAT_B1))
        {
            ((CLabel *)GetDlgItem(ID_PIBIDP_RLD4))->SetCtrlBKColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBIDP_RLD4))->SetCtrlText("0");
            ((CLabel *)GetDlgItem(ID_PIBIDP_LAT4))->SetCtrlBKColor(Qt::red);
            ((CLabel *)GetDlgItem(ID_PIBIDP_LAT4))->SetCtrlText("1");
        }else if(GWCT_RIOMM1RLD_B1&&(GWCT_RIOMM1LAT_B1))
        {

            ((CLabel *)GetDlgItem(ID_PIBIDP_LAT4))->SetCtrlBKColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBIDP_LAT4))->SetCtrlText("0");
            ((CLabel *)GetDlgItem(ID_PIBIDP_RLD4))->SetCtrlBKColor(Qt::red);
            ((CLabel *)GetDlgItem(ID_PIBIDP_RLD4))->SetCtrlText("1");
        }else
        {
            ((CLabel *)GetDlgItem(ID_PIBIDP_RLD4))->SetCtrlBKColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBIDP_RLD4))->SetCtrlText("0");
            ((CLabel *)GetDlgItem(ID_PIBIDP_LAT4))->SetCtrlBKColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBIDP_LAT4))->SetCtrlText("0");
        }
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBIDP_RLD4))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBIDP_RLD4))->SetCtrlText(QObject::trUtf8("网关不在线"));
        ((CLabel *)GetDlgItem(ID_PIBIDP_LAT4))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBIDP_LAT4))->SetCtrlText(QObject::trUtf8("网关不在线"));
    }


    if(CTHM_TC2RIOMGWOn_B1)
    {
        if(GWCT_Tc2RLD_B1&&!(GWCT_Tc2LAT_B1))
        {
            ((CLabel *)GetDlgItem(ID_PIBIDP_RLD8))->SetCtrlBKColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBIDP_RLD8))->SetCtrlText("0");
            ((CLabel *)GetDlgItem(ID_PIBIDP_LAT8))->SetCtrlBKColor(Qt::red);
            ((CLabel *)GetDlgItem(ID_PIBIDP_LAT8))->SetCtrlText("1");
        }else if(GWCT_Tc2RLD_B1&&(GWCT_Tc2LAT_B1))
        {

            ((CLabel *)GetDlgItem(ID_PIBIDP_LAT8))->SetCtrlBKColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBIDP_LAT8))->SetCtrlText("0");
            ((CLabel *)GetDlgItem(ID_PIBIDP_RLD8))->SetCtrlBKColor(Qt::red);
            ((CLabel *)GetDlgItem(ID_PIBIDP_RLD8))->SetCtrlText("1");
        }else
        {
            ((CLabel *)GetDlgItem(ID_PIBIDP_RLD8))->SetCtrlBKColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBIDP_RLD8))->SetCtrlText("0");
            ((CLabel *)GetDlgItem(ID_PIBIDP_LAT8))->SetCtrlBKColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBIDP_LAT8))->SetCtrlText("0");
        }
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBIDP_RLD8))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBIDP_RLD8))->SetCtrlText(QObject::trUtf8("网关不在线"));
        ((CLabel *)GetDlgItem(ID_PIBIDP_LAT8))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBIDP_LAT8))->SetCtrlText(QObject::trUtf8("网关不在线"));
    }



    if(CTHM_Mp2RIOMGWOn_B1)
    {
        if(GWCT_RIOMMp2RLD_B1&&!(GWCT_RIOMMp2LAT_B1))
        {
            ((CLabel *)GetDlgItem(ID_PIBIDP_RLD6))->SetCtrlBKColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBIDP_RLD6))->SetCtrlText("0");
            ((CLabel *)GetDlgItem(ID_PIBIDP_LAT6))->SetCtrlBKColor(Qt::red);
            ((CLabel *)GetDlgItem(ID_PIBIDP_LAT6))->SetCtrlText("1");
        }else if(GWCT_RIOMMp2RLD_B1&&(GWCT_RIOMMp2LAT_B1))
        {

            ((CLabel *)GetDlgItem(ID_PIBIDP_LAT6))->SetCtrlBKColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBIDP_LAT6))->SetCtrlText("0");
            ((CLabel *)GetDlgItem(ID_PIBIDP_RLD6))->SetCtrlBKColor(Qt::red);
            ((CLabel *)GetDlgItem(ID_PIBIDP_RLD6))->SetCtrlText("1");
        }else
        {
            ((CLabel *)GetDlgItem(ID_PIBIDP_RLD6))->SetCtrlBKColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBIDP_RLD6))->SetCtrlText("0");
            ((CLabel *)GetDlgItem(ID_PIBIDP_LAT6))->SetCtrlBKColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBIDP_LAT6))->SetCtrlText("0");
        }
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBIDP_RLD6))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBIDP_RLD6))->SetCtrlText(QObject::trUtf8("网关不在线"));
        ((CLabel *)GetDlgItem(ID_PIBIDP_LAT6))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBIDP_LAT6))->SetCtrlText(QObject::trUtf8("网关不在线"));
    }

    if(CTHM_M2RIOMGWOn_B1)
    {
        if(GWCT_RIOMM2RLD_B1&&!(GWCT_RIOMM2LAT_B1))
        {
            ((CLabel *)GetDlgItem(ID_PIBIDP_RLD5))->SetCtrlBKColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBIDP_RLD5))->SetCtrlText("0");
            ((CLabel *)GetDlgItem(ID_PIBIDP_LAT5))->SetCtrlBKColor(Qt::red);
            ((CLabel *)GetDlgItem(ID_PIBIDP_LAT5))->SetCtrlText("1");
        }else if(GWCT_RIOMM2RLD_B1&&(GWCT_RIOMM2LAT_B1))
        {

            ((CLabel *)GetDlgItem(ID_PIBIDP_LAT5))->SetCtrlBKColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBIDP_LAT5))->SetCtrlText("0");
            ((CLabel *)GetDlgItem(ID_PIBIDP_RLD5))->SetCtrlBKColor(Qt::red);
            ((CLabel *)GetDlgItem(ID_PIBIDP_RLD5))->SetCtrlText("1");
        }else
        {
            ((CLabel *)GetDlgItem(ID_PIBIDP_RLD5))->SetCtrlBKColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBIDP_RLD5))->SetCtrlText("0");
            ((CLabel *)GetDlgItem(ID_PIBIDP_LAT5))->SetCtrlBKColor(Qt::black);
            ((CLabel *)GetDlgItem(ID_PIBIDP_LAT5))->SetCtrlText("0");
        }
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBIDP_RLD5))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBIDP_RLD5))->SetCtrlText(QObject::trUtf8("网关不在线"));
        ((CLabel *)GetDlgItem(ID_PIBIDP_LAT5))->SetCtrlBKColor(Qt::black);
        ((CLabel *)GetDlgItem(ID_PIBIDP_LAT5))->SetCtrlText(QObject::trUtf8("网关不在线"));
    }
    return;
}

void CRIOMDebugPage::SetRIOMDataLabelString(int id, int DataVal)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(DataVal));

    return;
}

void CRIOMDebugPage::SetRIOMLabelString(int id, QString StringVal)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(StringVal);

    return;
}
