#include "ctransportmode.h"
#include "cwarningdialog.h"

//整车制动力需求
//制动减速度（CTHM_Acceleration_I16）
//CTHM_TransportMode_B1	运输模式激活
//CTDTi_MRP_U16	主风管压力
int offset =50;
ROMDATA g_PicRom_transportmode[] =
{
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW_WH
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

    D_COMMON_PAGE_HEADER(QObject::trUtf8("运输模式") )
    {"",        D_FONT_BOLD(6),      QRect( 99+offset, 59, 400,  1),           Qt::white,               Qt::black,              CONTROL_LINE,             ID_IGNORE         },
    {"",        D_FONT_BOLD(6),      QRect( 99+offset, 99, 400,  1),           Qt::white,               Qt::black,              CONTROL_LINE,             ID_IGNORE         },
    {"",        D_FONT_BOLD(6),      QRect( 100+offset, 135, 400,  1),           Qt::white,               Qt::black,              CONTROL_LINE,             ID_IGNORE         },
    {"",        D_FONT_BOLD(6),      QRect( 100+offset, 175, 400,  1),           Qt::white,               Qt::black,              CONTROL_LINE,             ID_IGNORE         },
    {"",        D_FONT_BOLD(6),      QRect( 100+offset, 215, 400,  1),           Qt::white,               Qt::black,              CONTROL_LINE,             ID_IGNORE         },
    {"",        D_FONT_BOLD(6),      QRect( 100+offset, 255, 400,  1),           Qt::white,               Qt::black,              CONTROL_LINE,             ID_IGNORE         },
    {"",        D_FONT_BOLD(6),      QRect( 100+offset, 295, 400,  1),           Qt::white,               Qt::black,              CONTROL_LINE,             ID_IGNORE         },
    {"",        D_FONT_BOLD(6),      QRect( 100+offset, 335, 400,  1),           Qt::white,               Qt::black,              CONTROL_LINE,             ID_IGNORE         },
    {"",        D_FONT_BOLD(6),      QRect( 100+offset, 375, 400,  1),           Qt::white,               Qt::black,              CONTROL_LINE,             ID_IGNORE         },
    {"",        D_FONT_BOLD(6),      QRect( 100+offset, 415, 400,  1),           Qt::white,               Qt::black,              CONTROL_LINE,             ID_IGNORE         },
    {"",        D_FONT_BOLD(6),      QRect( 100+offset, 455, 400,  1),           Qt::white,               Qt::black,              CONTROL_LINE,             ID_IGNORE         },
    {"",        D_FONT_BOLD(6),      QRect( 100+offset, 495, 400,  1),           Qt::white,               Qt::black,              CONTROL_LINE,             ID_IGNORE         },

    {"",        D_FONT_BOLD(6),      QRect( 99+offset, 60, 1,  435),           Qt::white,               Qt::black,              CONTROL_LINE,             ID_IGNORE         },
    {"",        D_FONT_BOLD(6),      QRect( 260+offset, 60, 1,  435),           Qt::white,               Qt::black,              CONTROL_LINE,             ID_IGNORE         },
    {"",        D_FONT_BOLD(6),      QRect( 500+offset, 60, 1,  435),           Qt::white,               Qt::black,              CONTROL_LINE,             ID_IGNORE         },

    {"",        D_FONT_BOLD(6),      QRect( 296+offset, 415-40, 2,  40),           Qt::white,               Qt::black,              CONTROL_LINE,             ID_IGNORE         },
    {"",        D_FONT_BOLD(6),      QRect( 336+offset, 415-40, 2,  40),           Qt::white,               Qt::black,              CONTROL_LINE,             ID_IGNORE         },
    {"",        D_FONT_BOLD(6),      QRect( 376+offset, 415-40, 2,  40),           Qt::white,               Qt::black,              CONTROL_LINE,             ID_IGNORE         },
    {"",        D_FONT_BOLD(6),      QRect( 416+offset, 415-40, 2,  40),           Qt::white,               Qt::black,              CONTROL_LINE,             ID_IGNORE         },
    {"",        D_FONT_BOLD(6),      QRect( 456+offset, 415-40, 2,  40),           Qt::white,               Qt::black,              CONTROL_LINE,             ID_IGNORE         },

    //运输模式激活
    {QObject::trUtf8("列车速度"),        D_FONT_BOLD(8),       QRect( 100+offset, 100-40, 150,  30),           Qt::white,               Qt::black,              CONTROL_LABEL,             ID_IGNORE         },
    {QObject::trUtf8("整车制动力需求"),        D_FONT_BOLD(8),      QRect( 100+offset, 140-40, 150,  30),           Qt::white,               Qt::black,              CONTROL_LABEL,             ID_IGNORE         },
    {QObject::trUtf8("列车管压力值"),        D_FONT_BOLD(8),          QRect( 100+offset, 180-40, 150,  30),           Qt::white,               Qt::black,              CONTROL_LABEL,             ID_IGNORE         },
    {QObject::trUtf8("列车管参考压力"),        D_FONT_BOLD(8),           QRect( 100+offset, 220-40, 150,  30),           Qt::white,               Qt::black,              CONTROL_LABEL,             ID_IGNORE         },
    {QObject::trUtf8("列车管减压速率"),        D_FONT_BOLD(8),            QRect( 100+offset, 260-40, 150,  30),           Qt::white,               Qt::black,              CONTROL_LABEL,             ID_IGNORE         },
    {QObject::trUtf8("制动减速度"),        D_FONT_BOLD(8),          QRect( 100+offset, 300-40, 150,  30),           Qt::white,               Qt::black,              CONTROL_LABEL,             ID_IGNORE         },
    {QObject::trUtf8("主风管压力"),        D_FONT_BOLD(8),          QRect( 100+offset, 340-40, 150,  30),           Qt::white,               Qt::black,              CONTROL_LABEL,             ID_IGNORE         },
    {QObject::trUtf8("常用/紧急制动"),        D_FONT_BOLD(8),        QRect( 100+offset, 380-40, 150,  30),           Qt::white,               Qt::black,              CONTROL_LABEL,             ID_IGNORE         },
    {QObject::trUtf8("停放制动状态"),        D_FONT_BOLD(8),        QRect( 100+offset, 420-40, 150,  30),           Qt::white,               Qt::black,              CONTROL_LABEL,             ID_IGNORE         },
    {QObject::trUtf8("运输模式传感器"),        D_FONT_BOLD(8),        QRect( 100+offset, 420, 150,  30),           Qt::white,               Qt::black,              CONTROL_LABEL,             ID_IGNORE         },
    {QObject::trUtf8("速度设定"),        D_FONT_BOLD(8),        QRect( 130+offset, 460, 100,  30),           Qt::black,               Qt::gray,              CONTROL_BUTTON,             ID_CTRANSPROT_BUTTON_SETTINGSPEED         },
    {QObject::trUtf8("速度清零"),        D_FONT_BOLD(8),        QRect( 620+offset, 460, 100,  30),           Qt::black,               Qt::gray,              CONTROL_BUTTON,             ID_CTRANSPROT_BUTTON_CLEARSPEED         },
    {QObject::trUtf8("点击“速度设定”按键进入设定界面\n设完后点击“确定”，完成设置"),        D_FONT_BOLD(4),        QRect( 510+offset, 400, 250, 50),           Qt::white,               Qt::black,              CONTROL_LABEL,             ID_IGNORE         },

    {QObject::trUtf8(""),        D_FONT_BOLD(8),      QRect( 530+offset, 160, 140,  30),           Qt::black,               Qt::black,              CONTROL_LABEL,             ID_CTRANSPROT_LABEL_TRANSPORTMODE        },
    {QObject::trUtf8(""),        D_FONT_BOLD(8),      QRect( 280+offset, 100-40, 200,  30),           Qt::white,               Qt::black,              CONTROL_LABEL,             ID_CTRANSPROT_LABEL_TM         },
    {QObject::trUtf8(""),        D_FONT_BOLD(8),      QRect( 280+offset, 140-40, 200,  30),           Qt::white,               Qt::black,              CONTROL_LABEL,             ID_CTRANSPROT_LABEL_BDF         },
    {QObject::trUtf8(""),        D_FONT_BOLD(8),      QRect( 280+offset, 180-40, 200,  30),           Qt::white,               Qt::black,              CONTROL_LABEL,             ID_CTRANSPROT_LABEL_PP         },
    {QObject::trUtf8(""),        D_FONT_BOLD(8),      QRect( 280+offset, 220-40, 200,  30),           Qt::white,               Qt::black,              CONTROL_LABEL,             ID_CTRANSPROT_LABEL_PRP         },
    {QObject::trUtf8(""),        D_FONT_BOLD(8),      QRect( 280+offset, 260-40, 200,  30),           Qt::white,               Qt::black,              CONTROL_LABEL,             ID_CTRANSPROT_LABEL_TR         },
    {QObject::trUtf8(""),        D_FONT_BOLD(8),      QRect( 280+offset, 300-40, 200,  30),           Qt::white,               Qt::black,              CONTROL_LABEL,             ID_CTRANSPROT_LABEL_A         },
    {QObject::trUtf8(""),        D_FONT_BOLD(8),      QRect( 280+offset, 340-40, 200,  30),           Qt::white,               Qt::black,              CONTROL_LABEL,             ID_CTRANSPROT_LABEL_MRP         },
    {QObject::trUtf8(""),        D_FONT_BOLD(4),      QRect( 280+offset, 380-40, 80,  30),           Qt::black,               Qt::black,              CONTROL_LABEL,             ID_CTRANSPROT_LABEL_NB         },
    {QObject::trUtf8(""),        D_FONT_BOLD(4),      QRect( 400+offset, 380-40, 80,  30),           Qt::black,               Qt::black,              CONTROL_LABEL,             ID_CTRANSPROT_LABEL_EB         },

    {QObject::trUtf8(""),                            D_FONT_BOLD(4),      QRect(260+offset, 420-40, 35,  30),             Qt::black,                Qt::red,                CONTROL_LABEL,   ID_CTRANSPROT_LABEL_CTHM_PBReleaseC1 },
    {QObject::trUtf8(""),                            D_FONT_BOLD(4),      QRect(260+offset+40, 420-40, 35,  30),             Qt::black,                Qt::red,                CONTROL_LABEL,   ID_CTRANSPROT_LABEL_CTHM_PBReleaseC2 },
    {QObject::trUtf8(""),                            D_FONT_BOLD(4),      QRect(260+offset+80, 420-40, 35,  30),             Qt::black,                Qt::red,                CONTROL_LABEL,   ID_CTRANSPROT_LABEL_CTHM_PBReleaseC3 },
    {QObject::trUtf8(""),                            D_FONT_BOLD(4),      QRect(260+offset+120, 420-40, 35,  30),             Qt::black,                Qt::red,                CONTROL_LABEL,   ID_CTRANSPROT_LABEL_CTHM_PBReleaseC4 },
    {QObject::trUtf8(""),                            D_FONT_BOLD(4),      QRect(260+offset+160, 420-40, 35,  30),             Qt::black,                Qt::red,                CONTROL_LABEL,   ID_CTRANSPROT_LABEL_CTHM_PBReleaseC5 },
    {QObject::trUtf8(""),                            D_FONT_BOLD(4),      QRect(260+offset+200, 420-40, 35,  30),             Qt::black,                Qt::red,                CONTROL_LABEL,   ID_CTRANSPROT_LABEL_CTHM_PBReleaseC6 },
{QObject::trUtf8(""),                            D_FONT_BOLD(8),        QRect( 280+offset, 420, 80,  30),           Qt::white,               Qt::black,              CONTROL_LABEL,             ID_CTRANSPROT_LABEL_SENSORERR1         },
{QObject::trUtf8(""),                            D_FONT_BOLD(8),        QRect( 400+offset, 420, 80,  30),           Qt::white,               Qt::black,              CONTROL_LABEL,             ID_CTRANSPROT_LABEL_SENSORERR2         },

    {QObject::trUtf8(""),                            D_FONT_BOLD(8),        QRect( 340+offset, 460, 80,  30),           Qt::white,               Qt::black,              CONTROL_LABEL,             ID_CTRANSPROT_LABEL_SETTINGSPEED         },
    {QObject::trUtf8("确定"),                            D_FONT_BOLD(8),        QRect( 520+offset, 460, 80,  30),           Qt::black,               Qt::gray,              CONTROL_BUTTON,             ID_CTRANSPROT_BUTTON_CONFIRM         },


    {QObject::trUtf8(""),                   D_FONT_BOLD(6),      QRect(630, 200+30, 40 ,  150),          Qt::green,                Qt::black,          CONTROL_BAR,          ID_CTRANSPROT_LABEL_TCUBCUEFFORT        },
    {QObject::trUtf8(""),                   D_FONT_BOLD(6),      QRect(610, 355+30,  80,  25),          Qt::white,                Qt::black,          CONTROL_LABEL,        ID_CTRANSPROT_LABEL_TCUBCUEFFORT2       },
};

int g_transportmodeRomLen = sizeof(g_PicRom_transportmode)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CTransportMode,CPage)
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

        ON_BTNCLK(ID_CTRANSPROT_BUTTON_SETTINGSPEED, OnSetSpeedClk)
        ON_BTNCLK(ID_LABEL_REALTIMEFAULTCONFIRM, OnRealtimefaultBtnClk)
        ON_BTNCLK(ID_CTRANSPROT_BUTTON_CONFIRM, OnConfirmClk)
        ON_BTNCLK(ID_CTRANSPROT_BUTTON_CLEARSPEED, OnSpeedclearClk)


END_MESSAGE_MAP()

CTransportMode::CTransportMode()
{
    timer3s = 0;

}
void CTransportMode::UpdateRealtimefaults()
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

void CTransportMode::OnRealtimefaultBtnClk()
{
    g_faultsrom[g_romidx].confirm = true;
    g_realtimeFaultsbarList.removeAt(g_faultcount);
    if(g_faultcount>0)
    g_faultcount--;
    //m_faultcount--;

}

void CTransportMode::OnSpeedclearClk()
{

    HMiCT_TransModeSpeedValid_B1 = true;
    HMiCT_TransModeSpeed_U8 = 0;
    ((CButton*)GetDlgItem(ID_CTRANSPROT_BUTTON_CLEARSPEED))->ChangeButtonState(LBUTTON_DOWN);

}

void CTransportMode::OnUpdatePage()
{
    ((CButton*)GetDlgItem(ID_CTRANSPROT_BUTTON_CONFIRM))->HideButton();

    if(HMiCT_TransModeSpeedValid_B1)
    {
        if(timer3s++>18)
        {
            timer3s = 0;
            HMiCT_TransModeSpeedValid_B1 = false;
            ((CButton*)GetDlgItem(ID_CTRANSPROT_BUTTON_CLEARSPEED))->SetCtrlEnable(true);
            ((CButton*)GetDlgItem(ID_CTRANSPROT_BUTTON_CLEARSPEED))->ChangeButtonState(LBUTTON_UP);

        }
    }



    if(CTHM_TransportMode_B1)
    {
        ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_TRANSPORTMODE))->SetCtrlText(QObject::trUtf8("运输模式已激活"));
        ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_TRANSPORTMODE))->SetCtrlBKColor(Qt::green);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_TRANSPORTMODE))->SetCtrlText(QObject::trUtf8("运输模式未激活"));
        ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_TRANSPORTMODE))->SetCtrlBKColor(Qt::white);
    }
    ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_TM))->SetCtrlText(QString::number((CTHMI_TrainSpeed_U16))+" Km/s");
    ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_BDF))->SetCtrlText(QString::number(float(CTBR_BrakeDemandForce_I16)/10)+" kN");
    ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_PP))->SetCtrlText(QString::number(float(CTHM_TrainPipePressure_U16)/10)+" kP");
    ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_PRP))->SetCtrlText(QString::number(float(CTHM_TrainPipeRefPressure_U16)/10)+" kP");
    ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_TR))->SetCtrlText(QString::number(float(CTHM_PressureRate_U16)/10)+" kP/s");
    ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_A))->SetCtrlText( QString::number((CTHM_AcDeSpeedMoment_I16))+" m/s2");
    ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_MRP))->SetCtrlText( QString::number(float(CTDTi_MRP_U16))+" kP");
    ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_SETTINGSPEED))->SetCtrlText( QString::number(CTHM_TransModeLmtSpd_U8)+" Km/h");

//    if(HMiCT_TransModeSpeed_U8 > 20 && HMiCT_TransModeSpeed_U8 <60 )
//    {
//        ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_SETTINGSPEED))->ShowLabel();

//    }else
//    {
//        ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_SETTINGSPEED))->HideLabel();

//    }
    if(
            (Bit(g_dataBuffer_MVB[368+144+11],13)==1)&&bool(BR1CT_Braking_B1)||
            (Bit(g_dataBuffer_MVB[368+144+11+96],13)==1)&&bool(BR2CT_Braking_B1)||
            (Bit(g_dataBuffer_MVB[368+144+11+192],13)==1)&&bool(BR3CT_Braking_B1)||
            (Bit(g_dataBuffer_MVB[368+144+11+288],13)==1)&&bool(BR4CT_Braking_B1)
      )
    {
        ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_NB))->SetCtrlBKColor(Qt::red);
        ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_NB))->SetCtrlText(QObject::trUtf8("常用制动施加\n(1)"));

    }else
    {
        ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_NB))->SetCtrlText(QObject::trUtf8("常用制动缓解\n(0)"));
        ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_NB))->SetCtrlBKColor(Qt::white);
    }

    if(bool(CTHM_SensorErr1_B1) == false)
    {
        ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_SENSORERR1))->SetCtrlBKColor(Qt::green);
        ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_SENSORERR1))->SetCtrlText(QObject::trUtf8("正常"));
    }else
    {
        ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_SENSORERR1))->SetCtrlBKColor(Qt::red);
        ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_SENSORERR1))->SetCtrlText(QObject::trUtf8("故障"));
    }
    if(bool(CTHM_SensorErr2_B1) == false)
    {
        ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_SENSORERR2))->SetCtrlBKColor(Qt::green);
        ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_SENSORERR2))->SetCtrlText(QObject::trUtf8("正常"));
    }else
    {
        ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_SENSORERR2))->SetCtrlBKColor(Qt::red);
        ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_SENSORERR2))->SetCtrlText(QObject::trUtf8("故障"));
    }


    if(CTHM_EmgyBrake_B1)
    {
        ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_EB))->SetCtrlBKColor(Qt::red);
        ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_EB))->SetCtrlText(QObject::trUtf8("紧急制动施加\n(1)"));
    }else
    {
        ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_EB))->SetCtrlBKColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_EB))->SetCtrlText(QObject::trUtf8("紧急制动缓解\n(0)"));

    }

    if(CTHM_PBReleaseC1_B1)
    {
        ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_CTHM_PBReleaseC1))->SetCtrlBKColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_CTHM_PBReleaseC1))->SetCtrlText(QObject::trUtf8("缓解\n(1)"));
    }else
    {
        ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_CTHM_PBReleaseC1))->SetCtrlBKColor(Qt::red);
        ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_CTHM_PBReleaseC1))->SetCtrlText(QObject::trUtf8("施加\n(0)"));

    }

    if(CTHM_PBReleaseC2_B1)
    {
        ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_CTHM_PBReleaseC2))->SetCtrlBKColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_CTHM_PBReleaseC2))->SetCtrlText(QObject::trUtf8("缓解\n(1)"));
    }else
    {
        ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_CTHM_PBReleaseC2))->SetCtrlBKColor(Qt::red);
        ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_CTHM_PBReleaseC2))->SetCtrlText(QObject::trUtf8("施加\n(0)"));

    }

    if(CTHM_PBReleaseC3_B1)
    {
        ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_CTHM_PBReleaseC3))->SetCtrlBKColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_CTHM_PBReleaseC3))->SetCtrlText(QObject::trUtf8("缓解\n(1)"));
    }else
    {
        ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_CTHM_PBReleaseC3))->SetCtrlBKColor(Qt::red);
        ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_CTHM_PBReleaseC3))->SetCtrlText(QObject::trUtf8("施加\n(0)"));

    }

    if(CTHM_PBReleaseC4_B1)
    {
        ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_CTHM_PBReleaseC4))->SetCtrlBKColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_CTHM_PBReleaseC4))->SetCtrlText(QObject::trUtf8("缓解\n(1)"));
    }else
    {
        ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_CTHM_PBReleaseC4))->SetCtrlBKColor(Qt::red);
        ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_CTHM_PBReleaseC4))->SetCtrlText(QObject::trUtf8("施加\n(0)"));

    }

    if(CTHM_PBReleaseC5_B1)
    {
        ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_CTHM_PBReleaseC5))->SetCtrlBKColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_CTHM_PBReleaseC5))->SetCtrlText(QObject::trUtf8("缓解\n(1)"));
    }else
    {
        ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_CTHM_PBReleaseC5))->SetCtrlBKColor(Qt::red);
        ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_CTHM_PBReleaseC5))->SetCtrlText(QObject::trUtf8("施加\n(0)"));

    }

    if(CTHM_PBReleaseC6_B1)
    {
        ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_CTHM_PBReleaseC6))->SetCtrlBKColor(Qt::white);
        ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_CTHM_PBReleaseC6))->SetCtrlText(QObject::trUtf8("缓解\n(1)"));
    }else
    {
        ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_CTHM_PBReleaseC6))->SetCtrlBKColor(Qt::red);
        ((CLabel *)GetDlgItem(ID_CTRANSPROT_LABEL_CTHM_PBReleaseC6))->SetCtrlText(QObject::trUtf8("施加\n(0)"));

    }


    if(CTHM_EmgyBrake_B1)
    {
        ((C_Ctrl_Bar *)GetDlgItem(ID_CTRANSPROT_LABEL_TCUBCUEFFORT))->SetMode(1);
        ((C_Ctrl_Bar *)GetDlgItem(ID_CTRANSPROT_LABEL_TCUBCUEFFORT))->SetValue(100,0,100);
        ((CLabel*)GetDlgItem(ID_CTRANSPROT_LABEL_TCUBCUEFFORT2 ))->SetCtrlBKColor(Qt::red);
        ((CLabel*)GetDlgItem(ID_CTRANSPROT_LABEL_TCUBCUEFFORT2 ))->SetCtrlText(QObject::trUtf8("紧急制动"));
    }else if(CTHM_FastBrake_B1)
    {
        ((C_Ctrl_Bar *)GetDlgItem(ID_CTRANSPROT_LABEL_TCUBCUEFFORT))->SetMode(1);
        ((C_Ctrl_Bar *)GetDlgItem(ID_CTRANSPROT_LABEL_TCUBCUEFFORT))->SetValue(100,0,100);
        ((CLabel*)GetDlgItem(ID_CTRANSPROT_LABEL_TCUBCUEFFORT2 ))->SetCtrlBKColor(Qt::red);
        ((CLabel*)GetDlgItem(ID_CTRANSPROT_LABEL_TCUBCUEFFORT2 ))->SetCtrlText(QObject::trUtf8("快速制动"));
    }else if(CTHMI_Traction_B1)
    {
        ((CLabel*)GetDlgItem(ID_CTRANSPROT_LABEL_TCUBCUEFFORT2 ))->SetCtrlBKColor(Qt::green);
        ((C_Ctrl_Bar *)GetDlgItem(ID_CTRANSPROT_LABEL_TCUBCUEFFORT))->SetMode(1);
        ((C_Ctrl_Bar *)GetDlgItem(ID_CTRANSPROT_LABEL_TCUBCUEFFORT))->SetValue(CTHMI_Grade_U8,1,100);
        if(CTHMI_Grade_U8 > 100)
        {
            ((CLabel*)GetDlgItem(ID_CTRANSPROT_LABEL_TCUBCUEFFORT2 ))->SetCtrlText(QObject::trUtf8("牵引")+"100%");
        }else
        {
            ((CLabel*)GetDlgItem(ID_CTRANSPROT_LABEL_TCUBCUEFFORT2 ))->SetCtrlText(QObject::trUtf8("牵引")+QString::number(CTHMI_Grade_U8)+"%");
        }

    }else if(CTHMI_Brake_B1)
    {
        ((CLabel*)GetDlgItem(ID_CTRANSPROT_LABEL_TCUBCUEFFORT2 ))->SetCtrlBKColor(Qt::red);
        ((C_Ctrl_Bar *)GetDlgItem(ID_CTRANSPROT_LABEL_TCUBCUEFFORT))->SetMode(1);
        ((C_Ctrl_Bar *)GetDlgItem(ID_CTRANSPROT_LABEL_TCUBCUEFFORT))->SetValue(CTHMI_Grade_U8,0,100);
        if(CTHMI_Grade_U8 > 100)
        {
            ((CLabel*)GetDlgItem(ID_CTRANSPROT_LABEL_TCUBCUEFFORT2 ))->SetCtrlText(QObject::trUtf8("制动")+"100%");
        }else
        {
            ((CLabel*)GetDlgItem(ID_CTRANSPROT_LABEL_TCUBCUEFFORT2 ))->SetCtrlText(QObject::trUtf8("制动")+QString::number(CTHMI_Grade_U8)+"%");

        }
    }else
    {
        ((CLabel*)GetDlgItem(ID_CTRANSPROT_LABEL_TCUBCUEFFORT2 ))->HideLabel();
        ((C_Ctrl_Bar *)GetDlgItem(ID_CTRANSPROT_LABEL_TCUBCUEFFORT))->SetValue(0,0,1);

    }
    UpdateRealtimefaults();

}

void CTransportMode::OnInitPage()
{
    //((CButton*)GetDlgItem(ID_CTRANSPROT_BUTTON_CLEARSPEED))->ChangeButtonState(LBUTTON_DOWN);

}
void CTransportMode::OnSetSpeedClk()
{
    HMiCT_TransModeSpeedValid_B1 = false;
    //ChangePage(PAGE_INDEX_SPEEDSETPAGE);
    //ChangePage();
    pw_select=8;
    ChangePage(PAGE_INDEX_PASSWORD);
    pwdisplay="";
    pw_input="";
}

void CTransportMode::OnShowPage()
{

#ifdef PAGE_BUTTON_BAR_NEW
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
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("下一页"));
#endif

    ((CButton*)GetDlgItem(ID_CTRANSPROT_BUTTON_CLEARSPEED))->ChangeButtonAutoUpState(false);

    this->InitPageHeader();
}

#ifdef PAGE_BUTTON_BAR_NEW
        void CTransportMode::OnComBtn1Clk()
        {
            HMiCT_TransModeSpeedValid_B1 = false;
            ChangePage(PAGE_INDEX_MAINTAIN);
        }

        void CTransportMode::OnComBtn2Clk()
        {

        }

        void CTransportMode::OnComBtn3Clk()
        {

        }

        void CTransportMode::OnComBtn4Clk()
        {

        }

        void CTransportMode::OnComBtn5Clk()
        {

        }

        void CTransportMode::OnComBtn6Clk()
        {

        }
        void CTransportMode::OnComBtn7Clk()
        {

        }

        void CTransportMode::OnComBtn8Clk()
        {
        }
        void CTransportMode::OnComBtn9Clk()
        {
        }
        void CTransportMode::OnComBtn10Clk()
        {

        }
        void CTransportMode::OnComBtn11Clk()
        {

        }
        void CTransportMode::OnComBtn12Clk()
        {
        }
#else
        void CRunHelp1Page::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_RUNSTATE);
        }

        void CRunHelp1Page::OnComBtn2Clk()
        {

        }

        void CRunHelp1Page::OnComBtn3Clk()
        {

        }

        void CRunHelp1Page::OnComBtn4Clk()
        {

        }

        void CRunHelp1Page::OnComBtn5Clk()
        {

        }

        void CRunHelp1Page::OnComBtn6Clk()
        {
            ChangePage(PAGE_INDEX_RUNHELP2);
        }

#endif
void  CTransportMode::OnConfirmClk()
{
    ((CButton*)GetDlgItem(ID_CTRANSPROT_BUTTON_CLEARSPEED))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_CTRANSPROT_BUTTON_CLEARSPEED))->SetCtrlEnable(false);



}
