#include "C_Page_Door_Setting.h"



ROMDATA g_PicRom_DoorSetting[] =
{
    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("门参数\n设置") )
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW_WH
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif


    {"",                           D_FONT_BOLD(6),        QRect(2,  90-25, 500-140,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),        QRect(2, 120-30, 500-140,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),        QRect(2, 150-30, 500-140,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),        QRect(2, 180-30, 500-140,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),        QRect(2, 210-30, 500-140,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),        QRect(2, 240-30, 500-140,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),        QRect(2, 270-30, 500-140,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),        QRect(2, 300-30, 500-140,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),        QRect(2, 330-30, 500-140,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),        QRect(2, 360-30, 500-140,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),        QRect(2, 390-30, 500-140,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),        QRect(2, 420-30, 500-140,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),        QRect(2, 450-30, 500-140,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),        QRect(2, 480-30, 500-140,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),        QRect(2, 510-30, 500-140,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


    {"",                           D_FONT_BOLD(6),        QRect(2, 90-25,  1, 415),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),        QRect(200, 90-25,  1, 415),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                           D_FONT_BOLD(6),        QRect(360, 90-25,  1, 415),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
   // {"",                           D_FONT_BOLD(6),        QRect(90+480, 90,  1, 450),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                           D_FONT_BOLD(6),        QRect(90+550, 90,  1, 450),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {QObject::trUtf8("参数名称"),              D_FONT_BOLD(8),        QRect(4, 95-30,  196, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE        },
    {QObject::trUtf8("障碍物关门力1"),          D_FONT_BOLD(8),        QRect(4, 125-30, 196, 20),          Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("障碍物关门力2"),          D_FONT_BOLD(8),        QRect(4, 155-30, 196, 20),          Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("障碍物关门力3"),          D_FONT_BOLD(8),        QRect(4, 185-30, 196, 20),          Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("障碍物关门力4"),          D_FONT_BOLD(8),        QRect(4, 215-30, 196, 20),         Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("障碍物关门力5"),          D_FONT_BOLD(8),        QRect(4, 245-30, 196, 20),         Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("开门时间"),              D_FONT_BOLD(8),        QRect(4, 275-30, 196, 20),          Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("关门时间"),              D_FONT_BOLD(8),        QRect(4, 305-30, 196, 20),          Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("障碍次数"),              D_FONT_BOLD(8),        QRect(4, 335-30, 196, 20),          Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("障碍开门宽度"),           D_FONT_BOLD(8),        QRect(4, 365-30, 196, 20),          Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("障碍监测延时"),           D_FONT_BOLD(8),        QRect(4, 395-30, 196, 20),          Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("开门延时时间"),           D_FONT_BOLD(8),        QRect(4, 425-30, 196, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("关门延时时间"),           D_FONT_BOLD(8),        QRect(4, 455-30, 196, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("重关闭时间"),             D_FONT_BOLD(8),        QRect(4, 485-30, 196, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8("参数范围"),              D_FONT_BOLD(8),                 QRect(200,  95-30, 160, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("5-30(1=10N)"),         D_FONT_BOLD(8),                QRect(200, 125-30, 160, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("5-30(1=10N)"),                 D_FONT_BOLD(8),        QRect(200, 155-30, 160, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("5-30(1=10N)"),                  D_FONT_BOLD(8),        QRect(200, 185-30, 160, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("5-30(1=10N)"),              D_FONT_BOLD(8),           QRect(200, 215-30, 160, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("5-30(1=10N)"),              D_FONT_BOLD(8),          QRect(200, 245-30, 160, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("20-40(1=0.1s)"),                  D_FONT_BOLD(8),        QRect(200, 275-30, 160, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("20-40(1=0.1s)"),                  D_FONT_BOLD(8),        QRect(200, 305-30, 160, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("1-5(1=1次)"),                  D_FONT_BOLD(8),        QRect(200, 335-30, 160, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("0-140(1=1cm)"),                  D_FONT_BOLD(8),        QRect(200, 365-30, 160, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("1-20(1=0.1s)"),                 D_FONT_BOLD(8),        QRect(200, 395-30, 160, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("0-30(1=0.1s)"),                  D_FONT_BOLD(8),        QRect(200, 425-30, 160, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("0-30(1=0.1s)"),                 D_FONT_BOLD(8),        QRect(200, 455-30, 160, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("0-30(1=0.1s)"),                D_FONT_BOLD(8),        QRect(200, 485-30, 160, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_IGNORE         },



{QObject::trUtf8("设定值"),              D_FONT_BOLD(4),        QRect(90+ 310,  95-30, 70, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8("15"),                 D_FONT_BOLD(8),        QRect(90+ 310, 125-30, 70, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,                   ID_PIBDS_LABEL_SETTING1         },
{QObject::trUtf8("15"),                 D_FONT_BOLD(8),        QRect(90+ 310, 155-30, 70, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_PIBDS_LABEL_SETTING2         },
{QObject::trUtf8("15"),                 D_FONT_BOLD(8),        QRect(90+ 310, 185-30, 70, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,          ID_PIBDS_LABEL_SETTING3         },
{QObject::trUtf8("15"),                 D_FONT_BOLD(8),        QRect(90+ 310, 215-30, 70, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_PIBDS_LABEL_SETTING4         },
{QObject::trUtf8("15"),                 D_FONT_BOLD(8),        QRect(90+ 310, 245-30, 70, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_PIBDS_LABEL_SETTING5         },
{QObject::trUtf8("30"),                 D_FONT_BOLD(8),        QRect(90+ 310, 275-30, 70, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_PIBDS_LABEL_SETTING6         },
{QObject::trUtf8("30"),                 D_FONT_BOLD(8),        QRect(90+ 310, 305-30, 70, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_PIBDS_LABEL_SETTING7         },
{QObject::trUtf8("3"),                  D_FONT_BOLD(8),        QRect(90+ 310, 335-30, 70, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_PIBDS_LABEL_SETTING8         },
{QObject::trUtf8("140"),                 D_FONT_BOLD(8),        QRect(90+ 310, 365-30, 70, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_PIBDS_LABEL_SETTING9         },
{QObject::trUtf8("5"),                  D_FONT_BOLD(8),        QRect(90+ 310, 395-30, 70, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_PIBDS_LABEL_SETTING10         },
{QObject::trUtf8("20"),                 D_FONT_BOLD(8),        QRect(90+ 310, 425-30, 70, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_PIBDS_LABEL_SETTING11         },
{QObject::trUtf8("30"),                 D_FONT_BOLD(8),        QRect(90+ 310, 455-30, 70, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_PIBDS_LABEL_SETTING12         },
{QObject::trUtf8("20"),                 D_FONT_BOLD(8),        QRect(90+ 310, 485-30, 70, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_PIBDS_LABEL_SETTING13         },
//{QObject::trUtf8(""),                 D_FONT_BOLD(8),        QRect(90+ 415, 515, 70, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_PIBDS_LABEL_SETTING14         },

{QObject::trUtf8("实际值"),              D_FONT_BOLD(4),        QRect(90+ 500,  95-30, 40, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8(""),                 D_FONT_BOLD(8),        QRect(90+ 500, 125-30, 40, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,                   ID_PIBDS_LABEL_REC1         },
{QObject::trUtf8(""),                 D_FONT_BOLD(8),        QRect(90+ 500, 155-30, 40, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_PIBDS_LABEL_REC2         },
{QObject::trUtf8(""),                 D_FONT_BOLD(8),        QRect(90+ 500, 185-30, 40, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,          ID_PIBDS_LABEL_REC3         },
{QObject::trUtf8(""),                 D_FONT_BOLD(8),        QRect(90+ 500, 215-30, 40, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_PIBDS_LABEL_REC4         },
{QObject::trUtf8(""),                 D_FONT_BOLD(8),        QRect(90+ 500, 245-30, 40, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_PIBDS_LABEL_REC5         },
{QObject::trUtf8(""),                 D_FONT_BOLD(8),        QRect(90+ 500, 275-30, 40, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_PIBDS_LABEL_REC6         },
{QObject::trUtf8(""),                 D_FONT_BOLD(8),        QRect(90+ 500, 305-30, 40, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_PIBDS_LABEL_REC7         },
{QObject::trUtf8(""),                  D_FONT_BOLD(8),        QRect(90+ 500, 335-30, 40, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_PIBDS_LABEL_REC8         },
{QObject::trUtf8(""),                 D_FONT_BOLD(8),        QRect(90+ 500, 365-30, 40, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_PIBDS_LABEL_REC9         },
{QObject::trUtf8(""),                  D_FONT_BOLD(8),        QRect(90+ 500, 395-30, 40, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_PIBDS_LABEL_REC10         },
{QObject::trUtf8(""),                 D_FONT_BOLD(8),        QRect(90+ 500, 425-30, 40, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_PIBDS_LABEL_REC11         },
{QObject::trUtf8(""),                 D_FONT_BOLD(8),        QRect(90+ 500, 455-30, 40, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_PIBDS_LABEL_REC12         },
{QObject::trUtf8(""),                 D_FONT_BOLD(8),        QRect(90+ 500, 485-30, 40, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_PIBDS_LABEL_REC13         },
//{QObject::trUtf8(""),                 D_FONT_BOLD(8),        QRect(90+ 415, 515, 70, 20),           Qt::white,                Qt::transparent,           CONTROL_LABEL,           ID_PIBDS_LABEL_SETTING14         },


{QObject::trUtf8("▲"),                D_FONT_BOLD(10),        QRect(490,  125-30,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_UP1               },
{QObject::trUtf8("▼"),                D_FONT_BOLD(10),        QRect(535,  125-30,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_DOWN1                 },
{QObject::trUtf8("▲"),                D_FONT_BOLD(10),        QRect(490,  155-30,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_UP2               },
{QObject::trUtf8("▼"),                D_FONT_BOLD(10),        QRect(535,  155-30,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_DOWN2                 },
{QObject::trUtf8("▲"),                D_FONT_BOLD(10),        QRect(490,  185-30,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_UP3               },
{QObject::trUtf8("▼"),                D_FONT_BOLD(10),        QRect(535,  185-30,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_DOWN3                 },
{QObject::trUtf8("▲"),                D_FONT_BOLD(10),        QRect(490,  215-30,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_UP4               },
{QObject::trUtf8("▼"),                D_FONT_BOLD(10),        QRect(535,  215-30,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_DOWN4                 },
{QObject::trUtf8("▲"),                D_FONT_BOLD(10),        QRect(490,  245-30,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_UP5               },
{QObject::trUtf8("▼"),                D_FONT_BOLD(10),        QRect(535,  245-30,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_DOWN5                 },
{QObject::trUtf8("▲"),                D_FONT_BOLD(10),        QRect(490,  275-30,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_UP6               },
{QObject::trUtf8("▼"),                D_FONT_BOLD(10),        QRect(535,  275-30,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_DOWN6                 },
{QObject::trUtf8("▲"),                D_FONT_BOLD(10),        QRect(490,  305-30,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_UP7              },
{QObject::trUtf8("▼"),                D_FONT_BOLD(10),        QRect(535,  305-30,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_DOWN7                 },
{QObject::trUtf8("▲"),                D_FONT_BOLD(10),        QRect(490,  335-30,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_UP8               },
{QObject::trUtf8("▼"),                D_FONT_BOLD(10),        QRect(535,  335-30,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_DOWN8                 },
{QObject::trUtf8("▲"),                D_FONT_BOLD(10),        QRect(490,  365-30,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_UP9               },
{QObject::trUtf8("▼"),                D_FONT_BOLD(10),        QRect(535,  365-30,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_DOWN9                 },
{QObject::trUtf8("▲"),                D_FONT_BOLD(10),        QRect(490,  395-30,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_UP10               },
{QObject::trUtf8("▼"),                D_FONT_BOLD(10),        QRect(535,  395-30,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_DOWN10                 },
{QObject::trUtf8("▲"),                D_FONT_BOLD(10),        QRect(490,  425-30,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_UP11               },
{QObject::trUtf8("▼"),                D_FONT_BOLD(10),        QRect(535,  425-30,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_DOWN11                 },
{QObject::trUtf8("▲"),                D_FONT_BOLD(10),        QRect(490,  455-30,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_UP12               },
{QObject::trUtf8("▼"),                D_FONT_BOLD(10),        QRect(535,  455-30,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_DOWN12                 },
{QObject::trUtf8("▲"),                D_FONT_BOLD(10),        QRect(490,  485-30,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_UP13               },
{QObject::trUtf8("▼"),                D_FONT_BOLD(10),        QRect(535,  485-30,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_DOWN13                 },
//{QObject::trUtf8("▲"),                D_FONT_BOLD(10),        QRect(90+ 490,  515,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_UP14               },
//{QObject::trUtf8("▼"),                D_FONT_BOLD(10),        QRect(90+ 535,  515,  40,  20),            Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PIBDS_BUTTON_DOWN14                 },

{QObject::trUtf8("设置结果"),              D_FONT_BOLD(8),        QRect(670-21,  65, 133, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE         },

{QObject::trUtf8("1车"),              D_FONT_BOLD(8),        QRect(670-21,  93, 36, 58),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8("2车"),              D_FONT_BOLD(8),        QRect(670-21,  153, 36, 58),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8("3车"),              D_FONT_BOLD(8),        QRect(670-21,  213, 36, 58),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8("4车"),              D_FONT_BOLD(8),        QRect(670-21,  273, 36, 58),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8("5车"),              D_FONT_BOLD(8),        QRect(670-21,  333, 36, 58),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8("6车"),              D_FONT_BOLD(8),        QRect(670-21,  393, 36, 58),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE         },


{"",                           D_FONT_BOLD(6),        QRect(670-21, 90, 133,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
{"",                           D_FONT_BOLD(6),        QRect(670-21, 150, 133,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
{"",                           D_FONT_BOLD(6),        QRect(670-21, 210, 133,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
{"",                           D_FONT_BOLD(6),        QRect(670-21, 270, 133,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
{"",                           D_FONT_BOLD(6),        QRect(670-21, 330, 133,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
{"",                           D_FONT_BOLD(6),        QRect(670-21, 390, 133,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
{"",                           D_FONT_BOLD(6),        QRect(670-21, 450, 133,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

{"",                           D_FONT_BOLD(6),        QRect(670-21, 90,  1, 360),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
{"",                           D_FONT_BOLD(6),        QRect(782, 90,  1, 360),            Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


{QObject::trUtf8("1"),           D_FONT_BOLD(4),      QRect(107+600-21, 467-370,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR1DOOR1         },
{QObject::trUtf8("3"),           D_FONT_BOLD(4),      QRect(124+600-21, 467-370,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR1DOOR3         },
{QObject::trUtf8("5"),           D_FONT_BOLD(4),      QRect(141+600-21, 467-370,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR1DOOR5         },
{QObject::trUtf8("7"),           D_FONT_BOLD(4),      QRect(158+600-21, 467-370,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR1DOOR7         },
{QObject::trUtf8("2"),           D_FONT_BOLD(4),      QRect(107+600-21, 491-370,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR1DOOR2         },
{QObject::trUtf8("4"),           D_FONT_BOLD(4),      QRect(124+600-21, 491-370,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR1DOOR4         },
{QObject::trUtf8("6"),           D_FONT_BOLD(4),      QRect(141+600-21, 491-370,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR1DOOR6         },
{QObject::trUtf8("8"),           D_FONT_BOLD(4),      QRect(158+600-21, 491-370,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR1DOOR8         },
{QObject::trUtf8("9"),           D_FONT_BOLD(4),      QRect(175+600-21, 467-370,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR1DOOR9         },
{QObject::trUtf8("10"),           D_FONT_BOLD(4),      QRect(175+600-21, 491-370,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR1DOOR10         },

{QObject::trUtf8("1"),           D_FONT_BOLD(4),      QRect(107+600-21, 467-310,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR2DOOR1         },
{QObject::trUtf8("3"),           D_FONT_BOLD(4),      QRect(124+600-21, 467-310,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR2DOOR3         },
{QObject::trUtf8("5"),           D_FONT_BOLD(4),      QRect(141+600-21, 467-310,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR2DOOR5         },
{QObject::trUtf8("7"),           D_FONT_BOLD(4),      QRect(158+600-21, 467-310,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR2DOOR7         },
{QObject::trUtf8("2"),           D_FONT_BOLD(4),      QRect(107+600-21, 491-310,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR2DOOR2         },
{QObject::trUtf8("4"),           D_FONT_BOLD(4),      QRect(124+600-21, 491-310,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR2DOOR4         },
{QObject::trUtf8("6"),           D_FONT_BOLD(4),      QRect(141+600-21, 491-310,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR2DOOR6         },
{QObject::trUtf8("8"),           D_FONT_BOLD(4),      QRect(158+600-21, 491-310,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR2DOOR8         },
{QObject::trUtf8("9"),           D_FONT_BOLD(4),      QRect(175+600-21, 467-310,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR2DOOR9         },
{QObject::trUtf8("10"),           D_FONT_BOLD(4),      QRect(175+600-21, 491-310,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR2DOOR10         },

{QObject::trUtf8("1"),           D_FONT_BOLD(4),      QRect(107+600-21, 467-250,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR3DOOR1         },
{QObject::trUtf8("3"),           D_FONT_BOLD(4),      QRect(124+600-21, 467-250,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR3DOOR3         },
{QObject::trUtf8("5"),           D_FONT_BOLD(4),      QRect(141+600-21, 467-250,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR3DOOR5         },
{QObject::trUtf8("7"),           D_FONT_BOLD(4),      QRect(158+600-21, 467-250,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR3DOOR7         },
{QObject::trUtf8("2"),           D_FONT_BOLD(4),      QRect(107+600-21, 491-250,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR3DOOR2         },
{QObject::trUtf8("4"),           D_FONT_BOLD(4),      QRect(124+600-21, 491-250,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR3DOOR4         },
{QObject::trUtf8("6"),           D_FONT_BOLD(4),      QRect(141+600-21, 491-250,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR3DOOR6         },
{QObject::trUtf8("8"),           D_FONT_BOLD(4),      QRect(158+600-21, 491-250,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR3DOOR8         },
{QObject::trUtf8("9"),           D_FONT_BOLD(4),      QRect(175+600-21, 467-250,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR3DOOR9         },
{QObject::trUtf8("10"),           D_FONT_BOLD(4),      QRect(175+600-21, 491-250,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR3DOOR10         },

{QObject::trUtf8("10"),           D_FONT_BOLD(4),      QRect(107+600-21, 467-190,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR4DOOR10         },
{QObject::trUtf8("8"),           D_FONT_BOLD(4),      QRect(124+600-21, 467-190,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR4DOOR8         },
{QObject::trUtf8("6"),           D_FONT_BOLD(4),      QRect(141+600-21, 467-190,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR4DOOR6         },
{QObject::trUtf8("4"),           D_FONT_BOLD(4),      QRect(158+600-21, 467-190,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR4DOOR4         },
{QObject::trUtf8("9"),           D_FONT_BOLD(4),      QRect(107+600-21, 491-190,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR4DOOR9         },
{QObject::trUtf8("7"),           D_FONT_BOLD(4),      QRect(124+600-21, 491-190,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR4DOOR7         },
{QObject::trUtf8("5"),           D_FONT_BOLD(4),      QRect(141+600-21, 491-190,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR4DOOR5         },
{QObject::trUtf8("3"),           D_FONT_BOLD(4),      QRect(158+600-21, 491-190,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR4DOOR3         },
{QObject::trUtf8("2"),           D_FONT_BOLD(4),      QRect(175+600-21, 467-190,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR4DOOR2         },
{QObject::trUtf8("1"),           D_FONT_BOLD(4),      QRect(175+600-21, 491-190,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR4DOOR1         },

{QObject::trUtf8("10"),           D_FONT_BOLD(4),      QRect(107+600-21, 467-130,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR5DOOR10         },
{QObject::trUtf8("8"),           D_FONT_BOLD(4),      QRect(124+600-21, 467-130,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR5DOOR8         },
{QObject::trUtf8("6"),           D_FONT_BOLD(4),      QRect(141+600-21, 467-130,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR5DOOR6         },
{QObject::trUtf8("4"),           D_FONT_BOLD(4),      QRect(158+600-21, 467-130,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR5DOOR4         },
{QObject::trUtf8("9"),           D_FONT_BOLD(4),      QRect(107+600-21, 491-130,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR5DOOR9         },
{QObject::trUtf8("7"),           D_FONT_BOLD(4),      QRect(124+600-21, 491-130,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR5DOOR7         },
{QObject::trUtf8("5"),           D_FONT_BOLD(4),      QRect(141+600-21, 491-130,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR5DOOR5         },
{QObject::trUtf8("3"),           D_FONT_BOLD(4),      QRect(158+600-21, 491-130,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR5DOOR3         },
{QObject::trUtf8("2"),           D_FONT_BOLD(4),      QRect(175+600-21, 467-130,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR5DOOR2         },
{QObject::trUtf8("1"),           D_FONT_BOLD(4),      QRect(175+600-21, 491-130,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR5DOOR1         },

{QObject::trUtf8("10"),           D_FONT_BOLD(4),      QRect(107+600-21, 467-70,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR6DOOR10         },
{QObject::trUtf8("8"),           D_FONT_BOLD(4),      QRect(124+600-21, 467-70,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR6DOOR8         },
{QObject::trUtf8("6"),           D_FONT_BOLD(4),      QRect(141+600-21, 467-70,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR6DOOR6         },
{QObject::trUtf8("4"),           D_FONT_BOLD(4),      QRect(158+600-21, 467-70,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR6DOOR4         },
{QObject::trUtf8("9"),           D_FONT_BOLD(4),      QRect(107+600-21, 491-70,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR6DOOR9         },
{QObject::trUtf8("7"),           D_FONT_BOLD(4),      QRect(124+600-21, 491-70,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR6DOOR7         },
{QObject::trUtf8("5"),           D_FONT_BOLD(4),      QRect(141+600-21, 491-70,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR6DOOR5         },
{QObject::trUtf8("3"),           D_FONT_BOLD(4),      QRect(158+600-21, 491-70,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR6DOOR3         },
{QObject::trUtf8("2"),           D_FONT_BOLD(4),      QRect(175+600-21, 467-70,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR6DOOR2         },
{QObject::trUtf8("1"),           D_FONT_BOLD(4),      QRect(175+600-21, 491-70,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBDS_LABEL_CAR6DOOR1         },

{QObject::trUtf8("1"),           D_FONT_BOLD(4),      QRect(645, 455,  16,  21),           Qt::black,                Qt::white,                CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8("1"),           D_FONT_BOLD(4),      QRect(705, 455,  16,  21),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8("1"),           D_FONT_BOLD(4),      QRect(765, 455,  16,  21),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },

{QObject::trUtf8("门参数设置状态："),           D_FONT_BOLD(4),      QRect(530, 480,  100,  21),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8("无效"),           D_FONT_BOLD(4),      QRect(630, 480,  50,  21),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8("未成功"),           D_FONT_BOLD(4),      QRect(690, 480,  50,  21),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
{QObject::trUtf8("成功"),           D_FONT_BOLD(4),      QRect(750, 480,  50,  21),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },


};
int g_DoorSettingRomLen = sizeof(g_PicRom_DoorSetting)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(C_Page_Door_Setting,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(IDLB_COM_BTN1, OnComBtn1Clk)
        ON_BTNCLK(IDLB_COM_BTN2, OnComBtn2Clk)
        ON_BTNCLK(IDLB_COM_BTN3, OnComBtn3Clk)
        ON_BTNCLK(IDLB_COM_BTN4, OnComBtn4Clk)
        ON_BTNCLK(IDLB_COM_BTN5, OnComBtn5Clk)
        ON_BTNCLK(IDLB_COM_BTN6, OnComBtn6Clk)
#ifdef PAGE_BUTTON_BAR_NEW
        ON_BTNCLK(IDLB_COM_BTN8, OnComBtn8Clk)
        ON_BTNCLK(IDLB_COM_BTN9, OnComBtn9Clk)
        ON_BTNCLK(IDLB_COM_BTN10, OnComBtn10Clk)
        ON_BTNCLK(IDLB_COM_BTN11, OnComBtn11Clk)
        ON_BTNCLK(IDLB_COM_BTN7, OnComBtn7Clk)
        ON_BTNCLK(IDLB_COM_BTN12, OnDoorConfirmClk)

#endif
        ON_BTNCLK(ID_PIBDS_BUTTON_UP1,OnDoorParaSetUp1Clk)
        ON_BTNCLK(ID_PIBDS_BUTTON_UP2,OnDoorParaSetUp2Clk)
        ON_BTNCLK(ID_PIBDS_BUTTON_UP3,OnDoorParaSetUp3Clk)
        ON_BTNCLK(ID_PIBDS_BUTTON_UP4,OnDoorParaSetUp4Clk)
        ON_BTNCLK(ID_PIBDS_BUTTON_UP5,OnDoorParaSetUp5Clk)
        ON_BTNCLK(ID_PIBDS_BUTTON_UP6,OnDoorParaSetUp6Clk)
        ON_BTNCLK(ID_PIBDS_BUTTON_UP7,OnDoorParaSetUp7Clk)
        ON_BTNCLK(ID_PIBDS_BUTTON_UP8,OnDoorParaSetUp8Clk)
        ON_BTNCLK(ID_PIBDS_BUTTON_UP9,OnDoorParaSetUp9Clk)
        ON_BTNCLK(ID_PIBDS_BUTTON_UP10,OnDoorParaSetUp10Clk)
        ON_BTNCLK(ID_PIBDS_BUTTON_UP11,OnDoorParaSetUp11Clk)
        ON_BTNCLK(ID_PIBDS_BUTTON_UP12,OnDoorParaSetUp12Clk)
        ON_BTNCLK(ID_PIBDS_BUTTON_UP13,OnDoorParaSetUp13Clk)

        ON_BTNCLK(ID_PIBDS_BUTTON_DOWN1,OnDoorParaSetDown1Clk)
        ON_BTNCLK(ID_PIBDS_BUTTON_DOWN2,OnDoorParaSetDown2Clk)
        ON_BTNCLK(ID_PIBDS_BUTTON_DOWN3,OnDoorParaSetDown3Clk)
        ON_BTNCLK(ID_PIBDS_BUTTON_DOWN4,OnDoorParaSetDown4Clk)
        ON_BTNCLK(ID_PIBDS_BUTTON_DOWN5,OnDoorParaSetDown5Clk)
        ON_BTNCLK(ID_PIBDS_BUTTON_DOWN6,OnDoorParaSetDown6Clk)
        ON_BTNCLK(ID_PIBDS_BUTTON_DOWN7,OnDoorParaSetDown7Clk)
        ON_BTNCLK(ID_PIBDS_BUTTON_DOWN8,OnDoorParaSetDown8Clk)
        ON_BTNCLK(ID_PIBDS_BUTTON_DOWN9,OnDoorParaSetDown9Clk)
        ON_BTNCLK(ID_PIBDS_BUTTON_DOWN10,OnDoorParaSetDown10Clk)
        ON_BTNCLK(ID_PIBDS_BUTTON_DOWN11,OnDoorParaSetDown11Clk)
        ON_BTNCLK(ID_PIBDS_BUTTON_DOWN12,OnDoorParaSetDown12Clk)
        ON_BTNCLK(ID_PIBDS_BUTTON_DOWN13,OnDoorParaSetDown13Clk)
        ON_BTNCLK(ID_LABEL_REALTIMEFAULTCONFIRM, OnRealtimefaultBtnClk)
       // ON_BTNCLK(ID_PIBDS_BUTTON_MAKESURE,OnDoorConfirmClk)

END_MESSAGE_MAP()

C_Page_Door_Setting::C_Page_Door_Setting()
{
    HMiCT_ParaModifRequest_U8 = 0x55;
    HMiCT_SetFlagChecker_U8 = 0x55;
}

void C_Page_Door_Setting::OnUpdatePage()
{

    UpDateDrObsCloseForce1();
    UpDateDrObsCloseForce2();
    UpDateDrObsCloseForce3();
    UpDateDrObsCloseForce4();
    UpDateDrObsCloseForce5();
    UpDateDrOpenTime();
    UpDateDrCloSetDrime();
    UpDateDrObsNumber();
    UpDateDrOpenWidthOnObs();
    UpDateDrObsDetectionDelay();
    UpDateDrDelayTimeForOpen();
    UpDateDrDelayTimeForClose();
    UpDateDrObsRecloseDelay();
    UpDateDrSetOK();


    ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_REC1))->SetCtrlText(QString::number(CTDR_ObstClosForce1_U16));
    ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_REC2))->SetCtrlText(QString::number(CTDR_ObstClosForce2_U16));
    ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_REC3))->SetCtrlText(QString::number(CTDR_ObstClosForce3_U16));
    ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_REC4))->SetCtrlText(QString::number(CTDR_ObstClosForce4_U16));
    ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_REC5))->SetCtrlText(QString::number(CTDR_ObstClosForce5_U16));
    ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_REC6))->SetCtrlText(QString::number(CTDR_DrOpenTime_U16));
    ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_REC7))->SetCtrlText(QString::number(CTDR_DrCloseTime_U16));
    ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_REC8))->SetCtrlText(QString::number(CTDR_OpenNumIFObst_U16));
    ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_REC9))->SetCtrlText(QString::number(CTDR_OpenObstDetWidth_U16));
    ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_REC10))->SetCtrlText(QString::number(CTDR_ObstDetDelay_U16));
    ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_REC11))->SetCtrlText(QString::number(CTDR_DrOpenDelay_U16));
    ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_REC12))->SetCtrlText(QString::number(CTDR_DrCloseDelay_U16));
    ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_REC13))->SetCtrlText(QString::number(CTDR_ObstReCloseDelay_U16));


    if (m_DChange)
    {
        static int times=0;
        times ++;
        if (times%times_n==0)
        {
            prameter_setting_door_timer --;
            if (prameter_setting_door_timer==0)
            {
                m_DChange=false;
                m_MakeSure=false;
                HMCT_SetDrEnable_B1=false;
                HMiCT_ParaModifRequest_U8 = 0x55;
                HMiCT_SetFlagChecker_U8 = 0x55;

                //((CButton*)GetDlgItem(ID_PIBDS_BUTTON_MAKESURE))->ChangeButtonState(LBUTTON_UP);
                ((CButton*)GetDlgItem(IDLB_COM_BTN12))->ChangeButtonState(LBUTTON_UP);

                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP1))->ChangeButtonState(LBUTTON_UP);
                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP2))->ChangeButtonState(LBUTTON_UP);
                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP3))->ChangeButtonState(LBUTTON_UP);
                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP4))->ChangeButtonState(LBUTTON_UP);
                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP5))->ChangeButtonState(LBUTTON_UP);
                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP6))->ChangeButtonState(LBUTTON_UP);
                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP7))->ChangeButtonState(LBUTTON_UP);
                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP8))->ChangeButtonState(LBUTTON_UP);
                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP9))->ChangeButtonState(LBUTTON_UP);
                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP10))->ChangeButtonState(LBUTTON_UP);
                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP11))->ChangeButtonState(LBUTTON_UP);
                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP12))->ChangeButtonState(LBUTTON_UP);
                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP13))->ChangeButtonState(LBUTTON_UP);


                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN1))->ChangeButtonState(LBUTTON_UP);
                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN2))->ChangeButtonState(LBUTTON_UP);
                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN3))->ChangeButtonState(LBUTTON_UP);
                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN4))->ChangeButtonState(LBUTTON_UP);
                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN5))->ChangeButtonState(LBUTTON_UP);
                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN6))->ChangeButtonState(LBUTTON_UP);
                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN7))->ChangeButtonState(LBUTTON_UP);
                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN8))->ChangeButtonState(LBUTTON_UP);
                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN9))->ChangeButtonState(LBUTTON_UP);
                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN10))->ChangeButtonState(LBUTTON_UP);
                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN11))->ChangeButtonState(LBUTTON_UP);
                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN12))->ChangeButtonState(LBUTTON_UP);
                        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN13))->ChangeButtonState(LBUTTON_UP);


            }

        }


    }
    UpdateRealtimefaults();
}

void C_Page_Door_Setting::OnInitPage()
{
    ((CLabel *) GetDlgItem(ID_PIBDS_LABEL_SETTING1))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBDS_LABEL_SETTING2))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBDS_LABEL_SETTING3))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBDS_LABEL_SETTING4))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBDS_LABEL_SETTING5))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBDS_LABEL_SETTING6))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBDS_LABEL_SETTING7))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBDS_LABEL_SETTING8))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBDS_LABEL_SETTING9))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBDS_LABEL_SETTING10))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBDS_LABEL_SETTING11))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBDS_LABEL_SETTING12))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBDS_LABEL_SETTING13))->SetBorderColor(Qt::white);
 //   ((CLabel *) GetDlgItem(ID_PIBDS_LABEL_SETTING14))->SetBorderColor(Qt::black);

   // ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_MAKESURE))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(IDLB_COM_BTN12))->m_bAutoUpState = false;

    HMCT_SetDrObsCloseForce1_U8=15;
    HMCT_SetDrObsCloseForce2_U8=15;
    HMCT_SetDrObsCloseForce3_U8=15;
    HMCT_SetDrObsCloseForce4_U8=15;
    HMCT_SetDrObsCloseForce5_U8=15;
    HMCT_SetDrOpenTime_U8=30;
    HMCT_SetDrCloSetDrime_U8=30;
    HMCT_SetDrObsNumber_U8=3;
    HMCT_SetDrOpenWidthOnObs_U8=140;
    HMCT_SetDrObsDetectionDelay_U8=5;
    HMCT_SetDrDelayTimeForOpen_U8=20;
    HMCT_SetDrDelayTimeForClose_U8=30;
    HMCT_SetDrObsRecloseDelay_U8=20;
//    HMCT_SetDrObsCloseForce1_U8 = CTDR_ObstClosForce1_U16;
//    HMCT_SetDrObsCloseForce2_U8 = CTDR_ObstClosForce2_U16;
//    HMCT_SetDrObsCloseForce3_U8 = CTDR_ObstClosForce3_U16;
//    HMCT_SetDrObsCloseForce4_U8 = CTDR_ObstClosForce4_U16;
//    HMCT_SetDrObsCloseForce5_U8 = CTDR_ObstClosForce5_U16;
//    HMCT_SetDrOpenTime_U8 = CTDR_DrOpenTime_U16;
//    HMCT_SetDrCloSetDrime_U8 = CTDR_DrCloseTime_U16;
//    HMCT_SetDrObsNumber_U8 = CTDR_OpenNumIFObst_U16;
//    HMCT_SetDrOpenWidthOnObs_U8 = CTDR_OpenObstDetWidth_U16;
//    HMCT_SetDrObsDetectionDelay_U8 = CTDR_ObstDetDelay_U16;
//    HMCT_SetDrDelayTimeForOpen_U8 = CTDR_DrOpenDelay_U16;
//    HMCT_SetDrDelayTimeForClose_U8 = CTDR_DrCloseDelay_U16;
//    HMCT_SetDrObsRecloseDelay_U8 = CTDR_ObstReCloseDelay_U16;
}

void C_Page_Door_Setting::OnShowPage()
{

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
        ((CButton *)GetDlgItem(IDLB_COM_BTN12))->SetCtrlText(QObject::trUtf8("确  定"));
    #else
        ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
        ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
        ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
        ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
        ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
        ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("确   定"));
    #endif
        m_DChange = false;
        m_MakeSure= false;
         prameter_setting_door_timer = 5;
         //((CButton *)GetDlgItem(ID_PIBDS_BUTTON_MAKESURE))->ChangeButtonState(LBUTTON_UP);
         ((CButton *)GetDlgItem(IDLB_COM_BTN12))->ChangeButtonState(LBUTTON_UP);

         this->InitPageHeader();



}
void C_Page_Door_Setting::UpdateRealtimefaults()
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

void C_Page_Door_Setting::OnRealtimefaultBtnClk()
{
    g_faultsrom[g_romidx].confirm = true;
    g_realtimeFaultsbarList.removeAt(g_faultcount);
    if(g_faultcount>0)
    g_faultcount--;
    //m_faultcount--;

}

void C_Page_Door_Setting::OnComBtn1Clk()
{
    m_DChange=false;
    m_MakeSure=false;
    HMCT_SetDrEnable_B1=false;
    HMiCT_ParaModifRequest_U8 = 0x55;
    HMiCT_SetFlagChecker_U8 = 0x55;
    ChangePage(PAGE_INDEX_MAINTAIN);
}

void C_Page_Door_Setting::OnComBtn2Clk()
{

}

void C_Page_Door_Setting::OnComBtn3Clk()
{

}

void C_Page_Door_Setting::OnComBtn4Clk()
{

}

void C_Page_Door_Setting::OnComBtn5Clk()
{

}

void C_Page_Door_Setting::OnComBtn6Clk()
{

}

#ifdef PAGE_BUTTON_BAR_NEW
void C_Page_Door_Setting::OnComBtn7Clk()
{

}

void C_Page_Door_Setting::OnComBtn8Clk()
{

}
void C_Page_Door_Setting::OnComBtn9Clk()
{

}

void C_Page_Door_Setting::OnComBtn10Clk()
{

}
void C_Page_Door_Setting::OnComBtn11Clk()
{

}


#endif


void C_Page_Door_Setting::UpDateDrObsCloseForce1()
{


   ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_SETTING1))->SetCtrlText(QString::number(HMCT_SetDrObsCloseForce1_U8));

}

void C_Page_Door_Setting::UpDateDrObsCloseForce2()
{

    ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_SETTING2))->SetCtrlText(QString::number(HMCT_SetDrObsCloseForce2_U8));

}
void C_Page_Door_Setting::UpDateDrObsCloseForce3()
{

    ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_SETTING3))->SetCtrlText(QString::number(HMCT_SetDrObsCloseForce3_U8));

}
void C_Page_Door_Setting::UpDateDrObsCloseForce4()
{

    ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_SETTING4))->SetCtrlText(QString::number(HMCT_SetDrObsCloseForce4_U8));

}
void C_Page_Door_Setting::UpDateDrObsCloseForce5()
{

    ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_SETTING5))->SetCtrlText(QString::number(HMCT_SetDrObsCloseForce5_U8));

}
void C_Page_Door_Setting::UpDateDrOpenTime()
{
    ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_SETTING6))->SetCtrlText(QString::number(HMCT_SetDrOpenTime_U8));

}
void C_Page_Door_Setting::UpDateDrCloSetDrime()
{

    ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_SETTING7))->SetCtrlText(QString::number(HMCT_SetDrCloSetDrime_U8));

}
void C_Page_Door_Setting::UpDateDrObsNumber()
{

    ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_SETTING8))->SetCtrlText(QString::number(HMCT_SetDrObsNumber_U8));

}
void C_Page_Door_Setting::UpDateDrOpenWidthOnObs()
{

    ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_SETTING9))->SetCtrlText(QString::number(HMCT_SetDrOpenWidthOnObs_U8));

}
void C_Page_Door_Setting::UpDateDrObsDetectionDelay()
{
    if(HMCT_SetDrObsDetectionDelay_U8<3)
    {
        HMCT_SetDrObsDetectionDelay_U8=3;
    }
    ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_SETTING10))->SetCtrlText(QString::number(HMCT_SetDrObsDetectionDelay_U8));

}
void C_Page_Door_Setting::UpDateDrDelayTimeForOpen()
{

    ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_SETTING11))->SetCtrlText(QString::number(HMCT_SetDrDelayTimeForOpen_U8));

}
void C_Page_Door_Setting::UpDateDrDelayTimeForClose()
{

    ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_SETTING12))->SetCtrlText(QString::number(HMCT_SetDrDelayTimeForClose_U8));

}
void C_Page_Door_Setting::UpDateDrObsRecloseDelay()
{



    ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_SETTING13))->SetCtrlText(QString::number(HMCT_SetDrObsRecloseDelay_U8));

}

void C_Page_Door_Setting::UpDateDrSetOK()
{
    if(che1_door1==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR1))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR1CT_Door1SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR1))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR1))->SetCtrlBKColor(Qt::yellow);
        }

    }
    if(che1_door2==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR2))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR1CT_Door2SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR2))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR2))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che1_door3==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR3))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR1CT_Door3SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR3))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR3))->SetCtrlBKColor(Qt::yellow);
        }

    }
    if(che1_door4==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR4))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR1CT_Door4SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR4))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR4))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che1_door5==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR5))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR1CT_Door5SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR5))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR5))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che1_door6==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR6))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR1CT_Door6SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR6))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR6))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che1_door7==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR7))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR1CT_Door7SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR7))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR7))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che1_door8==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR8))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR1CT_Door8SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR8))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR8))->SetCtrlBKColor(Qt::yellow);
        }

    }
    if(che1_door9==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR9))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR1CT_Door9SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR9))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR9))->SetCtrlBKColor(Qt::yellow);
        }

    }
    if(che1_door10==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR10))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR1CT_Door10SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR10))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR1DOOR10))->SetCtrlBKColor(Qt::yellow);
        }

    }
    /////CHE2
    if(che2_door1==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR1))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR3CT_Door1SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR1))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR1))->SetCtrlBKColor(Qt::yellow);
        }

    }
    if(che2_door2==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR2))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR3CT_Door2SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR2))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR2))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che2_door3==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR3))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR3CT_Door3SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR3))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR3))->SetCtrlBKColor(Qt::yellow);
        }

    }
    if(che2_door4==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR4))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR3CT_Door4SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR4))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR4))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che2_door5==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR5))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR3CT_Door5SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR5))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR5))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che2_door6==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR6))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR3CT_Door6SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR6))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR6))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che2_door7==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR7))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR3CT_Door7SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR7))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR7))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che2_door8==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR8))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR3CT_Door8SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR8))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR8))->SetCtrlBKColor(Qt::yellow);
        }

    }
    if(che2_door9==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR9))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR3CT_Door9SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR9))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR9))->SetCtrlBKColor(Qt::yellow);
        }

    }
    if(che2_door10==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR10))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR3CT_Door10SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR10))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR2DOOR10))->SetCtrlBKColor(Qt::yellow);
        }

    }
    ////CHE3
    if(che3_door1==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR1))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR5CT_Door1SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR1))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR1))->SetCtrlBKColor(Qt::yellow);
        }

    }
    if(che3_door2==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR2))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR5CT_Door2SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR2))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR2))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che3_door3==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR3))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR5CT_Door3SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR3))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR3))->SetCtrlBKColor(Qt::yellow);
        }

    }
    if(che3_door4==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR4))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR5CT_Door4SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR4))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR4))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che3_door5==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR5))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR5CT_Door5SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR5))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR5))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che3_door6==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR6))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR5CT_Door6SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR6))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR6))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che3_door7==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR7))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR5CT_Door7SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR7))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR7))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che3_door8==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR8))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR5CT_Door8SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR8))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR8))->SetCtrlBKColor(Qt::yellow);
        }

    }
    if(che3_door9==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR9))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR5CT_Door9SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR9))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR9))->SetCtrlBKColor(Qt::yellow);
        }

    }
    if(che3_door10==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR10))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR5CT_Door10SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR10))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR3DOOR10))->SetCtrlBKColor(Qt::yellow);
        }

    }
    /////CHE4
    if(che4_door1==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR1))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR7CT_Door1SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR1))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR1))->SetCtrlBKColor(Qt::yellow);
        }

    }
    if(che4_door2==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR2))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR7CT_Door2SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR2))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR2))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che4_door3==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR3))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR7CT_Door3SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR3))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR3))->SetCtrlBKColor(Qt::yellow);
        }

    }
    if(che4_door4==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR4))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR7CT_Door4SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR4))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR4))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che4_door5==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR5))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR7CT_Door5SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR5))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR5))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che4_door6==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR6))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR7CT_Door6SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR6))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR6))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che4_door7==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR7))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR7CT_Door7SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR7))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR7))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che4_door8==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR8))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR7CT_Door8SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR8))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR8))->SetCtrlBKColor(Qt::yellow);
        }

    }
    if(che4_door9==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR9))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR7CT_Door9SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR9))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR9))->SetCtrlBKColor(Qt::yellow);
        }

    }
    if(che4_door10==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR10))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR7CT_Door10SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR10))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR4DOOR10))->SetCtrlBKColor(Qt::yellow);
        }

    }
////CHE5
    if(che5_door1==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR1))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR9CT_Door1SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR1))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR1))->SetCtrlBKColor(Qt::yellow);
        }

    }
    if(che5_door2==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR2))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR9CT_Door2SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR2))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR2))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che5_door3==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR3))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR9CT_Door3SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR3))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR3))->SetCtrlBKColor(Qt::yellow);
        }

    }
    if(che5_door4==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR4))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR9CT_Door4SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR4))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR4))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che5_door5==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR5))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR9CT_Door5SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR5))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR5))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che5_door6==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR6))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR9CT_Door6SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR6))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR6))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che5_door7==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR7))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR9CT_Door7SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR7))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR7))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che5_door8==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR8))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR9CT_Door8SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR8))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR8))->SetCtrlBKColor(Qt::yellow);
        }

    }
    if(che5_door9==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR9))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR9CT_Door9SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR9))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR9))->SetCtrlBKColor(Qt::yellow);
        }

    }
    if(che5_door10==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR10))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR9CT_Door10SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR10))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR5DOOR10))->SetCtrlBKColor(Qt::yellow);
        }

    }
    ///CHE6
    if(che6_door1==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR1))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR11CT_Door1SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR1))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR1))->SetCtrlBKColor(Qt::yellow);
        }

    }
    if(che6_door2==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR2))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR11CT_Door2SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR2))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR2))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che6_door3==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR3))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR11CT_Door3SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR3))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR3))->SetCtrlBKColor(Qt::yellow);
        }

    }
    if(che6_door4==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR4))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR11CT_Door4SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR4))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR4))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che6_door5==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR5))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR11CT_Door5SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR5))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR5))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che6_door6==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR6))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR11CT_Door6SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR6))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR6))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che6_door7==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR7))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR11CT_Door7SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR7))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR7))->SetCtrlBKColor(Qt::yellow);
        }

    }

    if(che6_door8==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR8))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR11CT_Door8SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR8))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR8))->SetCtrlBKColor(Qt::yellow);
        }

    }
    if(che6_door9==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR9))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR11CT_Door9SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR9))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR9))->SetCtrlBKColor(Qt::yellow);
        }

    }
    if(che6_door10==0)
    {
        ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR10))->SetCtrlBKColor(Qt::white);

    }
    else
    {
        if(DR11CT_Door10SetOK_B1)
        {
             ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR10))->SetCtrlBKColor(Qt::green);
        }
        else
        {
            ((CLabel *)GetDlgItem(ID_PIBDS_LABEL_CAR6DOOR10))->SetCtrlBKColor(Qt::yellow);
        }

    }

}



void C_Page_Door_Setting::OnDoorParaSetUp1Clk()
{
    if (!m_MakeSure)
    {
    if(HMCT_SetDrObsCloseForce1_U8<30)
    {
        HMCT_SetDrObsCloseForce1_U8 += 1;

    }
}
}

void C_Page_Door_Setting:: OnDoorParaSetUp2Clk()
{
    if (!m_MakeSure)
    {
    if(HMCT_SetDrObsCloseForce2_U8<30)
    {
        HMCT_SetDrObsCloseForce2_U8 += 1;

    }
}
}

void C_Page_Door_Setting:: OnDoorParaSetUp3Clk()
{
    if (!m_MakeSure)
    {
    if(HMCT_SetDrObsCloseForce3_U8<30)
    {
        HMCT_SetDrObsCloseForce3_U8 += 1;

    }
}
}

void C_Page_Door_Setting:: OnDoorParaSetUp4Clk()
{
    if (!m_MakeSure)
    {
    if(HMCT_SetDrObsCloseForce4_U8<30)
    {
        HMCT_SetDrObsCloseForce4_U8 += 1;

    }
}
}

void C_Page_Door_Setting:: OnDoorParaSetUp5Clk()
{
    if (!m_MakeSure)
    {
    if(HMCT_SetDrObsCloseForce5_U8<30)
    {
        HMCT_SetDrObsCloseForce5_U8 += 1;

    }
}
}

void C_Page_Door_Setting:: OnDoorParaSetUp6Clk()
{
     if(HMCT_SetDrOpenTime_U8<40)
    {
         HMCT_SetDrOpenTime_U8 += 1;
    }
}

void C_Page_Door_Setting:: OnDoorParaSetUp7Clk()
{
    if (!m_MakeSure)
    {
    if(HMCT_SetDrCloSetDrime_U8<40)
    {
        HMCT_SetDrCloSetDrime_U8 += 1;
    }
}

}

void C_Page_Door_Setting:: OnDoorParaSetUp8Clk()
{
    if (!m_MakeSure)
    {
    if (HMCT_SetDrObsNumber_U8<5)
    {
        HMCT_SetDrObsNumber_U8 += 1;
    }
}
}

void C_Page_Door_Setting:: OnDoorParaSetUp9Clk()
{
    if (!m_MakeSure)
    {
    if (HMCT_SetDrOpenWidthOnObs_U8<140)
    {
        HMCT_SetDrOpenWidthOnObs_U8 += 1;
    }
}

}

void C_Page_Door_Setting:: OnDoorParaSetUp10Clk()
{
    if (!m_MakeSure)
    {
    if (HMCT_SetDrObsDetectionDelay_U8<20)
    {
        HMCT_SetDrObsDetectionDelay_U8 += 1;
    }
}

}

void C_Page_Door_Setting:: OnDoorParaSetUp11Clk()
{
    if (!m_MakeSure)
    {
    if (HMCT_SetDrDelayTimeForOpen_U8<30)
    {
        HMCT_SetDrDelayTimeForOpen_U8 += 1;
    }
}

}

void C_Page_Door_Setting:: OnDoorParaSetUp12Clk()
{
    if (!m_MakeSure)
    {
    if (HMCT_SetDrDelayTimeForClose_U8<30)
    {
        HMCT_SetDrDelayTimeForClose_U8 += 1;
    }
}

}

void C_Page_Door_Setting:: OnDoorParaSetUp13Clk()
{
    if (!m_MakeSure)
    {
    if (HMCT_SetDrObsRecloseDelay_U8<30)
    {
        HMCT_SetDrObsRecloseDelay_U8 += 1;
    }
}
}


void C_Page_Door_Setting::OnDoorParaSetDown1Clk()
{
    if (!m_MakeSure)
    {
    if(HMCT_SetDrObsCloseForce1_U8>5)
    {
        HMCT_SetDrObsCloseForce1_U8 -= 1;

    }
}
}

void C_Page_Door_Setting:: OnDoorParaSetDown2Clk()
{
    if (!m_MakeSure)
    {
    if(HMCT_SetDrObsCloseForce2_U8>5)
    {
        HMCT_SetDrObsCloseForce2_U8 -= 1;

    }
}
}

void C_Page_Door_Setting:: OnDoorParaSetDown3Clk()
{
    if(HMCT_SetDrObsCloseForce3_U8>5)
    {
        HMCT_SetDrObsCloseForce3_U8 -= 1;

    }
}

void C_Page_Door_Setting:: OnDoorParaSetDown4Clk()
{
    if (!m_MakeSure)
    {
    if(HMCT_SetDrObsCloseForce4_U8>5)
    {
        HMCT_SetDrObsCloseForce4_U8 -= 1;

    }
}
}

void C_Page_Door_Setting:: OnDoorParaSetDown5Clk()
{
    if (!m_MakeSure)
    {
    if(HMCT_SetDrObsCloseForce5_U8>5)
    {
        HMCT_SetDrObsCloseForce5_U8 -= 1;

    }
}
}

void C_Page_Door_Setting:: OnDoorParaSetDown6Clk()
{
    if (!m_MakeSure)
    {
     if(HMCT_SetDrOpenTime_U8>20)
    {
         HMCT_SetDrOpenTime_U8 -= 1;
    }
 }
}

void C_Page_Door_Setting:: OnDoorParaSetDown7Clk()
{
    if (!m_MakeSure)
    {
    if(HMCT_SetDrCloSetDrime_U8>20)
    {
        HMCT_SetDrCloSetDrime_U8 -= 1;
    }
}

}

void C_Page_Door_Setting:: OnDoorParaSetDown8Clk()
{
    if (!m_MakeSure)
    {
    if (HMCT_SetDrObsNumber_U8>1)
    {
        HMCT_SetDrObsNumber_U8 -= 1;
    }
}
}

void C_Page_Door_Setting:: OnDoorParaSetDown9Clk()
{
    if (!m_MakeSure)
    {
    if (HMCT_SetDrOpenWidthOnObs_U8>0)
    {
        HMCT_SetDrOpenWidthOnObs_U8 -= 1;
    }
}
}

void C_Page_Door_Setting:: OnDoorParaSetDown10Clk()
{
    if (!m_MakeSure)
    {
    if (HMCT_SetDrObsDetectionDelay_U8>1)
    {
        HMCT_SetDrObsDetectionDelay_U8 -= 1;
    }

}
}

void C_Page_Door_Setting:: OnDoorParaSetDown11Clk()
{
    if(!m_MakeSure)
    {
    if (HMCT_SetDrDelayTimeForOpen_U8>0)
    {
        HMCT_SetDrDelayTimeForOpen_U8 -= 1;
    }
}

}

void C_Page_Door_Setting:: OnDoorParaSetDown12Clk()
{
    if (!m_MakeSure)
    {
    if (HMCT_SetDrDelayTimeForClose_U8>0)
    {
        HMCT_SetDrDelayTimeForClose_U8 -= 1;
    }
}

}

void C_Page_Door_Setting:: OnDoorParaSetDown13Clk()
{
    if (!m_MakeSure)
    {
    if (HMCT_SetDrObsRecloseDelay_U8>0)
    {
        HMCT_SetDrObsRecloseDelay_U8 -= 1;
    }
}
}

void C_Page_Door_Setting:: OnDoorConfirmClk()
{
    if (!m_DChange)
    {
        m_DChange=true;
        m_MakeSure=true;
        prameter_setting_door_timer=5;
        HMCT_SetDrEnable_B1=true;
        HMiCT_ParaModifRequest_U8 = 0xaa;
        HMiCT_SetFlagChecker_U8 = 0xaa;

       // ((CButton *)GetDlgItem(ID_PIBDS_BUTTON_MAKESURE))->ChangeButtonState(LBUTTON_DOWN);
        ((CButton *)GetDlgItem(IDLB_COM_BTN12))->ChangeButtonState(LBUTTON_DOWN);

        /*
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP1))->ChangeButtonState(LBUTTON_DOWN);
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP2))->ChangeButtonState(LBUTTON_DOWN);
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP3))->ChangeButtonState(LBUTTON_DOWN);
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP4))->ChangeButtonState(LBUTTON_DOWN);
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP5))->ChangeButtonState(LBUTTON_DOWN);
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP6))->ChangeButtonState(LBUTTON_DOWN);
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP7))->ChangeButtonState(LBUTTON_DOWN);
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP8))->ChangeButtonState(LBUTTON_DOWN);
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP9))->ChangeButtonState(LBUTTON_DOWN);
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP10))->ChangeButtonState(LBUTTON_DOWN);
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP11))->ChangeButtonState(LBUTTON_DOWN);
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP12))->ChangeButtonState(LBUTTON_DOWN);
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP13))->ChangeButtonState(LBUTTON_DOWN);


                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN1))->ChangeButtonState(LBUTTON_DOWN);
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN2))->ChangeButtonState(LBUTTON_DOWN);
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN3))->ChangeButtonState(LBUTTON_DOWN);
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN4))->ChangeButtonState(LBUTTON_DOWN);
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN5))->ChangeButtonState(LBUTTON_DOWN);
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN6))->ChangeButtonState(LBUTTON_DOWN);
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN7))->ChangeButtonState(LBUTTON_DOWN);
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN8))->ChangeButtonState(LBUTTON_DOWN);
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN9))->ChangeButtonState(LBUTTON_DOWN);
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN10))->ChangeButtonState(LBUTTON_DOWN);
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN11))->ChangeButtonState(LBUTTON_DOWN);
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN12))->ChangeButtonState(LBUTTON_DOWN);
                ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN13))->ChangeButtonState(LBUTTON_DOWN);




        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP1))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP2))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP3))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP4))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP5))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP6))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP7))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP8))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP9))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP10))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP11))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP12))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_UP13))->ChangeButtonState(LBUTTON_UP);


        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN1))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN2))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN3))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN4))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN5))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN6))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN7))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN8))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN9))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN10))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN11))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN12))->ChangeButtonState(LBUTTON_UP);
        ((CButton*)GetDlgItem(ID_PIBDS_BUTTON_DOWN13))->ChangeButtonState(LBUTTON_UP);


         */

    }
}















