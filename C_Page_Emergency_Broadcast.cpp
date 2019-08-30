#include "C_Page_Emergency_Broadcast.h"


ROMDATA g_PicRom_InstancyBroadcast[] =
{
#ifdef PAGE_HEADER_NEW
    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("紧急\n广播") )
//    {"",                       D_FONT_BOLD(4),      QRect(100, 70, 600,  70),          Qt::black,                Qt::gray,                 CONTROL_TRAIN,          ID_PIBTCUBLOCKREASON_TRAIN                      },
//    {"RIGHT",                  D_FONT_BOLD(6),      QRect(715, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBTCUBLOCKREASON_ARROW_RIGHT                },
//    {"LEFT",                   D_FONT_BOLD(6),      QRect( 40, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PIBTCUBLOCKREASON_ARROW_LEFT                 },
#endif
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    //D_COMMON_PAGE_HEADER(QObject::trUtf8("紧急广播"))
    {QObject::trUtf8("临时停车"),                D_FONT_BOLD(8),      QRect( 55, 70+30, 120,  38),            Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L1R1     },
    {QObject::trUtf8("大客流广播上车"),                D_FONT_BOLD(8),      QRect( 195, 140+30, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L2R2     },
    {QObject::trUtf8("下一站退出服务"),                   D_FONT_BOLD(8),      QRect(195,  70+30, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L1R2     },
    {QObject::trUtf8("大客流广播下车"),                D_FONT_BOLD(8),      QRect(335, 140+30, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L2R3     },
    {QObject::trUtf8("本站退出服务"),                D_FONT_BOLD(8),      QRect(335,  70+30, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L1R3     },
    {QObject::trUtf8("照明中断"),                D_FONT_BOLD(8),      QRect(55, 140+30, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L2R1     },
    {QObject::trUtf8("区间下车"),                    D_FONT_BOLD(8),      QRect(475,  70+30, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L1R4     },
    {QObject::trUtf8("列车车厢火灾"),                D_FONT_BOLD(8),      QRect(475, 140+30, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L2R4     },
    {QObject::trUtf8("列车通过"),                 D_FONT_BOLD(8),      QRect(615,  70+30, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L1R5     },

//    {QObject::trUtf8("临时停车"),                D_FONT_BOLD(8),      QRect( 55, 70+30, 120,  38),            Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L1R1     },
//    {QObject::trUtf8("调整运行"),                D_FONT_BOLD(8),      QRect( 55, 140+30, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L2R1     },
//    {QObject::trUtf8("退出服务1"),                   D_FONT_BOLD(8),      QRect(195,  70+30, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L1R2     },
//    {QObject::trUtf8("大客流广播上"),                D_FONT_BOLD(8),      QRect(195, 140+30, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L2R2     },
//    {QObject::trUtf8("退出服务2"),                D_FONT_BOLD(8),      QRect(335,  70+30, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L1R3     },
//    {QObject::trUtf8("大客流广播下"),                D_FONT_BOLD(8),      QRect(335, 140+30, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L2R3     },
//    {QObject::trUtf8("区间疏散"),                    D_FONT_BOLD(8),      QRect(475,  70+30, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L1R4     },
//    //{QObject::trUtf8("列车车厢火灾"),                D_FONT_BOLD(8),      QRect(475, 140+30, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L2R4     },
//    {QObject::trUtf8("列车连挂"),                 D_FONT_BOLD(8),      QRect(615,  70+30, 120,  38),           Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PIBIB_BUTTON_L1R5     },


#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW_WH
#else
     D_COMMON_PAGE_BUTTON_BAR
//    {QObject::trUtf8("第1页/共3页"),           D_FONT_BOLD(6),      QRect(675, 480, 120,  20),          Qt::white,                Qt::transparent,          CONTROL_LABEL,          ID_IGNORE        },
//    {"<<",                        D_FONT_BOLD(6),      QRect(675, 500,  50,  39),          Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTCUBLOCKREASON_PAGEDOWN           },
//    {">>",                        D_FONT_BOLD(6),      QRect(725, 500,  50,  39),          Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PIBTCUBLOCKREASON_PAGEUP             },
#endif


};
int g_InstancyBroadcastRomLen = sizeof(g_PicRom_InstancyBroadcast)/sizeof(ROMDATA);

BEGIN_MESSAGE_MAP(CInstancyBroadcastPage,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()
        ON_BTNCLK(IDLB_COM_BTN1, OnComBtn1Clk)
        ON_BTNCLK(IDLB_COM_BTN2, OnComBtn2Clk)
        ON_BTNCLK(IDLB_COM_BTN3, OnComBtn3Clk)
        ON_BTNCLK(IDLB_COM_BTN4, OnComBtn4Clk)
        ON_BTNCLK(IDLB_COM_BTN5, OnComBtn5Clk)
        ON_BTNCLK(IDLB_COM_BTN6, OnComBtn6Clk)
        ON_BTNCLK(IDLB_COM_BTN7, OnComBtn7Clk)
        ON_BTNCLK(IDLB_COM_BTN8, OnComBtn8Clk)
        ON_BTNCLK(ID_PIBIB_BUTTON_L1R1,On1BtnClk)
        ON_BTNCLK(ID_PIBIB_BUTTON_L1R2,On2BtnClk)
        ON_BTNCLK(ID_PIBIB_BUTTON_L1R3,On3BtnClk)
        ON_BTNCLK(ID_PIBIB_BUTTON_L1R4,On4BtnClk)
        ON_BTNCLK(ID_PIBIB_BUTTON_L1R5,On5BtnClk)
        ON_BTNCLK(ID_PIBIB_BUTTON_L2R1,On6BtnClk)
        ON_BTNCLK(ID_PIBIB_BUTTON_L2R2,On7BtnClk)
        ON_BTNCLK(ID_PIBIB_BUTTON_L2R3,On8BtnClk)
        ON_BTNCLK(ID_PIBIB_BUTTON_L2R4,On9BtnClk)

        ON_BTNCLK(ID_LABEL_REALTIMEFAULTCONFIRM, OnRealtimefaultBtnClk)
        //ON_BTNCLK(ID_PIBIB_BUTTON_IBSTOP,OnIBCStopBpBtnClk)
END_MESSAGE_MAP()

CInstancyBroadcastPage::CInstancyBroadcastPage()
{
         m_bStart_FireAlarm=false;
         m_bStart_EmergEvacuation=false;
         m_bStart_WaitRescue=false;




}

void CInstancyBroadcastPage::OnUpdatePage()
{
    //测试代码，测试时用
//     ((CLabel*)GetDlgItem(ID_PIBIB_BUTTON_L5R5  ))->SetCtrlText(QString::number(m_bStart_FireAlarm)+" "+QString::number(set_timer_FireAlarm)
//                +" "+QString::number(HMiCT_EmgyBroadcastID_U8));

    if(HMiCT_EmgyBroadcastID_U8>0 && HMiCT_EmgyBroadcastID_U8<10)
    {
        set_timer_FireAlarm--;
        if(set_timer_FireAlarm == 0)
        {
            HMiCT_EmgyBroadcastID_U8 = 0;
        }

    }else{
        HMiCT_EmgyBroadcastCommd_B1 = false;
        ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R1))->ChangeButtonState(LBUTTON_UP);
        ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R2))->ChangeButtonState(LBUTTON_UP);
        ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R3))->ChangeButtonState(LBUTTON_UP);
        ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R4))->ChangeButtonState(LBUTTON_UP);
        ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R5))->ChangeButtonState(LBUTTON_UP);
        ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R1))->ChangeButtonState(LBUTTON_UP);
        ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R2))->ChangeButtonState(LBUTTON_UP);
        ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R3))->ChangeButtonState(LBUTTON_UP);
        ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R4))->ChangeButtonState(LBUTTON_UP);
        set_timer_FireAlarm = 0;
    }

//    if(m_bStart_FireAlarm)
//    {

//         static quint32 times_FireAlarm = 0;

//         times_FireAlarm=times_FireAlarm+1;

//         HMiCT_EmgyBroadcastCommd_B1 = true;

//         if (times_FireAlarm%times_n==0)
//        {
//             set_timer_FireAlarm--;
//             if (set_timer_FireAlarm==0)
//             {
//                m_bStart_FireAlarm = false;
//                times_FireAlarm = 0;
//                set_timer_FireAlarm= 3;
//                HMiCT_EmgyBroadcastID_U8 = 0;
//                HMiCT_EmgyBroadcastCommd_B1 = false;
//                ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R1))->ChangeButtonState(LBUTTON_UP);
//                ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R2))->ChangeButtonState(LBUTTON_UP);
//                ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R3))->ChangeButtonState(LBUTTON_UP);
//                ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R4))->ChangeButtonState(LBUTTON_UP);
//                ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R5))->ChangeButtonState(LBUTTON_UP);
//                ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R1))->ChangeButtonState(LBUTTON_UP);
//                ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R2))->ChangeButtonState(LBUTTON_UP);
//                ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R3))->ChangeButtonState(LBUTTON_UP);
//                //((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R4))->ChangeButtonState(LBUTTON_UP);


//              }
//        }
//     }
//    if(HMiCT_EmgyBroadcastStop_B1)
//    {
//        HMiCT_EmgyBroadcastCommd_B1 = false;

//        if(set_timer_StopEmBroad>15)
//        {
//            set_timer_StopEmBroad = 0;
//            ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_IBSTOP))->ChangeButtonState(LBUTTON_UP);
//            HMiCT_EmgyBroadcastStop_B1 = false;

//        }else
//        {
//            set_timer_StopEmBroad++;
//        }
//    }

    UpdateRealtimefaults();

}

void CInstancyBroadcastPage::OnInitPage()
{
    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R1))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R2))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R3))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R4))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R5))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R1))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R2))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R3))->m_bAutoUpState = false;
    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R4))->m_bAutoUpState = false;
    //((CButton *)GetDlgItem(ID_PIBIB_BUTTON_IBSTOP))->m_bAutoUpState = false;

}

void CInstancyBroadcastPage::OnShowPage()
{
    ((CButton *)GetDlgItem(IDLB_COM_BTN10))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN11))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN12))->SetCtrlText(QObject::trUtf8(""));
//     ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
//     ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
//     ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
//     ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
//     ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
//     ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText("");
    m_Emergency_PrePageIndex=CGlobal::m_nPrePageIndex;

     this->InitPageHeader();
}
void CInstancyBroadcastPage::UpdateRealtimefaults()
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
                ((CLabel*)GetDlgItem(ID_LABEL_REALTIMEFAULTCATE ))->SetCtrlBKColor(Qt::white);
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

void CInstancyBroadcastPage::OnRealtimefaultBtnClk()
{
    g_faultsrom[g_romidx].confirm = true;
    g_realtimeFaultsbarList.removeAt(g_faultcount);
    if(g_faultcount>0)
    g_faultcount--;
    //m_faultcount--;

}

void CInstancyBroadcastPage::OnComBtn1Clk()
{
//    m_bStart_FireAlarm = false;
//    HMiCT_EmgyBroadcastID_U8 = 0;
//    HMiCT_EmgyBroadcastCommd_B1 = false;

//    SetBtnDown(NULL);
    ChangePage(PAGE_INDEX_RUNSTATE);
}


void CInstancyBroadcastPage::OnComBtn2Clk()
{
//    m_bStart_FireAlarm = false;
//    HMiCT_EmgyBroadcastID_U8 = 0;
//    HMiCT_EmgyBroadcastCommd_B1 = false;

//    SetBtnDown(NULL);
    ChangePage(PAGE_INDEX_MAINTAIN);
}

void CInstancyBroadcastPage::OnComBtn3Clk()
{
//    m_bStart_FireAlarm = false;
//    HMiCT_EmgyBroadcastID_U8 = 0;
//    HMiCT_EmgyBroadcastCommd_B1 = false;

//    SetBtnDown(NULL);
     ChangePage(PAGE_INDEX_CARSTATUS3);
}

void CInstancyBroadcastPage::OnComBtn4Clk()
{
//    m_bStart_FireAlarm = false;
//    HMiCT_EmgyBroadcastID_U8 = 0;
//    HMiCT_EmgyBroadcastCommd_B1 = false;

//    SetBtnDown(NULL);
     //ChangePage(PAGE_INDEX_CARSTATUS2);
    ChangePage(PAGE_INDEX_TCUBLOCKREASON);
}

void CInstancyBroadcastPage::OnComBtn5Clk()
{
//    m_bStart_FireAlarm = false;
//    HMiCT_EmgyBroadcastID_U8 = 0;
//    HMiCT_EmgyBroadcastCommd_B1 = false;

//    SetBtnDown(NULL);
     ChangePage(PAGE_INDEX_INSTANCYBROADCAST);
}

void CInstancyBroadcastPage::OnComBtn6Clk()
{
//    m_bStart_FireAlarm = false;
//    HMiCT_EmgyBroadcastID_U8 = 0;
//    HMiCT_EmgyBroadcastCommd_B1 = false;

//    SetBtnDown(NULL);
    ChangePage(PAGE_INDEX_FASPage);
}
void CInstancyBroadcastPage::OnComBtn7Clk()
{
//    m_bStart_FireAlarm = false;
//    HMiCT_EmgyBroadcastID_U8 = 0;
//    HMiCT_EmgyBroadcastCommd_B1 = false;

//    SetBtnDown(NULL);
    ChangePage(PAGE_INDEX_PISALARM);
}

void CInstancyBroadcastPage::OnComBtn8Clk()
{
    //ChangePage(PAGE_INDEX_RUNHELP1);
}

void CInstancyBroadcastPage::On1BtnClk()
{
    //BitSet( HMI_send_data26,14,0 );

    if(HMiCT_EmgyBroadcastID_U8 == 1)
    {
        HMiCT_EmgyBroadcastCommd_B1 = false;
        HMiCT_EmgyBroadcastID_U8 = 0;
        SetBtnDown(NULL);
    }else
    {
        HMiCT_EmgyBroadcastCommd_B1 = true;
        HMiCT_EmgyBroadcastID_U8 = 1;
        SetBtnDown(ID_PIBIB_BUTTON_L1R1);
    }

//    HMiCT_EmgyBroadcastID_U8 = 1;
//    m_bStart_FireAlarm = true;
//    set_timer_FireAlarm= 10;
//    SetBtnDown(ID_PIBIB_BUTTON_L1R1);
//   // ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R1))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R2))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R3))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R4))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R5))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R1))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R2))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R3))->ChangeButtonState(LBUTTON_UP);
//    //((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R4))->ChangeButtonState(LBUTTON_UP);


}

void CInstancyBroadcastPage::On2BtnClk()
{
    if(HMiCT_EmgyBroadcastID_U8 == 2)
    {
        HMiCT_EmgyBroadcastCommd_B1 = false;
        HMiCT_EmgyBroadcastID_U8 = 0;
        SetBtnDown(NULL);
    }else
    {
        HMiCT_EmgyBroadcastCommd_B1 = true;
        HMiCT_EmgyBroadcastID_U8 = 2;
        SetBtnDown(ID_PIBIB_BUTTON_L1R2);
    }
    //BitSet( HMI_send_data26,14,0 );
//    HMiCT_EmgyBroadcastID_U8 = 2;
//    m_bStart_FireAlarm = true;
//    set_timer_FireAlarm= 10;
//    SetBtnDown(ID_PIBIB_BUTTON_L1R2);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R1))->ChangeButtonState(LBUTTON_UP);
//   // ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R2))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R3))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R4))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R5))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R1))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R2))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R3))->ChangeButtonState(LBUTTON_UP);
//    //((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R4))->ChangeButtonState(LBUTTON_UP);

}

void CInstancyBroadcastPage::On3BtnClk()
{
    if(HMiCT_EmgyBroadcastID_U8 == 3)
    {
        HMiCT_EmgyBroadcastCommd_B1 = false;
        HMiCT_EmgyBroadcastID_U8 = 0;
        SetBtnDown(NULL);
    }else
    {
        HMiCT_EmgyBroadcastCommd_B1 = true;
        HMiCT_EmgyBroadcastID_U8 = 3;
        SetBtnDown(ID_PIBIB_BUTTON_L1R3);
    }
    //BitSet(HMI_send_data26,14,0);
//    HMiCT_EmgyBroadcastID_U8 = 3;
//    m_bStart_FireAlarm = true;
//    set_timer_FireAlarm= 10;
//    SetBtnDown(ID_PIBIB_BUTTON_L1R3);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R1))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R2))->ChangeButtonState(LBUTTON_UP);
//    //((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R3))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R4))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R5))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R1))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R2))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R3))->ChangeButtonState(LBUTTON_UP);
//    //((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R4))->ChangeButtonState(LBUTTON_UP);


}

void CInstancyBroadcastPage::On4BtnClk()
{
    if(HMiCT_EmgyBroadcastID_U8 == 4)
    {
        HMiCT_EmgyBroadcastCommd_B1 = false;
        HMiCT_EmgyBroadcastID_U8 = 0;
        SetBtnDown(NULL);
    }else
    {
        HMiCT_EmgyBroadcastCommd_B1 = true;
        HMiCT_EmgyBroadcastID_U8 = 4;
        SetBtnDown(ID_PIBIB_BUTTON_L1R4);
    }
//    HMiCT_EmgyBroadcastID_U8 = 4;
//    m_bStart_FireAlarm = true;
//    set_timer_FireAlarm= 10;
//    SetBtnDown(ID_PIBIB_BUTTON_L1R4);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R1))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R2))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R3))->ChangeButtonState(LBUTTON_UP);
//    //((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R4))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R5))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R1))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R2))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R3))->ChangeButtonState(LBUTTON_UP);
//    //((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R4))->ChangeButtonState(LBUTTON_UP);

}

void CInstancyBroadcastPage::On5BtnClk()
{
    if(HMiCT_EmgyBroadcastID_U8 == 5)
    {
        HMiCT_EmgyBroadcastCommd_B1 = false;
        HMiCT_EmgyBroadcastID_U8 = 0;
        SetBtnDown(NULL);
    }else
    {
        HMiCT_EmgyBroadcastCommd_B1 = true;
        HMiCT_EmgyBroadcastID_U8 = 5;
        SetBtnDown(ID_PIBIB_BUTTON_L1R5);
    }
//    HMiCT_EmgyBroadcastID_U8 = 5;
//    m_bStart_FireAlarm = true;
//    set_timer_FireAlarm= 10;
//    SetBtnDown(ID_PIBIB_BUTTON_L1R5);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R1))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R2))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R3))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R4))->ChangeButtonState(LBUTTON_UP);
//    //((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R5))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R1))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R2))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R3))->ChangeButtonState(LBUTTON_UP);
//    //((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R4))->ChangeButtonState(LBUTTON_UP);

}

void CInstancyBroadcastPage::On6BtnClk()
{
    if(HMiCT_EmgyBroadcastID_U8 == 6)
    {
        HMiCT_EmgyBroadcastCommd_B1 = false;
        HMiCT_EmgyBroadcastID_U8 = 0;
        SetBtnDown(NULL);
    }else
    {
        HMiCT_EmgyBroadcastCommd_B1 = true;
        HMiCT_EmgyBroadcastID_U8 = 6;
        SetBtnDown(ID_PIBIB_BUTTON_L2R1);
    }
//    HMiCT_EmgyBroadcastID_U8 = 6;
//    m_bStart_FireAlarm = true;
//    set_timer_FireAlarm= 10;
//    SetBtnDown(ID_PIBIB_BUTTON_L2R1);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R1))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R2))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R3))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R4))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R5))->ChangeButtonState(LBUTTON_UP);
//    //((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R1))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R2))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R3))->ChangeButtonState(LBUTTON_UP);
//    //((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R4))->ChangeButtonState(LBUTTON_UP);

}
void CInstancyBroadcastPage::On7BtnClk()
{
    if(HMiCT_EmgyBroadcastID_U8 == 7)
    {
        HMiCT_EmgyBroadcastCommd_B1 = false;
        HMiCT_EmgyBroadcastID_U8 = 0;
        SetBtnDown(NULL);
    }else
    {
        HMiCT_EmgyBroadcastCommd_B1 = true;
        HMiCT_EmgyBroadcastID_U8 = 7;
        SetBtnDown(ID_PIBIB_BUTTON_L2R2);
    }
//    HMiCT_EmgyBroadcastID_U8 = 7;
//    m_bStart_FireAlarm = true;
//    set_timer_FireAlarm= 10;
//    SetBtnDown(ID_PIBIB_BUTTON_L2R2);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R1))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R2))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R3))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R4))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R5))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R1))->ChangeButtonState(LBUTTON_UP);
//    //((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R2))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R3))->ChangeButtonState(LBUTTON_UP);
//   // ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R4))->ChangeButtonState(LBUTTON_UP);

}
void CInstancyBroadcastPage::On8BtnClk()
{
//    BitSet(HMI_send_data26,14,0);
    if(HMiCT_EmgyBroadcastID_U8 == 8)
    {
        HMiCT_EmgyBroadcastCommd_B1 = false;
        HMiCT_EmgyBroadcastID_U8 = 0;
        SetBtnDown(NULL);
    }else
    {
        HMiCT_EmgyBroadcastCommd_B1 = true;
        HMiCT_EmgyBroadcastID_U8 = 8;
        SetBtnDown(ID_PIBIB_BUTTON_L2R3);
    }
//    HMiCT_EmgyBroadcastID_U8 = 8;
//    m_bStart_FireAlarm = true;
//    set_timer_FireAlarm= 10;
//    SetBtnDown(ID_PIBIB_BUTTON_L2R3);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R1))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R2))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R3))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R4))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R5))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R1))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R2))->ChangeButtonState(LBUTTON_UP);
//    //((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R3))->ChangeButtonState(LBUTTON_UP);
//    //((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R4))->ChangeButtonState(LBUTTON_UP);

}
void CInstancyBroadcastPage::On9BtnClk()
{
    if(HMiCT_EmgyBroadcastID_U8 == 9)
    {
        HMiCT_EmgyBroadcastCommd_B1 = false;
        HMiCT_EmgyBroadcastID_U8 = 0;
        SetBtnDown(NULL);
    }else
    {
        HMiCT_EmgyBroadcastCommd_B1 = true;
        HMiCT_EmgyBroadcastID_U8 = 9;
        SetBtnDown(ID_PIBIB_BUTTON_L2R4);
    }
//    HMiCT_EmgyBroadcastID_U8 = 9;
//    m_bStart_FireAlarm = true;
//    set_timer_FireAlarm= 10;
//    SetBtnDown(ID_PIBIB_BUTTON_L2R4);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R1))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R2))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R3))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R4))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L1R5))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R1))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R2))->ChangeButtonState(LBUTTON_UP);
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R3))->ChangeButtonState(LBUTTON_UP);
//    //((CButton *)GetDlgItem(ID_PIBIB_BUTTON_L2R4))->ChangeButtonState(LBUTTON_UP);

}

void CInstancyBroadcastPage::OnIBCStopBpBtnClk()
{
//    HMiCT_EmgyBroadcastStop_B1  =true;
//    HMiCT_EmgyBroadcastCommd_B1 = false;
//    ((CButton *)GetDlgItem(ID_PIBIB_BUTTON_IBSTOP))->ChangeButtonState(LBUTTON_DOWN);
//    SetBtnDown(NULL);
}

void CInstancyBroadcastPage::SetBtnDown(int nBtnID)
{
    int nIDArray[] =
    {
        ID_PIBIB_BUTTON_L1R1,
        ID_PIBIB_BUTTON_L1R2,
        ID_PIBIB_BUTTON_L1R3,
        ID_PIBIB_BUTTON_L1R4,
        ID_PIBIB_BUTTON_L1R5,
        ID_PIBIB_BUTTON_L2R1,
        ID_PIBIB_BUTTON_L2R2,
        ID_PIBIB_BUTTON_L2R3,
        ID_PIBIB_BUTTON_L2R4
    };

    for (int i=0; i<9; i++)
    {
        if (nIDArray[i] == nBtnID)
        {
            ((CButton *)GetDlgItem(nIDArray[i]))->ChangeButtonState(LBUTTON_DOWN);
        }
        else
        {
            ((CButton *)GetDlgItem(nIDArray[i]))->ChangeButtonState(LBUTTON_UP);
        }
    }
}

