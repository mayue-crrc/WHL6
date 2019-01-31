#include "C_Page_Maintain.h"

#include <qdatetime.h>
#include "cwarningdialog.h"
#include "C_Debug_Parameter_Setting.h"
#include "CConfirmDialog.h"
#include <qprocess.h>
#include <qapplication.h>

extern bool FindUSBDevice(string& usbpath);
extern bool FindFile(const QString &path,vector<string>& filelist);

ROMDATA g_PicRom_Maintain[] =
{
    /*string                font                            rc                  foreground color              background color                control type                   ID           */
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW_WH
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif
    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("维修") )
   // D_COMMON_PAGE_HEADER(QObject::trUtf8("维修菜单"))

//    {QObject::trUtf8("通信中断"),          D_FONT_BOLD(8),      QRect( 20,   6, 162,  30),          Qt::red,                 Qt::white,              CONTROL_LABEL,           ID_PICMAINTAIN_COMMINTERRUPT            },

    {QObject::trUtf8("制动"),        D_FONT_BOLD(8),      QRect( 30, 100, 130,  40),           Qt::black,               Qt::gray,              CONTROL_BUTTON,             ID_PICMAINTAIN_BUTTON_POINT1_1         },
    {QObject::trUtf8("牵引"),      D_FONT_BOLD(8),      QRect(180, 100, 130,  40),           Qt::black,               Qt::gray,              CONTROL_BUTTON,           ID_PICMAINTAIN_BUTTON_POINT1_2     },
    {QObject::trUtf8("辅助"),      D_FONT_BOLD(8),      QRect(330, 100, 130,  40),           Qt::black,               Qt::gray,              CONTROL_BUTTON,           ID_PICMAINTAIN_BUTTON_POINT1_3    },
    {QObject::trUtf8("空调"),          D_FONT_BOLD(8),      QRect(480, 100, 130,  40),           Qt::black,               Qt::gray,              CONTROL_BUTTON,           ID_PICMAINTAIN_BUTTON_POINT1_4         },
    {QObject::trUtf8("切除复位缓解"),       D_FONT_BOLD(8),      QRect(630, 100, 130,  40),           Qt::black,                Qt::gray,               CONTROL_BUTTON,         ID_PICMAINTAIN_BUTTON_POINT4_4       },

    {QObject::trUtf8("制动自检"),           D_FONT_BOLD(8),      QRect(30, 160, 130,  40),           Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PICMAINTAIN_BUTTON_POINT4_2       },
    {QObject::trUtf8("运输页面"),          D_FONT_BOLD(8),      QRect(180, 160, 130,  40),           Qt::black,                Qt::gray,               CONTROL_BUTTON,         ID_PICMAINTAIN_BUTTON_POINT4_3        },
    {QObject::trUtf8("级位调试"),          D_FONT_BOLD(8),      QRect( 330, 160, 130,  40),           Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PICMAINTAIN_BUTTON_POINT5_1        },
    {QObject::trUtf8("调试界面"),          D_FONT_BOLD(8),      QRect(480, 160, 130,  40),           Qt::black,                Qt::gray,              CONTROL_BUTTON,          ID_PICMAINTAIN_BUTTON_POINT3_4    },
    {QObject::trUtf8("加减速度试验"),       D_FONT_BOLD(8),      QRect( 630, 160, 130,  40),           Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PICMAINTAIN_BUTTON_POINT4_1        },

    {QObject::trUtf8("车号/轮径设置"),      D_FONT_BOLD(8),      QRect(180, 220, 130,  40),           Qt::black,               Qt::gray,              CONTROL_BUTTON,           ID_PICMAINTAIN_BUTTON_POINT2_2   },
    {QObject::trUtf8("时间设置"),          D_FONT_BOLD(8),      QRect(330, 220, 130,  40),           Qt::black,               Qt::gray,              CONTROL_BUTTON,           ID_PICMAINTAIN_BUTTON_POINT2_3       },
    {QObject::trUtf8("门参数设置"),          D_FONT_BOLD(8),      QRect(480, 220, 130,  40),           Qt::black,               Qt::gray,              CONTROL_BUTTON,          ID_PICMAINTAIN_BUTTON_POINT2_4          },
    {QObject::trUtf8("车站设置"),           D_FONT_BOLD(8),      QRect(30, 220, 130,  40),           Qt::black,                Qt::gray,               CONTROL_BUTTON,         ID_PICMAINTAIN_BUTTON_POINT4_5       },
    {QObject::trUtf8("密码设置"),          D_FONT_BOLD(8),      QRect( 630, 220, 130,  40),           Qt::black,               Qt::gray,              CONTROL_BUTTON,           ID_PICMAINTAIN_BUTTON_POINT2_1   },

    {QObject::trUtf8("故障记录"),          D_FONT_BOLD(8),      QRect( 30, 280, 130,  40),           Qt::black,                Qt::gray,              CONTROL_BUTTON,          ID_PICMAINTAIN_BUTTON_POINT3_1       },
    {QObject::trUtf8("事件记录"),          D_FONT_BOLD(8),      QRect(180, 280, 130,  40),           Qt::black,                Qt::gray,              CONTROL_BUTTON,          ID_PICMAINTAIN_BUTTON_POINT3_5        },
    {QObject::trUtf8("运行记录"),          D_FONT_BOLD(8),      QRect(330, 280, 130,  40),           Qt::black,                Qt::gray,              CONTROL_BUTTON,          ID_PICMAINTAIN_BUTTON_POINT3_2        },
    {QObject::trUtf8("运行记录清零"),       D_FONT_BOLD(8),      QRect(480, 280, 130,  40),           Qt::black,                Qt::gray,              CONTROL_BUTTON,          ID_PICMAINTAIN_BUTTON_POINT3_3         },
    {QObject::trUtf8("网络拓扑"),          D_FONT_BOLD(8),      QRect(630, 280, 130,  40),           Qt::black,               Qt::gray,              CONTROL_BUTTON,           ID_PICMAINTAIN_BUTTON_POINT1_5     },

    {QObject::trUtf8("亮度调节"),                  D_FONT_BOLD(8),      QRect(30, 340, 130,  40),           Qt::black,               Qt::gray,              CONTROL_BUTTON,           ID_PICMAINTAIN_BUTTON_POINT2_5         },

    //{QObject::trUtf8(""),       D_FONT_BOLD(8),      QRect( 180, 340, 130,  40),           Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PICMAINTAIN_BUTTON_POINT5_2        },
    //{QObject::trUtf8("事件记录"),       D_FONT_BOLD(8),      QRect( 330, 340, 130,  40),           Qt::black,                Qt::gray,               CONTROL_BUTTON,          ID_PICMAINTAIN_BUTTON_POINT5_3        },


};
int g_MaintainRomLen = sizeof(g_PicRom_Maintain)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CMaintainPage,CPage)
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




        ON_BTNCLK(ID_PICMAINTAIN_BUTTON_POINT1_1,  OnComBtnClkPOINT1_1)
        ON_BTNCLK(ID_PICMAINTAIN_BUTTON_POINT1_2,  OnComBtnClkPOINT1_2)
        ON_BTNCLK(ID_PICMAINTAIN_BUTTON_POINT1_3,  OnComBtnClkPOINT1_3)
        ON_BTNCLK(ID_PICMAINTAIN_BUTTON_POINT1_4,  OnComBtnClkPOINT1_4)
        ON_BTNCLK(ID_PICMAINTAIN_BUTTON_POINT1_5,  OnComBtnClkPOINT1_5)

        ON_BTNCLK(ID_PICMAINTAIN_BUTTON_POINT2_1,  OnComBtnClkPOINT2_1)
        ON_BTNCLK(ID_PICMAINTAIN_BUTTON_POINT2_2,  OnComBtnClkPOINT2_2)
        ON_BTNCLK(ID_PICMAINTAIN_BUTTON_POINT2_3,  OnComBtnClkPOINT2_3)
        ON_BTNCLK(ID_PICMAINTAIN_BUTTON_POINT2_4,  OnComBtnClkPOINT2_4)
        ON_BTNCLK(ID_PICMAINTAIN_BUTTON_POINT2_5,  OnComBtnClkPOINT2_5)

        ON_BTNCLK(ID_PICMAINTAIN_BUTTON_POINT3_1,  OnComBtnClkPOINT3_1)
        ON_BTNCLK(ID_PICMAINTAIN_BUTTON_POINT3_2,  OnComBtnClkPOINT3_2)
        ON_BTNCLK(ID_PICMAINTAIN_BUTTON_POINT3_3,  OnComBtnClkPOINT3_3)
        ON_BTNCLK(ID_PICMAINTAIN_BUTTON_POINT3_4,  OnComBtnClkPOINT3_4)
        ON_BTNCLK(ID_PICMAINTAIN_BUTTON_POINT3_5,  OnComBtnClkPOINT3_5)

        ON_BTNCLK(ID_PICMAINTAIN_BUTTON_POINT4_1,  OnComBtnClkPOINT4_1)
        ON_BTNCLK(ID_PICMAINTAIN_BUTTON_POINT4_2,  OnComBtnClkPOINT4_2)
        ON_BTNCLK(ID_PICMAINTAIN_BUTTON_POINT4_3,  OnComBtnClkPOINT4_3)
        ON_BTNCLK(ID_PICMAINTAIN_BUTTON_POINT4_4,  OnComBtnClkPOINT4_4)
        ON_BTNCLK(ID_PICMAINTAIN_BUTTON_POINT4_5,  OnComBtnClkPOINT4_5)

        ON_BTNCLK(ID_PICMAINTAIN_BUTTON_POINT5_1,  OnComBtnClkPOINT5_1)
        //ON_BTNCLK(ID_PICMAINTAIN_BUTTON_POINT5_2,  OnComBtnClkPOINT5_2)
       // ON_BTNCLK(ID_PICMAINTAIN_BUTTON_POINT5_3,  OnComBtnClkPOINT5_3)



        ON_BTNCLK(ID_LABEL_REALTIMEFAULTCONFIRM, OnRealtimefaultBtnClk)

        // door check
        END_MESSAGE_MAP()

CMaintainPage::CMaintainPage()
{
    hiddenbtn1 = hiddenbtn2 = 0;
}

void CMaintainPage::OnUpdatePage()
{
    UpdateRealtimefaults();

}

void CMaintainPage::OnInitPage()
{

}

void CMaintainPage::OnShowPage()
{
    ((CButton *)GetDlgItem(IDLB_COM_BTN10))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN11))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN12))->SetCtrlText("");
    //((CButton *)GetDlgItem(ID_PICMAINTAIN_BUTTON_POINT5_3))->HideButton();

#ifdef PAGE_BUTTON_BAR_NEW
//    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("主菜单"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
//    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
//    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
//    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
//    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText("");
//    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText("");
//    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText("");
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("主菜单"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText("");
#endif
    this->InitPageHeader();
}
void CMaintainPage::UpdateRealtimefaults()
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

void CMaintainPage::OnRealtimefaultBtnClk()
{
    g_faultsrom[g_romidx].confirm = true;
    g_realtimeFaultsbarList.removeAt(g_faultcount);
    if(g_faultcount>0)
    g_faultcount--;
    //m_faultcount--;

}

void CMaintainPage::OnComBtn1Clk()
{
    ChangePage(PAGE_INDEX_RUNSTATE);
}

void CMaintainPage::OnComBtn2Clk()
{
    ChangePage(PAGE_INDEX_MAINTAIN);
}

void CMaintainPage::OnComBtn3Clk()
{
     ChangePage(PAGE_INDEX_CARSTATUS3);
}

void CMaintainPage::OnComBtn4Clk()
{
   // ChangePage(PAGE_INDEX_CARSTATUS3);

     ChangePage(PAGE_INDEX_TCUBLOCKREASON);
}

void CMaintainPage::OnComBtn5Clk()
{
     ChangePage(PAGE_INDEX_INSTANCYBROADCAST);
}

void CMaintainPage::OnComBtn6Clk()
{
    ChangePage(PAGE_INDEX_FASPage);
}
void CMaintainPage::OnComBtn7Clk()
{
    ChangePage(PAGE_INDEX_PISALARM);
}

void CMaintainPage::OnComBtn8Clk()
{
    hiddenbtn2++;
}
void CMaintainPage::OnComBtn9Clk()
{
    hiddenbtn1++;
}
void CMaintainPage::OnComBtn10Clk()
{

}
void CMaintainPage::OnComBtn11Clk()
{
    if(hiddenbtn1 == 2 && hiddenbtn2 == 2)
    {
        hiddenbtn1 = hiddenbtn2 = 0;
        ChangePage(PAGE_INDEX_ADMINPWEDIT);
    }else
    {
        hiddenbtn1 = hiddenbtn2 = 0;
    }

}
void CMaintainPage::OnComBtn12Clk()
{

}

void CMaintainPage::OnComBtnClkPOINT1_1()//1_1
{
     ChangePage(PAGE_BRAKESTATUS);
}

void CMaintainPage::OnComBtnClkPOINT1_2()//1_2
{
     ChangePage(PAGE_INDEX_CARSTATUS2);
}

void CMaintainPage::OnComBtnClkPOINT1_3()//1_3
{
    ChangePage(PAGE_INDEX_CARSTATUS1);
}

void CMaintainPage::OnComBtnClkPOINT1_4()//1_4
{
    ChangePage(PAGE_INDEX_HVACSETTING);
}

void CMaintainPage::OnComBtnClkPOINT1_5()//1_5
{
    ChangePage(PAGE_INDEX_COMMSTATUS);
}

void CMaintainPage::OnComBtnClkPOINT2_1()//2_1
{
    pw_select=9;
    ChangePage(PAGE_INDEX_PASSWORD);
    pwdisplay="";
    pw_input="";
}

void CMaintainPage::OnComBtnClkPOINT2_2()//2_2
{
    pw_select=1;
    ChangePage(PAGE_INDEX_PASSWORD);
    pwdisplay="";
    pw_input="";
}

void CMaintainPage::OnComBtnClkPOINT2_3()//2_3
{
    pw_select=3;
    ChangePage(PAGE_INDEX_PASSWORD);
    pwdisplay="";
    pw_input="";

    time_setting_start=1;

    QTime time = QDateTime::currentDateTime().time();
    QDate date = QDate::currentDate();

    time_setting_1 = date.year();
    time_setting_2 = date.month();
    time_setting_3 = date.day();
    time_setting_4 = time.hour();
    time_setting_5 = time.minute();
    time_setting_6 = time.second();
}

void CMaintainPage::OnComBtnClkPOINT2_4()//2_4
{
    pw_select=5;
    ChangePage(PAGE_INDEX_PASSWORD);
    pwdisplay="";
    pw_input="";
}

void CMaintainPage::OnComBtnClkPOINT2_5()//2_5
{
    ChangePage(PAGE_INDEX_LUMSET);
}

void CMaintainPage::OnComBtnClkPOINT3_1()//3_1
{
    SetFaultType(E_FAULTS_TYPE_HISTORY);
    g_eventmode = false;
    ChangePage(PAGE_INDEX_TRACTIONSYSTEMFAULT);
}

void CMaintainPage::OnComBtnClkPOINT3_2()//3_2
{
    ChangePage(PAGE_INDEX_RUNRECORD);
}

void CMaintainPage::OnComBtnClkPOINT3_3()//3_3
{
    pw_select=2;
    ChangePage(PAGE_INDEX_PASSWORD);
    pwdisplay="";
    pw_input="";
}

void CMaintainPage::OnComBtnClkPOINT3_4()//3_4
{
    ChangePage(PAGE_INDEX_DEBUGMAIN);
}

void CMaintainPage::OnComBtnClkPOINT3_5()//3_5
{
    g_eventmode = true;
    ChangePage(PAGE_INDEX_TRACTIONSYSTEMFAULT);
//    static int times = 0;
//    times++;
//    if(times%4 == 0)
//    {
//        times = 0;
//        C_Debug_Parameter_Setting confirmDlg;
//        //confirmDlg.SetConfirmStr(QObject::trUtf8("真的要删除所有LOG文件?"));
//        //confirmDlg.move(GetParentDlg()->x()+150,GetParentDlg()->y()+200);
//        //confirmDlg.show();
//        confirmDlg.exec();
//    }

}

void CMaintainPage::OnComBtnClkPOINT4_1()//4_1
{
     ChangePage(PAGE_INDEX_TRYRUNTEST);
}

void CMaintainPage::OnComBtnClkPOINT4_2()//4_2
{
    ChangePage(PAGE_INDEX_BRAKESELFTEST);
}

void CMaintainPage::OnComBtnClkPOINT4_3()//4_3
{
    ChangePage(PAGE_INDEX_TRANSPORTMODE);

//    ChangePage(PAGE_INDEX_CSTATIONSET);
}

void CMaintainPage::OnComBtnClkPOINT4_4() //4_4
{

     cutOff_Page = 1;
     pw_select=6;

     ChangePage(PAGE_INDEX_PASSWORD);
     pwdisplay="";
     pw_input="";
}

void CMaintainPage::OnComBtnClkPOINT4_5() //4_5
{
    ChangePage(PAGE_INDEX_INITIALSETTING);
//    pw_select=4;
//    ChangePage(PAGE_INDEX_PASSWORD);
//    pwdisplay="";
//    pw_input="";
}

void CMaintainPage::OnComBtnClkPOINT5_1() //5_1
{

   ChangePage(PAGE_INDEX_LEVELDEBUG);

}
void CMaintainPage::OnComBtnClkPOINT5_2() //5_2
{


}
void CMaintainPage::OnComBtnClkPOINT5_3() //5_3
{

}

