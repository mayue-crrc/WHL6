#include "C_Page_CutOff.h"
ROMDATA  g_PicRom_CutOff[] =
{
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW_WH
#else
//    {QObject::trUtf8("第1页/共3页"),           D_FONT_BOLD(6),      QRect(675, 480, 120,  20),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
//    {"<<",                        D_FONT_BOLD(6),      QRect(675, 500,  50,  39),          Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBCUTOFF_PAGEDOWN           },
//    {">>",                        D_FONT_BOLD(6),      QRect(725, 500,  50,  39),          Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBCUTOFF_PAGEUP             },
#endif


#ifdef PAGE_HEADER_NEW
    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("切除复\n位缓解") )
    {"",                       D_FONT_BOLD(4),      QRect(100, 70, 600,  70),          Qt::black,                Qt::gray,                 CONTROL_TRAIN,          ID_PIBCUTOFF_TRAIN                      },
    {"RIGHT",                  D_FONT_BOLD(6),      QRect(715, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBCUTOFF_ARROW_RIGHT                },
    {"LEFT",                   D_FONT_BOLD(6),      QRect( 40, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBCUTOFF_ARROW_LEFT                 },
#endif

    {QObject::trUtf8("ACU1切除"),                   D_FONT_BOLD(6),      QRect(110, 150,  80,  50),          Qt::black,                Qt::black,          CONTROL_BUTTON,          ID_PIBCUTOFF_TC1BTN1        },
    {QObject::trUtf8("ACU1复位"),                   D_FONT_BOLD(6),      QRect(110, 220,  80,  50),          Qt::black,                Qt::black,          CONTROL_BUTTON,          ID_PIBCUTOFF_TC1BTN2        },
    {QObject::trUtf8("REC1切除"),                   D_FONT_BOLD(6),      QRect(110, 290,  80,  50),          Qt::black,                Qt::black,          CONTROL_BUTTON,          ID_PIBCUTOFF_TC1BTN3        },
    {QObject::trUtf8("REC1复位"),                   D_FONT_BOLD(6),      QRect(110, 360,  80,  50),          Qt::black,                Qt::black,          CONTROL_BUTTON,          ID_PIBCUTOFF_TC1BTN4        },

    {QObject::trUtf8("MP1牵引\n逆变器切除"),                   D_FONT_BOLD(6),      QRect(210, 150,  80,  50),          Qt::black,                Qt::black,          CONTROL_BUTTON,          ID_PIBCUTOFF_MP1BTN1        },
    {QObject::trUtf8("MP1牵引\n逆变器复位"),                   D_FONT_BOLD(6),      QRect(210, 220,  80,  50),          Qt::black,                Qt::black,          CONTROL_BUTTON,          ID_PIBCUTOFF_MP1BTN2        },
    {QObject::trUtf8("MP1电制\n动切除"),                   D_FONT_BOLD(6),      QRect(210, 290,  80,  50),          Qt::black,                Qt::black,          CONTROL_BUTTON,          ID_PIBCUTOFF_MP1BTN3        },

    {QObject::trUtf8("M1牵引\n逆变器切除"),                   D_FONT_BOLD(6),      QRect(310, 150,  80,  50),          Qt::black,                Qt::black,          CONTROL_BUTTON,          ID_PIBCUTOFF_M1BTN1        },
    {QObject::trUtf8("M1牵引\n逆变器复位"),                   D_FONT_BOLD(6),      QRect(310, 220,  80,  50),          Qt::black,                Qt::black,          CONTROL_BUTTON,          ID_PIBCUTOFF_M1BTN2        },
    {QObject::trUtf8("M1电制\n动切除"),                   D_FONT_BOLD(6),      QRect(310, 290,  80,  50),          Qt::black,                Qt::black,          CONTROL_BUTTON,          ID_PIBCUTOFF_M1BTN3        },

    {QObject::trUtf8("M2牵引\n逆变器切除"),                   D_FONT_BOLD(6),      QRect(410, 150,  80,  50),          Qt::black,                Qt::black,          CONTROL_BUTTON,          ID_PIBCUTOFF_M2BTN1        },
    {QObject::trUtf8("M2牵引\n逆变器复位"),                   D_FONT_BOLD(6),      QRect(410, 220,  80,  50),          Qt::black,                Qt::black,          CONTROL_BUTTON,          ID_PIBCUTOFF_M2BTN2        },
    {QObject::trUtf8("M2电制\n动切除"),                   D_FONT_BOLD(6),      QRect(410, 290,  80,  50),          Qt::black,                Qt::black,          CONTROL_BUTTON,          ID_PIBCUTOFF_M2BTN3        },

    {QObject::trUtf8("MP2牵引\n逆变器切除"),                   D_FONT_BOLD(6),      QRect(510, 150,  80,  50),          Qt::black,                Qt::black,          CONTROL_BUTTON,          ID_PIBCUTOFF_MP2BTN1        },
    {QObject::trUtf8("MP2牵引\n逆变器复位"),                   D_FONT_BOLD(6),      QRect(510, 220,  80,  50),          Qt::black,                Qt::black,          CONTROL_BUTTON,          ID_PIBCUTOFF_MP2BTN2        },
    {QObject::trUtf8("MP2电制\n动切除"),                   D_FONT_BOLD(6),      QRect(510, 290,  80,  50),          Qt::black,                Qt::black,          CONTROL_BUTTON,          ID_PIBCUTOFF_MP2BTN3        },

    {QObject::trUtf8("ACU2切除"),                   D_FONT_BOLD(6),      QRect(610, 150,  80,  50),          Qt::black,                Qt::black,          CONTROL_BUTTON,          ID_PIBCUTOFF_TC2BTN1        },
    {QObject::trUtf8("ACU2复位"),                   D_FONT_BOLD(6),      QRect(610, 220,  80,  50),          Qt::black,                Qt::black,          CONTROL_BUTTON,          ID_PIBCUTOFF_TC2BTN2        },
    {QObject::trUtf8("REC2切除"),                   D_FONT_BOLD(6),      QRect(610, 290,  80,  50),          Qt::black,                Qt::black,          CONTROL_BUTTON,          ID_PIBCUTOFF_TC2BTN3        },
    {QObject::trUtf8("REC2复位"),                   D_FONT_BOLD(6),      QRect(610, 360,  80,  50),          Qt::black,                Qt::black,          CONTROL_BUTTON,          ID_PIBCUTOFF_TC2BTN4        },


    {QObject::trUtf8("保持制动\n缓解切除"),                   D_FONT_BOLD(6),      QRect(550, 420,  80,  50),          Qt::black,                Qt::black,          CONTROL_BUTTON,          ID_PIBCUTOFF_HOLDBRKRLS        },
    {QObject::trUtf8("所有电制\n动切除"),                   D_FONT_BOLD(6),      QRect(430, 420,  80,  50),          Qt::black,                Qt::black,          CONTROL_BUTTON,          ID_PIBCUTOFF_ALLBRKCUT        },
    {QObject::trUtf8(""),                   D_FONT_BOLD(4),      QRect(430, 470,  280,  20),          Qt::white,                Qt::black,          CONTROL_LABEL,          ID_PIBCUTOFF_ALLBRKCUTSHOW        },

};
int g_CutOffRomLen = sizeof(g_PicRom_CutOff)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(C_Page_CutOff,CPage)
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

        ON_BTNCLK(ID_PIBCUTOFF_TC1BTN1, OnComACU1cutClk)
        ON_BTNCLK(ID_PIBCUTOFF_TC1BTN2, OnComACU1resetClk)
        ON_BTNCLK(ID_PIBCUTOFF_TC1BTN3, OnComREC1cutClk)
        ON_BTNCLK(ID_PIBCUTOFF_TC1BTN4, OnComREC1resetClk)

        ON_BTNCLK(ID_PIBCUTOFF_MP1BTN1, OnComDCU1cutClk)
        ON_BTNCLK(ID_PIBCUTOFF_MP1BTN2, OnComDCU1resetClk)
        ON_BTNCLK(ID_PIBCUTOFF_MP1BTN3, OnComEB1cutPress)

        ON_BTNCLK(ID_PIBCUTOFF_M1BTN1, OnComDCU2cutClk)
        ON_BTNCLK(ID_PIBCUTOFF_M1BTN2, OnComDCU2resetClk)
        ON_BTNCLK(ID_PIBCUTOFF_M1BTN3, OnComEB2cutPress)

        ON_BTNCLK(ID_PIBCUTOFF_M2BTN1, OnComDCU3cutClk)
        ON_BTNCLK(ID_PIBCUTOFF_M2BTN2, OnComDCU3resetClk)
        ON_BTNCLK(ID_PIBCUTOFF_M2BTN3, OnComEB3cutPress)

        ON_BTNCLK(ID_PIBCUTOFF_MP2BTN1, OnComDCU4cutClk)
        ON_BTNCLK(ID_PIBCUTOFF_MP2BTN2, OnComDCU4resetClk)
        ON_BTNCLK(ID_PIBCUTOFF_MP2BTN3, OnComEB4cutPress)

        ON_BTNCLK(ID_PIBCUTOFF_TC2BTN1, OnComACU2cutClk)
        ON_BTNCLK(ID_PIBCUTOFF_TC2BTN2, OnComACU2resetClk)
        ON_BTNCLK(ID_PIBCUTOFF_TC2BTN3, OnComREC2cutClk)
        ON_BTNCLK(ID_PIBCUTOFF_TC2BTN4, OnComREC2resetClk)
        ON_BTNCLK(ID_PIBCUTOFF_HOLDBRKRLS, OnComHoldbrkrlscutPress)
        ON_BTNCLK(ID_PIBCUTOFF_ALLBRKCUT, OnComALLbrkcutPress)


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
C_Page_CutOff::C_Page_CutOff()
{
    m_btndown = false;
}
void C_Page_CutOff::OnUpdatePage()
{
    updateTrain(ID_PIBCUTOFF_TRAIN);
    updateArrow(ID_PIBCUTOFF_ARROW_LEFT,ID_PIBCUTOFF_ARROW_RIGHT);

    ((CLabel*)GetDlgItem(ID_PIBCUTOFF_ALLBRKCUTSHOW))->SetCtrlText(QObject::trUtf8("电制动切除状态   MP1: ")+QString::number(bool(sendData[62] & 0x80))
                                                                   +" M1: "+QString::number(bool(sendData[62] & 0x40))
                                                                   +" M2: "+QString::number(bool(sendData[62] & 0x20))
                                                                   +" MP2: "+QString::number(bool(sendData[62] & 0x10)));


    if(timercount[1] > 0 )
    {
        if(++timercount[1] > 5)
        {
            HMiCT_ACU1Reset_B1 = false;
            timercount[1] = 0;
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_TC1BTN2))->ChangeButtonState(LBUTTON_UP);
        }
    }

    //if(timercount[3] > 0 )
    {
        if(++timercount[3] > 5)
        {
//            if(HMiCT_REC1Reset_B1)
//            {
//                HMiCT_SetFlagChecker_U8=0x55;
//            }
            HMiCT_REC1Reset_B1 = false;
            timercount[3] = 0;
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_TC1BTN4))->ChangeButtonState(LBUTTON_UP);
        }
    }

    //if(timercount[5] > 0 )
    {
        if(++timercount[5] > 5)
        {
//            if(HMiCT_ACU2Reset_B1)
//            {
//                HMiCT_SetFlagChecker_U8=0x55;
//            }
            HMiCT_ACU2Reset_B1 = false;
            timercount[5] = 0;
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_TC2BTN2))->ChangeButtonState(LBUTTON_UP);
        }
    }

    //if(timercount[7] > 0 )
    {
        if(++timercount[7] > 5)
        {
//            if(HMiCT_REC2Reset_B1)
//            {
//                HMiCT_SetFlagChecker_U8=0x55;
//            }
            HMiCT_REC2Reset_B1 = false;
            timercount[7] = 0;
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_TC2BTN4))->ChangeButtonState(LBUTTON_UP);
        }
    }

    //if(timercount[9] > 0 )
    {
        if(++timercount[9] > 5)
        {
//            if(HMiCT_IsolateRstMp1_B1)
//            {
//                HMiCT_SetFlagChecker_U8=0x55;
//            }
            HMiCT_IsolateRstMp1_B1 = false;
            timercount[9] = 0;
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_MP1BTN2))->ChangeButtonState(LBUTTON_UP);
        }
    }

    //if(timercount[11] > 0 )
    {
        if(++timercount[11] > 5)
        {
//            if(HMiCT_IsolateRstM1_B1)
//            {
//                HMiCT_SetFlagChecker_U8=0x55;
//            }
            HMiCT_IsolateRstM1_B1 = false;
            timercount[11] = 0;
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_M1BTN2))->ChangeButtonState(LBUTTON_UP);
        }
    }

    //if(timercount[13] > 0 )
    {
        if(++timercount[13] > 5)
        {
//            if(HMiCT_IsolateRstM2_B1)
//            {
//                HMiCT_SetFlagChecker_U8=0x55;
//            }
            HMiCT_IsolateRstM2_B1 = false;
            timercount[13] = 0;
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_M2BTN2))->ChangeButtonState(LBUTTON_UP);
        }
    }

    //if(timercount[15] > 0 )
    {
        if(++timercount[15] > 5)
        {
//            if(HMiCT_IsolateRstMp2_B1)
//            {
//                HMiCT_SetFlagChecker_U8=0x55;
//            }
            HMiCT_IsolateRstMp2_B1 = false;
            timercount[15] = 0;
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_MP2BTN2))->ChangeButtonState(LBUTTON_UP);
        }
    }
    if(HMiCT_IsolateMp1_B1||
       HMiCT_IsolateM1_B1||
       HMiCT_IsolateM2_B1||
       HMiCT_IsolateMp2_B1||
       HMiCT_IsolateRstMp1_B1||
       HMiCT_IsolateRstM1_B1||
       HMiCT_IsolateRstM2_B1||
       HMiCT_IsolateRstMp2_B1||
       HMiCT_Mp1DynamicBrkCut_B1||
       HMiCT_M1DynamicBrkCut_B1||
       HMiCT_M2DynamicBrkCut_B1||
       HMiCT_Mp2DynamicBrkCut_B1||
       HMiCT_ACU1Cutoff_B1||
       HMiCT_ACU2Cutoff_B1||
       HMiCT_ACU1Reset_B1||
       HMiCT_ACU2Reset_B1||
       HMiCT_REC1Cutoff_B1||
       HMiCT_REC2Cutoff_B1||
       HMiCT_REC1Reset_B1||
       HMiCT_REC2Reset_B1||
       HMiCT_HoldBrkRls_B1)
    {
      //HMiCT_SetFlagChecker_U8=0xaa;
    }else
    {
        //HMiCT_SetFlagChecker_U8=0x55;
    }


    UpdateRealtimefaults();
}

void C_Page_CutOff::OnInitPage()
{
    ((CButton *)GetDlgItem(ID_PIBCUTOFF_TC1BTN1))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBCUTOFF_TC1BTN2))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBCUTOFF_TC1BTN3))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBCUTOFF_TC1BTN4))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBCUTOFF_TC2BTN1))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBCUTOFF_TC2BTN2))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBCUTOFF_TC2BTN3))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBCUTOFF_TC2BTN4))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBCUTOFF_MP1BTN1))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBCUTOFF_MP1BTN2))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBCUTOFF_MP1BTN3))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBCUTOFF_M1BTN1))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBCUTOFF_M1BTN2))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBCUTOFF_M1BTN3))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBCUTOFF_MP2BTN1))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBCUTOFF_MP2BTN2))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBCUTOFF_MP2BTN3))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBCUTOFF_M2BTN1))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBCUTOFF_M2BTN2))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBCUTOFF_M2BTN3))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBCUTOFF_HOLDBRKRLS))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBCUTOFF_ALLBRKCUT))->m_bAutoUpState = false;


#ifdef PAGE_HEADER_OLD

    ((CLabel *) GetDlgItem(ID_PIBCARS1_LABEL_V))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBCARS1_LABEL_A))->SetBorderColor(Qt::white);

    ((CLabel *) GetDlgItem(ID_PIBCARS1_LABEL_TRACTIONMODEL))->SetBorderColor(Qt::white);
    ((CLabel *) GetDlgItem(ID_PIBCARS1_LABEL_SPEED))->SetBorderColor(Qt::white);

#endif

}

void C_Page_CutOff::OnShowPage()
{


    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返  回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN9))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN10))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN11))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN12))->SetCtrlText(QObject::trUtf8(""));
//    if (1 == EmergencyResuce)
//        ((CButton*)GetDlgItem(ID_PIBCARS1_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_DOWN);
//    else
//        ((CButton*)GetDlgItem(ID_PIBCARS1_BUTTON_EMERGENCYRESCUE))->ChangeButtonState(LBUTTON_UP);

//    ACU_test_timer = 3;
//    BitSet( HMI_send_data24, 7, 0 );//复位ACU复位故障按钮

    //this->InitPageHeader();
}
void C_Page_CutOff::UpdateRealtimefaults()
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

void C_Page_CutOff::OnRealtimefaultBtnClk()
{
    g_faultsrom[g_romidx].confirm = true;
    g_realtimeFaultsbarList.removeAt(g_faultcount);
    if(g_faultcount>0)
    g_faultcount--;
    //m_faultcount--;

}

#ifdef PAGE_BUTTON_BAR_NEW
    void C_Page_CutOff::OnComBtn1Clk()
    {
        HMiCT_IsolateRstMp1_B1 = false;
        HMiCT_IsolateRstM1_B1 = false;
        HMiCT_IsolateRstM2_B1 = false;
        HMiCT_IsolateRstMp2_B1 = false;
        HMiCT_ACU1Reset_B1= false;
        HMiCT_ACU2Reset_B1= false;
        HMiCT_REC1Reset_B1 =false;
        HMiCT_REC2Reset_B1= false;
        ChangePage(PAGE_INDEX_MAINTAIN);
    }
    void C_Page_CutOff::OnComBtn2Clk()
    {
    }

    void C_Page_CutOff::OnComBtn3Clk()
    {
    }

    void C_Page_CutOff::OnComBtn4Clk()
    {
    }

    void C_Page_CutOff::OnComBtn5Clk()
    {
    }

    void C_Page_CutOff::OnComBtn6Clk()
    {
    }
    void C_Page_CutOff::OnComBtn7Clk()
    {
    }

    void C_Page_CutOff::OnComBtn8Clk()
    {
    }
    void C_Page_CutOff::OnComBtn9Clk()
    {
    }

    void C_Page_CutOff::OnComBtn10Clk()
    {
    }
    void C_Page_CutOff::OnComBtn11Clk()
    {
    }

    void C_Page_CutOff::OnComBtn12Clk()
    {
    }
#else
    void C_Page_CutOff::OnComBtn1Clk()
    {
        ChangePage(PAGE_INDEX_MAIN);
    }

    void C_Page_CutOff::OnComBtn2Clk()
    {

    }

    void C_Page_CutOff::OnComBtn3Clk()
    {
         ChangePage(PAGE_INDEX_CARSTATUS1);
    }

    void C_Page_CutOff::OnComBtn4Clk()
    {
         ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void C_Page_CutOff::OnComBtn5Clk()
    {
         ChangePage(PAGE_INDEX_HVACSETTING);
    }

    void C_Page_CutOff::OnComBtn6Clk()
    {
        ChangePage(PAGE_INDEX_RUNHELP1);
    }
#endif

    void C_Page_CutOff::OnComHoldbrkrlscutPress()
    {
        if(!HMiCT_HoldBrkRls_B1)
        {
            HMiCT_HoldBrkRls_B1 = true;
            //HMiCT_SetFlagChecker_U8=0xaa;
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_HOLDBRKRLS))->ChangeButtonState(LBUTTON_DOWN);

        }else
        {
            HMiCT_HoldBrkRls_B1 = false;
            //HMiCT_SetFlagChecker_U8=0x55;
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_HOLDBRKRLS))->ChangeButtonState(LBUTTON_UP);
        }
    }

    void C_Page_CutOff::OnComACU1cutClk()
    {
        if(!HMiCT_ACU1Cutoff_B1)
        {
            //timercount[0] = 1;
            HMiCT_ACU1Cutoff_B1 = true;
            //HMiCT_SetFlagChecker_U8=0xaa;
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_TC1BTN2))->SetCtrlEnable(false);;
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_TC1BTN1))->ChangeButtonState(LBUTTON_DOWN);
        }else
        {
            HMiCT_ACU1Cutoff_B1 = false;
            //HMiCT_SetFlagChecker_U8=0x55;
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_TC1BTN2))->SetCtrlEnable(true);;
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_TC1BTN1))->ChangeButtonState(LBUTTON_UP);
        }

    }
    void C_Page_CutOff::OnComACU1resetClk()
    {
        timercount[1] = 1;
        HMiCT_ACU1Reset_B1 = true;
        //HMiCT_SetFlagChecker_U8=0xaa;
        ((CButton*)GetDlgItem(ID_PIBCUTOFF_TC1BTN2))->ChangeButtonState(LBUTTON_DOWN);
    }
    void C_Page_CutOff::OnComREC1cutClk()
    {
        if(!HMiCT_REC1Cutoff_B1)
        {
            //timercount[0] = 1;
            HMiCT_REC1Cutoff_B1 = true;
            //HMiCT_SetFlagChecker_U8=0xaa;
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_TC1BTN4))->SetCtrlEnable(false);;

            ((CButton*)GetDlgItem(ID_PIBCUTOFF_TC1BTN3))->ChangeButtonState(LBUTTON_DOWN);
        }else
        {
            HMiCT_REC1Cutoff_B1 = false;
            //HMiCT_SetFlagChecker_U8=0x55;
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_TC1BTN4))->SetCtrlEnable(true);;

            ((CButton*)GetDlgItem(ID_PIBCUTOFF_TC1BTN3))->ChangeButtonState(LBUTTON_UP);
        }
    }
    void C_Page_CutOff::OnComREC1resetClk()
    {
        timercount[3] = 1;
        HMiCT_REC1Reset_B1 = true;
        //HMiCT_SetFlagChecker_U8=0xaa;
        ((CButton*)GetDlgItem(ID_PIBCUTOFF_TC1BTN4))->ChangeButtonState(LBUTTON_DOWN);
    }
    void C_Page_CutOff::OnComACU2cutClk()
    {
        if(!HMiCT_ACU2Cutoff_B1)
        {
            //timercount[0] = 1;
            HMiCT_ACU2Cutoff_B1 = true;
            //HMiCT_SetFlagChecker_U8=0xaa;
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_TC2BTN1))->ChangeButtonState(LBUTTON_DOWN);

            ((CButton*)GetDlgItem(ID_PIBCUTOFF_TC2BTN2))->SetCtrlEnable(false);
        }else
        {
            HMiCT_ACU2Cutoff_B1 = false;
            //HMiCT_SetFlagChecker_U8=0x55;
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_TC2BTN1))->ChangeButtonState(LBUTTON_UP);
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_TC2BTN2))->SetCtrlEnable(true);
        }

    }
    void C_Page_CutOff::OnComACU2resetClk()
    {
        timercount[5] = 1;
        HMiCT_ACU2Reset_B1 = true;
        //HMiCT_SetFlagChecker_U8=0xaa;
        ((CButton*)GetDlgItem(ID_PIBCUTOFF_TC2BTN2))->ChangeButtonState(LBUTTON_DOWN);
    }
    void C_Page_CutOff::OnComREC2cutClk()
    {
        if(!HMiCT_REC2Cutoff_B1)
        {
            //timercount[0] = 1;
            HMiCT_REC2Cutoff_B1 = true;
            //HMiCT_SetFlagChecker_U8=0xaa;
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_TC2BTN3))->ChangeButtonState(LBUTTON_DOWN);
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_TC2BTN4))->SetCtrlEnable(false);
        }else
        {
            HMiCT_REC2Cutoff_B1 = false;
            //HMiCT_SetFlagChecker_U8=0x55;
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_TC2BTN3))->ChangeButtonState(LBUTTON_UP);
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_TC2BTN4))->SetCtrlEnable(true);
        }
    }
    void C_Page_CutOff::OnComREC2resetClk()
    {
        timercount[7] = 1;
        HMiCT_REC2Reset_B1 = true;
        //HMiCT_SetFlagChecker_U8=0xaa;
        ((CButton*)GetDlgItem(ID_PIBCUTOFF_TC2BTN4))->ChangeButtonState(LBUTTON_DOWN);
    }
    void C_Page_CutOff::OnComDCU1cutClk()
    {
        if(!HMiCT_IsolateMp1_B1)
        {
            //timercount[0] = 1;
            HMiCT_IsolateMp1_B1 = true;
            //HMiCT_SetFlagChecker_U8=0xaa;
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_MP1BTN1))->ChangeButtonState(LBUTTON_DOWN);
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_MP1BTN2))->SetCtrlEnable(false);
        }else
        {
            HMiCT_IsolateMp1_B1 = false;
            //HMiCT_SetFlagChecker_U8=0x55;
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_MP1BTN1))->ChangeButtonState(LBUTTON_UP);
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_MP1BTN2))->SetCtrlEnable(true);
        }

    }
    void C_Page_CutOff::OnComDCU1resetClk()
    {
        timercount[9] = 1;
        HMiCT_IsolateRstMp1_B1 = true;
        //HMiCT_SetFlagChecker_U8=0xaa;
        ((CButton*)GetDlgItem(ID_PIBCUTOFF_MP1BTN2))->ChangeButtonState(LBUTTON_DOWN);
    }
    void C_Page_CutOff::OnComDCU2cutClk()
    {
        if(!HMiCT_IsolateM1_B1)
        {
            //timercount[0] = 1;
            HMiCT_IsolateM1_B1 = true;
            //HMiCT_SetFlagChecker_U8=0xaa;
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_M1BTN1))->ChangeButtonState(LBUTTON_DOWN);
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_M1BTN2))->SetCtrlEnable(false);
        }else
        {
            HMiCT_IsolateM1_B1 = false;
            //HMiCT_SetFlagChecker_U8=0x55;
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_M1BTN1))->ChangeButtonState(LBUTTON_UP);
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_M1BTN2))->SetCtrlEnable(true);
        }

    }
    void C_Page_CutOff::OnComDCU2resetClk()
    {
        timercount[11] = 1;
        HMiCT_IsolateRstM1_B1 = true;
        //HMiCT_SetFlagChecker_U8=0xaa;
        ((CButton*)GetDlgItem(ID_PIBCUTOFF_M1BTN2))->ChangeButtonState(LBUTTON_DOWN);
    }
    void C_Page_CutOff::OnComDCU3cutClk()
    {
        if(!HMiCT_IsolateM2_B1)
        {
            //timercount[0] = 1;
            HMiCT_IsolateM2_B1 = true;
            //HMiCT_SetFlagChecker_U8=0xaa;
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_M2BTN1))->ChangeButtonState(LBUTTON_DOWN);
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_M2BTN2))->SetCtrlEnable(false);
        }else
        {
            HMiCT_IsolateM2_B1 = false;
            //HMiCT_SetFlagChecker_U8=0x55;
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_M2BTN1))->ChangeButtonState(LBUTTON_UP);
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_M2BTN2))->SetCtrlEnable(true);
        }
    }
    void C_Page_CutOff::OnComDCU3resetClk()
    {
        timercount[13] = 1;
        HMiCT_IsolateRstM2_B1 = true;
        //HMiCT_SetFlagChecker_U8=0xaa;
        ((CButton*)GetDlgItem(ID_PIBCUTOFF_M2BTN2))->ChangeButtonState(LBUTTON_DOWN);
    }
    void C_Page_CutOff::OnComDCU4cutClk()
    {
        if(!HMiCT_IsolateMp2_B1)
        {
            //timercount[0] = 1;
            HMiCT_IsolateMp2_B1 = true;
            //HMiCT_SetFlagChecker_U8=0xaa;
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_MP2BTN1))->ChangeButtonState(LBUTTON_DOWN);
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_MP2BTN2))->SetCtrlEnable(false);
        }else
        {
            HMiCT_IsolateMp2_B1 = false;
            //HMiCT_SetFlagChecker_U8=0x55;
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_MP2BTN1))->ChangeButtonState(LBUTTON_UP);
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_MP2BTN2))->SetCtrlEnable(true);
        }
    }
    void C_Page_CutOff::OnComDCU4resetClk()
    {
        timercount[15] = 1;
        HMiCT_IsolateRstMp2_B1 = true;
       // HMiCT_SetFlagChecker_U8=0xaa;
        ((CButton*)GetDlgItem(ID_PIBCUTOFF_MP2BTN2))->ChangeButtonState(LBUTTON_DOWN);
    }
    void C_Page_CutOff::OnComEB1cutPress()
    {
        if(!HMiCT_Mp1DynamicBrkCut_B1)
        {
            HMiCT_Mp1DynamicBrkCut_B1 = true;
            //HMiCT_SetFlagChecker_U8=0xaa;
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_MP1BTN3))->ChangeButtonState(LBUTTON_DOWN);

        }else
        {
            HMiCT_Mp1DynamicBrkCut_B1 = false;
            //HMiCT_SetFlagChecker_U8=0x55;
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_MP1BTN3))->ChangeButtonState(LBUTTON_UP);
        }
    }
    void C_Page_CutOff::OnComEB2cutPress()
    {
        if(!HMiCT_M1DynamicBrkCut_B1)
        {
            HMiCT_M1DynamicBrkCut_B1 = true;
            //HMiCT_SetFlagChecker_U8=0xaa;
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_M1BTN3))->ChangeButtonState(LBUTTON_DOWN);

        }else
        {
            HMiCT_M1DynamicBrkCut_B1 = false;
            //HMiCT_SetFlagChecker_U8=0x55;
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_M1BTN3))->ChangeButtonState(LBUTTON_UP);
        }
    }
    void C_Page_CutOff::OnComEB3cutPress()
    {
        if(!HMiCT_M2DynamicBrkCut_B1)
        {
            HMiCT_M2DynamicBrkCut_B1 = true;
           // HMiCT_SetFlagChecker_U8=0xaa;
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_M2BTN3))->ChangeButtonState(LBUTTON_DOWN);

        }else
        {
            HMiCT_M2DynamicBrkCut_B1 = false;
           // HMiCT_SetFlagChecker_U8=0x55;
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_M2BTN3))->ChangeButtonState(LBUTTON_UP);
        }
    }
    void C_Page_CutOff::OnComEB4cutPress()
    {
        if(!HMiCT_Mp2DynamicBrkCut_B1)
        {
            HMiCT_Mp2DynamicBrkCut_B1 = true;
           // HMiCT_SetFlagChecker_U8=0xaa;
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_MP2BTN3))->ChangeButtonState(LBUTTON_DOWN);

        }else
        {
            HMiCT_Mp2DynamicBrkCut_B1 = false;
           // HMiCT_SetFlagChecker_U8=0x55;
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_MP2BTN3))->ChangeButtonState(LBUTTON_UP);
        }
    }
    void C_Page_CutOff::OnComALLbrkcutPress()
    {
        if(m_btndown)
        {
            m_btndown = false;
            HMiCT_Mp2DynamicBrkCut_B1 = false;
            HMiCT_Mp1DynamicBrkCut_B1 = false;
            HMiCT_M1DynamicBrkCut_B1 = false;
            HMiCT_M2DynamicBrkCut_B1 = false;
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_MP2BTN3))->ChangeButtonState(LBUTTON_UP);
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_MP1BTN3))->ChangeButtonState(LBUTTON_UP);
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_M1BTN3))->ChangeButtonState(LBUTTON_UP);
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_M2BTN3))->ChangeButtonState(LBUTTON_UP);
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_ALLBRKCUT))->ChangeButtonState(LBUTTON_UP);

        }else
        {
            m_btndown = true;
            HMiCT_Mp2DynamicBrkCut_B1 = true;
            HMiCT_Mp1DynamicBrkCut_B1 = true;
            HMiCT_M1DynamicBrkCut_B1 = true;
            HMiCT_M2DynamicBrkCut_B1 = true;
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_MP2BTN3))->ChangeButtonState(LBUTTON_DOWN);
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_MP1BTN3))->ChangeButtonState(LBUTTON_DOWN);
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_M1BTN3))->ChangeButtonState(LBUTTON_DOWN);
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_M2BTN3))->ChangeButtonState(LBUTTON_DOWN);
            ((CButton*)GetDlgItem(ID_PIBCUTOFF_ALLBRKCUT))->ChangeButtonState(LBUTTON_DOWN);
        }
    }
