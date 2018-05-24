#include "C_Ctrl_Bar.h"

C_Ctrl_Bar::C_Ctrl_Bar()
{
    m_typestr = "C_Ctrl_Bar";
    m_pPainter = NULL;
}

void C_Ctrl_Bar::C_Ctrl_Bar::Create(__in QString& ctrl_str,
                                    __in QRect& ctrl_rc,
                                    __in QColor& ctrl_txtcolor,
                                    __in QFont& ctrl_font,
                                    __in QColor& ctrl_bkcolor,
                                    __in QPainter* ctrl_painter,
                                    __in int ctrl_ID)
{
    m_txtcolor = ctrl_txtcolor;
    m_font     = ctrl_font;
    m_bkcolor  = ctrl_bkcolor;
    m_rect     = ctrl_rc;
    m_nID      = ctrl_ID;
    m_pPainter = ctrl_painter;
    m_str      = ctrl_str;
    ASSERT(m_pPainter != NULL);
    m_ctrlmode = 1;
    DrawBarCtrl(0,0,1);
    SetValue(0,0,1);
}

void C_Ctrl_Bar::SetCtrlText(__in QString btn_str)
{

}

void C_Ctrl_Bar::SetTxtFont(__in QFont txt_font)
{

}

void C_Ctrl_Bar::SetTxtColor(__in QColor txt_color)
{
    m_txtcolor =  txt_color;
}

void C_Ctrl_Bar::SetCtrlBKColor(__in QColor btn_bkcolor)
{
    m_bkcolor = btn_bkcolor;
}

void C_Ctrl_Bar::SetCtrlRect(__in QRect btn_rect)
{

}

void C_Ctrl_Bar::SetCtrlType(__in bool ctrl_type,__in float ctrl_range)
{
    m_ctrltype = ctrl_type;
}


void C_Ctrl_Bar::DrawBarCtrl(__in float ctrl_value,__in bool ctrl_type,__in float ctrl_range)
{

    m_pPainter->save();
//    m_pPainter->setBrush(m_bkcolor);
    //m_pPainter->fillRect(m_rect, m_bkcolor);
    m_pPainter->setPen(Qt::white);
    //m_pPainter->setBrush(Qt::SolidLine);
    m_pPainter->drawLine(                QPoint(m_rect.x(),m_rect.y()),
                                         QPoint(m_rect.x()+m_rect.width(),m_rect.y()));
    m_pPainter->drawLine(                QPoint(m_rect.x(),m_rect.y()),
                                         QPoint(m_rect.x(),m_rect.y()+m_rect.height()));
    m_pPainter->drawLine(                QPoint(m_rect.x(),m_rect.y()),
                                         QPoint(m_rect.x()+m_rect.width(),m_rect.y()));
    m_pPainter->drawLine(                QPoint(m_rect.x()+m_rect.width(),m_rect.y()),
                                         QPoint(m_rect.x()+m_rect.width(),m_rect.y()+m_rect.height()));
    m_pPainter->drawLine(                QPoint(m_rect.x(),m_rect.y()+m_rect.height()),
                                         QPoint(m_rect.x()+m_rect.width(),m_rect.y()+m_rect.height()));
m_pPainter->restore();
QRect n_rect(m_rect.x()+1,m_rect.y()+1,m_rect.width()-2,m_rect.height()-2);
m_pPainter->setBrush(Qt::black);
m_pPainter->drawRect(n_rect);


switch(m_ctrlmode)
{
case 1:
    m_pPainter->setPen(Qt::white);
    m_pPainter->drawLine(                QPoint(m_rect.x(),m_rect.y()+m_rect.height()/2),
                                         QPoint(m_rect.x()+m_rect.width(),m_rect.y()+m_rect.height()/2));
    if(ctrl_type)
    {
    m_pPainter->save();
    QRect insideRect(m_rect.x()+1, m_rect.y()+(1-ctrl_value/ctrl_range)*(m_rect.height()/2)+1, m_rect.width()-1, (m_rect.height()/2)*(ctrl_value/ctrl_range)+1);
    m_pPainter->setBrush(Qt::green);
    m_pPainter->drawRect(insideRect);
    m_pPainter->restore();
    }
    else
    {
    m_pPainter->save();
    m_pPainter->setBrush(Qt::red);
    m_pPainter->fillRect( m_rect.x()+1, m_rect.y()+m_rect.height()/2, m_rect.width()-1, (m_rect.height()/2)*(ctrl_value/ctrl_range), Qt::red);
    m_pPainter->restore();
    }
        break;
case 2:
        break;
case 3:
        break;
default:break;
}
//    m_pPainter->setRenderHint(QPainter::Antialiasing);
//    m_pPainter->setFont(m_font);
//    m_pPainter->setBrush(QBrush(Qt::yellow, Qt::SolidPattern));
//    m_pPainter->setPen(QPen(Qt::yellow, 2, Qt::SolidLine, Qt::RoundCap,Qt::MiterJoin));
//    qreal side = qMin( m_rect.width(), m_rect.height() );
//    m_pPainter->translate( m_rect.x() + m_rect.width() / 2, m_rect.y() + m_rect.height() / 2 );
//    m_pPainter->scale( side / 200.0, side / 200.0 );
//    m_pPainter->save();


//    QRectF rectKmh( -35, -40, 70, 20 );
//    m_pPainter->setBrush(QBrush(Qt::NoBrush));
//    m_pPainter->drawRect( rectKmh );
//    QRectF rectSpeed( -25, 20, 50, 30 );
//    m_pPainter->drawRect( rectSpeed );
//    QString str;



//    m_pPainter->setFont( m_font );
//    m_pPainter->save();

}

void C_Ctrl_Bar::SetValue(__in float ctrl_value,__in bool ctrl_type,__in float ctrl_range)
{
    if(ctrl_value > ctrl_range)ctrl_value = ctrl_range;
        DrawBarCtrl(ctrl_value, ctrl_type, ctrl_range);
}

void C_Ctrl_Bar::SetMode(__in int ctrl_mode)
{
     m_ctrlmode = ctrl_mode;
}
