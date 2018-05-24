
#include "C_Page_LumiRegulate.h"
ROMDATA  g_PicRom_LumiRegulate[] =
{
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW_WH
#else
//    {QObject::trUtf8("第1页/共3页"),           D_FONT_BOLD(6),      QRect(675, 480, 120,  20),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
//    {"<<",                        D_FONT_BOLD(6),      QRect(675, 500,  50,  39),          Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBLUMIREGULATE_PAGEDOWN           },
//    {">>",                        D_FONT_BOLD(6),      QRect(725, 500,  50,  39),          Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBLUMIREGULATE_PAGEUP             },
#endif


#ifdef PAGE_HEADER_NEW
    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("亮度\n调节") )
//    {"",                       D_FONT_BOLD(4),      QRect(100, 70, 600,  70),          Qt::black,                Qt::gray,                 CONTROL_TRAIN,          ID_PIBLUMIREGULATE_TRAIN                      },
//    {"RIGHT",                  D_FONT_BOLD(6),      QRect(715, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBLUMIREGULATE_ARROW_RIGHT                },
//    {"LEFT",                   D_FONT_BOLD(6),      QRect( 40, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBLUMIREGULATE_ARROW_LEFT                 },
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
//    {"",                          D_FONT_BOLD(4),      QRect(178, 110, 600,  60),          Qt::black,                Qt::gray,                 CONTROL_TRAIN,          ID_PIBCARS1_TRAIN                      },
//    {"RIGHT",                     D_FONT_BOLD(6),      QRect(700, 128,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBCARS1_ARROW_RIGHT                },
//    {"LEFT",                      D_FONT_BOLD(6),      QRect( 58, 128,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBCARS1_ARROW_LEFT                 },
#endif
    {"LumiRegulate.PNG",           D_DEFAULT_FONT,      QRect(10,  70,  780,  400),         Qt::black,                  Qt::black,                  CONTROL_IMAGE,             ID_PIBLUMIREGULATE_LABEL_1_1      },




};
int g_LumiRegulateRomLen = sizeof(g_PicRom_LumiRegulate)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(C_Page_LumiRegulate,CPage)
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
#else
        ON_BTNCLK(  ID_PIBCARS1_BUTTON_PAGEUP, OnPageUpBtnClk)
#endif

       // ON_BTNCLK(ID_PIBCARS1_BUTTON_EMERGENCYBROADCAST,OnBroadCastBtnCl)
      //  ON_BTNCLK(ID_PIBCARS1_BUTTON_EMERGENCYRESCUE, OnEmergencyResuce)
        //ON_BTNCLK(ID_PIBCARS1_ICON_WARNNING, OnRealTimeFaultsWarnningIconClk)
        //ON_BTNCLK(ID_PIBCARS1_BUTTON_FASPAGE, OnFASpageBtnClk)

       // ON_BTNCLK(ID_PIBCARS1_BUTTON_PGUP, OnPageUpBtnClk)
        //ON_BTNCLK(ID_PIBCARS1_BUTTON_PGDN, OnPageDownBtnClk)

//        ON_BTNCLK(ID_PIBCARS1_BUTTON_ACURESET, OnACUReset)
END_MESSAGE_MAP()
C_Page_LumiRegulate::C_Page_LumiRegulate()
{
}

void C_Page_LumiRegulate::OnUpdatePage()
{
    ((CImageCtrl*)GetDlgItem(ID_PIBLUMIREGULATE_LABEL_1_1))->ShowImage();

//    updateTrain(ID_PIBLUMIREGULATE_TRAIN);
//    updateArrow(ID_PIBLUMIREGULATE_ARROW_LEFT,ID_PIBLUMIREGULATE_ARROW_RIGHT);

//    updateErrorLine(ID_PIBLUMIREGULATE_TRAIN);
}

void C_Page_LumiRegulate::OnInitPage()
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

void C_Page_LumiRegulate::OnShowPage()
{

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
    void C_Page_LumiRegulate::OnComBtn1Clk()
    {
        ChangePage(PAGE_INDEX_RUNSTATE);
    }

    void C_Page_LumiRegulate::OnComBtn2Clk()
    {
        ChangePage(PAGE_INDEX_MAINTAIN);
    }

    void C_Page_LumiRegulate::OnComBtn3Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS3);
    }

    void C_Page_LumiRegulate::OnComBtn4Clk()
    {
         //ChangePage(PAGE_INDEX_CARSTATUS2);
        ChangePage(PAGE_INDEX_TCUBLOCKREASON);
    }

    void C_Page_LumiRegulate::OnComBtn5Clk()
    {
         ChangePage(PAGE_INDEX_INSTANCYBROADCAST);
    }

    void C_Page_LumiRegulate::OnComBtn6Clk()
    {
        ChangePage(PAGE_INDEX_FASPage);
    }
    void C_Page_LumiRegulate::OnComBtn7Clk()
    {
        ChangePage(PAGE_INDEX_PISALARM);
    }

    void C_Page_LumiRegulate::OnComBtn8Clk()
    {
        //ChangePage(PAGE_INDEX_RUNHELP1);
    }
#else
    void C_Page_LumiRegulate::OnComBtn1Clk()
    {
        ChangePage(PAGE_INDEX_MAIN);
    }

    void C_Page_LumiRegulate::OnComBtn2Clk()
    {

    }

    void C_Page_LumiRegulate::OnComBtn3Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS1);
    }

    void C_Page_LumiRegulate::OnComBtn4Clk()
    {
         ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void C_Page_LumiRegulate::OnComBtn5Clk()
    {
         ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void C_Page_LumiRegulate::OnComBtn6Clk()
    {
        ChangePage(PAGE_INDEX_RUNHELP1);
    }
#endif
