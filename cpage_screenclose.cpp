#include "cpage_screenclose.h"

ROMDATA g_PicRom_screenclose[] =
{

    //{QObject::trUtf8("helppage1.png"),    D_FONT_BOLD(8),      QRect( 50, 80, 700, 400),           Qt::white,                Qt::black,                CONTROL_IMAGE,           ID_IMAGEHELPPAGE1         },

};
int g_screencloseRomLen = sizeof(g_PicRom_screenclose)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CPage_ScreenClose,CPage)
        ON_SHOWPAGE()
        ON_UPDATE_PAGE()

END_MESSAGE_MAP()

CPage_ScreenClose::CPage_ScreenClose()
{

}

void CPage_ScreenClose::OnUpdatePage()
{

}

void CPage_ScreenClose::OnInitPage()
{

}

void CPage_ScreenClose::OnShowPage()
{


    this->InitPageHeader();
}



