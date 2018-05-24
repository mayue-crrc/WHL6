

#include "C_Page_EBCutOff.h"
ROMDATA  g_PicRom_EBCutOff[] =
{
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW_WH
#else
#endif


#ifdef PAGE_HEADER_NEW
    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("电制动\n切除恢复") )
//    {"",                       D_FONT_BOLD(4),      QRect(100, 70, 600,  70),          Qt::black,                Qt::gray,                 CONTROL_TRAIN,          ID_PIBEBCUTOFF_TRAIN                      },
//    {"RIGHT",                  D_FONT_BOLD(6),      QRect(715, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBEBCUTOFF_ARROW_RIGHT                },
//    {"LEFT",                   D_FONT_BOLD(6),      QRect( 40, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBEBCUTOFF_ARROW_LEFT                 },
#endif

    {"CutOff1.PNG",           D_DEFAULT_FONT,      QRect(70,  70,  660,  400),         Qt::black,                  Qt::black,                  CONTROL_IMAGE,             ID_PIBEBCUTOFF_LABEL_1_1     },




};
int g_EBCutOffRomLen = sizeof(g_PicRom_EBCutOff)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(C_Page_EBCutOff,CPage)
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


END_MESSAGE_MAP()
C_Page_EBCutOff::C_Page_EBCutOff()
{
}

void C_Page_EBCutOff::OnUpdatePage()
{

    ((CImageCtrl*)GetDlgItem( ID_PIBEBCUTOFF_LABEL_1_1))->ShowImage();

//    updateTrain(ID_PIBEBCUTOFF_TRAIN);
//    updateArrow(ID_PIBEBCUTOFF_ARROW_LEFT,ID_PIBEBCUTOFF_ARROW_RIGHT);

//    updateErrorLine(ID_PIBEBCUTOFF_TRAIN);
}

void C_Page_EBCutOff::OnInitPage()
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

void C_Page_EBCutOff::OnShowPage()
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
    void C_Page_EBCutOff::OnComBtn1Clk()
    {
        ChangePage(PAGE_INDEX_RUNSTATE);
    }

    void C_Page_EBCutOff::OnComBtn2Clk()
    {
        ChangePage(PAGE_INDEX_MAINTAIN);
    }

    void C_Page_EBCutOff::OnComBtn3Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS3);
    }

    void C_Page_EBCutOff::OnComBtn4Clk()
    {
       // ChangePage(PAGE_INDEX_CARSTATUS3);

         ChangePage(PAGE_INDEX_TCUBLOCKREASON);
    }

    void C_Page_EBCutOff::OnComBtn5Clk()
    {
         ChangePage(PAGE_INDEX_INSTANCYBROADCAST);
    }

    void C_Page_EBCutOff::OnComBtn6Clk()
    {
        ChangePage(PAGE_INDEX_FASPage);
    }
    void C_Page_EBCutOff::OnComBtn7Clk()
    {
        ChangePage(PAGE_INDEX_PISALARM);
    }

    void C_Page_EBCutOff::OnComBtn8Clk()
    {
       // ChangePage(PAGE_INDEX_RUNHELP1);
    }
#else
    void C_Page_EBCutOff::OnComBtn1Clk()
    {
        ChangePage(PAGE_INDEX_MAIN);
    }

    void C_Page_EBCutOff::OnComBtn2Clk()
    {

    }

    void C_Page_EBCutOff::OnComBtn3Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS1);
    }

    void C_Page_EBCutOff::OnComBtn4Clk()
    {
         ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void C_Page_EBCutOff::OnComBtn5Clk()
    {
         ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void C_Page_EBCutOff::OnComBtn6Clk()
    {
        ChangePage(PAGE_INDEX_RUNHELP1);
    }
#endif



