#ifndef C_CTRL_BAR_H
#define C_CTRL_BAR_H
#include "CControlInterface.h"
enum BARSTATE
{
    LBAR_INIT = 0,
    LBAR_AVALIBLE,
    LBAR_UNAVALIBLE
};

enum BARTYPE
{
    BAR_NORMAL = 0,
    BAR_UP,
    BAR_DOWN,
    BAR_HORIZENTAL,
    BAR_UPDOWN
};

class C_Ctrl_Bar:public CControlInterface
{
public:
    C_Ctrl_Bar();
    void Create(__in QString& ctrl_str,__in QRect& ctrl_rc,__in QColor& ctrl_txtcolor,
                __in QFont& ctrl_font,__in QColor& ctrl_bkcolor,__in QPainter* ctrl_painter,__in int ctrl_ID);

    void SetCtrlText(__in QString btn_str);
    void SetTxtFont(__in QFont txt_font);
    void SetTxtColor(__in QColor txt_color);
    void SetCtrlBKColor(__in QColor btn_bkcolor);
    void SetCtrlRect(__in QRect btn_rect);
    void SetCtrlType(__in bool ctrl_type,__in float ctrl_range);

    void DrawBarCtrl(__in float ctrl_value,__in bool ctrl_type,__in float ctrl_range);
    void SetValue(__in float ctrl_value,__in bool ctrl_type,__in float ctrl_range);
    void SetMode(__in int ctrl_mode);
    int m_ctrlmode;
    int m_ctrltype;
};

#endif // C_CTRL_BAR_H
