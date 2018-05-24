
#include "C_Page_PisAlarm.h"
ROMDATA  g_PicRom_PisAlarm[] =
{
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW_WH
#else
#endif


#ifdef PAGE_HEADER_NEW
    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("乘客\n报警") )
    {"",                       D_FONT_BOLD(4),      QRect(100, 70, 600,  70),          Qt::black,                Qt::gray,                 CONTROL_TRAIN,          ID_PIBPISALRM_TRAIN                      },
    {"RIGHT",                  D_FONT_BOLD(6),      QRect(715, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBPISALRM_ARROW_RIGHT                },
    {"LEFT",                   D_FONT_BOLD(6),      QRect( 40, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBPISALRM_ARROW_LEFT                 },
#endif
    {"",                          D_FONT_BOLD(6),      QRect( 100, 150, 600,   1),          Qt::yellow,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect( 100, 350, 600,   1),          Qt::yellow,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },

    {"",                          D_FONT_BOLD(6),      QRect(100, 150,   1, 200),          Qt::yellow,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(200, 150,   1, 200),          Qt::yellow,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(300, 150,   1, 200),          Qt::yellow,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(400, 150,   1, 200),          Qt::yellow,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(500, 150,   1, 200),          Qt::yellow,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(600, 150,   1, 200),          Qt::yellow,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(700, 150,   1, 200),          Qt::yellow,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },

    {QObject::trUtf8("WHL6EmgCallNoAct.PNG"),                          D_FONT_BOLD(6),      QRect(135, 195,   30, 30),          Qt::yellow,                Qt::black,                CONTROL_IMAGE,           IDPISALARM_LABEL_CAR01        },
    {QObject::trUtf8("WHL6EmgCallNoAct.PNG"),                          D_FONT_BOLD(6),      QRect(235, 195,   30, 30),          Qt::yellow,                Qt::black,                CONTROL_IMAGE,           IDPISALARM_LABEL_CAR02        },
    {QObject::trUtf8("WHL6EmgCallNoAct.PNG"),                          D_FONT_BOLD(6),      QRect(335, 195,   30, 30),          Qt::yellow,                Qt::black,                CONTROL_IMAGE,           IDPISALARM_LABEL_CAR03        },
    {QObject::trUtf8("WHL6EmgCallNoAct.PNG"),                          D_FONT_BOLD(6),      QRect(435, 195,   30, 30),          Qt::yellow,                Qt::black,                CONTROL_IMAGE,           IDPISALARM_LABEL_CAR04        },
    {QObject::trUtf8("WHL6EmgCallNoAct.PNG"),                          D_FONT_BOLD(6),      QRect(535, 195,   30, 30),          Qt::yellow,                Qt::black,                CONTROL_IMAGE,           IDPISALARM_LABEL_CAR05        },
    {QObject::trUtf8("WHL6EmgCallNoAct.PNG"),                          D_FONT_BOLD(6),      QRect(635, 195,   30, 30),          Qt::yellow,                Qt::black,                CONTROL_IMAGE,           IDPISALARM_LABEL_CAR06        },

    {QObject::trUtf8("WHL6EmgCallNoAct.PNG"),                          D_FONT_BOLD(6),      QRect(135, 275,   30, 30),          Qt::yellow,                Qt::black,                CONTROL_IMAGE,           IDPISALARM_LABEL_CAR01_2        },
    {QObject::trUtf8("WHL6EmgCallNoAct.PNG"),                          D_FONT_BOLD(6),      QRect(235, 275,   30, 30),          Qt::yellow,                Qt::black,                CONTROL_IMAGE,           IDPISALARM_LABEL_CAR02_2        },
    {QObject::trUtf8("WHL6EmgCallNoAct.PNG"),                          D_FONT_BOLD(6),      QRect(335, 275,   30, 30),          Qt::yellow,                Qt::black,                CONTROL_IMAGE,           IDPISALARM_LABEL_CAR03_2        },
    {QObject::trUtf8("WHL6EmgCallNoAct.PNG"),                          D_FONT_BOLD(6),      QRect(435, 275,   30, 30),          Qt::yellow,                Qt::black,                CONTROL_IMAGE,           IDPISALARM_LABEL_CAR04_2        },
    {QObject::trUtf8("WHL6EmgCallNoAct.PNG"),                          D_FONT_BOLD(6),      QRect(535, 275,   30, 30),          Qt::yellow,                Qt::black,                CONTROL_IMAGE,           IDPISALARM_LABEL_CAR05_2        },
    {QObject::trUtf8("WHL6EmgCallNoAct.PNG"),                          D_FONT_BOLD(6),      QRect(635, 275,   30, 30),          Qt::yellow,                Qt::black,                CONTROL_IMAGE,           IDPISALARM_LABEL_CAR06_2        },




};
int g_PisAlarmRomLen = sizeof(g_PicRom_PisAlarm)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(C_Page_PisAlarm,CPage)
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
        ON_BTNCLK(IDLB_COM_BTN12, OnComBtn12Clk)

#else
        ON_BTNCLK(  ID_PIBCARS1_BUTTON_PAGEUP, OnPageUpBtnClk)
#endif
        ON_BTNCLK(ID_LABEL_REALTIMEFAULTCONFIRM, OnRealtimefaultBtnClk)

END_MESSAGE_MAP()
C_Page_PisAlarm::C_Page_PisAlarm()
{
}

void C_Page_PisAlarm::OnUpdatePage()
{


    updateTrain(ID_PIBPISALRM_TRAIN);
    updateArrow(ID_PIBPISALRM_ARROW_LEFT,ID_PIBPISALRM_ARROW_RIGHT);
    UpdatePisAlarm();
        UpdateRealtimefaults();
    //WHL6EmgCallNoAct.PNG
    //WHL6EmgCallFault.PNG
    //WHL6EmgCallComm.PNG
    //WHL6EmgCallAct.PNG
//    updateErrorLine(ID_PIBPISALRM_TRAIN);
}

void C_Page_PisAlarm::OnInitPage()
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

void C_Page_PisAlarm::OnShowPage()
{
    ((CButton *)GetDlgItem(IDLB_COM_BTN10))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN11))->SetCtrlText(QObject::trUtf8(""));
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
void C_Page_PisAlarm::UpdateRealtimefaults()
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

void C_Page_PisAlarm::OnRealtimefaultBtnClk()
{
    g_faultsrom[g_romidx].confirm = true;
    g_realtimeFaultsbarList.removeAt(g_faultcount);
    if(g_faultcount>0)
    g_faultcount--;
    //m_faultcount--;

}


#ifdef PAGE_BUTTON_BAR_NEW
    void C_Page_PisAlarm::OnComBtn1Clk()
    {
        ChangePage(PAGE_INDEX_RUNSTATE);
    }

    void C_Page_PisAlarm::OnComBtn2Clk()
    {
        ChangePage(PAGE_INDEX_MAINTAIN);
    }

    void C_Page_PisAlarm::OnComBtn3Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS3);
    }

    void C_Page_PisAlarm::OnComBtn4Clk()
    {
       // ChangePage(PAGE_INDEX_CARSTATUS3);

         ChangePage(PAGE_INDEX_TCUBLOCKREASON);
    }

    void C_Page_PisAlarm::OnComBtn5Clk()
    {
         ChangePage(PAGE_INDEX_INSTANCYBROADCAST);
    }

    void C_Page_PisAlarm::OnComBtn6Clk()
    {
        ChangePage(PAGE_INDEX_FASPage);
    }
    void C_Page_PisAlarm::OnComBtn7Clk()
    {
        ChangePage(PAGE_INDEX_PISALARM);
    }

    void C_Page_PisAlarm::OnComBtn8Clk()
    {
       // ChangePage(PAGE_INDEX_RUNHELP1);
    }
    void C_Page_PisAlarm::OnComBtn12Clk()
    {
        ChangePage(PAGE_INDEX_PISALARMHELP);
    }
#else
    void C_Page_PisAlarm::OnComBtn1Clk()
    {
        ChangePage(PAGE_INDEX_MAIN);
    }

    void C_Page_PisAlarm::OnComBtn2Clk()
    {

    }

    void C_Page_PisAlarm::OnComBtn3Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS1);
    }

    void C_Page_PisAlarm::OnComBtn4Clk()
    {
         ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void C_Page_PisAlarm::OnComBtn5Clk()
    {
         ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void C_Page_PisAlarm::OnComBtn6Clk()
    {
        ChangePage(PAGE_INDEX_RUNHELP1);
    }
#endif
void C_Page_PisAlarm::UpdatePisAlarm()
{

    if(PISiCT_PECU11Call_B1)
    {
        if(PISiCT_PECU11Act_B1)
        {
            ((CImageCtrl *)GetDlgItem(IDPISALARM_LABEL_CAR01))->SetCtrlText("WHL6EmgCallComm.PNG");
        }else
        {
            ((CImageCtrl *)GetDlgItem(IDPISALARM_LABEL_CAR01))->SetCtrlText("WHL6EmgCallAct.PNG");
        }
    }else
    {
        ((CImageCtrl *)GetDlgItem(IDPISALARM_LABEL_CAR01))->SetCtrlText("WHL6EmgCallNoAct.PNG");
    }
    if(0)///fault
    {
        ((CImageCtrl *)GetDlgItem(IDPISALARM_LABEL_CAR01))->SetCtrlText("WHL6EmgCallFault.PNG");
    }

    if(PISiCT_PECU21Call_B1)
    {
        if(PISiCT_PECU21Act_B1)
        {
            ((CImageCtrl *)GetDlgItem(IDPISALARM_LABEL_CAR01_2))->SetCtrlText("WHL6EmgCallComm.PNG");
        }else
        {
            ((CImageCtrl *)GetDlgItem(IDPISALARM_LABEL_CAR01_2))->SetCtrlText("WHL6EmgCallAct.PNG");
        }
    }else
    {
        ((CImageCtrl *)GetDlgItem(IDPISALARM_LABEL_CAR01_2))->SetCtrlText("WHL6EmgCallNoAct.PNG");
    }
    if(0)///fault
    {
        ((CImageCtrl *)GetDlgItem(IDPISALARM_LABEL_CAR01_2))->SetCtrlText("WHL6EmgCallFault.PNG");
    }

    if(PISiCT_PECU12Call_B1)
    {
        if(PISiCT_PECU12Act_B1)
        {
            ((CImageCtrl *)GetDlgItem(IDPISALARM_LABEL_CAR02))->SetCtrlText("WHL6EmgCallComm.PNG");
        }else
        {
            ((CImageCtrl *)GetDlgItem(IDPISALARM_LABEL_CAR02))->SetCtrlText("WHL6EmgCallAct.PNG");
        }
    }else
    {
        ((CImageCtrl *)GetDlgItem(IDPISALARM_LABEL_CAR02))->SetCtrlText("WHL6EmgCallNoAct.PNG");
    }
    if(0)///fault
    {
        ((CImageCtrl *)GetDlgItem(IDPISALARM_LABEL_CAR02))->SetCtrlText("WHL6EmgCallFault.PNG");
    }

    if(PISiCT_PECU22Call_B1)
    {
        if(PISiCT_PECU22Act_B1)
        {
            ((CImageCtrl *)GetDlgItem(IDPISALARM_LABEL_CAR02_2))->SetCtrlText("WHL6EmgCallComm.PNG");
        }else
        {
            ((CImageCtrl *)GetDlgItem(IDPISALARM_LABEL_CAR02_2))->SetCtrlText("WHL6EmgCallAct.PNG");
        }
    }else
    {
        ((CImageCtrl *)GetDlgItem(IDPISALARM_LABEL_CAR02_2))->SetCtrlText("WHL6EmgCallNoAct.PNG");
    }
    if(0)///fault
    {
        ((CImageCtrl *)GetDlgItem(IDPISALARM_LABEL_CAR02_2))->SetCtrlText("WHL6EmgCallFault.PNG");
    }
    if(PISiCT_PECU13Call_B1)
    {
        if(PISiCT_PECU13Act_B1)
        {
            ((CImageCtrl *)GetDlgItem(IDPISALARM_LABEL_CAR03))->SetCtrlText("WHL6EmgCallComm.PNG");
        }else
        {
            ((CImageCtrl *)GetDlgItem(IDPISALARM_LABEL_CAR03))->SetCtrlText("WHL6EmgCallAct.PNG");
        }
    }else
    {
        ((CImageCtrl *)GetDlgItem(IDPISALARM_LABEL_CAR03))->SetCtrlText("WHL6EmgCallNoAct.PNG");
    }
    if(0)///fault
    {
        ((CImageCtrl *)GetDlgItem(IDPISALARM_LABEL_CAR03))->SetCtrlText("WHL6EmgCallFault.PNG");
    }

    if(PISiCT_PECU23Call_B1)
    {
        if(PISiCT_PECU23Act_B1)
        {
            ((CImageCtrl *)GetDlgItem(IDPISALARM_LABEL_CAR03_2))->SetCtrlText("WHL6EmgCallComm.PNG");
        }else
        {
            ((CImageCtrl *)GetDlgItem(IDPISALARM_LABEL_CAR03_2))->SetCtrlText("WHL6EmgCallAct.PNG");
        }
    }else
    {
        ((CImageCtrl *)GetDlgItem(IDPISALARM_LABEL_CAR03_2))->SetCtrlText("WHL6EmgCallNoAct.PNG");
    }
    if(0)///fault
    {
        ((CImageCtrl *)GetDlgItem(IDPISALARM_LABEL_CAR03_2))->SetCtrlText("WHL6EmgCallFault.PNG");
    }

    if(PISiCT_PECU14Call_B1)
    {
        if(PISiCT_PECU14Act_B1)
        {
            ((CImageCtrl *)GetDlgItem(IDPISALARM_LABEL_CAR04))->SetCtrlText("WHL6EmgCallComm.PNG");
        }else
        {
            ((CImageCtrl *)GetDlgItem(IDPISALARM_LABEL_CAR04))->SetCtrlText("WHL6EmgCallAct.PNG");
        }
    }else
    {
        ((CImageCtrl *)GetDlgItem(IDPISALARM_LABEL_CAR04))->SetCtrlText("WHL6EmgCallNoAct.PNG");
    }
    if(0)///fault
    {
        ((CImageCtrl *)GetDlgItem(IDPISALARM_LABEL_CAR04))->SetCtrlText("WHL6EmgCallFault.PNG");
    }

    if(PISiCT_PECU24Call_B1)
    {
        if(PISiCT_PECU24Act_B1)
        {
            ((CImageCtrl *)GetDlgItem(IDPISALARM_LABEL_CAR04_2))->SetCtrlText("WHL6EmgCallComm.PNG");
        }else
        {
            ((CImageCtrl *)GetDlgItem(IDPISALARM_LABEL_CAR04_2))->SetCtrlText("WHL6EmgCallAct.PNG");
        }
    }else
    {
        ((CImageCtrl *)GetDlgItem(IDPISALARM_LABEL_CAR04_2))->SetCtrlText("WHL6EmgCallNoAct.PNG");
    }
    if(0)///fault
    {
        ((CImageCtrl *)GetDlgItem(IDPISALARM_LABEL_CAR04_2))->SetCtrlText("WHL6EmgCallFault.PNG");
    }

    if(PISiCT_PECU15Call_B1)
    {
        if(PISiCT_PECU15Act_B1)
        {
            ((CImageCtrl *)GetDlgItem(IDPISALARM_LABEL_CAR05))->SetCtrlText("WHL6EmgCallComm.PNG");
        }else
        {
            ((CImageCtrl *)GetDlgItem(IDPISALARM_LABEL_CAR05))->SetCtrlText("WHL6EmgCallAct.PNG");
        }
    }else
    {
        ((CImageCtrl *)GetDlgItem(IDPISALARM_LABEL_CAR05))->SetCtrlText("WHL6EmgCallNoAct.PNG");
    }
    if(0)///fault
    {
        ((CImageCtrl *)GetDlgItem(IDPISALARM_LABEL_CAR05))->SetCtrlText("WHL6EmgCallFault.PNG");
    }

    if(PISiCT_PECU25Call_B1)
    {
        if(PISiCT_PECU25Act_B1)
        {
            ((CImageCtrl *)GetDlgItem(IDPISALARM_LABEL_CAR05_2))->SetCtrlText("WHL6EmgCallComm.PNG");
        }else
        {
            ((CImageCtrl *)GetDlgItem(IDPISALARM_LABEL_CAR05_2))->SetCtrlText("WHL6EmgCallAct.PNG");
        }
    }else
    {
        ((CImageCtrl *)GetDlgItem(IDPISALARM_LABEL_CAR05_2))->SetCtrlText("WHL6EmgCallNoAct.PNG");
    }
    if(0)///fault
    {
        ((CImageCtrl *)GetDlgItem(IDPISALARM_LABEL_CAR05_2))->SetCtrlText("WHL6EmgCallFault.PNG");
    }

    if(PISiCT_PECU16Call_B1)
    {
        if(PISiCT_PECU16Act_B1)
        {
            ((CImageCtrl *)GetDlgItem(IDPISALARM_LABEL_CAR06))->SetCtrlText("WHL6EmgCallComm.PNG");
        }else
        {
            ((CImageCtrl *)GetDlgItem(IDPISALARM_LABEL_CAR06))->SetCtrlText("WHL6EmgCallAct.PNG");
        }
    }else
    {
        ((CImageCtrl *)GetDlgItem(IDPISALARM_LABEL_CAR06))->SetCtrlText("WHL6EmgCallNoAct.PNG");
    }
    if(0)///fault
    {
        ((CImageCtrl *)GetDlgItem(IDPISALARM_LABEL_CAR06))->SetCtrlText("WHL6EmgCallFault.PNG");
    }

    if(PISiCT_PECU26Call_B1)
    {
        if(PISiCT_PECU26Act_B1)
        {
            ((CImageCtrl *)GetDlgItem(IDPISALARM_LABEL_CAR06_2))->SetCtrlText("WHL6EmgCallComm.PNG");
        }else
        {
            ((CImageCtrl *)GetDlgItem(IDPISALARM_LABEL_CAR06_2))->SetCtrlText("WHL6EmgCallAct.PNG");
        }
    }else
    {
        ((CImageCtrl *)GetDlgItem(IDPISALARM_LABEL_CAR06_2))->SetCtrlText("WHL6EmgCallNoAct.PNG");
    }
    if(0)///fault
    {
        ((CImageCtrl *)GetDlgItem(IDPISALARM_LABEL_CAR06_2))->SetCtrlText("WHL6EmgCallFault.PNG");
    }

}
