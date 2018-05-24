#include "C_Page_Run_Status_Help1.h"


ROMDATA g_PicRom_RunHelp1[] =
{
#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW_WHHELP
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

    D_COMMON_PAGE_HEADER(QObject::trUtf8("运行帮助") )

    {"",                                   D_FONT_BOLD(6),      QRect( 50,  60, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect( 50,  90, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect( 200,  120, 580,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect( 200,  150, 580,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    {"",                                   D_FONT_BOLD(6),      QRect( 50, 180, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(50, 210, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect( 50, 240, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(50, 270, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(50, 330, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(200, 360, 580,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(200, 390, 580,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(200, 420, 580,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(200, 450, 580,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(50, 480, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(200, 510, 580,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(50, 540, 730,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },


    {"",                                   D_FONT_BOLD(6),      QRect( 50,  60,   1, 481),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(200,  60,   1, 481),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(300,  60,   1, 481),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(450,  60,   1, 481),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                                   D_FONT_BOLD(6),      QRect(780,  60,   1, 481),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    {QObject::trUtf8("显示项目"),                       D_FONT_BOLD(8),      QRect( 52,  61, 145,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("显示条件"),                       D_FONT_BOLD(8),      QRect(202,  61,  95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("显示"),                          D_FONT_BOLD(8),      QRect(302,  61, 145,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("备注"),                          D_FONT_BOLD(8),      QRect(452,  61, 328,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8("接触网电压"),                       D_FONT_BOLD(8),      QRect( 52, 92, 145,  88),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("网流"),                            D_FONT_BOLD(8),      QRect( 52, 182, 145,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("速度"),                            D_FONT_BOLD(8),      QRect( 52, 212, 145,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("限速值"),                            D_FONT_BOLD(8),      QRect( 52, 242, 145,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("故障信息"),                            D_FONT_BOLD(8),      QRect( 52, 272, 145,  58),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("受电弓状态"),                            D_FONT_BOLD(8),      QRect( 52, 332, 145,  148),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("逃生门状态"),                            D_FONT_BOLD(8),      QRect( 52, 482, 145,  58),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },


    {QObject::trUtf8("正常"),                       D_FONT_BOLD(8),      QRect( 202, 92, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("电压过低"),                       D_FONT_BOLD(8),      QRect( 202, 122, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("电压过高"),                       D_FONT_BOLD(8),      QRect( 202, 152, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("显示实际值"),                       D_FONT_BOLD(8),      QRect( 202, 182, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("显示实际值"),                       D_FONT_BOLD(8),      QRect( 202, 212, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("限速条件"),                       D_FONT_BOLD(8),      QRect( 202, 242, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("发生故障"),                       D_FONT_BOLD(8),      QRect( 202, 272, 95,  58),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("升弓"),                       D_FONT_BOLD(8),      QRect( 202, 332, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("降弓"),                       D_FONT_BOLD(8),      QRect( 202, 362, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("动作中"),                       D_FONT_BOLD(8),      QRect( 202, 392, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("通信异常"),                       D_FONT_BOLD(8),      QRect( 202, 422, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("隔离"),                       D_FONT_BOLD(8),      QRect( 202, 452, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8("正常"),                       D_FONT_BOLD(8),      QRect( 202, 482, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("故障"),                       D_FONT_BOLD(8),      QRect( 202, 512, 95,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

    {QObject::trUtf8("1500V"),                       D_FONT_BOLD(8),      QRect( 327, 92, 95,  28),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("1000V"),                       D_FONT_BOLD(8),      QRect( 327, 122, 95,  28),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("1800V"),                       D_FONT_BOLD(8),      QRect( 327, 152, 95,  28),           Qt::white,                Qt::red,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("80A"),                       D_FONT_BOLD(8),      QRect( 327, 182, 95,  28),           QColor(0,176,240),                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("60Km/h"),                       D_FONT_BOLD(8),      QRect( 327, 212, 95,  28),           QColor(0,176,240),                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("40Km/h"),                       D_FONT_BOLD(8),      QRect( 327, 242, 95,  28),           Qt::red,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("FaultRed.PNG"),                       D_FONT_BOLD(8),      QRect( 347, 272, 58,  58),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
    {QObject::trUtf8("up.PNG"),                       D_FONT_BOLD(8),      QRect( 347, 332, 58,  28),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
    {QObject::trUtf8("down.PNG"),                       D_FONT_BOLD(8),      QRect( 347, 362, 58,  28),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
    {QObject::trUtf8("no_up_down.PNG"),                       D_FONT_BOLD(8),      QRect( 347, 392, 58,  28),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
    {QObject::trUtf8(""),                       D_FONT_BOLD(8),      QRect( 347, 422, 58,  28),           Qt::white,                Qt::white,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("pantoiso.png"),                       D_FONT_BOLD(8),      QRect( 347, 452, 58,  28),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
    {QObject::trUtf8("escape2.png"),                       D_FONT_BOLD(8),      QRect( 347, 482, 58,  28),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },
    {QObject::trUtf8("escape1.png"),                       D_FONT_BOLD(8),      QRect( 347, 512, 58,  28),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_IGNORE         },


    {QObject::trUtf8("该车辆牵引系统检测出接触网的电压"),                       D_FONT_BOLD(8),      QRect( 452, 92, 328,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("1000V以下"),                                               D_FONT_BOLD(8),      QRect( 452, 122, 328,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("1800V以上"),                                               D_FONT_BOLD(8),      QRect( 452, 152, 328,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("该车辆牵引系统检测出网流"),                       D_FONT_BOLD(8),      QRect( 452, 182, 328,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("根据制动传感器计算的速度"),                       D_FONT_BOLD(8),      QRect( 452, 212, 328,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("限速条件下的最大速度"),                       D_FONT_BOLD(8),      QRect( 452, 242, 328,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("当前有1,2级故障发生时，点击\n故障按钮可以进入实时故障显示页面\n正常情况下不显示故障三角"),                       D_FONT_BOLD(6),      QRect( 452, 272, 328,  58),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("升弓到位"),                       D_FONT_BOLD(8),      QRect( 452, 332, 328,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("降弓到位"),                       D_FONT_BOLD(8),      QRect( 452, 362, 328,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("受电弓动作中"),                       D_FONT_BOLD(8),      QRect( 452, 392, 328,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },
    {QObject::trUtf8("受电弓隔离"),                       D_FONT_BOLD(8),      QRect( 452, 452, 328,  28),           Qt::white,                Qt::black,                CONTROL_LABEL,           ID_IGNORE         },

};
int g_RunHelp1RomLen = sizeof(g_PicRom_RunHelp1)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CRunHelp1Page,CPage)
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

CRunHelp1Page::CRunHelp1Page()
{
    m_pagenum = 1;
}

void CRunHelp1Page::OnUpdatePage()
{
//    switch (m_pagenum)
//    {
//    case 1:
//        ((CImageCtrl *)GetDlgItem(ID_IMAGEHELPPAGE1))->SetCtrlText(QObject::trUtf8("helppage1.png"));
//        break;
//    case 2:
//        ((CImageCtrl *)GetDlgItem(ID_IMAGEHELPPAGE1))->SetCtrlText(QObject::trUtf8("helppage2.png"));
//        break;
//    case 3:
//        ((CImageCtrl *)GetDlgItem(ID_IMAGEHELPPAGE1))->SetCtrlText(QObject::trUtf8("helppage3.png"));
//        break;
//    case 4:
//        ((CImageCtrl *)GetDlgItem(ID_IMAGEHELPPAGE1))->SetCtrlText(QObject::trUtf8("helppage4.png"));
//        break;
//    case 5:
//        ((CImageCtrl *)GetDlgItem(ID_IMAGEHELPPAGE1))->SetCtrlText(QObject::trUtf8("helppage5.png"));
//        break;
//    case 6:
//        ((CImageCtrl *)GetDlgItem(ID_IMAGEHELPPAGE1))->SetCtrlText(QObject::trUtf8("helppage6.png"));
//        break;
//    }
//    Update();
}

void CRunHelp1Page::OnInitPage()
{

}

void CRunHelp1Page::OnShowPage()
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
    ((CButton *)GetDlgItem(IDLB_COM_BTN11))->SetCtrlText(QObject::trUtf8("下一页"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN10))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN12))->SetCtrlText(QObject::trUtf8(""));
#else
    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN4))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN5))->SetCtrlText("");
    ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("下一页"));
#endif
    this->InitPageHeader();
}

#ifdef PAGE_BUTTON_BAR_NEW
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

        }
        void CRunHelp1Page::OnComBtn7Clk()
        {

        }

        void CRunHelp1Page::OnComBtn8Clk()
        {
        }
        void CRunHelp1Page::OnComBtn9Clk()
        {
        }
        void CRunHelp1Page::OnComBtn11Clk()
        {
            ChangePage(PAGE_INDEX_RUNHELP3);
        }
        void CRunHelp1Page::OnComBtn10Clk()
        {

        }
        void CRunHelp1Page::OnComBtn12Clk()
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

