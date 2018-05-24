#include "C_Page_Run_Status_Help3.h"


ROMDATA  g_PicRom_RunHelp3[] =
{
    D_COMMON_PAGE_HEADER(QObject::trUtf8("运行帮助") )
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW_WHHELP
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif
    {"",                            D_FONT_BOLD(6),      QRect( 50,  60, 730,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50,  120, 730,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect( 50, 332, 730,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 50, 390, 730,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
//    {"",                            D_FONT_BOLD(6),      QRect( 50, 450, 730,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
   {"",                            D_FONT_BOLD(6),      QRect( 50, 540, 730,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },

    {"",                            D_FONT_BOLD(6),      QRect(52, 90, 730,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 114+30, 580,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 139+30, 580,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 165+30, 580,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 192+30, 580,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 218+30, 580,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 247+30, 580,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 274+30, 580,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 360, 580,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 390, 580,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(52, 422, 730,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 450, 580,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 480, 580,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200, 510, 580,  1),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


    {"",                            D_FONT_BOLD(6),      QRect( 50,  60, 1,  480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(200,  60, 1,  480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(300,  60, 1,  480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(450,  60, 1,  480),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },
    {"",                            D_FONT_BOLD(6),      QRect(780,  60, 1,  481),           Qt::white,                Qt::black,                CONTROL_LINE,           ID_IGNORE         },


    {QObject::trUtf8("显示项目"),                       D_FONT_BOLD(8),      QRect( 52,  61, 145,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("显示条件"),                       D_FONT_BOLD(8),      QRect(202,  61,  95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("显示"),                          D_FONT_BOLD(8),      QRect(302,  61, 145,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("备注"),                          D_FONT_BOLD(8),      QRect(452,  61, 328,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8("扩展供电"),                   D_FONT_BOLD(8),      QRect(52, 91, 148, 28),            Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("有扩展供电"),                    D_FONT_BOLD(8),      QRect(202, 91, 95, 28),           Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("扩展供电"),                      D_FONT_BOLD(8),      QRect(327, 91, 95, 28),            Qt::black,                Qt::green,                 CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("[辅助状态]车厢绿色表示有扩展供电"), D_FONT_BOLD(8), QRect(452, 91, 328, 28),                 Qt::white,              Qt::black,                  CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("1侧门\n2侧门"),                 D_FONT_BOLD(8),      QRect( 52, 121, 145, 210),           Qt::white,                Qt::black,                 CONTROL_LABEL,          ID_IGNORE        },
    {QObject::trUtf8("门关好完全"),                 D_FONT_BOLD(7),      QRect(201,  91+30, 95, 24),           Qt::white,                Qt::black,           CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("门未完全关好"),                 D_FONT_BOLD(7),      QRect(201, 116+30, 95, 24),           Qt::white,                Qt::black,           CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("防挤压过程中"),                 D_FONT_BOLD(7),      QRect(201, 140+30, 95, 24),           Qt::white,                Qt::black,           CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("门隔离"),                 D_FONT_BOLD(7),      QRect(201, 167+30, 95, 24),           Qt::white,                Qt::black,           CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("门紧急解锁"),               D_FONT_BOLD(7),      QRect(201, 194+30, 95, 24),           Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("门故障"),               D_FONT_BOLD(7),      QRect(201, 220+30, 95, 24),           Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("门无效"),               D_FONT_BOLD(7),      QRect(201, 248+30, 95, 24),           Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE         },
    {QObject::trUtf8("门通信异常"),               D_FONT_BOLD(7),      QRect(201, 275+30, 95, 24),           Qt::white,                Qt::black,          CONTROL_LABEL,          ID_IGNORE         },

    {QObject::trUtf8("高速断路器"),    D_FONT_BOLD(8),      QRect(52, 333, 145, 88),            Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("车间电源"),    D_FONT_BOLD(8),      QRect(52, 424, 145, 116),            Qt::white,                Qt::black,           CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8("故障"),                       D_FONT_BOLD(8),      QRect( 202, 333, 95,  26),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("合上"),                       D_FONT_BOLD(8),      QRect( 202, 363, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("断开"),                       D_FONT_BOLD(8),      QRect( 202, 392, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("连接且供电"),                       D_FONT_BOLD(8),      QRect( 202, 423, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("连接未供电"),                       D_FONT_BOLD(8),      QRect( 202, 452, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("未连接"),                       D_FONT_BOLD(8),      QRect( 202, 482, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("故障"),                       D_FONT_BOLD(8),      QRect( 202, 512, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8("guzhang.png"),                       D_FONT_BOLD(8),      QRect( 362, 333, 28,  26),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
    {QObject::trUtf8("heshang.png"),                       D_FONT_BOLD(8),      QRect( 362, 362, 28,  26),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
    {QObject::trUtf8("duankai.png"),                       D_FONT_BOLD(8),      QRect( 362, 392, 28,  26),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
    {QObject::trUtf8("WHL6MC_WSSConPow.PNG"),                       D_FONT_BOLD(8),      QRect( 362, 422, 28,  26),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
    {QObject::trUtf8("WHL6MC_WSSConNPow.PNG"),                       D_FONT_BOLD(8),      QRect( 362, 452, 28,  26),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
    {QObject::trUtf8("WHL6MC_WSSNCon.PNG"),                       D_FONT_BOLD(8),      QRect( 362, 482, 28,  26),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
    {QObject::trUtf8("WHL6MC_WSSConPowfault.bmp"),                       D_FONT_BOLD(8),      QRect( 362, 512, 28,  26),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },

//lianjiegongdian.png故障合上断开连接且供电未

    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(316+10,  92+30,  20,  21),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(342+10,  92+30,  20,  21),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(368+10,  92+30,  20,  21),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(394+10,  92+30,  20,  21),           Qt::white,                Qt::gray,                CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(316+10, 117+30,  20,  21),           Qt::white,                Qt::blue,               CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(342+10, 117+30,  20,  21),           Qt::white,                Qt::blue,               CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(368+10, 117+30,  20,  21),           Qt::white,                Qt::blue,               CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(394+10, 117+30,  20,  21),           Qt::white,                Qt::blue,               CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(316+10, 142+30,  20,  21),           Qt::white,                Qt::cyan,                 CONTROL_LABEL,           ID_PIBRUNHELP_DOOROBJECT1         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(342+10, 142+30,  20,  21),           Qt::white,                Qt::cyan,                 CONTROL_LABEL,           ID_PIBRUNHELP_DOOROBJECT2          },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(368+10, 142+30,  20,  21),           Qt::white,                Qt::cyan,                 CONTROL_LABEL,           ID_PIBRUNHELP_DOOROBJECT3          },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(394+10, 142+30,  20,  21),           Qt::white,                Qt::cyan,                 CONTROL_LABEL,           ID_PIBRUNHELP_DOOROBJECT4          },

    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(316+10, 168+30,  20,  21),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNHELP_DOORSEPARAT1     },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(342+10, 168+30,  20,  21),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNHELP_DOORSEPARAT2     },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(368+10, 168+30,  20,  21),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNHELP_DOORSEPARAT3     },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(394+10, 168+30,  20,  21),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_PIBRUNHELP_DOORSEPARAT4     },

    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(316+10, 193+30,  20,  21),           Qt::white,                Qt::darkBlue,             CONTROL_LABEL,           ID_PIBRUNHELP_DOOROBJECT5          },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(342+10, 193+30,  20,  21),           Qt::white,                Qt::darkBlue,             CONTROL_LABEL,           ID_PIBRUNHELP_DOOROBJECT6          },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(368+10, 193+30,  20,  21),           Qt::white,                Qt::darkBlue,             CONTROL_LABEL,           ID_PIBRUNHELP_DOOROBJECT7          },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(394+10, 193+30,  20,  21),           Qt::white,                Qt::darkBlue,             CONTROL_LABEL,           ID_PIBRUNHELP_DOOROBJECT8          },

    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(316+10, 222+30,  20,  21),           Qt::white,                Qt::red ,             CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(342+10, 222+30,  20,  21),           Qt::white,                Qt::red ,             CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(368+10, 222+30,  20,  21),           Qt::white,                Qt::red ,             CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(394+10, 222+30,  20,  21),           Qt::white,                Qt::red ,             CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(316+10, 250+30,  20,  21),           Qt::white,                Qt::yellow,                  CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(342+10, 250+30,  20,  21),           Qt::white,                Qt::yellow,                  CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(368+10, 250+30,  20,  21),           Qt::white,                Qt::yellow,                  CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(394+10, 250+30,  20,  21),           Qt::white,                Qt::yellow,                  CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(316+10, 276+30,  20,  21),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(342+10, 276+30,  20,  21),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(368+10, 276+30,  20,  21),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8(""),                      D_FONT_BOLD(8),      QRect(394+10, 276+30,  20,  21),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_IGNORE         },



};
int g_RunHelp3RomLen = sizeof(g_PicRom_RunHelp3)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CRunHelp3Page,CPage)
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
END_MESSAGE_MAP()

CRunHelp3Page::CRunHelp3Page()
{
}

void CRunHelp3Page::OnUpdatePage()
{

}

void CRunHelp3Page::OnInitPage()
{
    ((CLabel *)GetDlgItem(ID_PIBRUNHELP_DOORSEPARAT1))->SetLabelState(LABELSRATE_DOOR_GLOCK);
    ((CLabel *)GetDlgItem(ID_PIBRUNHELP_DOORSEPARAT2))->SetLabelState(LABELSRATE_DOOR_GLOCK);
    ((CLabel *)GetDlgItem(ID_PIBRUNHELP_DOORSEPARAT3))->SetLabelState(LABELSRATE_DOOR_GLOCK);
    ((CLabel *)GetDlgItem(ID_PIBRUNHELP_DOORSEPARAT4))->SetLabelState(LABELSRATE_DOOR_GLOCK);
    ((CLabel *)GetDlgItem(ID_PIBRUNHELP_DOOROBJECT1))->SetLabelState(LABELSRATE_DOOR_YX);
    ((CLabel *)GetDlgItem(ID_PIBRUNHELP_DOOROBJECT2))->SetLabelState(LABELSRATE_DOOR_YX);
    ((CLabel *)GetDlgItem(ID_PIBRUNHELP_DOOROBJECT3))->SetLabelState(LABELSRATE_DOOR_YX);
    ((CLabel *)GetDlgItem(ID_PIBRUNHELP_DOOROBJECT4))->SetLabelState(LABELSRATE_DOOR_YX);
    ((CLabel *)GetDlgItem(ID_PIBRUNHELP_DOOROBJECT5))->SetLabelState( LABELSRATE_DOOR_YJING );
    ((CLabel *)GetDlgItem(ID_PIBRUNHELP_DOOROBJECT6))->SetLabelState( LABELSRATE_DOOR_YJING );
    ((CLabel *)GetDlgItem(ID_PIBRUNHELP_DOOROBJECT7))->SetLabelState( LABELSRATE_DOOR_YJING );
    ((CLabel *)GetDlgItem(ID_PIBRUNHELP_DOOROBJECT8))->SetLabelState( LABELSRATE_DOOR_YJING );
    //((CLabel *)GetDlgItem(ID_PIBRUNHELP_ICON3))->SetLabelState(6);

}

void CRunHelp3Page::OnShowPage()
{
#ifdef PAGE_BUTTON_BAR_NEW
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN7))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN9))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN11))->SetCtrlText(QObject::trUtf8("下一页"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN10))->SetCtrlText(QObject::trUtf8("上一页"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN12))->SetCtrlText(QObject::trUtf8(""));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText(QObject::trUtf8("上一页"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("下一页"));
#endif

    this->InitPageHeader();
}

#ifdef PAGE_BUTTON_BAR_NEW
        void CRunHelp3Page::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_RUNSTATE);
        }

        void CRunHelp3Page::OnComBtn2Clk()
        {

        }

        void CRunHelp3Page::OnComBtn3Clk()
        {

        }

        void CRunHelp3Page::OnComBtn4Clk()
        {

        }

        void CRunHelp3Page::OnComBtn5Clk()
        {

        }

        void CRunHelp3Page::OnComBtn6Clk()
        {

        }
        void CRunHelp3Page::OnComBtn7Clk()
        {
        //ChangePage(PAGE_INDEX_RUNHELP2);
        }

        void CRunHelp3Page::OnComBtn8Clk()
        {
        }
        void CRunHelp3Page::OnComBtn9Clk()
        {
        }
        void CRunHelp3Page::OnComBtn11Clk()
        {
            ChangePage(PAGE_INDEX_RUNHELP4);
        }
        void CRunHelp3Page::OnComBtn10Clk()
        {
            ChangePage(PAGE_INDEX_RUNHELP1);
        }
        void CRunHelp3Page::OnComBtn12Clk()
        {
        }
#else
        void CRunHelp3Page::OnComBtn1Clk()
        {
            ChangePage(PAGE_INDEX_RUNSTATE);
        }

        void CRunHelp3Page::OnComBtn2Clk()
        {

        }

        void CRunHelp3Page::OnComBtn3Clk()
        {

        }

        void CRunHelp3Page::OnComBtn4Clk()
        {

        }

        void CRunHelp3Page::OnComBtn5Clk()
        {
            ChangePage(PAGE_INDEX_RUNHELP2);
        }

        void CRunHelp3Page::OnComBtn6Clk()
        {
            ChangePage(PAGE_INDEX_CARSTATUS1HELP3);
        }

#endif



