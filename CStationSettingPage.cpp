#include "CStationSettingPage.h"

ROMDATA g_PicRom_StationSetting[] =
{
    //D_COMMON_PAGE_HEADER(QObject::trUtf8("站设置") )
    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("车站设置") )
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


    {QObject::trUtf8("东风公司"),                 D_FONT_BOLD(8),      QRect(25,  107, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_11     },
    {QObject::trUtf8("车城东路"),                 D_FONT_BOLD(8),      QRect(155, 107, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,           ID_PIBSTATIONSET_BUTTON_12      },
    {QObject::trUtf8("江城大道"),                 D_FONT_BOLD(8),      QRect(285, 107, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_13      },
    {QObject::trUtf8("老关村"),                 D_FONT_BOLD(8),      QRect(415, 107, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_14      },
    {QObject::trUtf8("国博中心南"),                 D_FONT_BOLD(8),      QRect(545, 107, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_15      },
    {QObject::trUtf8("国博中心北"),                 D_FONT_BOLD(8),      QRect(675, 107, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_16      },

    {QObject::trUtf8("前进村"),                 D_FONT_BOLD(8),      QRect(25,  147, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_17      },
    {QObject::trUtf8("建港路"),                 D_FONT_BOLD(8),      QRect(155, 147, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_18      },
    {QObject::trUtf8("马鹦路"),                 D_FONT_BOLD(8),      QRect(285, 147, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_19      },
    {QObject::trUtf8("钟家村"),                 D_FONT_BOLD(8),      QRect(415, 147, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_20      },
    {QObject::trUtf8("琴台"),                 D_FONT_BOLD(8),      QRect(545, 147, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_21      },
    {QObject::trUtf8("武胜路"),                 D_FONT_BOLD(8),      QRect(675, 147, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_22      },


    {QObject::trUtf8("汉正街"),                 D_FONT_BOLD(8),      QRect(25,  187, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_23      },
    {QObject::trUtf8("六渡桥"),                 D_FONT_BOLD(8),      QRect(155,  187, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_24      },
    {QObject::trUtf8("江汉路"),                 D_FONT_BOLD(8),      QRect(285, 187, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_25      },
    {QObject::trUtf8("大智路"),                 D_FONT_BOLD(8),      QRect(415, 187, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_26      },
    {QObject::trUtf8("苗栗路"),                 D_FONT_BOLD(8),      QRect(545, 187, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_27      },
    {QObject::trUtf8("香港路"),                 D_FONT_BOLD(8),      QRect(675, 187, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_28      },

    {QObject::trUtf8("三眼桥"),                 D_FONT_BOLD(8),      QRect(25, 227, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_29      },
    {QObject::trUtf8("唐家墩"),                 D_FONT_BOLD(8),      QRect(155,  227, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_30      },
    {QObject::trUtf8("石桥"),                 D_FONT_BOLD(8),      QRect(285, 227, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_31      },
    {QObject::trUtf8("杨汊湖"),                 D_FONT_BOLD(8),      QRect(415, 227, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_32      },
    {QObject::trUtf8("常青花园"),                 D_FONT_BOLD(8),      QRect(545, 227, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_33      },
    {QObject::trUtf8("轻工大学"),                 D_FONT_BOLD(8),      QRect(675, 227, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_34      },

    {QObject::trUtf8("园博园北"),                 D_FONT_BOLD(8),      QRect(25, 267, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_35     },
    {QObject::trUtf8("金银湖"),                 D_FONT_BOLD(8),      QRect(155,  267, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_36      },
    {QObject::trUtf8("金银湖公园"),                 D_FONT_BOLD(8),      QRect(285, 267, 100, 30),           Qt::black,                Qt::lightGray,                CONTROL_BUTTON,            ID_PIBSTATIONSET_BUTTON_37      },






};
int g_StationSettingRomLen = sizeof(g_PicRom_StationSetting)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CStationSettingPage,CPage)
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
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_11, OnBtn11Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_12, OnBtn12Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_13, OnBtn13Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_14, OnBtn14Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_15, OnBtn15Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_16, OnBtn16Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_17, OnBtn17Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_18, OnBtn18Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_19, OnBtn19Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_20, OnBtn20Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_21, OnBtn21Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_22, OnBtn22Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_23, OnBtn23Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_24, OnBtn24Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_25, OnBtn25Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_26, OnBtn26Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_27, OnBtn27Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_28, OnBtn28Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_29, OnBtn29Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_30, OnBtn30Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_31, OnBtn31Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_32, OnBtn32Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_33, OnBtn33Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_34, OnBtn34Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_35, OnBtn35Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_36, OnBtn36Clk)
        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_37, OnBtn37Clk)


//        ON_BTNCLK(ID_PIBSTATIONSET_BUTTON_5_2, OnBtn52Clk)
END_MESSAGE_MAP()

CStationSettingPage::CStationSettingPage()
{
}

void CStationSettingPage::OnUpdatePage()
{

}

void CStationSettingPage::OnInitPage()
{
    int nBtnIDArray[] =
    {
     ID_PIBSTATIONSET_BUTTON_11,
     ID_PIBSTATIONSET_BUTTON_12,
     ID_PIBSTATIONSET_BUTTON_13,
     ID_PIBSTATIONSET_BUTTON_14,
     ID_PIBSTATIONSET_BUTTON_15,
     ID_PIBSTATIONSET_BUTTON_16,
     ID_PIBSTATIONSET_BUTTON_17,
     ID_PIBSTATIONSET_BUTTON_18,
     ID_PIBSTATIONSET_BUTTON_19,
     ID_PIBSTATIONSET_BUTTON_20,
     ID_PIBSTATIONSET_BUTTON_21,
     ID_PIBSTATIONSET_BUTTON_22,
     ID_PIBSTATIONSET_BUTTON_23,
     ID_PIBSTATIONSET_BUTTON_24,
     ID_PIBSTATIONSET_BUTTON_25,
     ID_PIBSTATIONSET_BUTTON_26,
     ID_PIBSTATIONSET_BUTTON_27,
     ID_PIBSTATIONSET_BUTTON_28,
     ID_PIBSTATIONSET_BUTTON_29,
     ID_PIBSTATIONSET_BUTTON_30,
     ID_PIBSTATIONSET_BUTTON_31,
     ID_PIBSTATIONSET_BUTTON_32,
     ID_PIBSTATIONSET_BUTTON_33,
     ID_PIBSTATIONSET_BUTTON_34,
     ID_PIBSTATIONSET_BUTTON_35,
     ID_PIBSTATIONSET_BUTTON_36,
     ID_PIBSTATIONSET_BUTTON_37,


//     ID_PIBSTATIONSET_BUTTON_5_2,
    };

    for (int i=0; i<27; i++)
        ((CButton*)GetDlgItem(nBtnIDArray[i]))->m_bAutoUpState = false;
}

void CStationSettingPage::OnShowPage()
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
     ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
     ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("确   认"));
#endif

    QString stationName = "";

    switch(m_nStationFlg)
    {
    case STATIONFLG_START:
        stationName = station_start_display;
        break;
    case STATIONFLG_END:
        stationName = station_end_display;
        break;
    default:
        break;
    }
    SetStationButtonDownByName(stationName);
}
#ifdef PAGE_BUTTON_BAR_NEW
        void CStationSettingPage::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_INITIALSETTING);
        }

        void CStationSettingPage::OnComBtn2Clk()
        {

        }

        void CStationSettingPage::OnComBtn3Clk()
        {

        }

        void CStationSettingPage::OnComBtn4Clk()
        {

        }

        void CStationSettingPage::OnComBtn5Clk()
        {

        }

        void CStationSettingPage::OnComBtn6Clk()
        {

        }
        void CStationSettingPage::OnComBtn7Clk()
        {

        }
        void CStationSettingPage::OnComBtn8Clk()
        {

        }

        void CStationSettingPage::OnComBtn9Clk()
        {

        }

        void CStationSettingPage::OnComBtn10Clk()
        {

        }
        void CStationSettingPage::OnComBtn11Clk()
        {

        }
        void CStationSettingPage::OnComBtn12Clk()
        {
            switch(m_nStationFlg)
            {
            case STATIONFLG_START:
                station_start=m_stationindex;
                break;
            case STATIONFLG_END:
                station_end=m_stationindex;
                break;
            }

            ChangePage(PAGE_INDEX_INITIALSETTING);
        }
#else
        void CStationSettingPage::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_INITIALSETTING);
        }

        void CStationSettingPage::OnComBtn2Clk()
        {

        }

        void CStationSettingPage::OnComBtn3Clk()
        {

        }

        void CStationSettingPage::OnComBtn4Clk()
        {

        }

        void CStationSettingPage::OnComBtn5Clk()
        {

        }

        void CStationSettingPage::OnComBtn6Clk()
        {
            switch(m_nStationFlg)
            {
            case STATIONFLG_START:
                station_start=m_stationindex;
                break;
            case STATIONFLG_END:
                station_end=m_stationindex;
                break;
            }

            ChangePage(PAGE_INDEX_INITIALSETTING);
        }
#endif



void CStationSettingPage::OnBtn11Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_11);
    m_stationindex=101;
}

void CStationSettingPage::OnBtn12Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_12);
    m_stationindex=102;
}

void CStationSettingPage::OnBtn13Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_13);
    m_stationindex=103;
}

void CStationSettingPage::OnBtn14Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_14);
    m_stationindex=104;
}

void CStationSettingPage::OnBtn15Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_15);
    m_stationindex=105;
}

void CStationSettingPage::OnBtn16Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_16);
    m_stationindex=106;
}

void CStationSettingPage::OnBtn17Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_17);
    m_stationindex=107;
}

void CStationSettingPage::OnBtn18Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_18);
    m_stationindex=108;
}

void CStationSettingPage::OnBtn19Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_19);
    m_stationindex=109;
}



void CStationSettingPage::OnBtn20Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_20);
    m_stationindex=110;
}

void CStationSettingPage::OnBtn21Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_21);
    m_stationindex=111;
}

void CStationSettingPage::OnBtn22Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_22);
    m_stationindex=112;
}

void CStationSettingPage::OnBtn23Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_23);
    m_stationindex=113;
}

void CStationSettingPage::OnBtn24Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_24);
    m_stationindex=114;
}


void CStationSettingPage::OnBtn25Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_25);
    m_stationindex=115;
}

void CStationSettingPage::OnBtn26Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_26);
    m_stationindex=116;
}

void CStationSettingPage::OnBtn27Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_27);
    m_stationindex=117;
}

void CStationSettingPage::OnBtn28Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_28);
    m_stationindex=118;
}

void CStationSettingPage::OnBtn29Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_29);
    m_stationindex=119;
}

void CStationSettingPage::OnBtn30Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_30);
    m_stationindex=120;
}

void CStationSettingPage::OnBtn31Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_31);
    m_stationindex=121;
}

void CStationSettingPage::OnBtn32Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_32);
    m_stationindex=122;
}
//二号线
void CStationSettingPage::OnBtn33Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_33);
    m_stationindex=123;
}



void CStationSettingPage::OnBtn34Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_34);
    m_stationindex=124;
}

void CStationSettingPage::OnBtn35Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_35);
    m_stationindex=125;
}

void CStationSettingPage::OnBtn36Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_36);
    m_stationindex=126;
}
void CStationSettingPage::OnBtn37Clk()
{
    SetStationButtonDownByID(ID_PIBSTATIONSET_BUTTON_37);
    m_stationindex=127;
}


void CStationSettingPage::SetStationButtonDownByID(int nID)
{
    int nBtnIDArray[] =
    {
        ID_PIBSTATIONSET_BUTTON_11,
        ID_PIBSTATIONSET_BUTTON_12,
        ID_PIBSTATIONSET_BUTTON_13,
        ID_PIBSTATIONSET_BUTTON_14,
        ID_PIBSTATIONSET_BUTTON_15,
        ID_PIBSTATIONSET_BUTTON_16,
        ID_PIBSTATIONSET_BUTTON_17,
        ID_PIBSTATIONSET_BUTTON_18,
        ID_PIBSTATIONSET_BUTTON_19,
        ID_PIBSTATIONSET_BUTTON_20,
        ID_PIBSTATIONSET_BUTTON_21,
        ID_PIBSTATIONSET_BUTTON_22,
        ID_PIBSTATIONSET_BUTTON_23,
        ID_PIBSTATIONSET_BUTTON_24,
        ID_PIBSTATIONSET_BUTTON_25,
        ID_PIBSTATIONSET_BUTTON_26,
        ID_PIBSTATIONSET_BUTTON_27,
        ID_PIBSTATIONSET_BUTTON_28,
        ID_PIBSTATIONSET_BUTTON_29,
        ID_PIBSTATIONSET_BUTTON_30,
        ID_PIBSTATIONSET_BUTTON_31,
        ID_PIBSTATIONSET_BUTTON_32,
        ID_PIBSTATIONSET_BUTTON_33,
        ID_PIBSTATIONSET_BUTTON_34,
        ID_PIBSTATIONSET_BUTTON_35,
        ID_PIBSTATIONSET_BUTTON_36,
        ID_PIBSTATIONSET_BUTTON_37,

//     ID_PIBSTATIONSET_BUTTON_5_2,
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

void CStationSettingPage::SetStationButtonDownByName(QString stationName)
{
    int nBtnIDArray[] =
    {
        ID_PIBSTATIONSET_BUTTON_11,
        ID_PIBSTATIONSET_BUTTON_12,
        ID_PIBSTATIONSET_BUTTON_13,
        ID_PIBSTATIONSET_BUTTON_14,
        ID_PIBSTATIONSET_BUTTON_15,
        ID_PIBSTATIONSET_BUTTON_16,
        ID_PIBSTATIONSET_BUTTON_17,
        ID_PIBSTATIONSET_BUTTON_18,
        ID_PIBSTATIONSET_BUTTON_19,
        ID_PIBSTATIONSET_BUTTON_20,
        ID_PIBSTATIONSET_BUTTON_21,
        ID_PIBSTATIONSET_BUTTON_22,
        ID_PIBSTATIONSET_BUTTON_23,
        ID_PIBSTATIONSET_BUTTON_24,
        ID_PIBSTATIONSET_BUTTON_25,
        ID_PIBSTATIONSET_BUTTON_26,
        ID_PIBSTATIONSET_BUTTON_27,
        ID_PIBSTATIONSET_BUTTON_28,
        ID_PIBSTATIONSET_BUTTON_29,
        ID_PIBSTATIONSET_BUTTON_30,
        ID_PIBSTATIONSET_BUTTON_31,
        ID_PIBSTATIONSET_BUTTON_32,
        ID_PIBSTATIONSET_BUTTON_33,
        ID_PIBSTATIONSET_BUTTON_34,
        ID_PIBSTATIONSET_BUTTON_35,
        ID_PIBSTATIONSET_BUTTON_36,
        ID_PIBSTATIONSET_BUTTON_37,

//     ID_PIBSTATIONSET_BUTTON_5_2,
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
