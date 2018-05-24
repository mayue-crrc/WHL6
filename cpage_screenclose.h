#ifndef CPAGE_SCREENCLOSE_H
#define CPAGE_SCREENCLOSE_H

#include "CPage.h"

extern vector<CPage*>  g_PageVec;

#define ID_IMAGEHELPPAGE1    0X0001

class CPage_ScreenClose : public CPage
{
    DECLEAR_MESSAGE_MAP(CPage_ScreenClose)
public:
    CPage_ScreenClose();

protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnShowPage();
    void OnInitPage();
};


#endif // CPAGE_SCREENCLOSE_H
