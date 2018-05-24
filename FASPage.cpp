#include "FASPage.h"



ROMDATA g_PicRom_FASPage[] =
{

#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW_WH
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

#ifdef PAGE_HEADER_NEW
    //D_COMMON_PAGE_HEADER_NEW(QObject::trUtf8("烟火报警") )
    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("烟火\n报警") )
    {"",                       D_FONT_BOLD(4),      QRect(100, 70, 600,  70),          Qt::black,                Qt::gray,                 CONTROL_TRAIN,          ID_PIBFASPage_TRAIN                      },

    {"RIGHT",                  D_FONT_BOLD(6),      QRect(715, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBFASPage_ARROW_RIGHT                },
    {"LEFT",                   D_FONT_BOLD(6),      QRect( 40, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBFASPage_ARROW_LEFT                 },

#endif

    {"",                          D_FONT_BOLD(6),      QRect( 100, 150, 600,   1),          Qt::yellow,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect( 100, 270, 600,   1),          Qt::yellow,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },

    {"",                          D_FONT_BOLD(6),      QRect(100, 150,   1, 120),          Qt::yellow,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(200, 150,   1, 120),          Qt::yellow,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(300, 150,   1, 120),          Qt::yellow,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(400, 150,   1, 120),          Qt::yellow,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(500, 150,   1, 120),          Qt::yellow,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(600, 150,   1, 120),          Qt::yellow,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(700, 150,   1, 120),          Qt::yellow,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },

    {QObject::trUtf8("fireOK.png"),                          D_FONT_BOLD(6),      QRect(125, 195,   40, 40),          Qt::yellow,                Qt::black,                CONTROL_IMAGE,           IDFASPAGE_LABEL_CAR01        },
    {QObject::trUtf8("fireOK.png"),                          D_FONT_BOLD(6),      QRect(225, 195,   40, 40),          Qt::yellow,                Qt::black,                CONTROL_IMAGE,           IDFASPAGE_LABEL_CAR02        },
    {QObject::trUtf8("fireOK.png"),                          D_FONT_BOLD(6),      QRect(325, 195,   40, 40),          Qt::yellow,                Qt::black,                CONTROL_IMAGE,           IDFASPAGE_LABEL_CAR03        },
    {QObject::trUtf8("fireOK.png"),                          D_FONT_BOLD(6),      QRect(425, 195,   40, 40),          Qt::yellow,                Qt::black,                CONTROL_IMAGE,           IDFASPAGE_LABEL_CAR04        },
    {QObject::trUtf8("fireOK.png"),                          D_FONT_BOLD(6),      QRect(525, 195,   40, 40),          Qt::yellow,                Qt::black,                CONTROL_IMAGE,           IDFASPAGE_LABEL_CAR05        },
    {QObject::trUtf8("fireOK.png"),                          D_FONT_BOLD(6),      QRect(625, 195,   40, 40),          Qt::yellow,                Qt::black,                CONTROL_IMAGE,           IDFASPAGE_LABEL_CAR06        },

    {QObject::trUtf8("1车烟火复位"),                          D_FONT_BOLD(6),      QRect(105, 300,   90, 40),          Qt::black,                Qt::white,                CONTROL_BUTTON,           IDFASPAGE_BTNRESET_CAR01        },
    {QObject::trUtf8("2车烟火复位"),                          D_FONT_BOLD(6),      QRect(205, 300,   90, 40),          Qt::black,                Qt::white,                CONTROL_BUTTON,           IDFASPAGE_BTNRESET_CAR02        },
    {QObject::trUtf8("3车烟火复位"),                          D_FONT_BOLD(6),      QRect(305, 300,   90, 40),          Qt::black,                Qt::white,                CONTROL_BUTTON,           IDFASPAGE_BTNRESET_CAR03        },
    {QObject::trUtf8("4车烟火复位"),                          D_FONT_BOLD(6),      QRect(405, 300,   90, 40),          Qt::black,                Qt::white,                CONTROL_BUTTON,           IDFASPAGE_BTNRESET_CAR04        },
    {QObject::trUtf8("5车烟火复位"),                          D_FONT_BOLD(6),      QRect(505, 300,   90, 40),          Qt::black,                Qt::white,                CONTROL_BUTTON,           IDFASPAGE_BTNRESET_CAR05        },
    {QObject::trUtf8("6车烟火复位"),                          D_FONT_BOLD(6),      QRect(605, 300,   90, 40),          Qt::black,                Qt::white,                CONTROL_BUTTON,           IDFASPAGE_BTNRESET_CAR06        },
    {QObject::trUtf8("全车烟火复位"),                          D_FONT_BOLD(6),      QRect(625, 350,   90, 40),          Qt::black,                Qt::white,                CONTROL_BUTTON,           IDFASPAGE_BTNRESET_CARALL        },
    {QObject::trUtf8("火灾报警复位按键持续按下信号有效，按键抬起信号无效."),                  D_FONT_BOLD(7),      QRect( 10, 450, 450, 20),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE         },

//火警
};
int g_FASPageRomLen = sizeof(g_PicRom_FASPage)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(FASPage,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_LEAVEPAGE()

        ON_LBUTTONUP(IDFASPAGE_BTNRESET_CAR01, OnComBtnCar01reset)
        ON_LBUTTONUP(IDFASPAGE_BTNRESET_CAR02, OnComBtnCar02reset)
        ON_LBUTTONUP(IDFASPAGE_BTNRESET_CAR03, OnComBtnCar03reset)
        ON_LBUTTONUP(IDFASPAGE_BTNRESET_CAR04, OnComBtnCar04reset)
        ON_LBUTTONUP(IDFASPAGE_BTNRESET_CAR05, OnComBtnCar05reset)
        ON_LBUTTONUP(IDFASPAGE_BTNRESET_CAR06, OnComBtnCar06reset)
        ON_LBUTTONUP(IDFASPAGE_BTNRESET_CARALL, OnComBtnCarallreset)

        ON_LBUTTONDOWN(IDFASPAGE_BTNRESET_CAR01, OnComBtnCar01press)
        ON_LBUTTONDOWN(IDFASPAGE_BTNRESET_CAR02, OnComBtnCar02press)
        ON_LBUTTONDOWN(IDFASPAGE_BTNRESET_CAR03, OnComBtnCar03press)
        ON_LBUTTONDOWN(IDFASPAGE_BTNRESET_CAR04, OnComBtnCar04press)
        ON_LBUTTONDOWN(IDFASPAGE_BTNRESET_CAR05, OnComBtnCar05press)
        ON_LBUTTONDOWN(IDFASPAGE_BTNRESET_CAR06, OnComBtnCar06press)
        ON_LBUTTONDOWN(IDFASPAGE_BTNRESET_CARALL, OnComBtnCarallpress)


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

#endif
        ON_BTNCLK(ID_LABEL_REALTIMEFAULTCONFIRM, OnRealtimefaultBtnClk)
        //ON_BTNCLK(ID_PIBFASPage_CLEAR_VOICE, OnClearVoiceClk)
        //ON_BTNCLK(ID_PIBFASPage_RESET, UpResetClk)
END_MESSAGE_MAP()

FASPage::FASPage()
{
}

void FASPage::OnUpdatePage()
{

    //((CImageCtrl *)GetDlgItem(IDFASPAGE_LABEL_CAR01))->SetCtrlText(QObject::trUtf8("fairalarm.png"));
    updateTrain(ID_PIBFASPage_TRAIN);
    updateArrow(ID_PIBFASPage_ARROW_LEFT,ID_PIBFASPage_ARROW_RIGHT);
    UpdateFireState();
    UpdateRealtimefaults();
#ifdef PAGE_HEADER_OLD

    UpdateCommInterrupt(ID_PIBMAIN_COMMINTERRUPT);

    updateFault(ID_PIBMAIN_ICON_WARNNING);

#endif
}

void FASPage::OnInitPage()
{



}

void FASPage::OnLeavePage()
{

        m_bBtnPress = false;

        HMCT_FAUMute_B1=false;     //      FAS蜂鸣器消音
        HMCT_FAUReset_B1=false;    //      FAS复位


}

void FASPage::OnShowPage()
{
    ((CButton *)GetDlgItem(IDLB_COM_BTN10))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN11))->SetCtrlText(QObject::trUtf8(""));
#ifdef PAGE_BUTTON_BAR_NEW

#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8("帮   助"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("退   出"));

#endif
    this->InitPageHeader();

    FAS_button_timer = 0;
//    ((CButton*)GetDlgItem(ID_PIBFASPage_RESET))->ChangeButtonState(LBUTTON_UP);
//    ((CButton*)GetDlgItem(ID_PIBFASPage_CLEAR_VOICE))->ChangeButtonState(LBUTTON_UP);
    if(CGlobal::m_nPrePageIndex!=PAGE_INDEX_REALTIMEFAULT)
    {
        m_fas_PrePageIndex=CGlobal::m_nPrePageIndex;
    }

}


#ifdef PAGE_BUTTON_BAR_NEW
void FASPage::OnComBtn1Clk()
{
    ChangePage(PAGE_INDEX_RUNSTATE);
}

void FASPage::OnComBtn2Clk()
{
    ChangePage(PAGE_INDEX_MAINTAIN);
}

void FASPage::OnComBtn3Clk()
{
     ChangePage(PAGE_INDEX_CARSTATUS3);
}

void FASPage::OnComBtn4Clk()
{
     ChangePage(PAGE_INDEX_TCUBLOCKREASON);
}

void FASPage::OnComBtn5Clk()
{
     ChangePage(PAGE_INDEX_INSTANCYBROADCAST);
}

void FASPage::OnComBtn6Clk()
{
    ChangePage(PAGE_INDEX_FASPage);
}
void FASPage::OnComBtn7Clk()
{
    ChangePage(PAGE_INDEX_PISALARM);
}

void FASPage::OnComBtn8Clk()
{
}
void FASPage::OnComBtn12Clk()
{
    ChangePage(PAGE_INDEX_FASHELPPAGE);
}
void FASPage::OnComBtnCar01reset()
{
    car1reset = false;
}
void FASPage::OnComBtnCar02reset()
{
    car2reset = false;
}
void FASPage::OnComBtnCar03reset()
{
    car3reset = false;

}
void FASPage::OnComBtnCar04reset()
{
    car4reset = false;

}
void FASPage::OnComBtnCar05reset()
{
    car5reset = false;

}
void FASPage::OnComBtnCar06reset()
{
    car6reset = false;

}
void FASPage::OnComBtnCarallreset()
{
//    HMiCT_FireAlarm1Rst_B1 = false;
//    HMiCT_FireAlarm2Rst_B1 = false;
//    HMiCT_FireAlarm3Rst_B1 = false;
//    HMiCT_FireAlarm4Rst_B1 = false;
//    HMiCT_FireAlarm5Rst_B1 = false;
//    HMiCT_FireAlarm6Rst_B1 = false;
    HMiCT_FireAlarmAllRst_B1 = false;
    carallreset = false;
}
void FASPage::OnComBtnCar01press()
{
    HMiCT_FireAlarm1Rst_B1 = true;
}
void FASPage::OnComBtnCar02press()
{
    HMiCT_FireAlarm2Rst_B1 = true;

}
void FASPage::OnComBtnCar03press()
{
    HMiCT_FireAlarm3Rst_B1 = true;

}
void FASPage::OnComBtnCar04press()
{
    HMiCT_FireAlarm4Rst_B1 = true;

}
void FASPage::OnComBtnCar05press()
{
    HMiCT_FireAlarm5Rst_B1 = true;

}
void FASPage::OnComBtnCar06press()
{
    HMiCT_FireAlarm6Rst_B1 = true;

}
void FASPage::OnComBtnCarallpress()
{
//    HMiCT_FireAlarm1Rst_B1 = true;
//    HMiCT_FireAlarm2Rst_B1 = true;
//    HMiCT_FireAlarm3Rst_B1 = true;
//    HMiCT_FireAlarm4Rst_B1 = true;
//    HMiCT_FireAlarm5Rst_B1 = true;
//    HMiCT_FireAlarm6Rst_B1 = true;
    HMiCT_FireAlarmAllRst_B1 = true;
}
//void FASPage::OnComBtn8Clk()
//{

//    m_bBtnPress = false;
//    HMCT_FAUMute_B1=false;     //      FAS蜂鸣器消音
//    HMCT_FAUReset_B1=false;    //      FAS复位
////    ((CButton*)GetDlgItem(ID_PIBFASPage_RESET))->ChangeButtonState(LBUTTON_UP);
////    ((CButton*)GetDlgItem(ID_PIBFASPage_CLEAR_VOICE))->ChangeButtonState(LBUTTON_UP);
//    ChangePage(PAGE_INDEX_RUNHELP1);
////    if(CGlobal::m_nPrePageIndex==PAGE_INDEX_REALTIMEFAULT)
////    {
////        ChangePage(m_fas_PrePageIndex);
////    }
////    else
////    {
////        ChangePage(CGlobal::m_nPrePageIndex);
////    }

//}

void FASPage::OnClearVoiceClk()
{
//    m_bBtnPress = true;
//    if (  (FAS_button_timer==0)&&(!HMCT_FAUMute_B1)  )
//    {

//        HMCT_FAUMute_B1=true;
//        FAS_button_timer=3;
//    }

//    if(HMCT_FAUReset_B1)
//    {
//        //((CButton*)GetDlgItem(ID_PIBFASPage_CLEAR_VOICE))->ChangeButtonState(LBUTTON_UP);
//    }

}
void FASPage::UpResetClk()
{
//    m_bBtnPress = true;
//    if (  (FAS_button_timer==0)&&(!HMCT_FAUReset_B1)  )
//    {
//        HMCT_FAUReset_B1=true;
//        FAS_button_timer=3;
//    }

//    if(HMCT_FAUMute_B1)
//    {
//       // ((CButton*)GetDlgItem(ID_PIBFASPage_RESET))->ChangeButtonState(LBUTTON_UP);
//    }
}

void FASPage::UpdateFireState()
{
    if(!(DICT_Tc1DI1FireFault_B1))
    {
        ((CImageCtrl *)GetDlgItem(IDFASPAGE_LABEL_CAR01))->SetCtrlText(QObject::trUtf8("firefault.png"));
    }
    else if(DICT_Tc1DI1FireAlarm_B1)
    {
        ((CImageCtrl *)GetDlgItem(IDFASPAGE_LABEL_CAR01))->SetCtrlText(QObject::trUtf8("fairalarm.png"));
    }else if(0)
    {
    //warning
    }else
    {
        ((CImageCtrl *)GetDlgItem(IDFASPAGE_LABEL_CAR01))->SetCtrlText(QObject::trUtf8("fireOK.png"));
    }

    if(!(DICT_MP1DI1FireFault_B1))
    {
        ((CImageCtrl *)GetDlgItem(IDFASPAGE_LABEL_CAR02))->SetCtrlText(QObject::trUtf8("firefault.png"));
    }else if(DICT_MP1DI1FireAlarm_B1)
    {
        ((CImageCtrl *)GetDlgItem(IDFASPAGE_LABEL_CAR02))->SetCtrlText(QObject::trUtf8("fairalarm.png"));
    }else if(0)
    {
    //warning
    }else
    {
        ((CImageCtrl *)GetDlgItem(IDFASPAGE_LABEL_CAR02))->SetCtrlText(QObject::trUtf8("fireOK.png"));
    }

    if(!(DICT_M1DI1FireFault_B1))
    {
        ((CImageCtrl *)GetDlgItem(IDFASPAGE_LABEL_CAR03))->SetCtrlText(QObject::trUtf8("firefault.png"));
    }else if(DICT_M1DI1FireAlarm_B1)
    {
        ((CImageCtrl *)GetDlgItem(IDFASPAGE_LABEL_CAR03))->SetCtrlText(QObject::trUtf8("fairalarm.png"));
    }else if(0)
    {
    //warning
    }else
    {
        ((CImageCtrl *)GetDlgItem(IDFASPAGE_LABEL_CAR03))->SetCtrlText(QObject::trUtf8("fireOK.png"));
    }

    if(!(DICT_M2DI1FireFault_B1))
    {
        ((CImageCtrl *)GetDlgItem(IDFASPAGE_LABEL_CAR04))->SetCtrlText(QObject::trUtf8("firefault.png"));
    }else if(DICT_M2DI1FireAlarm_B1)
    {
        ((CImageCtrl *)GetDlgItem(IDFASPAGE_LABEL_CAR04))->SetCtrlText(QObject::trUtf8("fairalarm.png"));
    }else if(0)
    {
    //warning
    }else
    {
        ((CImageCtrl *)GetDlgItem(IDFASPAGE_LABEL_CAR04))->SetCtrlText(QObject::trUtf8("fireOK.png"));
    }

    if(!(DICT_MP2DI1FireFault_B1))
    {
        ((CImageCtrl *)GetDlgItem(IDFASPAGE_LABEL_CAR05))->SetCtrlText(QObject::trUtf8("firefault.png"));
    }else if(DICT_MP2DI1FireAlarm_B1)
    {
        ((CImageCtrl *)GetDlgItem(IDFASPAGE_LABEL_CAR05))->SetCtrlText(QObject::trUtf8("fairalarm.png"));
    }else if(0)
    {
    //warning
    }else
    {
        ((CImageCtrl *)GetDlgItem(IDFASPAGE_LABEL_CAR05))->SetCtrlText(QObject::trUtf8("fireOK.png"));
    }

    if(!(DICT_Tc2DI1FireFault_B1))
    {
        ((CImageCtrl *)GetDlgItem(IDFASPAGE_LABEL_CAR06))->SetCtrlText(QObject::trUtf8("firefault.png"));
    }else if(DICT_Tc2DI1FireAlarm_B1)
    {
        ((CImageCtrl *)GetDlgItem(IDFASPAGE_LABEL_CAR06))->SetCtrlText(QObject::trUtf8("fairalarm.png"));
    }else if(0)
    {
    //warning
    }else
    {
        ((CImageCtrl *)GetDlgItem(IDFASPAGE_LABEL_CAR06))->SetCtrlText(QObject::trUtf8("fireOK.png"));
    }
}
void FASPage::UpdateRealtimefaults()
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

void FASPage::OnRealtimefaultBtnClk()
{
    g_faultsrom[g_romidx].confirm = true;
    g_realtimeFaultsbarList.removeAt(g_faultcount);
    if(g_faultcount>0)
    g_faultcount--;
    //m_faultcount--;

}

void FASPage::UpdateFireAlert()
{

}

void FASPage::UpdateFireIso()
{
}

void FASPage::UpdateShortCircuitFault()
{
}

    void FASPage::UpdateOpenCircuitFault()
    {
}

    void FASPage::UpdateFanFault()
    {
}

    void FASPage::UpdatePollut()
    {
}

void FASPage::UpdateCommuFault()
{
}
void FASPage::SetLabelColor(int id,int colorVal)
{

                    ASSERT((colorVal >= 0) && (colorVal <= 2));
                        if (0 == colorVal)
                        {
                            ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
                            ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::black);
                        }
                        else if (1 == colorVal)
                        {
                            ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
                             ((CLabel *)GetDlgItem(id))->SetTxtColor(Qt::white);
                        }
                        else if (2 == colorVal)
                        {
                            ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
                        }

                        return;


        }


#else
void FASPage::OnComBtn1Clk()
{

}

void FASPage::OnComBtn2Clk()
{

}

void FASPage::OnComBtn3Clk()
{

}

void FASPage::OnComBtn4Clk()
{

}

void FASPage::OnComBtn5Clk()
{

}

void FASPage::OnComBtn6Clk()
{

}



//void FASPage::OnUpdatePage()
//{
//   //    UpdateTrainDiagram();
//}






#endif

