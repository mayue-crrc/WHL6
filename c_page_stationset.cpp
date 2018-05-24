#include "c_page_stationset.h"
int offset2 = 50;
ROMDATA g_PicRom_CStationSetting[] =
{
    //D_COMMON_PAGE_HEADER(QObject::trUtf8("站设置") )
    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("车站\n设置") )
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW_WHHELP
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif
//       {"",                   D_DEFAULT_FONT,      QRect(  4,    65, 793,    1), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },
//       {"",                   D_DEFAULT_FONT,      QRect(  4,   305, 793,    1), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },
//       {"",                   D_DEFAULT_FONT,      QRect(  4,   307, 793,    1), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },
//       {"",                   D_DEFAULT_FONT,      QRect(  4,   547, 793,    1), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },
//       {"",                   D_DEFAULT_FONT,      QRect(  4,    65,   1,  240), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },
//       {"",                   D_DEFAULT_FONT,      QRect(  797,  65,   1,  240), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },
//       {"",                   D_DEFAULT_FONT,      QRect(  4,   307,   1,  240), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },
//       {"",                   D_DEFAULT_FONT,      QRect(  797, 307,   1,  240), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },

   // {QObject::trUtf8("1号线"),                 D_FONT_BOLD(8),      QRect(360, 67, 80, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,                ID_IGNORE  },
   // {QObject::trUtf8("2号线"),                 D_FONT_BOLD(8),      QRect(360, 309, 80, 36),           Qt::white,                Qt::black,                CONTROL_LABEL,                ID_IGNORE  },
    {QObject::trUtf8("模式选择"),                 D_FONT_BOLD(8),      QRect(460+offset2, 310, 100, 30),           Qt::white,                Qt::black,                CONTROL_LABEL,                ID_IGNORE  },
    {QObject::trUtf8("自动模式"),                 D_FONT_BOLD(8),      QRect(350+50+offset2, 360, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBCAUTOMODE_BTN     },
    {QObject::trUtf8("手动模式"),                 D_FONT_BOLD(8),      QRect(350+170+offset2, 360, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBCMANUALMODE_BTN      },
    {"",                   D_DEFAULT_FONT,      QRect(  460+offset2, 325, 20,    3), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },
    {"",                   D_DEFAULT_FONT,      QRect(  560+offset2, 325, 20,    3), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },
    {"",                   D_DEFAULT_FONT,      QRect(  350+30+offset2, 510, 220,    3), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },
    {"",                   D_DEFAULT_FONT,      QRect(  350+30+offset2, 415, 3,    80), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },
    {"",                   D_DEFAULT_FONT,      QRect(  350+170+offset2, 415, 3,    80), QColor(250,250,250),          QColor(50, 50, 50),             CONTROL_LINE,           ID_IGNORE           },

    {QObject::trUtf8("设\n站\n选\n择"),                 D_FONT_BOLD(8),      QRect(60-offset2, 340, 30, 180),           Qt::white,                Qt::black,                CONTROL_LABEL,                ID_IGNORE  },
    {QObject::trUtf8("当前站"),                 D_FONT_BOLD(8),      QRect(100-offset2, 340, 70, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBCSTATIONSET_BUTTON_01     },
    {QObject::trUtf8("下一站"),                 D_FONT_BOLD(8),      QRect(100-offset2, 390, 70, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBCSTATIONSET_BUTTON_02      },
    {QObject::trUtf8("起始站"),                 D_FONT_BOLD(8),      QRect(100-offset2, 440, 70, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTARTSTATION_BTN     },
    {QObject::trUtf8("终点站"),                 D_FONT_BOLD(8),      QRect(100-offset2, 490, 70, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBENDSTATION_BTN      },

    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(200-offset2, 340, 100, 30),           Qt::white,                Qt::blue,                CONTROL_EDIT,      ID_PIBCSTATIONSET_LABEL_03           },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(200-offset2, 390, 100, 30),           Qt::white,                Qt::blue,                CONTROL_EDIT,       ID_PIBCSTATIONSET_LABEL_04          },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(200-offset2, 440, 100, 30),           Qt::white,                Qt::blue,                CONTROL_EDIT,      ID_PIBSTARTLABEL_BTN           },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(200-offset2, 490, 100, 30),           Qt::white,                Qt::blue,                CONTROL_EDIT,       ID_PIBENDLABEL_BTN          },


    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(330-offset2, 340, 100, 30),           Qt::white,                Qt::black,                CONTROL_EDIT,      ID_PIBCURRENTLABEL           },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(330-offset2, 390, 100, 30),           Qt::white,                Qt::black,                CONTROL_EDIT,       ID_PIBNEXTLABEL          },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(330-offset2, 440, 100, 30),           Qt::white,                Qt::black,                CONTROL_EDIT,      ID_PIBSTARTLABEL           },
    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(330-offset2, 490, 100, 30),           Qt::white,                Qt::black,                CONTROL_EDIT,       ID_PIBENDLABEL          },

     {QObject::trUtf8("新设定值"),                 D_FONT_BOLD(8),      QRect(200-offset2, 310, 100, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,                ID_IGNORE  },
    {QObject::trUtf8("当前值"),                 D_FONT_BOLD(8),      QRect(330-offset2, 310, 100, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,                ID_IGNORE  },

   // {QObject::trUtf8("当前值"),                 D_FONT_BOLD(8),      QRect(330-offset2, 310, 100, 29),           Qt::white,                Qt::black,                CONTROL_LABEL,                ID_IGNORE  },

//    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(550, 400, 100, 30),           Qt::white,                Qt::blue,                CONTROL_EDIT,      ID_PIBCSTATIONSET_LABEL_05           },
//    {QObject::trUtf8(""),                 D_FONT_BOLD(8),      QRect(550, 450, 100, 30),           Qt::white,                Qt::blue,                CONTROL_EDIT,       ID_PIBCSTATIONSET_LABEL_06          },


    {QObject::trUtf8("东风公司"),                 D_FONT_BOLD(8),      QRect(25,  107, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBCSTATIONSET_BUTTON_11     },
    {QObject::trUtf8("车城东路"),                 D_FONT_BOLD(8),      QRect(155, 107, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBCSTATIONSET_BUTTON_12      },
    {QObject::trUtf8("江城大道"),                 D_FONT_BOLD(8),      QRect(285, 107, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBCSTATIONSET_BUTTON_13      },
    {QObject::trUtf8("老关村"),                 D_FONT_BOLD(8),      QRect(415, 107, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBCSTATIONSET_BUTTON_14      },
    {QObject::trUtf8("国博中心南"),                 D_FONT_BOLD(8),      QRect(545, 107, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBCSTATIONSET_BUTTON_15      },
    {QObject::trUtf8("国博中心北"),                 D_FONT_BOLD(8),      QRect(675, 107, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBCSTATIONSET_BUTTON_16      },

    {QObject::trUtf8("前进村"),                 D_FONT_BOLD(8),      QRect(25,  147, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBCSTATIONSET_BUTTON_17      },
    {QObject::trUtf8("建港路"),                 D_FONT_BOLD(8),      QRect(155, 147, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBCSTATIONSET_BUTTON_18      },
    {QObject::trUtf8("马鹦路"),                 D_FONT_BOLD(8),      QRect(285, 147, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBCSTATIONSET_BUTTON_19      },
    {QObject::trUtf8("钟家村"),                 D_FONT_BOLD(8),      QRect(415, 147, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBCSTATIONSET_BUTTON_20      },
    {QObject::trUtf8("琴台"),                 D_FONT_BOLD(8),      QRect(545, 147, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBCSTATIONSET_BUTTON_21      },
    {QObject::trUtf8("武胜路"),                 D_FONT_BOLD(8),      QRect(675, 147, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBCSTATIONSET_BUTTON_22      },


    {QObject::trUtf8("汉正街"),                 D_FONT_BOLD(8),      QRect(25,  187, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBCSTATIONSET_BUTTON_23      },
    {QObject::trUtf8("六渡桥"),                 D_FONT_BOLD(8),      QRect(155,  187, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBCSTATIONSET_BUTTON_24      },
    {QObject::trUtf8("江汉路"),                 D_FONT_BOLD(8),      QRect(285, 187, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBCSTATIONSET_BUTTON_25      },
    {QObject::trUtf8("大智路"),                 D_FONT_BOLD(8),      QRect(415, 187, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBCSTATIONSET_BUTTON_26      },
    {QObject::trUtf8("苗栗路"),                 D_FONT_BOLD(8),      QRect(545, 187, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBCSTATIONSET_BUTTON_27      },
    {QObject::trUtf8("香港路"),                 D_FONT_BOLD(8),      QRect(675, 187, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBCSTATIONSET_BUTTON_28      },

    {QObject::trUtf8("三眼桥"),                 D_FONT_BOLD(8),      QRect(25, 227, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBCSTATIONSET_BUTTON_29      },
    {QObject::trUtf8("唐家墩"),                 D_FONT_BOLD(8),      QRect(155,  227, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBCSTATIONSET_BUTTON_30      },
    {QObject::trUtf8("石桥"),                 D_FONT_BOLD(8),      QRect(285, 227, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBCSTATIONSET_BUTTON_31      },
    {QObject::trUtf8("杨汊湖"),                 D_FONT_BOLD(8),      QRect(415, 227, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBCSTATIONSET_BUTTON_32      },
    {QObject::trUtf8("常青花园"),                 D_FONT_BOLD(8),      QRect(545, 227, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBCSTATIONSET_BUTTON_33      },
    {QObject::trUtf8("轻工大学"),                 D_FONT_BOLD(8),      QRect(675, 227, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBCSTATIONSET_BUTTON_34      },

    {QObject::trUtf8("园博园北"),                 D_FONT_BOLD(8),      QRect(25, 267, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBCSTATIONSET_BUTTON_35     },
    {QObject::trUtf8("金银湖"),                 D_FONT_BOLD(8),      QRect(155,  267, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBCSTATIONSET_BUTTON_36      },
    {QObject::trUtf8("金银湖公园"),                 D_FONT_BOLD(8),      QRect(285, 267, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBCSTATIONSET_BUTTON_37      },






};
int g_CStationSettingRomLen = sizeof(g_PicRom_CStationSetting)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(C_Page_Stationset,CPage)
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
        ON_BTNCLK(ID_PIBCSTATIONSET_BUTTON_11, OnBtn11Clk)
        ON_BTNCLK(ID_PIBCSTATIONSET_BUTTON_12, OnBtn12Clk)
        ON_BTNCLK(ID_PIBCSTATIONSET_BUTTON_13, OnBtn13Clk)
        ON_BTNCLK(ID_PIBCSTATIONSET_BUTTON_14, OnBtn14Clk)
        ON_BTNCLK(ID_PIBCSTATIONSET_BUTTON_15, OnBtn15Clk)
        ON_BTNCLK(ID_PIBCSTATIONSET_BUTTON_16, OnBtn16Clk)
        ON_BTNCLK(ID_PIBCSTATIONSET_BUTTON_17, OnBtn17Clk)
        ON_BTNCLK(ID_PIBCSTATIONSET_BUTTON_18, OnBtn18Clk)
        ON_BTNCLK(ID_PIBCSTATIONSET_BUTTON_19, OnBtn19Clk)
        ON_BTNCLK(ID_PIBCSTATIONSET_BUTTON_20, OnBtn20Clk)
        ON_BTNCLK(ID_PIBCSTATIONSET_BUTTON_21, OnBtn21Clk)
        ON_BTNCLK(ID_PIBCSTATIONSET_BUTTON_22, OnBtn22Clk)
        ON_BTNCLK(ID_PIBCSTATIONSET_BUTTON_23, OnBtn23Clk)
        ON_BTNCLK(ID_PIBCSTATIONSET_BUTTON_24, OnBtn24Clk)
        ON_BTNCLK(ID_PIBCSTATIONSET_BUTTON_25, OnBtn25Clk)
        ON_BTNCLK(ID_PIBCSTATIONSET_BUTTON_26, OnBtn26Clk)
        ON_BTNCLK(ID_PIBCSTATIONSET_BUTTON_27, OnBtn27Clk)
        ON_BTNCLK(ID_PIBCSTATIONSET_BUTTON_28, OnBtn28Clk)
        ON_BTNCLK(ID_PIBCSTATIONSET_BUTTON_29, OnBtn29Clk)
        ON_BTNCLK(ID_PIBCSTATIONSET_BUTTON_30, OnBtn30Clk)
        ON_BTNCLK(ID_PIBCSTATIONSET_BUTTON_31, OnBtn31Clk)
        ON_BTNCLK(ID_PIBCSTATIONSET_BUTTON_32, OnBtn32Clk)
        ON_BTNCLK(ID_PIBCSTATIONSET_BUTTON_33, OnBtn33Clk)
        ON_BTNCLK(ID_PIBCSTATIONSET_BUTTON_34, OnBtn34Clk)
        ON_BTNCLK(ID_PIBCSTATIONSET_BUTTON_35, OnBtn35Clk)
        ON_BTNCLK(ID_PIBCSTATIONSET_BUTTON_36, OnBtn36Clk)
        ON_BTNCLK(ID_PIBCSTATIONSET_BUTTON_37, OnBtn37Clk)

        ON_BTNCLK(ID_PIBCSTATIONSET_BUTTON_01, OnBtnCurrentMode)
        ON_BTNCLK(ID_PIBCSTATIONSET_BUTTON_02, OnBtnNextMode)
        ON_BTNCLK(ID_PIBSTARTSTATION_BTN, OnBtnStartMode)
        ON_BTNCLK(ID_PIBENDSTATION_BTN, OnBtnEndMode)
        ON_BTNCLK(ID_PIBCAUTOMODE_BTN, OnBtnAutoMode)
        ON_BTNCLK(ID_PIBCMANUALMODE_BTN, OnBtnManualMode)

//        ON_BTNCLK(ID_PIBCSTATIONSET_BUTTON_5_2, OnBtn52Clk)
END_MESSAGE_MAP()

C_Page_Stationset::C_Page_Stationset()
{
    m_CurrentStationFlg = 0;
    m_confirmflg = false;
    counter3s = 0;
}

void C_Page_Stationset::OnUpdatePage()
{
//    GetDlgItem(ID_PIBCSTATIONSET_LABEL_05)->SetCtrlText(GetStationNameByID(ATCT_CurrentPNO_U16));
//    GetDlgItem(ID_PIBCSTATIONSET_LABEL_06)->SetCtrlText(GetStationNameByID(ATCT_NextPNO_U16));

    switch(m_CurrentStationFlg)
    {
    case STATIONFLG_CURRENT:
        GetDlgItem(ID_PIBCSTATIONSET_LABEL_03)->SetCtrlText(GetStationNameByID(m_Currentstation));
        break;
    case STATIONFLG_NEXT:
        GetDlgItem(ID_PIBCSTATIONSET_LABEL_04)->SetCtrlText(GetStationNameByID(m_Nextstation));
        break;
    case STATIONFLG_START:
        GetDlgItem(ID_PIBSTARTLABEL_BTN)->SetCtrlText(GetStationNameByID(m_Startstation));
        break;
    case STATIONFLG_END:
        GetDlgItem(ID_PIBENDLABEL_BTN)->SetCtrlText(GetStationNameByID(m_Endstation));
        break;
    default:
        break;
    }
    if(bool(!HMiCT_PISMODE_B1)&&bool(CTHM_ATC1On_B1)&&bool(CTHM_ATC1Active_B1))
    {
        GetDlgItem(ID_PIBSTARTLABEL)->SetCtrlText("- -");
    }else
    {
        GetDlgItem(ID_PIBSTARTLABEL)->SetCtrlText(OrigStation);
    }
    GetDlgItem(ID_PIBCURRENTLABEL)->SetCtrlText(CurrentStation);
    GetDlgItem(ID_PIBNEXTLABEL)->SetCtrlText(NextStation);
    GetDlgItem(ID_PIBENDLABEL)->SetCtrlText(DestStation);

    if(m_confirmflg)
    {
        if(counter3s++ > 15)
        {
            counter3s = 0;
            m_confirmflg = false;
            HMiCT_AdjustStation_B1 = false;
            HMiCT_SetFlagChecker_U8 = 0x55;
            HMiCT_StationIDCurrent_U8=0;
            HMiCT_StationIDNext_U8=0;
            HMiCT_StationIDFirst_U8 = 0;
            HMiCT_StationIDLast_U8 = 0;
            HMiCT_SAVEFirstStation_B1 = false;
            HMiCT_SAVELastStation_B1 = false;
            ((CButton*)GetDlgItem(IDLB_COM_BTN12))->ChangeButtonState(LBUTTON_UP);
            ((CButton*)GetDlgItem(IDLB_COM_BTN12))->ChangeButtonAutoUpState(true);
        }
    }
}

void C_Page_Stationset::OnInitPage()
{
    ((CButton*)GetDlgItem(ID_PIBCSTATIONSET_BUTTON_01))->ChangeButtonState(LBUTTON_DOWN);
    ((CButton*)GetDlgItem(ID_PIBCSTATIONSET_BUTTON_01))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_PIBCSTATIONSET_BUTTON_02))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_PIBSTARTSTATION_BTN))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_PIBENDSTATION_BTN))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_PIBCAUTOMODE_BTN))->ChangeButtonState(LBUTTON_DOWN);
    ((CButton*)GetDlgItem(ID_PIBCAUTOMODE_BTN))->m_bAutoUpState = false;
    ((CButton*)GetDlgItem(ID_PIBCMANUALMODE_BTN))->m_bAutoUpState = false;

    int nBtnIDArray[] =
    {
     ID_PIBCSTATIONSET_BUTTON_11,
     ID_PIBCSTATIONSET_BUTTON_12,
     ID_PIBCSTATIONSET_BUTTON_13,
     ID_PIBCSTATIONSET_BUTTON_14,
     ID_PIBCSTATIONSET_BUTTON_15,
     ID_PIBCSTATIONSET_BUTTON_16,
     ID_PIBCSTATIONSET_BUTTON_17,
     ID_PIBCSTATIONSET_BUTTON_18,
     ID_PIBCSTATIONSET_BUTTON_19,
     ID_PIBCSTATIONSET_BUTTON_20,
     ID_PIBCSTATIONSET_BUTTON_21,
     ID_PIBCSTATIONSET_BUTTON_22,
     ID_PIBCSTATIONSET_BUTTON_23,
     ID_PIBCSTATIONSET_BUTTON_24,
     ID_PIBCSTATIONSET_BUTTON_25,
     ID_PIBCSTATIONSET_BUTTON_26,
     ID_PIBCSTATIONSET_BUTTON_27,
     ID_PIBCSTATIONSET_BUTTON_28,
     ID_PIBCSTATIONSET_BUTTON_29,
     ID_PIBCSTATIONSET_BUTTON_30,
     ID_PIBCSTATIONSET_BUTTON_31,
     ID_PIBCSTATIONSET_BUTTON_32,
     ID_PIBCSTATIONSET_BUTTON_33,
     ID_PIBCSTATIONSET_BUTTON_34,
     ID_PIBCSTATIONSET_BUTTON_35,
     ID_PIBCSTATIONSET_BUTTON_36,
     ID_PIBCSTATIONSET_BUTTON_37,

//     ID_PIBCSTATIONSET_BUTTON_5_2,
    };

    //for (int i=0; i<27; i++)
        //((CButton*)GetDlgItem(nBtnIDArray[i]))->m_bAutoUpState = false;
}

void C_Page_Stationset::OnShowPage()
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
    ((CButton *)GetDlgItem(IDLB_COM_BTN12))->SetCtrlText(QObject::trUtf8("确  认"));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
     ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(    ((CButton *)GetDlgItem(ID_PIBCSTATIONSET_BUTTON_02))->ChangeButtonState(LBUTTON_UP);
"");
     ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("确   认"));
#endif

    QString stationName = "";
    SetStationButtonDownByName(stationName);
}
#ifdef PAGE_BUTTON_BAR_NEW
        void C_Page_Stationset::OnComBtn1Clk()
        {
            HMiCT_StationIDFirst_U8 = 0;
            HMiCT_StationIDLast_U8 = 0;
            HMiCT_SAVEFirstStation_B1 = false;
            HMiCT_SAVELastStation_B1 = false;
            HMiCT_StationIDCurrent_U8=0;
            HMiCT_StationIDNext_U8=0;
            HMiCT_SetFlagChecker_U8 = 0x55;
            HMiCT_AdjustStation_B1 = false;
            ChangePage(PAGE_INDEX_MAINTAIN);
        }

        void C_Page_Stationset::OnComBtn2Clk()
        {

        }

        void C_Page_Stationset::OnComBtn3Clk()
        {

        }

        void C_Page_Stationset::OnComBtn4Clk()
        {

        }

        void C_Page_Stationset::OnComBtn5Clk()
        {

        }

        void C_Page_Stationset::OnComBtn6Clk()
        {

        }
        void C_Page_Stationset::OnComBtn7Clk()
        {

        }
        void C_Page_Stationset::OnComBtn8Clk()
        {

        }

        void C_Page_Stationset::OnComBtn9Clk()
        {

        }

        void C_Page_Stationset::OnComBtn10Clk()
        {

        }
        void C_Page_Stationset::OnComBtn11Clk()
        {

        }
        void C_Page_Stationset::OnComBtn12Clk()
        {
//            switch(m_CurrentStationFlg)
//            {
//            case STATIONFLG_CURRENT:
//                station_start=m_Currentstation;
//                break;
//            case STATIONFLG_NEXT:
//                station_end=m_Nextstation;
//                break;
//            }
            ((CButton *)GetDlgItem(IDLB_COM_BTN12))->ChangeButtonState(LBUTTON_DOWN);
            ((CButton*)GetDlgItem(IDLB_COM_BTN12))->ChangeButtonAutoUpState(false);
            HMiCT_AdjustStation_B1 = true;
            HMiCT_SetFlagChecker_U8 = 0xaa;
            HMiCT_StationIDCurrent_U8=m_Currentstation;
            HMiCT_StationIDNext_U8=m_Nextstation;

            HMiCT_StationIDFirst_U8 = m_Startstation;
            HMiCT_StationIDLast_U8 = m_Endstation;
            HMiCT_SAVEFirstStation_B1 = true;
            HMiCT_SAVELastStation_B1 = true;
            m_confirmflg = true;
        }
#else
        void C_Page_Stationset::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_INITIALSETTING);
        }

        void C_Page_Stationset::OnComBtn2Clk()
        {

        }

        void C_Page_Stationset::OnComBtn3Clk()
        {

        }

        void C_Page_Stationset::OnComBtn4Clk()
        {

        }

        void C_Page_Stationset::OnComBtn5Clk()
        {

        }

        void C_Page_Stationset::OnComBtn6Clk()
        {
            switch(m_CurrentStationFlg)
            {
            case STATIONFLG_START:
                station_start=m_Currentstation;
                break;
            case STATIONFLG_END:
                station_end=m_Nextstation;
                break;
            }

            ChangePage(PAGE_INDEX_INITIALSETTING);
        }
#endif
void C_Page_Stationset::OnBtnAutoMode()
{
    ((CButton *)GetDlgItem(ID_PIBCAUTOMODE_BTN))->ChangeButtonState(LBUTTON_DOWN);
    ((CButton*)GetDlgItem(ID_PIBCAUTOMODE_BTN))->ChangeButtonAutoUpState(false);
    ((CButton *)GetDlgItem(ID_PIBCMANUALMODE_BTN))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_PIBCMANUALMODE_BTN))->ChangeButtonAutoUpState(true);
    HMiCT_PISMODE_B1 = false;
}
void C_Page_Stationset::OnBtnManualMode()
{
    ((CButton *)GetDlgItem(ID_PIBCAUTOMODE_BTN))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_PIBCAUTOMODE_BTN))->ChangeButtonAutoUpState(true);
    ((CButton *)GetDlgItem(ID_PIBCMANUALMODE_BTN))->ChangeButtonState(LBUTTON_DOWN);
    ((CButton*)GetDlgItem(ID_PIBCMANUALMODE_BTN))->ChangeButtonAutoUpState(false);
    HMiCT_PISMODE_B1 = true;

}
void C_Page_Stationset::OnBtnCurrentMode()
{
    ((CButton *)GetDlgItem(ID_PIBCSTATIONSET_BUTTON_01))->ChangeButtonState(LBUTTON_DOWN);
    ((CButton*)GetDlgItem(ID_PIBCSTATIONSET_BUTTON_01))->ChangeButtonAutoUpState(false);
    ((CButton *)GetDlgItem(ID_PIBCSTATIONSET_BUTTON_02))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_PIBCSTATIONSET_BUTTON_02))->ChangeButtonAutoUpState(true);
    ((CButton *)GetDlgItem(ID_PIBSTARTSTATION_BTN))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_PIBSTARTSTATION_BTN))->ChangeButtonAutoUpState(true);
    ((CButton *)GetDlgItem(ID_PIBENDSTATION_BTN))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_PIBENDSTATION_BTN))->ChangeButtonAutoUpState(true);
    m_CurrentStationFlg = 0;
}
void C_Page_Stationset::OnBtnNextMode()
{
    ((CButton *)GetDlgItem(ID_PIBCSTATIONSET_BUTTON_01))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_PIBCSTATIONSET_BUTTON_01))->ChangeButtonAutoUpState(true);
    ((CButton *)GetDlgItem(ID_PIBCSTATIONSET_BUTTON_02))->ChangeButtonState(LBUTTON_DOWN);
    ((CButton*)GetDlgItem(ID_PIBCSTATIONSET_BUTTON_02))->ChangeButtonAutoUpState(false);
    ((CButton *)GetDlgItem(ID_PIBSTARTSTATION_BTN))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_PIBSTARTSTATION_BTN))->ChangeButtonAutoUpState(true);
    ((CButton *)GetDlgItem(ID_PIBENDSTATION_BTN))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_PIBENDSTATION_BTN))->ChangeButtonAutoUpState(true);
    m_CurrentStationFlg = 1;
}

void C_Page_Stationset::OnBtnStartMode()
{
    ((CButton *)GetDlgItem(ID_PIBCSTATIONSET_BUTTON_01))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_PIBCSTATIONSET_BUTTON_01))->ChangeButtonAutoUpState(true);
    ((CButton *)GetDlgItem(ID_PIBCSTATIONSET_BUTTON_02))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_PIBCSTATIONSET_BUTTON_02))->ChangeButtonAutoUpState(true);
    ((CButton *)GetDlgItem(ID_PIBSTARTSTATION_BTN))->ChangeButtonState(LBUTTON_DOWN);
    ((CButton*)GetDlgItem(ID_PIBSTARTSTATION_BTN))->ChangeButtonAutoUpState(false);
    ((CButton *)GetDlgItem(ID_PIBENDSTATION_BTN))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_PIBENDSTATION_BTN))->ChangeButtonAutoUpState(true);
    m_CurrentStationFlg = 2;
}
void C_Page_Stationset::OnBtnEndMode()
{
    ((CButton *)GetDlgItem(ID_PIBCSTATIONSET_BUTTON_01))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_PIBCSTATIONSET_BUTTON_01))->ChangeButtonAutoUpState(true);
    ((CButton *)GetDlgItem(ID_PIBCSTATIONSET_BUTTON_02))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_PIBCSTATIONSET_BUTTON_02))->ChangeButtonAutoUpState(true);
    ((CButton *)GetDlgItem(ID_PIBSTARTSTATION_BTN))->ChangeButtonState(LBUTTON_UP);
    ((CButton*)GetDlgItem(ID_PIBSTARTSTATION_BTN))->ChangeButtonAutoUpState(true);
    ((CButton *)GetDlgItem(ID_PIBENDSTATION_BTN))->ChangeButtonState(LBUTTON_DOWN);
    ((CButton*)GetDlgItem(ID_PIBENDSTATION_BTN))->ChangeButtonAutoUpState(false);
    m_CurrentStationFlg = 3;
}
QString C_Page_Stationset::GetStationNameByID(int nStationID)
{
    QString retStr = "- -";



        if (nStationID == 101)
        {
            retStr = QObject::trUtf8("东风公司");
        }
        if (nStationID == 102)
        {
            retStr = QObject::trUtf8("车城东路");
        }
        if (nStationID == 103)
        {
            retStr = QObject::trUtf8("江城大道");
        }
        if (nStationID == 104)
        {
            retStr = QObject::trUtf8("老关村");
        }
        if (nStationID == 105)
        {
            retStr = QObject::trUtf8("国博中心南");
        }
        if (nStationID == 106)
        {
            retStr = QObject::trUtf8("国博中心北");
        }
        if (nStationID == 107)
        {
            retStr = QObject::trUtf8("前进村");
        }
        if (nStationID == 108)
        {
            retStr = QObject::trUtf8("建港路");
        }
        if (nStationID == 109)
        {
            retStr = QObject::trUtf8("马鹦路");
        }
        if (nStationID == 110)
        {
            retStr = QObject::trUtf8("钟家村");
        }
        if (nStationID == 111)
        {
            retStr = QObject::trUtf8("琴台");
        }
        if (nStationID == 112)
        {
            retStr = QObject::trUtf8("武胜路");
        }
        if (nStationID == 113)
        {
            retStr = QObject::trUtf8("汉正街");
        }
        if (nStationID == 114)
        {
            retStr = QObject::trUtf8("六渡桥");
        }
        if (nStationID == 115)
        {
            retStr = QObject::trUtf8("江汉路");
        }
        if (nStationID == 116)
        {
            retStr = QObject::trUtf8("大智路");
        }
        if (nStationID == 117)
        {
            retStr = QObject::trUtf8("苗栗路");
        }
        if (nStationID == 118)
        {
            retStr = QObject::trUtf8("香港路");
        }
        if (nStationID == 119)
        {
            retStr = QObject::trUtf8("三眼桥");
        }
        if (nStationID == 120)
        {
            retStr = QObject::trUtf8("唐家墩");
        }
        if (nStationID == 121)
        {
            retStr = QObject::trUtf8("石桥");
        }
        if (nStationID == 122)
        {
            retStr = QObject::trUtf8("杨汊湖");
        }
        if (nStationID == 123)
        {
            retStr = QObject::trUtf8("常青花园");
        }
        if (nStationID == 124)
        {
            retStr = QObject::trUtf8("轻工大学");
        }
        if (nStationID == 125)
        {
            retStr = QObject::trUtf8("园博园北");
        }
        if (nStationID == 126)
        {
            retStr = QObject::trUtf8("金银湖");
        }
        if (nStationID == 127)
        {
            retStr = QObject::trUtf8("金银湖公园");
        }





    return retStr;
}
void C_Page_Stationset::OnBtn11Clk()
{
    SetStationButtonDownByID(ID_PIBCSTATIONSET_BUTTON_11);
    switch(m_CurrentStationFlg)
    {
    case 0:
        m_Currentstation=101;
        break;
    case 1:
        m_Nextstation=101;
        break;
    case 2:
        m_Startstation=101;
        break;
    case 3:
        m_Endstation=101;
        break;
    }
}

void C_Page_Stationset::OnBtn12Clk()
{
    SetStationButtonDownByID(ID_PIBCSTATIONSET_BUTTON_12);
    switch(m_CurrentStationFlg)
    {
    case 0:
        m_Currentstation=102;
        break;
    case 1:
        m_Nextstation=102;
        break;
    case 2:
        m_Startstation=102;
        break;
    case 3:
        m_Endstation=102;
        break;
    }

}

void C_Page_Stationset::OnBtn13Clk()
{
    SetStationButtonDownByID(ID_PIBCSTATIONSET_BUTTON_13);
    switch(m_CurrentStationFlg)
    {
    case 0:
        m_Currentstation=103;
        break;
    case 1:
        m_Nextstation=103;
        break;
    case 2:
        m_Startstation=103;
        break;
    case 3:
        m_Endstation=103;
        break;
    }
}

void C_Page_Stationset::OnBtn14Clk()
{
    SetStationButtonDownByID(ID_PIBCSTATIONSET_BUTTON_14);
    switch(m_CurrentStationFlg)
    {
    case 0:
        m_Currentstation=104;
        break;
    case 1:
        m_Nextstation=104;
        break;
    case 2:
        m_Startstation=104;
        break;
    case 3:
        m_Endstation=104;
        break;
    }

}

void C_Page_Stationset::OnBtn15Clk()
{
    SetStationButtonDownByID(ID_PIBCSTATIONSET_BUTTON_15);
    switch(m_CurrentStationFlg)
    {
    case 0:
        m_Currentstation=105;
        break;
    case 1:
        m_Nextstation=105;
        break;
    case 2:
        m_Startstation=105;
        break;
    case 3:
        m_Endstation=105;
        break;
    }

}

void C_Page_Stationset::OnBtn16Clk()
{
    SetStationButtonDownByID(ID_PIBCSTATIONSET_BUTTON_16);
    switch(m_CurrentStationFlg)
    {
    case 0:
        m_Currentstation=106;
        break;
    case 1:
        m_Nextstation=106;
        break;
    case 2:
        m_Startstation=106;
        break;
    case 3:
        m_Endstation=106;
        break;
    }

}

void C_Page_Stationset::OnBtn17Clk()
{
    SetStationButtonDownByID(ID_PIBCSTATIONSET_BUTTON_17);
    switch(m_CurrentStationFlg)
    {
    case 0:
        m_Currentstation=107;
        break;
    case 1:
        m_Nextstation=107;
        break;
    case 2:
        m_Startstation=107;
        break;
    case 3:
        m_Endstation=107;
        break;
    }

}

void C_Page_Stationset::OnBtn18Clk()
{
    SetStationButtonDownByID(ID_PIBCSTATIONSET_BUTTON_18);
    switch(m_CurrentStationFlg)
    {
    case 0:
        m_Currentstation=108;
        break;
    case 1:
        m_Nextstation=108;
        break;
    case 2:
        m_Startstation=108;
        break;
    case 3:
        m_Endstation=108;
        break;
    }

}

void C_Page_Stationset::OnBtn19Clk()
{
    SetStationButtonDownByID(ID_PIBCSTATIONSET_BUTTON_19);
    switch(m_CurrentStationFlg)
    {
    case 0:
        m_Currentstation=109;
        break;
    case 1:
        m_Nextstation=109;
        break;
    case 2:
        m_Startstation=109;
        break;
    case 3:
        m_Endstation=109;
        break;
    }
}



void C_Page_Stationset::OnBtn20Clk()
{
    SetStationButtonDownByID(ID_PIBCSTATIONSET_BUTTON_20);
    switch(m_CurrentStationFlg)
    {
    case 0:
        m_Currentstation=110;
        break;
    case 1:
        m_Nextstation=110;
        break;
    case 2:
        m_Startstation=110;
        break;
    case 3:
        m_Endstation=110;
        break;
    }

}

void C_Page_Stationset::OnBtn21Clk()
{
    SetStationButtonDownByID(ID_PIBCSTATIONSET_BUTTON_21);
    switch(m_CurrentStationFlg)
    {
    case 0:
        m_Currentstation=111;
        break;
    case 1:
        m_Nextstation=111;
        break;
    case 2:
        m_Startstation=111;
        break;
    case 3:
        m_Endstation=111;
        break;
    }

}

void C_Page_Stationset::OnBtn22Clk()
{
    SetStationButtonDownByID(ID_PIBCSTATIONSET_BUTTON_22);
    switch(m_CurrentStationFlg)
    {
    case 0:
        m_Currentstation=112;
        break;
    case 1:
        m_Nextstation=112;
        break;
    case 2:
        m_Startstation=112;
        break;
    case 3:
        m_Endstation=112;
        break;
    }

}

void C_Page_Stationset::OnBtn23Clk()
{
    SetStationButtonDownByID(ID_PIBCSTATIONSET_BUTTON_23);
    switch(m_CurrentStationFlg)
    {
    case 0:
        m_Currentstation=113;
        break;
    case 1:
        m_Nextstation=113;
        break;
    case 2:
        m_Startstation=113;
        break;
    case 3:
        m_Endstation=113;
        break;
    }
}

void C_Page_Stationset::OnBtn24Clk()
{
    SetStationButtonDownByID(ID_PIBCSTATIONSET_BUTTON_24);
    switch(m_CurrentStationFlg)
    {
    case 0:
        m_Currentstation=114;
        break;
    case 1:
        m_Nextstation=114;
        break;
    case 2:
        m_Startstation=114;
        break;
    case 3:
        m_Endstation=114;
        break;
    }

}


void C_Page_Stationset::OnBtn25Clk()
{
    SetStationButtonDownByID(ID_PIBCSTATIONSET_BUTTON_25);
    switch(m_CurrentStationFlg)
    {
    case 0:
        m_Currentstation=115;
        break;
    case 1:
        m_Nextstation=115;
        break;
    case 2:
        m_Startstation=115;
        break;
    case 3:
        m_Endstation=115;
        break;
    }
}

void C_Page_Stationset::OnBtn26Clk()
{
    SetStationButtonDownByID(ID_PIBCSTATIONSET_BUTTON_26);
    switch(m_CurrentStationFlg)
    {
    case 0:
        m_Currentstation=116;
        break;
    case 1:
        m_Nextstation=116;
        break;
    case 2:
        m_Startstation=116;
        break;
    case 3:
        m_Endstation=116;
        break;
    }

}

void C_Page_Stationset::OnBtn27Clk()
{
    SetStationButtonDownByID(ID_PIBCSTATIONSET_BUTTON_27);
    switch(m_CurrentStationFlg)
    {
    case 0:
        m_Currentstation=117;
        break;
    case 1:
        m_Nextstation=117;
        break;
    case 2:
        m_Startstation=117;
        break;
    case 3:
        m_Endstation=117;
        break;
    }
}

void C_Page_Stationset::OnBtn28Clk()
{
    SetStationButtonDownByID(ID_PIBCSTATIONSET_BUTTON_28);
    switch(m_CurrentStationFlg)
    {
    case 0:
        m_Currentstation=118;
        break;
    case 1:
        m_Nextstation=118;
        break;
    case 2:
        m_Startstation=118;
        break;
    case 3:
        m_Endstation=118;
        break;
    }

}

void C_Page_Stationset::OnBtn29Clk()
{
    SetStationButtonDownByID(ID_PIBCSTATIONSET_BUTTON_29);
    switch(m_CurrentStationFlg)
    {
    case 0:
        m_Currentstation=119;
        break;
    case 1:
        m_Nextstation=119;
        break;
    case 2:
        m_Startstation=119;
        break;
    case 3:
        m_Endstation=119;
        break;
    }
}
void C_Page_Stationset::OnBtn30Clk()
{
    SetStationButtonDownByID(ID_PIBCSTATIONSET_BUTTON_30);
    switch(m_CurrentStationFlg)
    {
    case 0:
        m_Currentstation=120;
        break;
    case 1:
        m_Nextstation=120;
        break;
    case 2:
        m_Startstation=120;
        break;
    case 3:
        m_Endstation=120;
        break;
    }
}

void C_Page_Stationset::OnBtn31Clk()
{
    SetStationButtonDownByID(ID_PIBCSTATIONSET_BUTTON_31);
    switch(m_CurrentStationFlg)
    {
    case 0:
        m_Currentstation=121;
        break;
    case 1:
        m_Nextstation=121;
        break;
    case 2:
        m_Startstation=121;
        break;
    case 3:
        m_Endstation=121;
        break;
    }
}

void C_Page_Stationset::OnBtn32Clk()
{
    SetStationButtonDownByID(ID_PIBCSTATIONSET_BUTTON_32);
    switch(m_CurrentStationFlg)
    {
    case 0:
        m_Currentstation=122;
        break;
    case 1:
        m_Nextstation=122;
        break;
    case 2:
        m_Startstation=122;
        break;
    case 3:
        m_Endstation=122;
        break;
    }
}
//二号线
void C_Page_Stationset::OnBtn33Clk()
{
    SetStationButtonDownByID(ID_PIBCSTATIONSET_BUTTON_33);
    switch(m_CurrentStationFlg)
    {
    case 0:
        m_Currentstation=123;
        break;
    case 1:
        m_Nextstation=123;
        break;
    case 2:
        m_Startstation=123;
        break;
    case 3:
        m_Endstation=123;
        break;
    }

}



void C_Page_Stationset::OnBtn34Clk()
{
    SetStationButtonDownByID(ID_PIBCSTATIONSET_BUTTON_34);
    switch(m_CurrentStationFlg)
    {
    case 0:
        m_Currentstation=124;
        break;
    case 1:
        m_Nextstation=124;
        break;
    case 2:
        m_Startstation=124;
        break;
    case 3:
        m_Endstation=124;
        break;
    }
}

void C_Page_Stationset::OnBtn35Clk()
{
    SetStationButtonDownByID(ID_PIBCSTATIONSET_BUTTON_35);
    switch(m_CurrentStationFlg)
    {
    case 0:
        m_Currentstation=125;
        break;
    case 1:
        m_Nextstation=125;
        break;
    case 2:
        m_Startstation=125;
        break;
    case 3:
        m_Endstation=125;
        break;
    }

}

void C_Page_Stationset::OnBtn36Clk()
{
    SetStationButtonDownByID(ID_PIBCSTATIONSET_BUTTON_36);
    switch(m_CurrentStationFlg)
    {
    case 0:
        m_Currentstation=126;
        break;
    case 1:
        m_Nextstation=126;
        break;
    case 2:
        m_Startstation=126;
        break;
    case 3:
        m_Endstation=126;
        break;
    }
}
void C_Page_Stationset::OnBtn37Clk()
{
    SetStationButtonDownByID(ID_PIBCSTATIONSET_BUTTON_37);
    switch(m_CurrentStationFlg)
    {
    case 0:
        m_Currentstation=127;
        break;
    case 1:
        m_Nextstation=127;
        break;
    case 2:
        m_Startstation=127;
        break;
    case 3:
        m_Endstation=127;
        break;
    }
}


void C_Page_Stationset::SetStationButtonDownByID(int nID)
{
    int nBtnIDArray[] =
    {
        ID_PIBCSTATIONSET_BUTTON_11,
        ID_PIBCSTATIONSET_BUTTON_12,
        ID_PIBCSTATIONSET_BUTTON_13,
        ID_PIBCSTATIONSET_BUTTON_14,
        ID_PIBCSTATIONSET_BUTTON_15,
        ID_PIBCSTATIONSET_BUTTON_16,
        ID_PIBCSTATIONSET_BUTTON_17,
        ID_PIBCSTATIONSET_BUTTON_18,
        ID_PIBCSTATIONSET_BUTTON_19,
        ID_PIBCSTATIONSET_BUTTON_20,
        ID_PIBCSTATIONSET_BUTTON_21,
        ID_PIBCSTATIONSET_BUTTON_22,
        ID_PIBCSTATIONSET_BUTTON_23,
        ID_PIBCSTATIONSET_BUTTON_24,
        ID_PIBCSTATIONSET_BUTTON_25,
        ID_PIBCSTATIONSET_BUTTON_26,
        ID_PIBCSTATIONSET_BUTTON_27,
        ID_PIBCSTATIONSET_BUTTON_28,
        ID_PIBCSTATIONSET_BUTTON_29,
        ID_PIBCSTATIONSET_BUTTON_30,
        ID_PIBCSTATIONSET_BUTTON_31,
        ID_PIBCSTATIONSET_BUTTON_32,
        ID_PIBCSTATIONSET_BUTTON_33,
        ID_PIBCSTATIONSET_BUTTON_34,
        ID_PIBCSTATIONSET_BUTTON_35,
        ID_PIBCSTATIONSET_BUTTON_36,
        ID_PIBCSTATIONSET_BUTTON_37,

//     ID_PIBCSTATIONSET_BUTTON_5_2,
    };

    for (int i=0; i<27; i++)
    {
        if (nBtnIDArray[i] == nID)
        {
            ((CButton*)GetDlgItem(nBtnIDArray[i]))->ChangeButtonState(LBUTTON_DOWN);
        }
        else
        {
            ((CButton*)GetDlgItem(nBtnIDArray[i]))->ChangeButtonState(LBUTTON_UP);
        }
    }
}

void C_Page_Stationset::SetStationButtonDownByName(QString stationName)
{
    int nBtnIDArray[] =
    {
        ID_PIBCSTATIONSET_BUTTON_11,
        ID_PIBCSTATIONSET_BUTTON_12,
        ID_PIBCSTATIONSET_BUTTON_13,
        ID_PIBCSTATIONSET_BUTTON_14,
        ID_PIBCSTATIONSET_BUTTON_15,
        ID_PIBCSTATIONSET_BUTTON_16,
        ID_PIBCSTATIONSET_BUTTON_17,
        ID_PIBCSTATIONSET_BUTTON_18,
        ID_PIBCSTATIONSET_BUTTON_19,
        ID_PIBCSTATIONSET_BUTTON_20,
        ID_PIBCSTATIONSET_BUTTON_21,
        ID_PIBCSTATIONSET_BUTTON_22,
        ID_PIBCSTATIONSET_BUTTON_23,
        ID_PIBCSTATIONSET_BUTTON_24,
        ID_PIBCSTATIONSET_BUTTON_25,
        ID_PIBCSTATIONSET_BUTTON_26,
        ID_PIBCSTATIONSET_BUTTON_27,
        ID_PIBCSTATIONSET_BUTTON_28,
        ID_PIBCSTATIONSET_BUTTON_29,
        ID_PIBCSTATIONSET_BUTTON_30,
        ID_PIBCSTATIONSET_BUTTON_31,
        ID_PIBCSTATIONSET_BUTTON_32,
        ID_PIBCSTATIONSET_BUTTON_33,
        ID_PIBCSTATIONSET_BUTTON_34,
        ID_PIBCSTATIONSET_BUTTON_35,
        ID_PIBCSTATIONSET_BUTTON_36,
        ID_PIBCSTATIONSET_BUTTON_37,

//     ID_PIBCSTATIONSET_BUTTON_5_2,
    };

    for (int i = 0; i < 27; i++)
    {
        QString str = ((CButton*)GetDlgItem(nBtnIDArray[i]))->GetCtrlText();
        if (str == stationName)
            ((CButton*)GetDlgItem(nBtnIDArray[i]))->ChangeButtonState(LBUTTON_DOWN);
        else
            ((CButton*)GetDlgItem(nBtnIDArray[i]))->ChangeButtonState(LBUTTON_UP);
    }
}
