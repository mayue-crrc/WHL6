#include "C_Page_TcuBloack_Reason.h"
ROMDATA  g_PicRom_TCUBlockReason[] =
{
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW_WH
#else
//    {QObject::trUtf8("第1页/共3页"),           D_FONT_BOLD(6),      QRect(675, 480, 120,  20),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
//    {"<<",                        D_FONT_BOLD(6),      QRect(675, 500,  50,  39),          Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTCUBLOCKREASON_PAGEDOWN           },
//    {">>",                        D_FONT_BOLD(6),      QRect(725, 500,  50,  39),          Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTCUBLOCKREASON_PAGEUP             },
#endif


#ifdef PAGE_HEADER_NEW
    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("牵引\n封锁") )
//    {"",                       D_FONT_BOLD(6),      QRect(100, 70, 600,  70),          Qt::black,                Qt::gray,                 CONTROL_TRAIN,          ID_PIBTCUBLOCKREASON_TRAIN                      },
//    {"RIGHT",                  D_FONT_BOLD(6),      QRect(715, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBTCUBLOCKREASON_ARROW_RIGHT                },
//    {"LEFT",                   D_FONT_BOLD(6),      QRect( 40, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBTCUBLOCKREASON_ARROW_LEFT                 },
#endif

#ifdef PAGE_HEADER_OLD
//    D_COMMON_PAGE_BUTTON_BAR
//    D_COMMON_PAGE_HEADER(QObject::trUtf8("车辆状态") )

//    {QObject::trUtf8("通信中断"),              D_FONT_BOLD(8),      QRect( 20,   6, 162,  30),         Qt::red,                  Qt::white,                CONTROL_LABEL,           ID_PIBCARS1_COMMINTERRUPT              },
//    {QObject::trUtf8("网压"),                 D_FONT_BOLD(8),      QRect( 40,  45, 120,  20),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8(""),                    D_FONT_BOLD(8),      QRect( 40,  66, 120,  30),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS1_LABEL_V                    },

//    {QObject::trUtf8("网流"),                 D_FONT_BOLD(8),      QRect(180,  45, 120,  20),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8(""),                    D_FONT_BOLD(8),      QRect(180,  66, 120,  30),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS1_LABEL_A                    },

//    {QObject::trUtf8("牵引*制动级位"),         D_FONT_BOLD(8),      QRect(470,  45, 150,  20),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8(""),                    D_FONT_BOLD(8),      QRect(470,  66, 150,  30),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS1_LABEL_TRACTIONMODEL        },

//    {QObject::trUtf8("速度"),                 D_FONT_BOLD(8),       QRect(630,  45, 80,  20),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE        },
//    {QObject::trUtf8(""),                    D_FONT_BOLD(8),       QRect(630,  66, 80,  30),         Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PIBCARS1_LABEL_SPEED                },

//    {"FaultRed.PNG",              D_DEFAULT_FONT,      QRect(720,  50,  65,  65),          Qt::black,                Qt::red,                  CONTROL_IMAGE,          ID_PIBCARS1_ICON_WARNNING              },
//    {"",                          D_FONT_BOLD(6),      QRect(178, 110, 600,  60),          Qt::black,                Qt::gray,                 CONTROL_TRAIN,          ID_PIBCARS1_TRAIN                      },
//    {"RIGHT",                     D_FONT_BOLD(6),      QRect(700, 128,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBCARS1_ARROW_RIGHT                },
//    {"LEFT",                      D_FONT_BOLD(6),      QRect( 58, 128,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBCARS1_ARROW_LEFT                 },
#endif
    //{"TCUBlock.PNG",           D_DEFAULT_FONT,      QRect(70,  70,  660,  400),         Qt::black,                  Qt::black,                  CONTROL_IMAGE,             ID_PIBTCUBLOCKREASON_LABEL_1_1      },
//    {"",           D_DEFAULT_FONT,      QRect(50,  70,  700,  2),         Qt::white,                  Qt::white,                  CONTROL_LINE,                 ID_IGNORE },
//    {"",           D_DEFAULT_FONT,      QRect(50,  100,  700,  2),         Qt::white,                  Qt::white,                  CONTROL_LINE,                 ID_IGNORE },
//    {"",           D_DEFAULT_FONT,      QRect(50,  190,  700+2,  2),         Qt::white,                  Qt::white,                  CONTROL_LINE,                 ID_IGNORE },

//    {"",           D_DEFAULT_FONT,      QRect(50,  70,  2,  120+2),         Qt::white,                  Qt::white,                  CONTROL_LINE,                 ID_IGNORE },
//    {"",           D_DEFAULT_FONT,      QRect(150,  70,  2,  120+2),         Qt::white,                  Qt::white,                  CONTROL_LINE,                 ID_IGNORE },
//    {"",           D_DEFAULT_FONT,      QRect(250,  70,  2,  120+2),         Qt::white,                  Qt::white,                  CONTROL_LINE,                 ID_IGNORE },
//    {"",           D_DEFAULT_FONT,      QRect(350,  70,  2,  120+2),         Qt::white,                  Qt::white,                  CONTROL_LINE,                 ID_IGNORE },
//    {"",           D_DEFAULT_FONT,      QRect(750,  70,  2,  120+2),         Qt::white,                  Qt::white,                  CONTROL_LINE,                 ID_IGNORE },

//    {QObject::trUtf8("限速模式"),          D_FONT_BOLD(6),      QRect(55,  72, 90 ,  26),         Qt::white,                  Qt::black,                  CONTROL_LABEL,                 ID_IGNORE },
//    {QObject::trUtf8("限速值"),            D_FONT_BOLD(6),      QRect(155,  72, 90 ,  26),         Qt::white,                  Qt::black,                  CONTROL_LABEL,                 ID_IGNORE },
//    {QObject::trUtf8("负责方"),            D_FONT_BOLD(6),      QRect(255,  72, 90 ,  26),         Qt::white,                  Qt::black,                  CONTROL_LABEL,                 ID_IGNORE },
//    {QObject::trUtf8("模式说明"),          D_FONT_BOLD(6),      QRect(355,  72, 390 ,  26),         Qt::white,                  Qt::black,                  CONTROL_LABEL,                 ID_IGNORE },

//    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(55,  102, 90 ,  86),         Qt::white,                  Qt::black,                  CONTROL_LABEL,                 ID_PIBTCUBLOCKREASON_LABEL_1_1 },
//    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(155,  102, 90 ,  86),         Qt::white,                  Qt::black,                  CONTROL_LABEL,                 ID_PIBTCUBLOCKREASON_LABEL_1_2 },
//    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(255,  102, 90 ,  86),         Qt::white,                  Qt::black,                  CONTROL_LABEL,                 ID_PIBTCUBLOCKREASON_LABEL_1_3 },
//    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(355,  102, 390 ,  86),         Qt::white,                  Qt::black,                  CONTROL_LABEL,                 ID_PIBTCUBLOCKREASON_LABEL_1_4 },

    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(50,  200-100, 140 ,40),         Qt::white,                  Qt::black,                  CONTROL_EDIT,                 ID_PIBTCUBLOCKREASON_EDIT_ROW1_1 },
    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(50,  250-100, 140 ,40),         Qt::white,                  Qt::black,                  CONTROL_EDIT,                 ID_PIBTCUBLOCKREASON_EDIT_ROW1_2 },
    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(50,  300-100, 140 ,40),         Qt::white,                  Qt::black,                  CONTROL_EDIT,                 ID_PIBTCUBLOCKREASON_EDIT_ROW1_3 },
    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(50,  350-100, 140 ,40),         Qt::white,                  Qt::black,                  CONTROL_EDIT,                 ID_PIBTCUBLOCKREASON_EDIT_ROW1_4 },
    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(50,  400-100, 140 ,40),         Qt::white,                  Qt::black,                  CONTROL_EDIT,                 ID_PIBTCUBLOCKREASON_EDIT_ROW1_5 },
    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(50,  450-100, 140 ,40),         Qt::white,                  Qt::black,                  CONTROL_EDIT,                 ID_PIBTCUBLOCKREASON_EDIT_ROW1_6 },
    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(50,  500-100, 140 ,40),         Qt::white,                  Qt::black,                  CONTROL_EDIT,                 ID_PIBTCUBLOCKREASON_EDIT_ROW1_7 },
    //{QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(50,  550-100, 140 ,40),         Qt::white,                  Qt::black,                  CONTROL_EDIT,                 ID_PIBTCUBLOCKREASON_EDIT_ROW1_8 },


    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(260,  200-100, 140 ,40),         Qt::white,                  Qt::black,                  CONTROL_EDIT,                 ID_PIBTCUBLOCKREASON_EDIT_ROW2_1 },
    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(260,  250-100, 140 ,40),         Qt::white,                  Qt::black,                  CONTROL_EDIT,                 ID_PIBTCUBLOCKREASON_EDIT_ROW2_2 },
    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(260,  300-100, 140 ,40),         Qt::white,                  Qt::black,                  CONTROL_EDIT,                 ID_PIBTCUBLOCKREASON_EDIT_ROW2_3 },
    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(260,  350-100, 140 ,40),         Qt::white,                  Qt::black,                  CONTROL_EDIT,                 ID_PIBTCUBLOCKREASON_EDIT_ROW2_4 },
    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(260,  400-100, 140 ,40),         Qt::white,                  Qt::black,                  CONTROL_EDIT,                 ID_PIBTCUBLOCKREASON_EDIT_ROW2_5 },
    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(260,  450-100, 140 ,40),         Qt::white,                  Qt::black,                  CONTROL_EDIT,                 ID_PIBTCUBLOCKREASON_EDIT_ROW2_6 },
    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(260,  500-100, 140 ,40),         Qt::white,                  Qt::black,                  CONTROL_EDIT,                 ID_PIBTCUBLOCKREASON_EDIT_ROW2_7 },
    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(260,  550-100, 140 ,40),         Qt::white,                  Qt::black,                  CONTROL_EDIT,                 ID_PIBTCUBLOCKREASON_EDIT_ROW2_8 },

    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(470,  200-100, 230,40),         Qt::white,                  Qt::black,                  CONTROL_EDIT,                 ID_PIBTCUBLOCKREASON_EDIT_ROW3_1 },
    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(470,  250-100, 230,40),         Qt::white,                  Qt::black,                  CONTROL_EDIT,                 ID_PIBTCUBLOCKREASON_EDIT_ROW3_2 },
    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(470,  300-100, 230,40),         Qt::white,                  Qt::black,                  CONTROL_EDIT,                 ID_PIBTCUBLOCKREASON_EDIT_ROW3_3 },
    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(470,  350-100, 230,40),         Qt::white,                  Qt::black,                  CONTROL_EDIT,                 ID_PIBTCUBLOCKREASON_EDIT_ROW3_4 },
    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(470,  400-100, 230,40),         Qt::white,                  Qt::black,                  CONTROL_EDIT,                 ID_PIBTCUBLOCKREASON_EDIT_ROW3_5 },
    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(470,  450-100, 230 ,40),         Qt::white,                  Qt::black,                  CONTROL_EDIT,                 ID_PIBTCUBLOCKREASON_EDIT_ROW3_6 },
    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(470,  500-100, 230,40),         Qt::white,                  Qt::black,                  CONTROL_EDIT,                 ID_PIBTCUBLOCKREASON_EDIT_ROW3_7 },
    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(470,  550-100, 230 ,40),         Qt::white,                  Qt::black,                  CONTROL_EDIT,                 ID_PIBTCUBLOCKREASON_EDIT_ROW3_8 },

    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(150+50,  200+10-100,  30,  20),         Qt::white,                  Qt::gray,                   CONTROL_LABEL,                 ID_PIBTCUBLOCKREASON_LABEL_ROW1_1 },
    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(150+50,  250+10-100,  30,  20),         Qt::white,                  Qt::gray,                   CONTROL_LABEL,                 ID_PIBTCUBLOCKREASON_LABEL_ROW1_2 },
    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(150+50,  300+10-100,  30,  20),         Qt::white,                  Qt::gray,                   CONTROL_LABEL,                 ID_PIBTCUBLOCKREASON_LABEL_ROW1_3 },
    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(150+50,  350+10-100,  30,  20),         Qt::white,                  Qt::gray,                   CONTROL_LABEL,                 ID_PIBTCUBLOCKREASON_LABEL_ROW1_4 },
    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(150+50,  400+10-100,  30,  20),         Qt::white,                  Qt::gray,                   CONTROL_LABEL,                 ID_PIBTCUBLOCKREASON_LABEL_ROW1_5 },
    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(150+50,  450+10-100,  30,  20),         Qt::white,                  Qt::gray,                   CONTROL_LABEL,                 ID_PIBTCUBLOCKREASON_LABEL_ROW1_6 },
    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(150+50,  500+10-100,  30,  20),         Qt::white,                  Qt::gray,                   CONTROL_LABEL,                 ID_PIBTCUBLOCKREASON_LABEL_ROW1_7 },
    //{QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(150+50,  550+10-100,  30,  20),         Qt::white,                  Qt::gray,                   CONTROL_LABEL,                 ID_PIBTCUBLOCKREASON_LABEL_ROW1_8 },

    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(150+260,  200+10-100,  30,  20),         Qt::white,                  Qt::gray,                   CONTROL_LABEL,                 ID_PIBTCUBLOCKREASON_LABEL_ROW2_1 },
    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(150+260,  250+10-100,  30,  20),         Qt::white,                  Qt::gray,                   CONTROL_LABEL,                 ID_PIBTCUBLOCKREASON_LABEL_ROW2_2 },
    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(150+260,  300+10-100,  30,  20),         Qt::white,                  Qt::red,                   CONTROL_LABEL,                 ID_PIBTCUBLOCKREASON_LABEL_ROW2_3 },
    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(150+260,  350+10-100,  30,  20),         Qt::white,                  Qt::gray,                   CONTROL_LABEL,                 ID_PIBTCUBLOCKREASON_LABEL_ROW2_4 },
    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(150+260,  400+10-100,  30,  20),         Qt::white,                  Qt::gray,                   CONTROL_LABEL,                 ID_PIBTCUBLOCKREASON_LABEL_ROW2_5 },
    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(150+260,  450+10-100,  30,  20),         Qt::white,                  Qt::red,                   CONTROL_LABEL,                 ID_PIBTCUBLOCKREASON_LABEL_ROW2_6 },
    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(150+260,  500+10-100,  30,  20),         Qt::white,                  Qt::red,                   CONTROL_LABEL,                 ID_PIBTCUBLOCKREASON_LABEL_ROW2_7 },
    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(150+260,  550+10-100,  30,  20),         Qt::white,                  Qt::red,                   CONTROL_LABEL,                 ID_PIBTCUBLOCKREASON_LABEL_ROW2_8 },

    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(240+470,  200+10-100, 30,20),         Qt::white,                  Qt::red,                   CONTROL_LABEL,                 ID_PIBTCUBLOCKREASON_LABEL_ROW3_1 },
    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(240+470,  250+10-100, 30,20),         Qt::white,                  Qt::gray,                   CONTROL_LABEL,                 ID_PIBTCUBLOCKREASON_LABEL_ROW3_2 },
    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(240+470,  300+10-100, 30,20),         Qt::white,                  Qt::gray,                   CONTROL_LABEL,                 ID_PIBTCUBLOCKREASON_LABEL_ROW3_3 },
    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(240+470,  350+10-100, 30,20),         Qt::white,                  Qt::red,                   CONTROL_LABEL,                 ID_PIBTCUBLOCKREASON_LABEL_ROW3_4 },
    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(240+470,  400+10-100, 30,20),         Qt::white,                  Qt::red,                   CONTROL_LABEL,                 ID_PIBTCUBLOCKREASON_LABEL_ROW3_5 },
    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(240+470,  450+10-100,  30,  20),         Qt::white,                  Qt::gray,                   CONTROL_LABEL,                 ID_PIBTCUBLOCKREASON_LABEL_ROW3_6 },
    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(240+470,  500+10-100, 30,20),         Qt::white,                  Qt::red,                   CONTROL_LABEL,                 ID_PIBTCUBLOCKREASON_LABEL_ROW3_7 },
    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(240+470,  550+10-100,  30,  20),         Qt::white,                  Qt::gray,                   CONTROL_LABEL,                 ID_PIBTCUBLOCKREASON_LABEL_ROW3_8 },

//    {QObject::trUtf8("牵引封锁原因"),          D_FONT_BOLD(6),      QRect(500,  510-100, 100,20),         Qt::white,                  Qt::black,                   CONTROL_LABEL,                 ID_IGNORE },
//    {QObject::trUtf8(""),          D_FONT_BOLD(6),      QRect(620,  510-100, 30,20),         Qt::white,                  Qt::red,                   CONTROL_LABEL,                 ID_IGNORE },





};
int g_TCUBlockReasonRomLen = sizeof(g_PicRom_TCUBlockReason)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(C_Page_TcuBloack_Reason,CPage)
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

#else
        ON_BTNCLK(  ID_PIBCARS1_BUTTON_PAGEUP, OnPageUpBtnClk)
#endif
        ON_BTNCLK(ID_LABEL_REALTIMEFAULTCONFIRM, OnRealtimefaultBtnClk)
       // ON_BTNCLK(ID_PIBCARS1_BUTTON_EMERGENCYBROADCAST,OnBroadCastBtnCl)
      //  ON_BTNCLK(ID_PIBCARS1_BUTTON_EMERGENCYRESCUE, OnEmergencyResuce)
        //ON_BTNCLK(ID_PIBCARS1_ICON_WARNNING, OnRealTimeFaultsWarnningIconClk)
        //ON_BTNCLK(ID_PIBCARS1_BUTTON_FASPAGE, OnFASpageBtnClk)

       // ON_BTNCLK(ID_PIBCARS1_BUTTON_PGUP, OnPageUpBtnClk)
        //ON_BTNCLK(ID_PIBCARS1_BUTTON_PGDN, OnPageDownBtnClk)

//        ON_BTNCLK(ID_PIBCARS1_BUTTON_ACURESET, OnACUReset)
END_MESSAGE_MAP()
C_Page_TcuBloack_Reason::C_Page_TcuBloack_Reason()
{
}

void C_Page_TcuBloack_Reason::OnUpdatePage()
{
    //((CImageCtrl*)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_1_1))->HideImage();

//    updateTrain(ID_PIBTCUBLOCKREASON_TRAIN);
//    updateArrow(ID_PIBTCUBLOCKREASON_ARROW_LEFT,ID_PIBTCUBLOCKREASON_ARROW_RIGHT);

//    updateErrorLine(ID_PIBTCUBLOCKREASON_TRAIN);

//((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_1_1))->SetCtrlText(QObject::trUtf8("ATO")); // 0x0011
//((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_1_2))->SetCtrlText(QObject::trUtf8("信号系统限速")); // 0x0012
//((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_1_3))->SetCtrlText(QObject::trUtf8("ATP")); // 0x0013
//((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_1_4))->SetCtrlText(QObject::trUtf8("列车受ATO控制并由ATP提供完全防护，列车根据任务\n自动运行。司机或ATO负责开启/关闭车门，司机通过\n按压ATO启动按钮来启动列车的自动运行")); // 0x0014

((CEdit *)GetDlgItem(ID_PIBTCUBLOCKREASON_EDIT_ROW1_1))->SetCtrlText(QObject::trUtf8("无司机室占有")); // 0x0021
((CEdit *)GetDlgItem(ID_PIBTCUBLOCKREASON_EDIT_ROW1_2))->SetCtrlText(QObject::trUtf8("未按下警惕按钮\n(ATO除外)")); // 0x0022
((CEdit *)GetDlgItem(ID_PIBTCUBLOCKREASON_EDIT_ROW1_3))->SetCtrlText(QObject::trUtf8("不在牵引位\n（ATO除外）")); // 0x0023
((CEdit *)GetDlgItem(ID_PIBTCUBLOCKREASON_EDIT_ROW1_4))->SetCtrlText(QObject::trUtf8("停放制动未缓解")); // 0x0024
((CEdit *)GetDlgItem(ID_PIBTCUBLOCKREASON_EDIT_ROW1_5))->SetCtrlText(QObject::trUtf8("零速时，车门安\n全回路断开")); // 0x0025
((CEdit *)GetDlgItem(ID_PIBTCUBLOCKREASON_EDIT_ROW1_6))->SetCtrlText(QObject::trUtf8("列车启动70m以内\n时，门安全回路断开")); // 0x0026
((CEdit *)GetDlgItem(ID_PIBTCUBLOCKREASON_EDIT_ROW1_7))->SetCtrlText(QObject::trUtf8("1架制动不可用则\n限速70km/h")); // 0x0026
//((CEdit *)GetDlgItem(ID_PIBTCUBLOCKREASON_EDIT_ROW1_8))->SetCtrlText(QObject::trUtf8("安全回路旁路\n限速40km/h")); // 0x0044

((CEdit *)GetDlgItem(ID_PIBTCUBLOCKREASON_EDIT_ROW2_1))->SetCtrlText(QObject::trUtf8("慢行模式\n限速3km/h")); // 0x0031
((CEdit *)GetDlgItem(ID_PIBTCUBLOCKREASON_EDIT_ROW2_2))->SetCtrlText(QObject::trUtf8("硬线操纵端冲突，\nVCM冗余")); // 0x0032
((CEdit *)GetDlgItem(ID_PIBTCUBLOCKREASON_EDIT_ROW2_3))->SetCtrlText(QObject::trUtf8("无方向或方向信\n号冲突，VCM冗余")); // 0x0033
((CEdit *)GetDlgItem(ID_PIBTCUBLOCKREASON_EDIT_ROW2_4))->SetCtrlText(QObject::trUtf8("紧急制动\nVCM冗余")); // 0x0034
((CEdit *)GetDlgItem(ID_PIBTCUBLOCKREASON_EDIT_ROW2_5))->SetCtrlText(QObject::trUtf8("快速制动\nVCM冗余")); // 0x0035
((CEdit *)GetDlgItem(ID_PIBTCUBLOCKREASON_EDIT_ROW2_6))->SetCtrlText(QObject::trUtf8("单元内两个网\n关阀同时通信故障")); // 0x0036
((CEdit *)GetDlgItem(ID_PIBTCUBLOCKREASON_EDIT_ROW2_7))->SetCtrlText(QObject::trUtf8("2～3架制动不可用\n则限速60 km/h")); // 0x0036
((CEdit *)GetDlgItem(ID_PIBTCUBLOCKREASON_EDIT_ROW2_8))->SetCtrlText(QObject::trUtf8("停放缓解旁路10km/h\n运行距离不超过2km")); // 0x0036

((CEdit *)GetDlgItem(ID_PIBTCUBLOCKREASON_EDIT_ROW3_1))->SetCtrlText(QObject::trUtf8("牵引情况下，速度超出\n2 km/h且持续4秒，制动未缓解")); // 0x0041
((CEdit *)GetDlgItem(ID_PIBTCUBLOCKREASON_EDIT_ROW3_2))->SetCtrlText(QObject::trUtf8("速度大于80km/h")); // 0x0042
((CEdit *)GetDlgItem(ID_PIBTCUBLOCKREASON_EDIT_ROW3_3))->SetCtrlText(QObject::trUtf8("6架以上车制动不可用")); // 0x0043
((CEdit *)GetDlgItem(ID_PIBTCUBLOCKREASON_EDIT_ROW3_4))->SetCtrlText(QObject::trUtf8("总风压力低于600kPa时\n静止状态牵引封锁")); // 0x0044
((CEdit *)GetDlgItem(ID_PIBTCUBLOCKREASON_EDIT_ROW3_5))->SetCtrlText(QObject::trUtf8("4～6架制动不可用则限速35 km/h")); // 0x0044
((CEdit *)GetDlgItem(ID_PIBTCUBLOCKREASON_EDIT_ROW3_6))->SetCtrlText(QObject::trUtf8("气制动缓解旁路10km/h\n运行距离不超过2km")); // 0x0044
((CEdit *)GetDlgItem(ID_PIBTCUBLOCKREASON_EDIT_ROW3_7))->SetCtrlText(QObject::trUtf8("ATP切除后，紧急牵引处于分位\n方向向前，限速50km/h")); // 0x0044
((CEdit *)GetDlgItem(ID_PIBTCUBLOCKREASON_EDIT_ROW3_8))->SetCtrlText(QObject::trUtf8("ATP切除后，紧急牵引处于分位\n方向向后，限速10km/h")); // 0x0044
//((CEdit *)GetDlgItem(ID_PIBTCUBLOCKREASON_EDIT_ROW3_9))->SetCtrlText(QObject::trUtf8("慢行模式，限速3km/h")); // 0x0044


if(CTHM_TractionBlock14_B1)
{
    ((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW1_1))->SetCtrlBKColor(Qt::red); // 0x0121
} else
{
    ((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW1_1))->SetCtrlBKColor(Qt::gray); // 0x0121
}

if(CTHM_TractionBlock25_B1)
{
    ((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW2_1))->SetCtrlBKColor(Qt::red); // 0x0121
} else
{
    ((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW2_1))->SetCtrlBKColor(Qt::gray); // 0x0121
}
if(CTHM_TractionBlock6_B1)
{
    ((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW3_1))->SetCtrlBKColor(Qt::red); // 0x0121
} else
{
    ((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW3_1))->SetCtrlBKColor(Qt::gray); // 0x0121
}
if(CTHM_TractionBlock15_B1)
{
    ((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW1_2))->SetCtrlBKColor(Qt::red); // 0x0121
} else
{
    ((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW1_2))->SetCtrlBKColor(Qt::gray); // 0x0121
}

if(CTHM_TractionBlock1_B1)
{
    ((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW2_2))->SetCtrlBKColor(Qt::red); // 0x0121
} else
{
    ((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW2_2))->SetCtrlBKColor(Qt::gray); // 0x0121
}
if(CTHM_TractionBlock9_B1)
{
    ((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW3_2))->SetCtrlBKColor(Qt::red); // 0x0121
} else
{
    ((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW3_2))->SetCtrlBKColor(Qt::gray); // 0x0121
}
if(CTHM_TractionBlock16_B1)
{
    ((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW1_3))->SetCtrlBKColor(Qt::red); // 0x0121
} else
{
    ((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW1_3))->SetCtrlBKColor(Qt::gray); // 0x0121
}

if(CTHM_TractionBlock2_B1)
{
    ((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW2_3))->SetCtrlBKColor(Qt::red); // 0x0121
} else
{
    ((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW2_3))->SetCtrlBKColor(Qt::gray); // 0x0121
}
if(CTHM_TractionBlock8_B1)
{
    ((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW3_3))->SetCtrlBKColor(Qt::red); // 0x0121
} else
{
    ((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW3_3))->SetCtrlBKColor(Qt::gray); // 0x0121
}

if(CTHM_TractionBlock17_B1)
{
    ((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW1_4))->SetCtrlBKColor(Qt::red); // 0x0121
} else
{
    ((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW1_4))->SetCtrlBKColor(Qt::gray); // 0x0121
}

if(CTHM_TractionBlock3_B1)
{
    ((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW2_4))->SetCtrlBKColor(Qt::red); // 0x0121
} else
{
    ((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW2_4))->SetCtrlBKColor(Qt::gray); // 0x0121
}
if(CTHM_TractionBlock18_B1)
{
    ((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW1_5))->SetCtrlBKColor(Qt::red); // 0x0121
} else
{
    ((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW1_5))->SetCtrlBKColor(Qt::gray); // 0x0121
}

if(CTHM_TractionBlock4_B1)
{
    ((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW2_5))->SetCtrlBKColor(Qt::red); // 0x0121
} else
{
    ((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW2_5))->SetCtrlBKColor(Qt::gray); // 0x0121
}
if(CTHM_TractionBlock5_B1)
{
    ((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW1_6))->SetCtrlBKColor(Qt::red); // 0x0121
} else
{
    ((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW1_6))->SetCtrlBKColor(Qt::gray); // 0x0121
}

if(CTHM_TractionBlock7_B1)
{
    ((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW2_6))->SetCtrlBKColor(Qt::red); // 0x0121
} else
{
    ((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW2_6))->SetCtrlBKColor(Qt::gray); // 0x0121
}
if(CTHM_TractionBlock10_B1)
{
    ((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW3_4))->SetCtrlBKColor(Qt::red); // 0x0121
} else
{
    ((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW3_4))->SetCtrlBKColor(Qt::gray); // 0x0121
}


if(CTHM_TractionBlock11_B1)
{
    ((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW1_7))->SetCtrlBKColor(Qt::red); // 0x0121
} else
{
    ((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW1_7))->SetCtrlBKColor(Qt::gray); // 0x0121
}

if(CTHM_TractionBlock12_B1)
{
    ((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW2_7))->SetCtrlBKColor(Qt::red); // 0x0121
} else
{
    ((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW2_7))->SetCtrlBKColor(Qt::gray); // 0x0121
}
if(CTHM_TractionBlock13_B1)
{
    ((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW3_5))->SetCtrlBKColor(Qt::red); // 0x0121
} else
{
    ((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW3_5))->SetCtrlBKColor(Qt::gray); // 0x0121
}
//if(CTHM_TractionBlock20_B1)
//{
//    ((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW1_8))->SetCtrlBKColor(Qt::red); // 0x0121
//} else
//{
//    ((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW1_8))->SetCtrlBKColor(Qt::gray); // 0x0121
//}

if(CTHM_TractionBlock21_B1)
{
    ((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW2_8))->SetCtrlBKColor(Qt::red); // 0x0121
} else
{
    ((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW2_8))->SetCtrlBKColor(Qt::gray); // 0x0121
}

if(CTHM_TractionBlock22_B1)
{
    ((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW3_6))->SetCtrlBKColor(Qt::red); // 0x0121
} else
{
    ((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW3_6))->SetCtrlBKColor(Qt::gray); // 0x0121
}
if(CTHM_TractionBlock23_B1)
{
    ((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW3_7))->SetCtrlBKColor(Qt::red); // 0x0121
} else
{
    ((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW3_7))->SetCtrlBKColor(Qt::gray); // 0x0121
}

if(CTHM_TractionBlock24_B1)
{
    ((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW3_8))->SetCtrlBKColor(Qt::red); // 0x0121
} else
{
    ((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW3_8))->SetCtrlBKColor(Qt::gray); // 0x0121
}
//((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW1_2))->SetCtrlBKColor(Qt::red); ; // 0x0122
//((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW1_3))->SetCtrlBKColor(Qt::red); ; // 0x0123
//((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW1_4))->SetCtrlBKColor(Qt::red); ; // 0x0124
//((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW1_5))->SetCtrlBKColor(Qt::red); ; // 0x0125
//((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW1_6))->SetCtrlBKColor(Qt::red); ; // 0x0126

//((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW2_1))->SetCtrlBKColor(Qt::red); ; // 0x0131
//((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW2_2))->SetCtrlBKColor(Qt::red); ; // 0x0132
//((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW2_3))->SetCtrlBKColor(Qt::red); ; // 0x0133
//((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW2_4))->SetCtrlBKColor(Qt::red); ; // 0x0134
//((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW2_5))->SetCtrlBKColor(Qt::red); ; // 0x0135
//((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW2_6))->SetCtrlBKColor(Qt::red); ; // 0x0136

//((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW3_1))->SetCtrlBKColor(Qt::red); ; // 0x0141
//((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW3_2))->SetCtrlBKColor(Qt::red); ; // 0x0142
//((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW3_3))->SetCtrlBKColor(Qt::red); ; // 0x0143
//((CLabel *)GetDlgItem(ID_PIBTCUBLOCKREASON_LABEL_ROW3_4))->SetCtrlBKColor(Qt::red); ; // 0x0144

UpdateRealtimefaults();
}

void C_Page_TcuBloack_Reason::OnInitPage()
{

#ifdef PAGE_HEADER_OLD

    ((CLabel *) GetDlgItem(ID_PIBCARS1_LABEL_V))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBCARS1_LABEL_A))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_PIBCARS1_LABEL_TRACTIONMODEL))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBCARS1_LABEL_SPEED))->SetBorderColor(Qt::white);

#endif

 //   ((CButton*)GetDlgItem(ID_PIBCARS1_BUTTON_EMERGENCYRESCUE))->m_bAutoUpState = false;

//    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_ATOMODE))->SetBorderColor(Qt::white);
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_NETMODE))->SetBorderColor(Qt::white);
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_CONTRAVARIANTMODE))->SetBorderColor(Qt::white);
//    ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_WASHCARMODE))->SetBorderColor(Qt::white);
//   // ((CLabel *)GetDlgItem(ID_PIBCARS1_LABEL_TOWMODE))->SetBorderColor(Qt::white);

   // ((CButton*)GetDlgItem(ID_PIBCARS1_BUTTON_ACURESET))->m_bAutoUpState = false;
}

void C_Page_TcuBloack_Reason::OnShowPage()
{

#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN10))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN11))->SetCtrlText(QObject::trUtf8(""));
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
//    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("主菜单"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8("运   行"));
////    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8("紧急广播"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8("空调设置"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8("故   障"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("帮   助"));
#endif
//    if (1 == EmergencyResuce)
//        ((CButton*)GetDlgItem(ID_PIBCARS1_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_DOWN);
//    else
//        ((CButton*)GetDlgItem(ID_PIBCARS1_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_UP);

//    ACU_test_timer = 3;
//    BitSet( HMI_send_data24, 7, 0 );//复位ACU复位故障按钮

    //this->InitPageHeader();
}

#ifdef PAGE_BUTTON_BAR_NEW
    void C_Page_TcuBloack_Reason::OnComBtn1Clk()
    {
        ChangePage(PAGE_INDEX_RUNSTATE);
    }

    void C_Page_TcuBloack_Reason::OnComBtn2Clk()
    {
        ChangePage(PAGE_INDEX_MAINTAIN);
    }

    void C_Page_TcuBloack_Reason::OnComBtn3Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS3);
    }

    void C_Page_TcuBloack_Reason::OnComBtn4Clk()
    {
         //ChangePage(PAGE_INDEX_CARSTATUS2);
        ChangePage(PAGE_INDEX_TCUBLOCKREASON);
    }

    void C_Page_TcuBloack_Reason::OnComBtn5Clk()
    {
         ChangePage(PAGE_INDEX_INSTANCYBROADCAST);
    }

    void C_Page_TcuBloack_Reason::OnComBtn6Clk()
    {
        ChangePage(PAGE_INDEX_FASPage);
    }
    void C_Page_TcuBloack_Reason::OnComBtn7Clk()
    {
        ChangePage(PAGE_INDEX_PISALARM);
    }

    void C_Page_TcuBloack_Reason::OnComBtn8Clk()
    {
        //ChangePage(PAGE_INDEX_RUNHELP1);
    }
    void C_Page_TcuBloack_Reason::OnComBtn9Clk()
    {
        //ChangePage(PAGE_INDEX_RUNHELP1);
    }
    void C_Page_TcuBloack_Reason::OnComBtn10Clk()
    {
        //ChangePage(PAGE_INDEX_RUNHELP1);
    }
    void C_Page_TcuBloack_Reason::OnComBtn11Clk()
    {
        //ChangePage(PAGE_INDEX_RUNHELP1);
    }
    void C_Page_TcuBloack_Reason::OnComBtn12Clk()
    {
        ChangePage(PAGE_INDEX_TCUBLOCKHELPAGE);
    }
#else
    void C_Page_TcuBloack_Reason::OnComBtn1Clk()
    {
        ChangePage(PAGE_INDEX_MAIN);
    }

    void C_Page_TcuBloack_Reason::OnComBtn2Clk()
    {

    }

    void C_Page_TcuBloack_Reason::OnComBtn3Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS1);
    }

    void C_Page_TcuBloack_Reason::OnComBtn4Clk()
    {
         ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void C_Page_TcuBloack_Reason::OnComBtn5Clk()
    {
         ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void C_Page_TcuBloack_Reason::OnComBtn6Clk()
    {
        ChangePage(PAGE_INDEX_RUNHELP1);
    }
#endif
    void C_Page_TcuBloack_Reason::UpdateRealtimefaults()
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

    void C_Page_TcuBloack_Reason::OnRealtimefaultBtnClk()
    {
        g_faultsrom[g_romidx].confirm = true;
        g_realtimeFaultsbarList.removeAt(g_faultcount);
        if(g_faultcount>0)
        g_faultcount--;
        //m_faultcount--;

    }
