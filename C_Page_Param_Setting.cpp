#include "C_Page_Param_Setting.h"
#include <qprocess.h>
#include "cwarningdialog.h"



ROMDATA g_PicRom_ParameterSetting1[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
    //D_COMMON_PAGE_HEADER(QObject::trUtf8("参数设置"))
    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("参数\n设置") )
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW_WH
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

    {"",                       D_FONT_BOLD(4),      QRect(100, 70, 600,  70),          Qt::black,                Qt::gray,                 CONTROL_TRAIN,           ID_PARAMETERSET_TRAIN                      },
    {"RIGHT",                  D_FONT_BOLD(6),      QRect(715, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PARAMETERSET_ARROW_RIGHT                },
    {"LEFT",                   D_FONT_BOLD(6),      QRect( 40, 100,  45,  20),          Qt::white,                Qt::white,                CONTROL_ARROW,          ID_PARAMETERSET_ARROW_LEFT                 },

    {"",                  D_FONT_BOLD(6),      QRect( 10,  160, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 10,  190, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 10,  220, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 10,  250, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 10,  280, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 10,  310, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 10,  340, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                  D_FONT_BOLD(6),      QRect( 10,  370, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                  D_FONT_BOLD(6),      QRect( 10,  400, 690,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


    {"",                          D_FONT_BOLD(6),      QRect( 10, 160,   1, 180),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(100, 160,   1, 180),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(200, 160,   1, 180),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(300, 160,   1, 180),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(400, 160,   1, 180),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(500, 160,   1, 180),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(600, 160,   1, 180),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },
    {"",                          D_FONT_BOLD(6),      QRect(700, 160,   1, 180),          Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE        },


    {QObject::trUtf8("车   号"),      D_FONT_BOLD(8),      QRect( 11, 161, 88, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("1"),            D_FONT_BOLD(8),      QRect(103, 161,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("2"),            D_FONT_BOLD(8),      QRect(203, 161,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("3"),            D_FONT_BOLD(8),      QRect(303, 161,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("4"),            D_FONT_BOLD(8),      QRect(403, 161,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("5"),            D_FONT_BOLD(8),      QRect(503, 161,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("6"),            D_FONT_BOLD(8),      QRect(603, 161,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    //{QObject::trUtf8(""),            D_FONT_BOLD(8),      QRect( 11, 191, 88, 28),            Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_PICCARSET_LABEL_TRAINNUMBER         },
    //{QObject::trUtf8("列车号"),       D_FONT_BOLD(6),      QRect( 12, 192,  44, 27),            Qt::black,                Qt::gray,                CONTROL_LABEL,           ID_PICCARSET_LABEL_TRAINSTR            },
    {QObject::trUtf8(""),            D_FONT_BOLD(6),      QRect(11, 192,  88, 27),            Qt::black,                Qt::gray,                CONTROL_LABEL,           ID_PICCARSET_LABEL_TRAINNUMVAL         },


    {QObject::trUtf8(""),            D_FONT_BOLD(8),      QRect(103, 192,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PICCARSET_LABEL_CARNUMBER1         },
    {QObject::trUtf8(""),            D_FONT_BOLD(8),      QRect(203, 192,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PICCARSET_LABEL_CARNUMBER3         },
    {QObject::trUtf8(""),            D_FONT_BOLD(8),      QRect(303, 192,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PICCARSET_LABEL_CARNUMBER4         },
    {QObject::trUtf8(""),            D_FONT_BOLD(8),      QRect(403, 192,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PICCARSET_LABEL_CARNUMBER5         },
    {QObject::trUtf8(""),            D_FONT_BOLD(8),      QRect(503, 192,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PICCARSET_LABEL_CARNUMBER7         },
    {QObject::trUtf8(""),            D_FONT_BOLD(8),      QRect(603, 192,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_PICCARSET_LABEL_CARNUMBER8         },

    {QObject::trUtf8("1轴轮径"),      D_FONT_BOLD(8),      QRect( 11, 221, 88, 27),           Qt::white,                Qt::black,               CONTROL_LABEL,            ID_IGNORE         },

    {QObject::trUtf8(""),            D_FONT_BOLD(8),      QRect(103, 221,  95, 28),           Qt::black,                Qt::gray,                 CONTROL_LABEL,           ID_PICCARSET_LABEL_CAR1DIAMETER1      },
    {QObject::trUtf8(""),            D_FONT_BOLD(8),      QRect(203, 221,  95, 28),           Qt::black,                 Qt::gray,                CONTROL_LABEL,           ID_PICCARSET_LABEL_CAR2DIAMETER1      },
    {QObject::trUtf8(""),            D_FONT_BOLD(8),      QRect(303, 221,  95, 28),           Qt::black,                 Qt::gray,                CONTROL_LABEL,           ID_PICCARSET_LABEL_CAR3DIAMETER1      },
    {QObject::trUtf8(""),            D_FONT_BOLD(8),      QRect(403, 221,  95, 28),           Qt::black,                Qt::gray,                 CONTROL_LABEL,           ID_PICCARSET_LABEL_CAR4DIAMETER1      },
    {QObject::trUtf8(""),            D_FONT_BOLD(8),      QRect(503, 221,  95, 28),           Qt::black,                Qt::gray,                 CONTROL_LABEL,           ID_PICCARSET_LABEL_CAR5DIAMETER1      },
    {QObject::trUtf8(""),            D_FONT_BOLD(8),      QRect(603, 221,  95, 28),           Qt::black,                Qt::gray,                 CONTROL_LABEL,           ID_PICCARSET_LABEL_CAR6DIAMETER1      },

    {QObject::trUtf8("2轴轮径"),      D_FONT_BOLD(8),      QRect(  11, 251, 88, 27),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE          },
    {QObject::trUtf8("--"),           D_FONT_BOLD(8),      QRect(203, 251,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("--"),           D_FONT_BOLD(8),      QRect(303, 251,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("--"),           D_FONT_BOLD(8),      QRect(403, 251,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("--"),           D_FONT_BOLD(8),      QRect(503, 251,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),             D_FONT_BOLD(8),      QRect(103, 251,  95, 28),          Qt::black,                Qt::gray,                 CONTROL_LABEL,           ID_PICCARSET_LABEL_CAR1DIAMETER2        },
    {QObject::trUtf8(""),             D_FONT_BOLD(8),      QRect(603, 251,  95, 28),          Qt::black,                Qt::gray,                 CONTROL_LABEL,           ID_PICCARSET_LABEL_CAR6DIAMETER2        },

    {QObject::trUtf8("3轴轮径"),       D_FONT_BOLD(8),      QRect( 11, 281, 88, 27),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE          },
    {QObject::trUtf8("--"),           D_FONT_BOLD(8),      QRect(203, 282,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("--"),           D_FONT_BOLD(8),      QRect(303, 282,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("--"),           D_FONT_BOLD(8),      QRect(403, 282,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("--"),           D_FONT_BOLD(8),      QRect(503, 282,  95, 27),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8(""),             D_FONT_BOLD(8),      QRect(103, 282,  95, 28),          Qt::black,                Qt::gray,                 CONTROL_LABEL,           ID_PICCARSET_LABEL_CAR1DIAMETER3        },
    {QObject::trUtf8(""),             D_FONT_BOLD(8),      QRect(603, 282,  95, 28),          Qt::black,                Qt::gray,                 CONTROL_LABEL,           ID_PICCARSET_LABEL_CAR6DIAMETER3        },

    {QObject::trUtf8("4轴轮径"),       D_FONT_BOLD(8),      QRect( 11, 311, 88, 27),           Qt::white,                Qt::black,               CONTROL_LABEL,           ID_IGNORE          },
    {QObject::trUtf8("--"),           D_FONT_BOLD(8),      QRect(203, 312, 95, 27),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("--"),           D_FONT_BOLD(8),      QRect(303, 312, 95, 27),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("--"),           D_FONT_BOLD(8),      QRect(403, 312, 95, 27),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("--"),           D_FONT_BOLD(8),      QRect(503, 312, 95, 27),            Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8(""),             D_FONT_BOLD(8),      QRect(103, 312,  95, 28),          Qt::black,                Qt::gray,                 CONTROL_LABEL,           ID_PICCARSET_LABEL_CAR1DIAMETER4        },
    {QObject::trUtf8(""),             D_FONT_BOLD(8),      QRect(603, 312,  95, 28),          Qt::black,                Qt::gray,                 CONTROL_LABEL,           ID_PICCARSET_LABEL_CAR6DIAMETER4        },

    {QObject::trUtf8("如变更数据，请按相关数据进行设置。"),                     D_FONT_BOLD(8),     QRect(140, 380, 400, 30),  Qt::white,   Qt::black,    CONTROL_LABEL,          ID_PICCARSET_BUTTON_LINE_3      },
    {QObject::trUtf8("全部设置完毕后，点击【变更】按钮，按钮弹起表示设置完毕。"),   D_FONT_BOLD(8),    QRect(140, 411, 470, 30),  Qt::white,   Qt::black,    CONTROL_LABEL,          ID_PICCARSET_BUTTON_LINE_4      },


    {QObject::trUtf8("变   更"),        D_FONT_BOLD(8),      QRect( 25, 390, 100, 40),           Qt::black,                Qt::gray,                 CONTROL_BUTTON,           ID_PICMAINTAIN_BUTTON_CHANGE              },
 //   {QObject::trUtf8("轮径履历"),       D_FONT_BOLD(8),      QRect(675, 490, 100, 40),            Qt::black,                Qt::gray,                CONTROL_BUTTON,           ID_PICMAINTAIN_BUTTON_WHEELDIAMETERRESUME  },

 //   {QObject::trUtf8("屏幕校准"),                D_FONT_BOLD(8),      QRect(630,  390, 100,  40),          Qt::black,               Qt::gray,                CONTROL_BUTTON,           ID_PICMAINTAIN_BUTTON_SCREENRECTIFY     },


};
int g_ParameterSetting1RomLen = sizeof(g_PicRom_ParameterSetting1)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CParameterSettingPage1,CPage)
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

        ON_BTNCLK(ID_PICCARSET_LABEL_CAR2DIAMETER1, OnCar2Diameter1SetBtnClk)
        ON_BTNCLK(ID_PICCARSET_LABEL_CAR3DIAMETER1, OnCar3Diameter1SetBtnClk)
        ON_BTNCLK(ID_PICCARSET_LABEL_CAR4DIAMETER1, OnCar4Diameter1SetBtnClk)
        ON_BTNCLK(ID_PICCARSET_LABEL_CAR5DIAMETER1, OnCar5Diameter1SetBtnClk)

        ON_BTNCLK(ID_PICCARSET_LABEL_CAR1DIAMETER1, OnCar1Diameter1SetBtnClk)
        ON_BTNCLK(ID_PICCARSET_LABEL_CAR6DIAMETER1, OnCar6Diameter1SetBtnClk)
        ON_BTNCLK(ID_PICCARSET_LABEL_CAR1DIAMETER2, OnCar1Diameter2SetBtnClk)
        ON_BTNCLK(ID_PICCARSET_LABEL_CAR6DIAMETER2, OnCar6Diameter2SetBtnClk)
        ON_BTNCLK(ID_PICCARSET_LABEL_CAR1DIAMETER3, OnCar1Diameter3SetBtnClk)
        ON_BTNCLK(ID_PICCARSET_LABEL_CAR6DIAMETER3, OnCar6Diameter3SetBtnClk)
        ON_BTNCLK(ID_PICCARSET_LABEL_CAR1DIAMETER4, OnCar1Diameter4SetBtnClk)
        ON_BTNCLK(ID_PICCARSET_LABEL_CAR6DIAMETER4, OnCar6Diameter4SetBtnClk)

        ON_BTNCLK(ID_PICCARSET_LABEL_TRAINNUMVAL, OnTrainNumBtnClk)
        ON_BTNCLK(ID_LABEL_REALTIMEFAULTCONFIRM, OnRealtimefaultBtnClk)
//        ON_BTNCLK(ID_PICCARSET_BUTTON_LINE_1, OnLine_1)
//        ON_BTNCLK(ID_PICCARSET_BUTTON_LINE_2, OnLine_2)


        ON_BTNCLK(ID_PICMAINTAIN_BUTTON_CHANGE, OnChangeBtnDown)
  //      ON_BTNCLK(ID_PICMAINTAIN_BUTTON_WHEELDIAMETERRESUME, OnWheelDiamResumBtnClk)
  //      ON_BTNCLK(ID_PICMAINTAIN_BUTTON_SCREENRECTIFY, OnScreenRectifyClk)

END_MESSAGE_MAP()

CParameterSettingPage1::CParameterSettingPage1()
{
    m_WheelDiaType = -1;
}

void CParameterSettingPage1::OnUpdatePage()
{
    updateTrain(ID_PARAMETERSET_TRAIN);
    updateArrow(ID_PARAMETERSET_ARROW_LEFT,ID_PARAMETERSET_ARROW_RIGHT);

    //updateErrorLine(ID_PARAMETERSET_TRAIN);
    UpdateCarNumber();
    UpdateDiameterValue();
    UpdateTrainValue();
    //UpdateLineNumValue();
    if (m_bChange)
    {
        static int times = 0;
        times++;
        if (times%times_n == 0)
        {
            prameter_setting_timer--;
            if (prameter_setting_timer==0)
            {
                m_bChange = false;
                prameter_setting_button=0;
                parameter_setting_se1ect1=0;

                HMiCT_SAVETrainNum_B1=false;
                //HMCT_SetWheelEnable_B1=false;
                HMiCT_SAVELineNum_B1=false;
                HMiCT_SAVEWheelDig1_B1 = false;
                HMiCT_SAVEWheelDig2_B1 = false;
                HMiCT_SAVEWheelDig3_B1 = false;
                HMiCT_SAVEWheelDig4_B1 = false;
                HMiCT_SAVEWheelDig5_B1 = false;
                HMiCT_SAVEWheelDig6_B1 = false;
                HMiCT_SetFlagChecker_U8=0x55;
                HMiCT_WheelDia1_U8 = 0;
                HMiCT_WheelDia2_U8 = 0;
                HMiCT_WheelDia3_U8 = 0;
                HMiCT_WheelDia4_U8 = 0;
                HMiCT_WheelDia5_U8 = 0;
                HMiCT_WheelDia6_U8 = 0;
                HMCT_TrainNum_U8 = 0;
                ((CButton*)GetDlgItem(ID_PICMAINTAIN_BUTTON_CHANGE))->ChangeButtonState(LBUTTON_UP);
//                ((CButton*)GetDlgItem(ID_PICCARSET_BUTTON_LINE_1))->ChangeButtonState(LBUTTON_UP);
//                ((CButton*)GetDlgItem(ID_PICCARSET_BUTTON_LINE_2))->ChangeButtonState(LBUTTON_UP);

            //    SaveCurWheelDia();
                SaveWheelDiaToCSV();
            }
        }
    }
    UpdateRealtimefaults();
}

void CParameterSettingPage1::OnInitPage()
{
    ((CButton*)GetDlgItem(ID_PICMAINTAIN_BUTTON_CHANGE))->m_bAutoUpState = false;

//    ((CButton*)GetDlgItem(ID_PICCARSET_BUTTON_LINE_1))->m_bAutoUpState = false;
//    ((CButton*)GetDlgItem(ID_PICCARSET_BUTTON_LINE_2))->m_bAutoUpState = false;


}

void CParameterSettingPage1::OnShowPage()
{

#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN12))->SetCtrlText(QObject::trUtf8(""));
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
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返  回"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
     ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8(""));
#endif

     m_bChange = false;
    prameter_setting_timer = 5;
    ((CButton*)GetDlgItem(ID_PICMAINTAIN_BUTTON_CHANGE))->ChangeButtonState(LBUTTON_UP);

    this->InitPageHeader();

//    ((CButton*)GetDlgItem(ID_PICCARSET_BUTTON_LINE_1))->ChangeButtonState(LBUTTON_UP);
//    ((CButton*)GetDlgItem(ID_PICCARSET_BUTTON_LINE_2))->ChangeButtonState(LBUTTON_UP);
}
void CParameterSettingPage1::UpdateRealtimefaults()
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

void CParameterSettingPage1::OnRealtimefaultBtnClk()
{
    g_faultsrom[g_romidx].confirm = true;
    g_realtimeFaultsbarList.removeAt(g_faultcount);
    if(g_faultcount>0)
    g_faultcount--;
    //m_faultcount--;

}
    void CParameterSettingPage1::OnComBtn12Clk()
    {

    }

    void CParameterSettingPage1::OnComBtn2Clk()
    {

    }

    void CParameterSettingPage1::OnComBtn3Clk()
    {

    }

    void CParameterSettingPage1::OnComBtn4Clk()
    {

    }

    void CParameterSettingPage1::OnComBtn5Clk()
    {

    }

    void CParameterSettingPage1::OnComBtn6Clk()
    {

    }
    void CParameterSettingPage1::OnComBtn7Clk()
    {

    }
    void CParameterSettingPage1::OnComBtn8Clk()
    {

    }

    void CParameterSettingPage1::OnComBtn9Clk()
    {

    }

    void CParameterSettingPage1::OnComBtn10Clk()
    {

    }
    void CParameterSettingPage1::OnComBtn11Clk()
    {

    }
    void CParameterSettingPage1::OnComBtn1Clk()
    {
        //reset label state
        for(int i = WHEELDIAENUM_CAR12; i <= WHEELDIAENUM_CAR62; i++)
            ResetParameter1Label(i);

        m_WheelDiaList.clear();

        HMiCT_SAVETrainNum_B1=false;
        //HMCT_SetWheelEnable_B1=false;
        HMiCT_SAVELineNum_B1=false;

        HMiCT_SAVEWheelDig1_B1 = false;
        HMiCT_SAVEWheelDig2_B1 = false;
        HMiCT_SAVEWheelDig3_B1 = false;
        HMiCT_SAVEWheelDig4_B1 = false;
        HMiCT_SAVEWheelDig5_B1 = false;
        HMiCT_SAVEWheelDig6_B1 = false;
        HMiCT_SetFlagChecker_U8=0x55;
        HMiCT_WheelDia1_U8 = 0;
        HMiCT_WheelDia2_U8 = 0;
        HMiCT_WheelDia3_U8 = 0;
        HMiCT_WheelDia4_U8 = 0;
        HMiCT_WheelDia5_U8 = 0;
        HMiCT_WheelDia6_U8 = 0;
        HMCT_TrainNum_U8 = 0;
        ChangePage(PAGE_INDEX_MAINTAIN);

    }




void CParameterSettingPage1::OnChangeBtnDown()
{
    if(!m_bChange)
    {
        m_bChange = true;
        prameter_setting_timer = 5;


        //没有选中的轮径保持之前设定值
        HMiCT_WheelDia1_U8=CTHM_WheelDig1FedBk_U8;
        HMiCT_WheelDia2_U8=CTHM_WheelDig2FedBk_U8;
        HMiCT_WheelDia3_U8=CTHM_WheelDig3FedBk_U8;
        HMiCT_WheelDia4_U8=CTHM_WheelDig4FedBk_U8;
        HMiCT_WheelDia5_U8=CTHM_WheelDig5FedBk_U8;
        HMiCT_WheelDia6_U8=CTHM_WheelDig6FedBk_U8;
        HMCT_LineNum_U8=CTHM_LineNumber_U8 ;
        HMiCT_SAVELineNum_B1=false;



        if ( Bit(parameter_setting_se1ect1,1)==1)  //HMCT_SetWheelDiaTC1_U8
        {
               HMiCT_SAVEWheelDig1_B1 = true;
               HMiCT_WheelDia1_U8=840-HMI_send_data_temp2;
        }
        if ( Bit(parameter_setting_se1ect1,2)==1)  //HMCT_SetWheelDiaTC1_U8
        {
               HMiCT_SAVEWheelDig2_B1 = true;
               HMiCT_WheelDia2_U8=840-HMI_send_data_temp3;
        }
        if ( Bit(parameter_setting_se1ect1,3)==1)
        {
                HMiCT_SAVEWheelDig3_B1 = true;
               HMiCT_WheelDia3_U8=840-HMI_send_data_temp4;
        }
        if ( Bit(parameter_setting_se1ect1,4)==1)
        {
                HMiCT_SAVEWheelDig4_B1 = true;
                HMiCT_WheelDia4_U8=840-HMI_send_data_temp5;
        }
        if (Bit(parameter_setting_se1ect1,5)==1)
        {
                HMiCT_SAVEWheelDig5_B1 = true;
                HMiCT_WheelDia5_U8=840-HMI_send_data_temp6;

        }
        if ( Bit(parameter_setting_se1ect1,6)==1)
        {
                HMiCT_SAVEWheelDig6_B1 = true;
                HMiCT_WheelDia6_U8=840-HMI_send_data_temp7;
        }

        if ( Bit(parameter_setting_se1ect1,0)==1)
        {
            //HMCT_TrainNoSet_U8=HMI_send_data_temp1;
        }


        if ( Bit(parameter_setting_se1ect1,0)==1)
        {
                HMiCT_SAVETrainNum_B1=true;
                HMiCT_SAVELineNum_B1=true;
                HMCT_TrainNum_U8=HMI_send_data_temp1;
                HMCT_LineNum_U8=HMI_send_data_temp16;


                HMiCT_SetFlagChecker_U8=0xaa;

        }

        if ( (parameter_setting_se1ect1&126)!=0)
        {
                //HMCT_SetWheelEnable_B1=true;

                HMiCT_SetFlagChecker_U8=0xaa;

        }

        prameter_setting_button=1;
    //  prameter_setting_timer=5;
    //    SavePreWheelDia();




    }
    else
    {
        ((CButton*)GetDlgItem(ID_PICMAINTAIN_BUTTON_CHANGE))->ChangeButtonState(LBUTTON_UP);
    }


}

//void CParameterSettingPage1::OnScreenRectifyClk()
//{

//    QString program = "./ts_calibrate_cnr";
//    QProcess::execute(program);

//}

void CParameterSettingPage1::OnWheelDiamResumBtnClk()
{
//    ChangePage(PAGE_INDEX_WHEELDIARECORDSELECT);
}

void CParameterSettingPage1::UpdateCarNumber()
{
    SetStringValue(ID_PICCARSET_LABEL_CARNUMBER1,che1_num);
    SetStringValue(ID_PICCARSET_LABEL_CARNUMBER3,che2_num);
    SetStringValue(ID_PICCARSET_LABEL_CARNUMBER4,che3_num);
    SetStringValue(ID_PICCARSET_LABEL_CARNUMBER5,che4_num);
    SetStringValue(ID_PICCARSET_LABEL_CARNUMBER7,che5_num);
    SetStringValue(ID_PICCARSET_LABEL_CARNUMBER8,che6_num);
   // SetIntValue(ID_PICCARSET_LABEL_CARNUMBER8,HMI_send_data16);

}

void CParameterSettingPage1::SetIntValue(int id, int aValue)
{

    ((CLabel *)GetDlgItem(id))->SetCtrlText(QString::number(aValue));
}

void CParameterSettingPage1::SetStringValue(int id, QString aValue)
{
    ((CLabel *)GetDlgItem(id))->SetCtrlText(aValue);
}

void CParameterSettingPage1::UpdateTrainValue()
{

   // SetStringValue(ID_PICCARSET_LABEL_TRAINSTR, QObject::trUtf8("列车号"));

    if (Bit(parameter_setting_se1ect1,0))
    {
        SetLineTrainNum(ID_PICCARSET_LABEL_TRAINNUMVAL,HMI_send_data_temp16, HMI_send_data_temp1);
    }
    else
    {
        ((CLabel *)GetDlgItem(ID_PICCARSET_LABEL_TRAINNUMVAL))->SetCtrlText(QObject::trUtf8("列车号"));
    }

    SetLabelColor(ID_PICCARSET_LABEL_TRAINNUMVAL, Bit(parameter_setting_se1ect1,0));
   // SetLabelColor(ID_PICCARSET_LABEL_TRAINSTR, Bit(parameter_setting_se1ect1,0));
}

void CParameterSettingPage1::SetLabelColor(int id, int colorVal)
{
    //ASSERT((colorVal >= 0) && (colorVal <= 15));
    if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::blue);
    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::gray);
    }
}

void CParameterSettingPage1::OnTrainNumBtnClk()
{
    if (Bit(parameter_setting_se1ect1,0)==0)
    {
        p_set_signal=0;
        BitSet(p_set_signal,0,1);
        BitSet(parameter_setting_se1ect1,0,1);

        carnum_prompt=1;
        parameter_setting_text=QObject::trUtf8("列车编号设置");
        parameter_wheeldia=CTHM_TrainNumber_U8;
        parameter_setting_temp="";

        ChangePage(PAGE_INDEX_PARAMETERSETTING2);
        m_WheelDiaType = WHEELDIAENUM_TRAINCODE;

        //qDebug() << "parameter_setting_se1ect1 :"<<parameter_setting_se1ect1<<"p_set_signal:"<<p_set_signal;
    }
    else
    {
        BitSet(parameter_setting_se1ect1,0,0);
    }
}



void CParameterSettingPage1::UpdateDiameterValue()
{

    if (Bit(parameter_setting_se1ect1,0))
    {
        SetLineTrainNum(ID_PICCARSET_LABEL_TRAINNUMVAL,HMI_send_data_temp16, HMI_send_data_temp1);
    }
    else
    {
        SetLineTrainNum(ID_PICCARSET_LABEL_TRAINNUMVAL,CTHM_LineNumber_U8,  CTHM_TrainNumber_U8);
    }


    if (Bit(parameter_setting_se1ect1,1))
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR1DIAMETER1, HMI_send_data_temp2);  //
        SetIntValue(ID_PICCARSET_LABEL_CAR1DIAMETER2, HMI_send_data_temp2);  //
        SetIntValue(ID_PICCARSET_LABEL_CAR1DIAMETER3, HMI_send_data_temp2);  //
        SetIntValue(ID_PICCARSET_LABEL_CAR1DIAMETER4, HMI_send_data_temp2);  //

    }
    else
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR1DIAMETER1, 840-CTHM_WheelDig1FedBk_U8);
        SetIntValue(ID_PICCARSET_LABEL_CAR1DIAMETER2, 840-CTHM_WheelDig1FedBk_U8);
        SetIntValue(ID_PICCARSET_LABEL_CAR1DIAMETER3, 840-CTHM_WheelDig1FedBk_U8);
        SetIntValue(ID_PICCARSET_LABEL_CAR1DIAMETER4, 840-CTHM_WheelDig1FedBk_U8);

    }
    SetCarDiameterButtoColor(ID_PICCARSET_LABEL_CAR1DIAMETER1, Bit(parameter_setting_se1ect1,1));
    SetCarDiameterButtoColor(ID_PICCARSET_LABEL_CAR1DIAMETER2, Bit(parameter_setting_se1ect1,1));
    SetCarDiameterButtoColor(ID_PICCARSET_LABEL_CAR1DIAMETER3, Bit(parameter_setting_se1ect1,1));
    SetCarDiameterButtoColor(ID_PICCARSET_LABEL_CAR1DIAMETER4, Bit(parameter_setting_se1ect1,1));

    if (Bit(parameter_setting_se1ect1,2))
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR2DIAMETER1, HMI_send_data_temp3);  //
    }
    else
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR2DIAMETER1,840-CTHM_WheelDig2FedBk_U8);
    }
    SetCarDiameterButtoColor(ID_PICCARSET_LABEL_CAR2DIAMETER1, Bit(parameter_setting_se1ect1,2));



    if (Bit(parameter_setting_se1ect1,3))
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR3DIAMETER1, HMI_send_data_temp4);
    }
    else
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR3DIAMETER1, 840-CTHM_WheelDig3FedBk_U8);
    }
    SetCarDiameterButtoColor(ID_PICCARSET_LABEL_CAR3DIAMETER1, Bit(parameter_setting_se1ect1,3));

    if (Bit(parameter_setting_se1ect1,4))
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR4DIAMETER1, HMI_send_data_temp5);
    }
    else
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR4DIAMETER1, 840-CTHM_WheelDig4FedBk_U8);
    }
    SetCarDiameterButtoColor(ID_PICCARSET_LABEL_CAR4DIAMETER1, Bit(parameter_setting_se1ect1,4));

    if (Bit(parameter_setting_se1ect1,5))
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR5DIAMETER1, HMI_send_data_temp6);
    }
    else
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR5DIAMETER1, 840-CTHM_WheelDig5FedBk_U8);
    }
    SetCarDiameterButtoColor(ID_PICCARSET_LABEL_CAR5DIAMETER1, Bit(parameter_setting_se1ect1,5));



    if (Bit(parameter_setting_se1ect1,6))
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR6DIAMETER1, HMI_send_data_temp7);
        SetIntValue(ID_PICCARSET_LABEL_CAR6DIAMETER2, HMI_send_data_temp7);
        SetIntValue(ID_PICCARSET_LABEL_CAR6DIAMETER3, HMI_send_data_temp7);
        SetIntValue(ID_PICCARSET_LABEL_CAR6DIAMETER4, HMI_send_data_temp7);

    }
    else
    {
        SetIntValue(ID_PICCARSET_LABEL_CAR6DIAMETER1, 840-CTHM_WheelDig6FedBk_U8);
        SetIntValue(ID_PICCARSET_LABEL_CAR6DIAMETER2, 840-CTHM_WheelDig6FedBk_U8);
        SetIntValue(ID_PICCARSET_LABEL_CAR6DIAMETER3, 840-CTHM_WheelDig6FedBk_U8);
        SetIntValue(ID_PICCARSET_LABEL_CAR6DIAMETER4, 840-CTHM_WheelDig6FedBk_U8);

    }
    SetCarDiameterButtoColor(ID_PICCARSET_LABEL_CAR6DIAMETER1, Bit(parameter_setting_se1ect1,6));
    SetCarDiameterButtoColor(ID_PICCARSET_LABEL_CAR6DIAMETER2, Bit(parameter_setting_se1ect1,6));
    SetCarDiameterButtoColor(ID_PICCARSET_LABEL_CAR6DIAMETER3, Bit(parameter_setting_se1ect1,6));
    SetCarDiameterButtoColor(ID_PICCARSET_LABEL_CAR6DIAMETER4, Bit(parameter_setting_se1ect1,6));





}

void CParameterSettingPage1::SetCarDiameterButtoColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 1));
    if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::blue);
    }
    else
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::gray);
    }
}


void CParameterSettingPage1::OnCar1Diameter1SetBtnClk()
{
    {
        if (Bit(parameter_setting_se1ect1,1)==0)
        {
            p_set_signal=0;
            BitSet(p_set_signal,1,1);
            BitSet(parameter_setting_se1ect1,1,1);
            carnum_prompt=0;
            parameter_setting_text=QObject::trUtf8("1车厢轴1轮径设置");
            parameter_wheeldia=840-CTHM_WheelDig1FedBk_U8;
            parameter_setting_temp="";

            ChangePage(PAGE_INDEX_PARAMETERSETTING2);
            m_WheelDiaType = WHEELDIAENUM_CAR12;
        }
        else
        {
            BitSet(parameter_setting_se1ect1,1,0);
            ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR12);
        }
    }
}


void CParameterSettingPage1::OnCar1Diameter2SetBtnClk()
{

}

void CParameterSettingPage1::OnCar1Diameter3SetBtnClk()
{

}

void CParameterSettingPage1::OnCar1Diameter4SetBtnClk()
{

}

void CParameterSettingPage1::OnCar2Diameter1SetBtnClk()
{
    //if(CTHM_EmgcyBrakeState_B1 )
    //if(1)CTHM_EmgcyBrakeState_B1)
    {
        if (Bit(parameter_setting_se1ect1,2)==0)
        {
            p_set_signal=0;
            BitSet(p_set_signal,2,1);
            BitSet(parameter_setting_se1ect1,2,1);
            carnum_prompt=0;
            parameter_setting_text=QObject::trUtf8("2车厢轴1轮径设置");
            parameter_wheeldia=840-CTHM_WheelDig2FedBk_U8;
            parameter_setting_temp="";

            ChangePage(PAGE_INDEX_PARAMETERSETTING2);
            m_WheelDiaType = WHEELDIAENUM_CAR21;
        }
        else
        {
            BitSet(parameter_setting_se1ect1,2,0);
            ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR21);
        }
    }
//    else
//    {
//        ShowWarningDialog(QObject::trUtf8("只有在紧急制动状态下，\n可以设置轮径"));
//        return;
//    }
}

void CParameterSettingPage1::OnCar3Diameter1SetBtnClk()
{
    //if(CTHM_EmgcyBrakeState_B1)
    {
        if (Bit(parameter_setting_se1ect1,3)==0)
        {
            p_set_signal=0;
            BitSet(p_set_signal,3,1);
            BitSet(parameter_setting_se1ect1,3,1);
            carnum_prompt=0;
            parameter_setting_text=QObject::trUtf8("3车厢轴1轮径设置");
            parameter_wheeldia=840-CTHM_WheelDig3FedBk_U8;
            parameter_setting_temp="";

            ChangePage(PAGE_INDEX_PARAMETERSETTING2);
            m_WheelDiaType = WHEELDIAENUM_CAR31;

        }
        else
        {
            BitSet(parameter_setting_se1ect1,3,0);
            ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR31);
        }
//    }
//    else
//    {
//        ShowWarningDialog(QObject::trUtf8("只有在紧急制动状态下，\n可以设置轮径"));
//        return;
    }
}

void CParameterSettingPage1::OnCar4Diameter1SetBtnClk()
{
    //if(CTHM_EmgcyBrakeState_B1)
    {
        if (Bit(parameter_setting_se1ect1,4)==0)
        {
            p_set_signal=0;
            BitSet(p_set_signal,4,1);
            BitSet(parameter_setting_se1ect1,4,1);
            carnum_prompt=0;
            parameter_setting_text=QObject::trUtf8("4车厢轴1轮径设置");
            parameter_wheeldia=840-CTHM_WheelDig4FedBk_U8;
            parameter_setting_temp="";

            ChangePage(PAGE_INDEX_PARAMETERSETTING2);
            m_WheelDiaType = WHEELDIAENUM_CAR41;
        }
        else
        {
            BitSet(parameter_setting_se1ect1,4,0);
            ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR41);
        }
    }
//else
//{
//    ShowWarningDialog(QObject::trUtf8("只有在紧急制动状态下，\n可以设置轮径"));
//    return;
//}
}

void CParameterSettingPage1::OnCar5Diameter1SetBtnClk()
{
    //if(CTHM_EmgcyBrakeState_B1)
    {
    if (Bit(parameter_setting_se1ect1,5)==0)
    {
        p_set_signal=0;
        BitSet(p_set_signal,5,1);
        BitSet(parameter_setting_se1ect1,5,1);
        carnum_prompt=0;
        parameter_setting_text=QObject::trUtf8("5车厢轴1轮径设置");
        parameter_wheeldia=840-CTHM_WheelDig5FedBk_U8;
       // LABEL=parameter_setting_data9;
        parameter_setting_temp="";

        ChangePage(PAGE_INDEX_PARAMETERSETTING2);
        m_WheelDiaType = WHEELDIAENUM_CAR51;
    }
    else
    {
       BitSet(parameter_setting_se1ect1,5,0);
       ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR51);
    }
}
//else
//{
//    ShowWarningDialog(QObject::trUtf8("只有在紧急制动状态下，\n可以设置轮径"));
//    return;
//}
}



void CParameterSettingPage1::OnCar7Diameter1SetBtnClk()
{

}

void CParameterSettingPage1::OnCar8Diameter1SetBtnClk()
{

}



void CParameterSettingPage1::OnCar6Diameter1SetBtnClk()
{
    //if(CTHM_EmgcyBrakeState_B1)
    {
    if (Bit(parameter_setting_se1ect1,6)==0)
    {
        p_set_signal=0;
        BitSet(p_set_signal,6,1);
        BitSet(parameter_setting_se1ect1,6,1);
        carnum_prompt=0;
        parameter_setting_text=QObject::trUtf8("6车厢轴1轮径设置");
        parameter_wheeldia=840-CTHM_WheelDig6FedBk_U8;
        parameter_setting_temp="";

        ChangePage(PAGE_INDEX_PARAMETERSETTING2);
        m_WheelDiaType = WHEELDIAENUM_CAR62;
    }
    else
    {
       BitSet(parameter_setting_se1ect1,6,0);
       ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR62);
    }
    }
//else
//{
//    ShowWarningDialog(QObject::trUtf8("只有在紧急制动状态下，\n可以设置轮径"));
//    return;
//}
}
void CParameterSettingPage1::OnCar6Diameter2SetBtnClk()
{
}
void CParameterSettingPage1::OnCar6Diameter3SetBtnClk()
{
}
void CParameterSettingPage1::OnCar6Diameter4SetBtnClk()
{

}



void CParameterSettingPage1::ClearWheelDiaFromMemByType(int nType)
{
    for(int i = 0; i < m_WheelDiaList.size(); i++)
    {
        if(m_WheelDiaList[i].WheelDiaType == nType)
        {
            m_WheelDiaList.removeAt(i);
        }
    }
}

void CParameterSettingPage1::SavePreWheelDia()
{
    m_preWheelDiaList.clear();

    m_preWheelDiaList.append(HMI_send_data_temp2);
    m_preWheelDiaList.append(HMI_send_data_temp3);
    m_preWheelDiaList.append(HMI_send_data_temp4);
    m_preWheelDiaList.append(HMI_send_data_temp5);
    m_preWheelDiaList.append(HMI_send_data_temp6);
    m_preWheelDiaList.append(HMI_send_data_temp7);
    m_preWheelDiaList.append(HMI_send_data_temp8);
    m_preWheelDiaList.append(HMI_send_data_temp9);
    m_preWheelDiaList.append(HMI_send_data_temp10);
    m_preWheelDiaList.append(HMI_send_data_temp11);
    m_preWheelDiaList.append(HMI_send_data_temp12);
    m_preWheelDiaList.append(HMI_send_data_temp13);
    m_preWheelDiaList.append(HMI_send_data_temp14);
    m_preWheelDiaList.append(HMI_send_data_temp15);
    m_preWheelDiaList.append(HMI_send_data_temp16);

}

void CParameterSettingPage1::SaveCurWheelDia()
{
    m_curWheelDiaList.clear();
    m_curWheelDiaList.append(CCU_HMI_220_2);
    m_curWheelDiaList.append(CCU_HMI_220_3);
    m_curWheelDiaList.append(CCU_HMI_220_4);
    m_curWheelDiaList.append(CCU_HMI_220_5);
    m_curWheelDiaList.append(CCU_HMI_220_6);
    m_curWheelDiaList.append(CCU_HMI_220_7);
    m_curWheelDiaList.append(CCU_HMI_220_8);
    m_curWheelDiaList.append(CCU_HMI_220_9);
    m_curWheelDiaList.append(CCU_HMI_220_10);
    m_curWheelDiaList.append(CCU_HMI_220_11);
    m_curWheelDiaList.append(CCU_HMI_220_12);
    m_curWheelDiaList.append(CCU_HMI_220_13);
    m_curWheelDiaList.append(CCU_HMI_220_14);
    m_curWheelDiaList.append(CCU_HMI_220_15);
}

void CParameterSettingPage1::SaveWheelDiaToCSV()
{
    if (m_WheelDiaType == -1)
        return;

    if (m_WheelDiaType == WHEELDIAENUM_TRAINCODE)
    {
        if(
                ((0<CTHM_TrainNumber_U8)&&(CTHM_TrainNumber_U8<100))&&
                ((0<CTHM_LineNumber_U8) &&(CTHM_LineNumber_U8<100 ))
          )
        {
            if(HMI_send_data_temp1==CTHM_TrainNumber_U8)
            {
                SetINIInfo("/CNR_BJ/Traincode", QString::number(CTHM_TrainNumber_U8+CTHM_LineNumber_U8*100));
            }
        }


    }
//    else
//    {
//        for (int i=0; i<m_WheelDiaList.size(); i++)
//        {
//            int nIndex = m_WheelDiaList[i].WheelDiaType;
//            if(m_preWheelDiaList[nIndex] == m_curWheelDiaList[nIndex]) {
//                SaveWheelDiaCSV(m_WheelDiaList[i].WheelDiaStr,m_WheelDiaList[i].WheelDiaType);
//            }
//        }
//    }

    m_WheelDiaList.clear();
    m_curWheelDiaList.clear();
    m_preWheelDiaList.clear();
}

void CParameterSettingPage1::ResetParameter1Label(int nType)
{
    switch(nType)
    {
        case WHEELDIAENUM_CAR12:
        {
            BitSet(parameter_setting_se1ect1,1,0);
            ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR12);
            break;
        }
        case WHEELDIAENUM_CAR21:
        {
            BitSet(parameter_setting_se1ect1,2,0);
            ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR21);
            break;
        }
        case WHEELDIAENUM_CAR31:
        {
            BitSet(parameter_setting_se1ect1,3,0);
            ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR31);
            break;
        }
        case WHEELDIAENUM_CAR41:
        {
            BitSet(parameter_setting_se1ect1,4,0);
            ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR41);
            break;
        }
        case WHEELDIAENUM_CAR51:
        {
            BitSet(parameter_setting_se1ect1,5,0);
            ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR51);
            break;
        }
        case WHEELDIAENUM_CAR62:
        {
            BitSet(parameter_setting_se1ect1,6,0);
            ClearWheelDiaFromMemByType(WHEELDIAENUM_CAR62);
            break;
        }

        default:
           break;
    }
    Update();
}

//void CParameterSettingPage1::OnLine_1()
//{
//    if(!m_bChange)
//    {
//        m_bChange = true;
//        prameter_setting_timer = 5;

//        HMCT_LineNum_U8=1;
//        HMiCT_SAVELineNum_B1=true;
//    }
//    else
//    {
//        ((CButton*)GetDlgItem(ID_PICCARSET_BUTTON_LINE_1))->ChangeButtonState(LBUTTON_UP);
//    }

//}

//void CParameterSettingPage1::OnLine_2()
//{

//    if(!m_bChange)
//    {
//        m_bChange = true;
//        prameter_setting_timer = 5;

//        HMCT_LineNum_U8=2;
//        HMiCT_SAVELineNum_B1=true;
//    }
//    else
//    {
//        ((CButton*)GetDlgItem(ID_PICCARSET_BUTTON_LINE_2))->ChangeButtonState(LBUTTON_UP);
//    }

//}


//void CParameterSettingPage1::UpdateLineNumValue()
//{
//    ((CLabel *)GetDlgItem(ID_PICCARSET_LABEL_LINE1_OR_LINE2))->SetCtrlText("Line "+QString::number(CTHM_LineNumber_U8));

//}
void CParameterSettingPage1::ShowWarningDialog(QString str)
{
    CWarningDialog dlg;
    dlg.SetWarningStr(str);
    dlg.move((GetParentDlg()->x()+150)*SCREEN_factor,(GetParentDlg()->y()+150)*SCREEN_factor);
    dlg.exec();
}
void CParameterSettingPage1::SetLineTrainNum(int id, int lineNum, int trainNum)
{
    QString aValue;
//    if (lineNum<10)
//    {
//        if(trainNum<10)
//        aValue="0"+StrFromInt( lineNum, 10 )+"0"+StrFromInt(trainNum,10 );
//        else
//        {
//            aValue="0"+StrFromInt( lineNum, 10 )+StrFromInt(trainNum,10 );
//        }
//    }
//    else
//    {
//        if(trainNum<10)
//        aValue=StrFromInt( lineNum, 10 )+"0"+StrFromInt(trainNum,10 );
//        else
//        {
//            aValue=StrFromInt( lineNum, 10 )+StrFromInt(trainNum,10 );
//        }
//    }
   aValue="F"+StrFromInt(trainNum,10 );
   ((CLabel *)GetDlgItem(id))->SetCtrlText(aValue);
}
