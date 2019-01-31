#include "C_Page_Net_Status.h"


ROMDATA  g_PicRom_CommStatus[] =
{

#ifdef PAGE_BUTTON_BAR_NEW
    D_COMMON_PAGE_BUTTON_BAR_NEW_WH
#else
    D_COMMON_PAGE_BUTTON_BAR
#endif

    D_COMMON_PAGE_HEADER_NEW_DL(QObject::trUtf8("网络") )


  //  {QObject::trUtf8("通信中断"),      D_FONT_BOLD(8),      QRect( 20,   6, 162,  30),           Qt::red,                  Qt::white,                CONTROL_LABEL,           ID_PIBCOMMINTERRUPT             },
  //  {"FaultRed.PNG",      D_DEFAULT_FONT,      QRect(735,  50,  65,  65),           Qt::black,                Qt::red,                  CONTROL_IMAGE,           ID_PIBCS_ICON_WARNNING           },
    {"",                  D_FONT_BOLD(4),      QRect(100,  70, 600,  70),           Qt::black,                Qt::gray,                 CONTROL_TRAIN,           ID_PIBCS_TRAIN                   },
    {"RIGHT",             D_FONT_BOLD(6),      QRect(715,  100,  45,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,           ID_PIBCS_ARROW_RIGHT             },
    {"LEFT",              D_FONT_BOLD(6),      QRect( 40,  100,  45,  20),           Qt::white,                Qt::white,                CONTROL_ARROW,           ID_PIBCS_ARROW_LEFT              },
   // main MVB net
    {"",                  D_FONT_BOLD(6),      QRect( 70, 139+23, 640,   6),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 70, 138+23, 640,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 70, 145+23, 640,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },


    //  vertical MVB net
    {"",                  D_FONT_BOLD(6),      QRect(90+20, 145+24,   4, 270),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(89+20, 145+24,   1, 270),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(94+20, 145+24,   1, 270),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(240-30, 145+23,   4, 270),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(239-30, 145+23,   1, 270),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(244-30, 145+23,   1, 270),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(315-5, 145+23,   4, 270),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(314-5, 145+23,   1, 270),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(319-5, 145+23,   1, 270),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(390+20, 145+23,   4, 270),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(389+20, 145+23,   1, 270),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(394+20, 145+23,   1, 270),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(540-30, 145+23,   4, 270),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(539-30, 145+23,   1, 270),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(544-30, 145+23,   1, 270),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(615-5, 145+23,   4, 270),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(614-5, 145+23,   1, 270),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619-5, 145+23,   1, 270),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    {QObject::trUtf8("CCU1"),        D_FONT_BOLD(6),      QRect(15+20, 150,  60,  30),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CCU1              },
    {QObject::trUtf8("CCU2"),        D_FONT_BOLD(6),      QRect(685, 150,  60,  30),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBCS_LABEL_CCU2              },
// tcp/ip
//    {"ATC",                  D_FONT_BOLD(6),      QRect(51, 150,   6, 28),           Qt::black,                 Qt::cyan,                CONTROL_LABEL,            ID_PIBCS_LABEL_HMI1_UPD         },
//    {"",                  D_FONT_BOLD(6),      QRect(50, 150,   1, 28),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                  D_FONT_BOLD(6),      QRect(57, 150,   1, 28),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                  D_FONT_BOLD(6),      QRect(705, 150,   6, 28),           Qt::black,                 Qt::cyan,                CONTROL_LABEL,            ID_PIBCS_LABEL_HMI2_UPD         },
//    {"",                  D_FONT_BOLD(6),      QRect(704, 150,   1, 28),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                  D_FONT_BOLD(6),      QRect(711, 150,   1, 28),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },



   // MVB horizontal NET


    //RIOM 1-8
    {"",                  D_FONT_BOLD(6),      QRect(94+20, 170+25,  10,   4),           Qt::white,                 Qt::blue,                CONTROL_LABEL,            ID_PIBCS_LABEL_CAR1_RLD         },
    {"",                  D_FONT_BOLD(6),      QRect(94+20, 169+25,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(94+20, 174+25,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(244-30, 170+25,  10,   4),           Qt::blue,                 Qt::blue,                CONTROL_LABEL,            ID_PIBCS_LABEL_CAR3_RLD         },
    {"",                  D_FONT_BOLD(6),      QRect(244-30, 169+25,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(244-30, 174+25,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(319-5, 170+25,  10,   4),           Qt::blue,                 Qt::blue,                CONTROL_LABEL,            ID_PIBCS_LABEL_CAR4_RLD         },
    {"",                  D_FONT_BOLD(6),      QRect(319-5, 169+25,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(319-5, 174+25,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(394+20, 170+25,  10,   4),           Qt::blue,                 Qt::blue,                CONTROL_LABEL,            ID_PIBCS_LABEL_CAR5_RLD         },
    {"",                  D_FONT_BOLD(6),      QRect(394+20, 169+25,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(394+20, 174+25,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(544-30, 170+25,  10,   4),           Qt::blue,                 Qt::blue,                CONTROL_LABEL,            ID_PIBCS_LABEL_CAR7_RLD         },
    {"",                  D_FONT_BOLD(6),      QRect(544-30, 169+25,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(544-30, 174+25,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619-5, 170+25,  10,   4),           Qt::blue,                 Qt::blue,                CONTROL_LABEL,            ID_PIBCS_LABEL_CAR8_RLD         },
    {"",                  D_FONT_BOLD(6),      QRect(619-5, 169+25,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619-5, 174+25,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//ACU
    {"",                  D_FONT_BOLD(6),      QRect(94+20, 215+10,  10,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(94+20, 214+10,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(94+20, 219+10,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619-5, 215+10,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619-5, 214+10,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619-5, 219+10,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//RTU
    {"",                  D_FONT_BOLD(6),      QRect(94+20, 255,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(94+20, 254,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(94+20, 259,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    {"",                  D_FONT_BOLD(6),      QRect(619-5, 255,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619-5, 254,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619-5, 259,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
 //ERM
    {"",                  D_FONT_BOLD(6),      QRect( 70+20, 237-27,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 70+20, 236-27,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 70+20, 241-27,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619-5, 237-27,  100,  4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619-5, 236-27,  100,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619-5, 241-27,  100,  1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
// HMI
    {"",                  D_FONT_BOLD(6),      QRect( 70+20, 237+33,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 70+20, 236+33,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 70+20, 241+33,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619-5, 237+33,  96,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619-5, 236+33,  96,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619-5, 241+33,  96,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//TCU
    {"",                  D_FONT_BOLD(6),      QRect(244-30, 277-33,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(244-30, 276-33,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(244-30, 281-33,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(319-5, 277-33,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(319-5, 276-33,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(319-5, 281-33,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(394+20, 277-33,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(394+20, 276-33,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(394+20, 281-33,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(544-30, 277-33,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(544-30, 276-33,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(544-30, 281-33,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//BCU
    {"",                  D_FONT_BOLD(6),      QRect(94+20, 285,  10,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(94+20, 284,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(94+20, 289,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(394+20, 285,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(394+20, 284,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(394+20, 289,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(319-5, 285,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(319-5, 284,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(319-5, 289,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619-5, 285,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619-5, 284,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619-5, 289,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

//REC
    {"",                  D_FONT_BOLD(6),      QRect(94+20, 305+10,  10,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(94+20, 304+10,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(94+20, 309+10,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619-5, 305+10,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619-5, 304+10,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619-5, 309+10,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

//ATC

    {"",                  D_FONT_BOLD(6),      QRect( 70+20, 305+10,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 70+20, 304+10,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 70+20, 309+10,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

//PIS
    {"",                  D_FONT_BOLD(6),      QRect(94+20, 305+70,  10,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(94+20, 304+70,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(94+20, 309+70,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619-5, 305+70,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619-5, 304+70,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619-5, 309+70,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    //HVAC
    {"",                  D_FONT_BOLD(6),      QRect(94+20, 390-45,  10,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(94+20, 389-45,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(94+20, 394-45,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(244-30, 390-45,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(244-30, 389-45,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(244-30, 394-45,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(319-5, 390-45,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(319-5, 389-45,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(319-5, 394-45,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(394+20, 390-45,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(394+20, 389-45,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(394+20, 394-45,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(544-30, 390-45,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(544-30, 389-45,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(544-30, 394-45,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619-5, 390-45,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619-5, 389-45,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619-5, 394-45,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    //EDCU1
    {"",                  D_FONT_BOLD(6),      QRect(94+20, 390+15,  10,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(94+20, 389+15,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(94+20, 394+15,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(244-30, 390+15,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(244-30, 389+15,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(244-30, 394+15,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(319-5, 390+15,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(319-5, 389+15,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(319-5, 394+15,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(394+20, 390+15,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(394+20, 389+15,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(394+20, 394+15,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(544-30, 390+15,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(544-30, 389+15,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(544-30, 394+15,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619-5, 390+15,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619-5, 389+15,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619-5, 394+15,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    //EDCU2
    {"",                  D_FONT_BOLD(6),      QRect(94+20, 390+45,  10,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(94+20, 389+45,  10,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(94+15, 394+45,  15,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(244-30, 390+45,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(244-30, 389+45,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(244-35, 394+45,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(319-5, 390+45,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(319-5, 389+45,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(319-10, 394+45,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(394+20, 390+45,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(394+20, 389+45,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(394+15, 394+45,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(544-30, 390+45,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(544-30, 389+45,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(544-35, 394+45,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619-5, 390+45,  20,   4),           Qt::blue,                 Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619-5, 389+45,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(619-10, 394+45,  20,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },

    // HMI
    {"",                  D_FONT_BOLD(6),      QRect( 30+20, 165+38+46,   1,  40),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 74+20, 165+38+46,   1,  41),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 30+20, 165+38+46,  45,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect( 30+20, 205+38+46,  45,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(685, 165+38+46,   1,  40),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(729, 165+38+46,   1,  41),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(685, 165+38+46,  45,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
    {"",                  D_FONT_BOLD(6),      QRect(685, 205+38+46,  45,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
   //BCU NET
//    {"",                  D_FONT_BOLD(6),      QRect(125, 352,   8,   6),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                  D_FONT_BOLD(6),      QRect(350, 352,   8,   6),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                  D_FONT_BOLD(6),      QRect(425, 352,   8,   6),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                  D_FONT_BOLD(6),      QRect(650, 352,   8,   6),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                  D_FONT_BOLD(6),      QRect(125, 358, 233,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                  D_FONT_BOLD(6),      QRect(125, 366, 233,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                  D_FONT_BOLD(6),      QRect(125, 358,   1,   8),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                  D_FONT_BOLD(6),      QRect(357, 358,   1,   8),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                  D_FONT_BOLD(6),      QRect(425, 358, 233,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                  D_FONT_BOLD(6),      QRect(425, 366, 233,   1),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                  D_FONT_BOLD(6),      QRect(425, 358,   1,   8),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },
//    {"",                  D_FONT_BOLD(6),      QRect(657, 358,   1,   8),           Qt::white,                Qt::black,                CONTROL_LINE,            ID_IGNORE         },


{QObject::trUtf8("RIOM"),        D_FONT_BOLD(6),      QRect(104+20, 162+25,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR1_RIOM         },
{QObject::trUtf8("ACU"),         D_FONT_BOLD(6),      QRect(104+20, 207+10,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR1_ACU          },
{QObject::trUtf8("RTU"),       D_FONT_BOLD(6),        QRect(104+20, 247,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_ATC10             },
{QObject::trUtf8("BCU"),       D_FONT_BOLD(6),        QRect(104+20, 277,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR1_BCU             },
{QObject::trUtf8("REC"),         D_FONT_BOLD(6),      QRect(104+20, 307,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_FAS1          },
{QObject::trUtf8("HVAC"),        D_FONT_BOLD(6),      QRect(104+20, 337,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR1_HVAC         },
{QObject::trUtf8("PIS"),         D_FONT_BOLD(6),      QRect(104+20, 367,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR1_PIS          },
{QObject::trUtf8("EDCU1"),         D_FONT_BOLD(6),    QRect(104+20, 397,  50,  20),              Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR1_GW1          },
{QObject::trUtf8("EDCU2"),         D_FONT_BOLD(6),    QRect(104+20, 427,  50,  20),              Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR1_GW2          },



   // {QObject::trUtf8("RIOM"),        D_FONT_BOLD(6),      QRect(179, 162+25,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR2_RIOM         },
    {QObject::trUtf8("RIOM"),        D_FONT_BOLD(6),      QRect(254-30, 162+25,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR3_RIOM         },
    {QObject::trUtf8("RIOM"),        D_FONT_BOLD(6),      QRect(329-5, 162+25,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR4_RIOM         },
    {QObject::trUtf8("RIOM"),        D_FONT_BOLD(6),      QRect(404+20, 162+25,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR5_RIOM         },
   // {QObject::trUtf8("RIOM"),        D_FONT_BOLD(6),      QRect(479, 162+25,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR6_RIOM         },
    {QObject::trUtf8("RIOM"),        D_FONT_BOLD(6),      QRect(554-30, 162+25,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR7_RIOM         },
    {QObject::trUtf8("RIOM"),        D_FONT_BOLD(6),      QRect(629-5, 162+25,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR8_RIOM         },
    {QObject::trUtf8("ACU"),         D_FONT_BOLD(6),      QRect(629-5, 207+10,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR6_ACU          },
    {QObject::trUtf8("RTU"),       D_FONT_BOLD(6),      QRect(629-5, 247,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_ATC11             },
    {QObject::trUtf8("REC"),       D_FONT_BOLD(6),      QRect(629-5, 307,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_FAS2             },
    {QObject::trUtf8("BCU"),         D_FONT_BOLD(6),      QRect(329-5, 277,  50,  20),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR3_BCU          },
    {QObject::trUtf8("BCU"),         D_FONT_BOLD(6),      QRect(404+20, 277,  50,  20),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR4_BCU          },
    {QObject::trUtf8("BCU"),         D_FONT_BOLD(6),      QRect(629-5, 277,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR6_BCU          },
 //   {QObject::trUtf8("HVAC"),        D_FONT_BOLD(6),      QRect(179, 382,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR2_HVAC         },
    {QObject::trUtf8("HVAC"),        D_FONT_BOLD(6),      QRect(254-30, 382-45,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR3_HVAC         },
    {QObject::trUtf8("HVAC"),        D_FONT_BOLD(6),      QRect(329-5, 382-45,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR4_HVAC         },
    {QObject::trUtf8("HVAC"),        D_FONT_BOLD(6),      QRect(404+20, 382-45,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR5_HVAC         },
//    {QObject::trUtf8("HVAC"),        D_FONT_BOLD(6),      QRect(479, 382,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR6_HVAC         },
    {QObject::trUtf8("HVAC"),        D_FONT_BOLD(6),      QRect(554-30, 382-45,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR7_HVAC         },
    {QObject::trUtf8("HVAC"),        D_FONT_BOLD(6),      QRect(629-5, 382-45,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR8_HVAC         },

    {QObject::trUtf8("PIS"),         D_FONT_BOLD(6),      QRect(629-5, 367,  50,  20),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR6_PIS          },
//    {QObject::trUtf8("DCU"),         D_FONT_BOLD(6),      QRect(179, 269,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR2_TCU          },
    {QObject::trUtf8("DCU"),         D_FONT_BOLD(6),      QRect(254-30, 269-33,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR3_TCU          },
    {QObject::trUtf8("DCU"),         D_FONT_BOLD(6),      QRect(329-5, 269-33,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR4_TCU          },
    {QObject::trUtf8("DCU"),         D_FONT_BOLD(6),      QRect(404+20, 269-33,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR5_TCU          },
//    {QObject::trUtf8("TCU"),         D_FONT_BOLD(6),      QRect(479, 269,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR6_TCU          },
    {QObject::trUtf8("DCU"),         D_FONT_BOLD(6),      QRect(554-30, 269-33,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR7_TCU          },

    {QObject::trUtf8("ERM"),       D_FONT_BOLD(6),         QRect(685,    255-60,  60,  30),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBCS_LABEL_DCCU2             },
    {QObject::trUtf8("ERM"),       D_FONT_BOLD(6),         QRect( 15+20, 255-60,  60,  30),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_DCCU1             },
    {QObject::trUtf8("HMI"),         D_FONT_BOLD(6),      QRect( 35+20, 200+54,  35,  30),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR1_HMI          },
    {QObject::trUtf8("HMI"),         D_FONT_BOLD(6),      QRect(690, 200+54,  35,  30),           Qt::black,                Qt::yellow,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR6_HMI          },

    {QObject::trUtf8("ATC"),         D_FONT_BOLD(6),      QRect(40, 307,  50,  20),           Qt::black,                 Qt::green,                CONTROL_LABEL,            ID_PIBCS_LABEL_HMI1_UPD         },


    {QObject::trUtf8("EDCU3"),         D_FONT_BOLD(6),      QRect(224, 397,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR3_GW1          },
    {QObject::trUtf8("EDCU4"),         D_FONT_BOLD(6),      QRect(224, 427,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR3_GW2          },
    {QObject::trUtf8("EDCU5"),         D_FONT_BOLD(6),      QRect(324, 397,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR4_GW1          },
    {QObject::trUtf8("EDCU6"),         D_FONT_BOLD(6),      QRect(324, 427,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR4_GW2          },
    {QObject::trUtf8("EDCU7"),         D_FONT_BOLD(6),      QRect(424, 397,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR5_GW1          },
    {QObject::trUtf8("EDCU8"),         D_FONT_BOLD(6),      QRect(424, 427,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR5_GW2          },
    {QObject::trUtf8("EDCU9"),         D_FONT_BOLD(6),      QRect(524, 397,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR7_GW1          },
    {QObject::trUtf8("EDCU10"),         D_FONT_BOLD(6),      QRect(524, 427,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR7_GW2          },
    {QObject::trUtf8("EDCU11"),         D_FONT_BOLD(6),      QRect(624, 397,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR8_GW1          },
    {QObject::trUtf8("EDCU12"),         D_FONT_BOLD(6),      QRect(624, 427,  50,  20),           Qt::black,                Qt::green,                CONTROL_LABEL,           ID_PIBCS_LABEL_CAR8_GW2          },

    //  BCU net
//    {QObject::trUtf8(""),            D_FONT_BOLD(6),      QRect(126, 359, 231,   7),           Qt::black,                Qt::darkGreen,            CONTROL_LABEL,           ID_PIBCS_LABEL_BCU1INTO3         },
//    {QObject::trUtf8(""),            D_FONT_BOLD(6),      QRect(426, 359, 231,   7),           Qt::black,                Qt::darkGreen,            CONTROL_LABEL,           ID_PIBCS_LABEL_BCU4INTO6         },




};

int g_CommStatusRomLen = sizeof(g_PicRom_CommStatus)/sizeof(ROMDATA);


BEGIN_MESSAGE_MAP(CCommStatusPage,CPage)
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
        ON_BTNCLK(IDLB_COM_BTN12, OnComBtn12Clk)
#endif
        ON_BTNCLK(ID_LABEL_REALTIMEFAULTCONFIRM, OnRealtimefaultBtnClk)
      //  ON_BTNCLK(ID_PIBCS_ICON_WARNNING, OnRealTimeFaultsWarnningIconClk)

END_MESSAGE_MAP()

CCommStatusPage::CCommStatusPage()
{

}

void CCommStatusPage::OnUpdatePage()
{
    UpdateCCU();
    UpdateUDP();
    UpdateRIOM();
    UpdateACU();
    UpdateTCU();
    UpdateATC();
    UpdateHMI();
    UpdateBCU();
    UpdateHVAC();
    UpdatePIS();
    UpdateDOOR();
    UpdateGW();
    UpdateRLD();
  //  UpdateCommInterrupt(ID_PIBCOMMINTERRUPT);
    updateTrain(ID_PIBCS_TRAIN);
    updateArrow(ID_PIBCS_ARROW_LEFT,ID_PIBCS_ARROW_RIGHT);
  //  updateFault(ID_PIBCS_ICON_WARNNING);
    UpdateRealtimefaults();
    //updateErrorLine(ID_PIBCS_TRAIN);


}

void CCommStatusPage::OnInitPage()
{


}

void CCommStatusPage::OnShowPage()
{
    ((CButton *)GetDlgItem(IDLB_COM_BTN10))->SetCtrlText(QObject::trUtf8(""));
    ((CButton *)GetDlgItem(IDLB_COM_BTN11))->SetCtrlText(QObject::trUtf8(""));
//        for(int i=1;i<g_RunStateRomLen;i++)
//        {
//            if(g_PicRom_CommStatus->nControlType==2)
//            {
//                ((CButton *)GetDlgItem(i))->SetCtrlText(g_PicRom_CommStatus[i]->showStr);
//            }

//        }

#ifdef PAGE_BUTTON_BAR_NEW
//    ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN2))->SetCtrlText(QObject::trUtf8("调试页面"));
//    ((CButton *)GetDlgItem(IDLB_COM_BTN8))->SetCtrlText(QObject::trUtf8("帮   助"));
#else
            ((CButton *)GetDlgItem(IDLB_COM_BTN1))->SetCtrlText(QObject::trUtf8("返   回"));
           // ((CButton *)GetDlgItem(IDLB_COM_BTN3))->SetCtrlText(QObject::trUtf8("调试页面"));
            ((CButton *)GetDlgItem(IDLB_COM_BTN6))->SetCtrlText(QObject::trUtf8("帮   助"));
#endif

}
void CCommStatusPage::UpdateRealtimefaults()
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

void CCommStatusPage::OnRealtimefaultBtnClk()
{
    g_faultsrom[g_romidx].confirm = true;
    g_realtimeFaultsbarList.removeAt(g_faultcount);
    if(g_faultcount>0)
    g_faultcount--;
    //m_faultcount--;

}

void CCommStatusPage::OnComBtn1Clk()
{
    ChangePage(PAGE_INDEX_RUNSTATE);
}

void CCommStatusPage::OnComBtn2Clk()
{
    ChangePage(PAGE_INDEX_MAINTAIN);
}

void CCommStatusPage::OnComBtn3Clk()
{
     ChangePage(PAGE_INDEX_CARSTATUS3);
}

void CCommStatusPage::OnComBtn4Clk()
{
   // ChangePage(PAGE_INDEX_CARSTATUS3);

     ChangePage(PAGE_INDEX_TCUBLOCKREASON);
}

void CCommStatusPage::OnComBtn5Clk()
{
     ChangePage(PAGE_INDEX_INSTANCYBROADCAST);
}

void CCommStatusPage::OnComBtn6Clk()
{
    ChangePage(PAGE_INDEX_FASPage);
}
void CCommStatusPage::OnComBtn7Clk()
{
    ChangePage(PAGE_INDEX_PISALARM);
}
void CCommStatusPage::OnComBtn8Clk()
{

}
void CCommStatusPage::OnComBtn12Clk()
{
    ChangePage(PAGE_INDEX_COMMSTATUSHELP);
}


void CCommStatusPage::UpdateCCU()
{

    //CTHM_CCU1On_B1	CCU1在线 openpcs根据Vxworks传来的CTHM_MPU1Status_U8判断是否在线
    if ( CTHM_CCU1On_B1 )
    {
        //CTHM_MPU1Dev_U8  mpu1设备为主  1=mpu1为主
        if (CTHM_CCU1Active_B1)
        {
            ccu1_color = 1;
        }
        else
        {
            ccu1_color = 2;
        }
    }
    else
    {
        ccu1_color = 0;
    }
    if (CTHM_CCU2On_B1)
    {
        if (CTHM_CCU2Active_B1)
        {
            ccu2_color = 1;
        }
        else
        {
            ccu2_color = 2;
        }
    }
    else
    {
        ccu2_color = 0;

    }


    if (CTHM_ERM1On_B1)   //CTHM_ERM1On_B1  ERM1在线
    {
        dccu1_color = 1;
    }
    else
    {
        dccu1_color = 0;
    }
    if (CTHM_ERM2On_B1)
    {
        dccu2_color = 1;
    }
    else
    {
        dccu2_color = 0;
    }

    SetCcuLabelColor(ID_PIBCS_LABEL_CCU1, ccu1_color);
    SetCcuLabelColor(ID_PIBCS_LABEL_CCU2, ccu2_color);
    SetCcuLabelColor(ID_PIBCS_LABEL_DCCU1, dccu1_color);
    SetCcuLabelColor(ID_PIBCS_LABEL_DCCU2, dccu2_color);
}

void CCommStatusPage::UpdateRIOM()
{
     if (    CTHM_TC1RIOMGWOn_B1
          &&CTHM_TC1DI1On_B1
          &&CTHM_TC1DI2On_B1
          &&CTHM_TC1DI3On_B1
          &&CTHM_TC1DI4On_B1
          &&CTHM_TC1DO1On_B1
          &&CTHM_TC1DO2On_B1
          &&CTHM_TC1AX1On_B1)
    {
        io1_color = 1;
    }
    else
    {
        io1_color = 0;
    }

    if (   CTHM_Mp1RIOMGWOn_B1
         &&CTHM_MP1DI1On_B1
         &&CTHM_MP1DO1On_B1)

    {
        io2_color = 1;
    }
    else
    {
        io2_color = 0;
    }

    if (   CTHM_M1RIOMGWOn_B1
         &&CTHM_M1DI1On_B1
         &&CTHM_M1DO1On_B1)
    {
        io3_color = 1;
    }
    else
    {
        io3_color = 0;
    }


    if (   CTHM_M2RIOMGWOn_B1
         &&CTHM_M2DI1On_B1
         &&CTHM_M2DO1On_B1)
    {
        io4_color = 1;
    }
    else
    {
        io4_color = 0;
    }


    if (   CTHM_Mp2RIOMGWOn_B1
         &&CTHM_MP2DI1On_B1
         &&CTHM_MP2DO1On_B1)
    {
        io5_color = 1;
    }
    else
    {
        io5_color = 0;
    }

    if (   CTHM_TC2RIOMGWOn_B1
         &&CTHM_TC2DI1On_B1
         &&CTHM_TC2DI2On_B1
         &&CTHM_TC2DI3On_B1
         &&CTHM_TC2DI4On_B1
         &&CTHM_TC2DO1On_B1
         &&CTHM_TC2DO2On_B1
         &&CTHM_TC2AX1On_B1)
    {
        io6_color = 1;
    }
    else
    {
        io6_color = 0;
    }


    SetRiomLabelColor(ID_PIBCS_LABEL_CAR1_RIOM, io1_color);
 //   SetRiomLabelColor(ID_PIBCS_LABEL_CAR2_RIOM, io2_color);
    SetRiomLabelColor(ID_PIBCS_LABEL_CAR3_RIOM, io2_color);
    SetRiomLabelColor(ID_PIBCS_LABEL_CAR4_RIOM, io3_color);
    SetRiomLabelColor(ID_PIBCS_LABEL_CAR5_RIOM, io4_color);
 //   SetRiomLabelColor(ID_PIBCS_LABEL_CAR6_RIOM, io6_color);
    SetRiomLabelColor(ID_PIBCS_LABEL_CAR7_RIOM, io5_color);
    SetRiomLabelColor(ID_PIBCS_LABEL_CAR8_RIOM, io6_color);

    return;
}

void CCommStatusPage::UpdateACU()
{

    if (CTHMI_ACU1On_B1)
    {
        acu1_color=1;
    }
    else
    {
        acu1_color = 0;
    }
    if (CTHMI_ACU2On_B1)
    {
        acu2_color = 1;
    }
    else
    {
        acu2_color = 0;
    }

    SetAcuLabelColor(ID_PIBCS_LABEL_CAR1_ACU, acu1_color);
    SetAcuLabelColor(ID_PIBCS_LABEL_CAR6_ACU, acu2_color);
    if(CTHMI_REC1On_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_FAS1))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_FAS1))->SetCtrlBKColor(Qt::white);
    }

    if(CTHMI_REC2On_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_FAS2))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_FAS2))->SetCtrlBKColor(Qt::white);
    }


}

void CCommStatusPage::UpdateTCU()
{

    if (CTHMI_VVVF1On_B1)
    {
        tcu1_color = 1;
    }
    else
    {
        tcu1_color = 0;
    }
    if (CTHMI_VVVF2On_B1)
    {
        tcu2_color = 1;
    }
    else
    {
        tcu2_color = 0;
    }
    if (CTHMI_VVVF3On_B1)
    {
        tcu3_color = 1;
    }
    else
    {
        tcu3_color = 0;
    }
    if (CTHMI_VVVF4On_B1)
    {
        tcu4_color = 1;
    }
    else
    {
        tcu4_color = 0;
    }


 //   SetTcuLabelColor(ID_PIBCS_LABEL_CAR2_TCU, tcu1_color);
    SetTcuLabelColor(ID_PIBCS_LABEL_CAR3_TCU, tcu1_color);
    SetTcuLabelColor(ID_PIBCS_LABEL_CAR4_TCU, tcu2_color);
    SetTcuLabelColor(ID_PIBCS_LABEL_CAR5_TCU, tcu3_color);
 //   SetTcuLabelColor(ID_PIBCS_LABEL_CAR6_TCU, tcu5_color);
    SetTcuLabelColor(ID_PIBCS_LABEL_CAR7_TCU, tcu4_color);


}

void CCommStatusPage::UpdateATC()
{
    if(CTHM_ATC1Active_B1&&CTHM_ATC1On_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_HMI1_UPD))->SetCtrlBKColor(Qt::green);
    }
    else if(CTHM_ATC1On_B1)
    {
         ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_HMI1_UPD))->SetCtrlBKColor(Qt::yellow);
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_HMI1_UPD))->SetCtrlBKColor(Qt::white);
    }

    if(CTHM_RTU1On_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_ATC10))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_ATC10))->SetCtrlBKColor(Qt::white);
    }
    if(CTHM_RTU2On_B1)
    {
        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_ATC11))->SetCtrlBKColor(Qt::green);
    }else
    {
        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_ATC11))->SetCtrlBKColor(Qt::white);
    }

}

void CCommStatusPage::UpdateHMI()
{
    //显示屏MVB通信正常则首先信任CCU发送的HMI状态标志，如果状态异常则再判断显示屏所处位置
    // 对于本侧显示屏通过 CCU发送的 MVB和UDP生命信号判断（两个生命信号都停止则显示白色）
    // 对于对侧显示屏通过 对侧显示屏发送的 UDP包生命信号判断

     // CTHM_HMI1On_B1	HMI1在线
//    if (Bit(CCU_HMI_222_16,6))
//    {
//        //TC1     DICT_Cab KeyActiveTci_B1    	Cab KeyActive	司机室激活
//        if (Bit(DI_110_1,9)  == 1)
//        {
//            hmi1_color = 1;
//        }
//        else
//        {
//            hmi1_color = 2;
//        }
//    }
//    else
//    {
//        if(TC2_HMI==1)
//        {
//            // 对于对侧显示屏通过 对侧显示屏发送的 UDP包生命信号判断
//            if((Bit(hmi_485_error,7)==1))
//            {
//                if (Bit(DI_110_1,9)  == 1)
//                {
//                    hmi1_color = 1;
//                }
//                else
//                {
//                    hmi1_color = 2;
//                }
//            }
//            else
//            {
//                hmi1_color = 0;
//            }
//        }
//        else
//        {
//            // 对于本侧显示屏通过 CCU发送的 MVB和UDP生命信号判断（两个生命信号都停止则显示白色）
//            if(TC1_HMI==1)
//            {
//                if(g_485_comm_err_flg1&&g_udp_comm_err_flg1==1)
//                {
//                     hmi2_color = 0;
//                }
//                else
//                {
//                    if (Bit(DI_110_1,9)  == 1)
//                    {
//                        hmi2_color = 1;
//                    }
//                    else
//                    {
//                        hmi2_color = 2;
//                    }
//                }
//            }
//            else
//            {
//                hmi1_color = 0;
//            }
//        }
//    }


//    if (Bit(CCU_HMI_222_16,5))
//    {
//        if (Bit(DI_180_1,9) == 1)
//        {
//            hmi2_color = 1;
//        }
//        else
//        {
//            hmi2_color = 2;
//        }
//    }
//    else
//    {
//        if(TC1_HMI==1)
//        {
//            if((Bit(hmi_485_error,7)==1))
//            {
//                if (Bit(DI_180_1,9)  == 1)
//                {
//                    hmi2_color = 1;
//                }
//                else
//                {
//                    hmi2_color = 2;
//                }
//            }
//            else
//            {
//                hmi2_color = 0;
//            }
//        }
//        else
//        {
//            if(TC2_HMI==1)
//            {
//                if(g_485_comm_err_flg2&&g_udp_comm_err_flg2==1)
//                {
//                     hmi2_color = 0;
//                }
//                else
//                {
//                    if (Bit(DI_180_1,9)  == 1)
//                    {
//                        hmi2_color = 1;
//                    }
//                    else
//                    {
//                        hmi2_color = 2;
//                    }
//                }
//            }
//            else
//            {
//                hmi2_color = 0;
//            }

//        }
//    }


        if (CTHM_HMI1On_B1)
        {
            //TC1     DICT_Cab KeyActiveTci_B1    	Cab KeyActive	司机室激活
            if (CTHM_TC1Active_B1)
            {
                hmi1_color = 1;
            }
            else
            {
                hmi1_color = 2;
            }
        }
        else
        {
            hmi1_color = 0;
        }

        if (CTHM_HMI2On_B1)
        {
            //TC2     DICT_Cab KeyActiveTci_B1    	Cab KeyActive	司机室激活
            if (CTHM_TC2Active_B1)
            {
                hmi2_color = 1;
            }
            else
            {
                hmi2_color = 2;
            }
        }
        else
        {
            hmi2_color = 0;
        }
    SetHmiLabelColor(ID_PIBCS_LABEL_CAR1_HMI, hmi1_color);
    SetHmiLabelColor(ID_PIBCS_LABEL_CAR6_HMI, hmi2_color);

}

void CCommStatusPage::UpdateBCU()
{

    if (CTHMI_BCU1On_B1)   //CTHM_BCU1On_B1	BCU1在线
    {
        if(Bit(g_dataBuffer_MVB[368+144+11],13)==1)
        {
            bcu1_color = 1;
        }
        else
        {
            bcu1_color = 2;
        }
    }
    else
    {
        bcu1_color = 0;
    }
    if (CTHMI_BCU2On_B1)
    {
        if(Bit(g_dataBuffer_MVB[368+144+11+96],13)==1)
        {
            bcu2_color = 1;
        }
        else
        {
            bcu2_color = 2;
        }
    }
    else
    {
        bcu2_color = 0;
    }
    if (CTHMI_BCU3On_B1)
    {
        if(Bit(g_dataBuffer_MVB[368+144+11+192],13)==1)
        {
            bcu3_color = 1;
        }
        else
        {
            bcu3_color = 2;
        }
    }
    else
    {
        bcu3_color = 0;
    }
    if (CTHMI_BCU4On_B1)
    {
        if(Bit(g_dataBuffer_MVB[368+144+11+288],13)==1)
        {
            bcu4_color = 1;
        }
        else
        {
            bcu4_color = 2;
        }
    }
    else
    {
        bcu4_color = 0;
    }



    SetBcuLabelColor(ID_PIBCS_LABEL_CAR1_BCU, bcu1_color);
    SetBcuLabelColor(ID_PIBCS_LABEL_CAR3_BCU, bcu2_color);
    SetBcuLabelColor(ID_PIBCS_LABEL_CAR4_BCU, bcu3_color);
    SetBcuLabelColor(ID_PIBCS_LABEL_CAR6_BCU, bcu4_color);
//    SetBcucanLabelColor(ID_PIBCS_LABEL_BCU1INTO3, BCU_CAN1);
//    SetBcucanLabelColor(ID_PIBCS_LABEL_BCU4INTO6, BCU_CAN2);

}

void CCommStatusPage::UpdateHVAC()
{

    if (CTHMI_HVAC1On_B1)
    {
         hvac1_color=1;
     }
    else
    {
        hvac1_color = 0;
    }   //HVAC1
    if (CTHMI_HVAC2On_B1)
    {
        hvac2_color=1;

    }
    else
    {
        hvac2_color = 0;
    }
    if (CTHMI_HVAC3On_B1)
    {
        hvac3_color = 1;
     }
    else
    {
        hvac3_color = 0;
    }
    if (CTHMI_HVAC4On_B1)
    {
        hvac4_color = 1;
    }
    else
    {
        hvac4_color = 0;
    }
    if (CTHMI_HVAC5On_B1)
    {
        hvac5_color = 1;
    }
    else
    {
        hvac5_color = 0;
    }
    if (CTHMI_HVAC6On_B1)
    {
        hvac6_color = 1;
    }
    else
    {
        hvac6_color = 0;
    }


    SetHvacLabelColor(ID_PIBCS_LABEL_CAR1_HVAC, hvac1_color);
//    SetHvacLabelColor(ID_PIBCS_LABEL_CAR2_HVAC, hvac2_color);
    SetHvacLabelColor(ID_PIBCS_LABEL_CAR3_HVAC, hvac2_color);
    SetHvacLabelColor(ID_PIBCS_LABEL_CAR4_HVAC, hvac3_color);
    SetHvacLabelColor(ID_PIBCS_LABEL_CAR5_HVAC, hvac4_color);
 //   SetHvacLabelColor(ID_PIBCS_LABEL_CAR6_HVAC, hvac6_color);
    SetHvacLabelColor(ID_PIBCS_LABEL_CAR7_HVAC, hvac5_color);
    SetHvacLabelColor(ID_PIBCS_LABEL_CAR8_HVAC, hvac6_color);
}

void CCommStatusPage::UpdatePIS()
{
    if (CTHMI_PIS1On_B1)
    {
        if(CTHM_PIS1Active_B1)
        {
            pis1_color = 1;
        }
        else
        {
            pis1_color = 2;
        }
    }
    else
    {
        pis1_color = 0;
    }

    if (CTHMI_PIS2On_B1)
    {
        if(CTHM_PIS2Active_B1)
        {
            pis2_color = 1;
        }
        else
        {
            pis2_color = 2;
        }
    }
    else
    {
        pis2_color = 0;
    }

//    if (Bit(CCU_HMI_222_16, 8 ) == 1)   //PIS1
//    {
//        //PAiCT_ACSUIsMstr_B1	ACSU是主机  1=主机   如果主机从机标志位都没有给出则显示白色
//        if (Bit(PIS_911_3,8) == 0)
//        {
//            if (Bit(PIS_911_3,7) == 1)
//            {
//                pis1_color = 2;
//            }
//            else
//            {
//                pis1_color = 0;
//            }
//        }
//       else
//        {
//           pis1_color = 1;
//       }
//    }
//    else
//    {
//        pis1_color = 0;
//    }
//    if (Bit(CCU_HMI_222_16, 7 ) == 1)   //PIS2
//    {
//        if (Bit(PIS_921_3,8)== 0 )
//        {
//            if (Bit(PIS_921_3,7)== 1 )
//            {
//                pis2_color = 2;
//            }
//            else
//            {
//                pis2_color = 0;
//            }

//        }
//        else
//        {
//            pis2_color = 1;
//        }
//    }
//    else
//    {
//        pis2_color = 0;
//    }

    SetPisLabelColor(ID_PIBCS_LABEL_CAR1_PIS, pis1_color);
    SetPisLabelColor(ID_PIBCS_LABEL_CAR6_PIS, pis2_color);
}

void CCommStatusPage::UpdateDOOR()
{

    //che1_door1 在dialog.cpp 中统一处理 判断门网关不同状态下的 可信（有效）状态位

}



void CCommStatusPage::UpdateUDP()
{

//    if(TC1_HMI==1)
//    {
//        if(Bit(hmi_485_error,7)==1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_HMI2_UPD))->SetCtrlBKColor(Qt::cyan);
//        }
//        else
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_HMI2_UPD))->SetCtrlBKColor(Qt::white);
//        }

//        if(g_udp_comm_err_flg1)
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_HMI1_UPD))->SetCtrlBKColor(Qt::white);
//        }
//        else
//        {
//            ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_HMI1_UPD))->SetCtrlBKColor(Qt::cyan);
//        }


//    }
//    else
//    {
//        if(TC2_HMI==1)
//        {
//            if((Bit(hmi_485_error,7)==1))
//            {
//                ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_HMI1_UPD))->SetCtrlBKColor(Qt::cyan);
//            }
//            else
//            {
//                ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_HMI1_UPD))->SetCtrlBKColor(Qt::white);
//            }

//            if(g_udp_comm_err_flg2)
//            {
//                ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_HMI2_UPD))->SetCtrlBKColor(Qt::white);
//            }
//            else
//            {
//                ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_HMI2_UPD))->SetCtrlBKColor(Qt::cyan);
//            }
//        }
//        else
//        {
//             ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_HMI1_UPD))->SetCtrlBKColor(Qt::white);
//             ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_HMI2_UPD))->SetCtrlBKColor(Qt::white);
//        }
//    }


}

void CCommStatusPage::UpdateGW()
{



    //    CTHM_DCU1On_B1   门控制器1在线
    if (CTHMI_EDCU1On_B1)
        {
            //    DRiCT_OperStts_U8	运行模式	"0=Error  1=master  2=stand by"
            if((g_dataBuffer_MVB[1118]/256)==1)
            {
                car1_GW1 = 1;
            }else if((g_dataBuffer_MVB[1118]/256)==2)
            {
                car1_GW1 = 2;
            }else if((g_dataBuffer_MVB[1118]/256)==3)
            {
                car1_GW1 = 4;
            }else if((g_dataBuffer_MVB[1118]/256)==0)
            {
                car1_GW1 = 3;
            }else
            {
                car1_GW1 = 3;
            }
        }
        else
        {
            car1_GW1 = 0;

        }
        if (CTHMI_EDCU2On_B1  )
        {
            if((g_dataBuffer_MVB[1118+32]/256)==1)
            {
                car1_GW2 = 1;
            }
            else if((g_dataBuffer_MVB[1118+32]/256)==2)
            {
                car1_GW2 = 2;
            }
            else if((g_dataBuffer_MVB[1118+32]/256)==3)
            {
                car1_GW2 = 4;
            }
            else if((g_dataBuffer_MVB[1118+32]/256)==0)
            {
                car1_GW2 = 3;
            }else
            {
                car1_GW2 = 3;

            }
        }
        else
        {
            car1_GW2 = 0;

        }
        if (CTHMI_EDCU3On_B1 )
        {
            if((g_dataBuffer_MVB[1118+64]/256)==1)
            {
                car2_GW1 = 1;
            }
            else if((g_dataBuffer_MVB[1118+64]/256)==2)
            {
                car2_GW1 = 2;
            }
            else if((g_dataBuffer_MVB[1118+64]/256)==3)
            {
                car2_GW1 = 4;
            }
            else if((g_dataBuffer_MVB[1118+64]/256)==0)
            {
                car2_GW1 = 3;
            }else
            {
                car2_GW1 = 3;

            }
        }
        else
        {
            car2_GW1 = 0;

        }
        if (CTHMI_EDCU4On_B1 )
        {
            if((g_dataBuffer_MVB[1118+96]/256)==1)
            {
                car2_GW2 = 1;
            }
            else if((g_dataBuffer_MVB[1118+96]/256)==2)
            {
                car2_GW2 = 2;
            }
            else if((g_dataBuffer_MVB[1118+96]/256)==3)
            {
                car2_GW2 = 4;
            }
            else if((g_dataBuffer_MVB[1118+96]/256)==0)
            {
                car2_GW2 = 3;
            }else
            {
                car2_GW2 = 3;

            }
        }
        else
        {
            car2_GW2 = 0;

        }
        if (CTHMI_EDCU5On_B1)
        {
            if((g_dataBuffer_MVB[1118+128]/256)==1)
            {
                car3_GW1 = 1;
            }
            else if((g_dataBuffer_MVB[1118+128]/256)==2)
            {
                car3_GW1 = 2;
            }
            else if((g_dataBuffer_MVB[1118+128]/256)==3)
            {
                car3_GW1 = 4;
            }
            else if((g_dataBuffer_MVB[1118+128]/256)==0)
            {
                car3_GW1 = 3;
            }else
            {
                car3_GW1 = 3;

            }
        }
        else
        {
            car3_GW1 = 0;

        }
        if (CTHMI_EDCU6On_B1  )
        {
            if((g_dataBuffer_MVB[1118+160]/256)==1)
            {
                car3_GW2 = 1;
            }
            else if((g_dataBuffer_MVB[1118+160]/256)==2)
            {
                car3_GW2 = 2;
            }
            else if((g_dataBuffer_MVB[1118+160]/256)==3)
            {
                car3_GW2 = 4;
            }
            else if((g_dataBuffer_MVB[1118+160]/256)==0)
            {
                car3_GW2 = 3;
            }else
            {
                car3_GW2 = 3;
            }
        }
        else
        {
            car3_GW2 = 0;

        }
        if (CTHMI_EDCU7On_B1 )
        {
            if((g_dataBuffer_MVB[1118+192]/256)==1)
            {
                car4_GW1 = 1;
            }
            else if((g_dataBuffer_MVB[1118+192]/256)==2)
            {
                car4_GW1 = 2;
            }
            else if((g_dataBuffer_MVB[1118+192]/256)==3)
            {
                car4_GW1 = 4;
            }
            else if((g_dataBuffer_MVB[1118+192]/256)==0)
            {
                car4_GW1 = 3;
            }else
            {
                car4_GW1 = 3;

            }
        }
        else
        {
            car4_GW1 = 0;

        }
        if (CTHMI_EDCU8On_B1  )
        {
            if((g_dataBuffer_MVB[1118+224]/256)==1)
            {
                car4_GW2 = 1;
            }
            else if((g_dataBuffer_MVB[1118+224]/256)==2)
            {
                car4_GW2 = 2;
            }
            else if((g_dataBuffer_MVB[1118+224]/256)==3)
            {
                car4_GW2 = 4;
            }
            else if((g_dataBuffer_MVB[1118+224]/256)==0)
            {
                car4_GW2 = 3;
            }else
            {
                car4_GW2 = 3;
            }
        }
        else
        {
            car4_GW2 = 0;

        }
        if (CTHMI_EDCU9On_B1  )
        {
            if((g_dataBuffer_MVB[1118+256]/256)==1)
            {
                car5_GW1 = 1;
            }
            else if((g_dataBuffer_MVB[1118+256]/256)==2)
            {
                car5_GW1 = 2;
            }
            else if((g_dataBuffer_MVB[1118+256]/256)==3)
            {
                car5_GW1 = 4;
            }
            else if((g_dataBuffer_MVB[1118+256]/256)==0)
            {
                car5_GW1 = 3;
            }else
            {
                car5_GW1 = 3;
            }
        }
        else
        {
            car5_GW1 = 0;

        }
        if (CTHMI_EDCU10On_B1 )
        {
            if((g_dataBuffer_MVB[1118+288]/256)==1)
            {
                car5_GW2 = 1;
            }
            else if((g_dataBuffer_MVB[1118+288]/256)==2)
            {
                car5_GW2 = 2;
            }
            else if((g_dataBuffer_MVB[1118+288]/256)==3)
            {
                car5_GW2 = 4;
            }
            else if((g_dataBuffer_MVB[1118+288]/256)==0)
            {
                car5_GW2 = 3;
            }else
            {
                car5_GW2 = 3;

            }
        }
        else
        {
            car5_GW2 = 0;

        }
        if (CTHMI_EDCU11On_B1 )
        {
            if((g_dataBuffer_MVB[1118+320]/256)==1)
            {
                car6_GW1 = 1;
            }
            else if((g_dataBuffer_MVB[1118+320]/256)==2)
            {
                car6_GW1 = 2;
            }
            else if((g_dataBuffer_MVB[1118+320]/256)==3)
            {
                car6_GW1 = 4;
            }
            else if((g_dataBuffer_MVB[1118+320]/256)==0)
            {
                car6_GW1 = 3;
            }else
            {
                car6_GW1 = 3;
            }
        }
        else
        {
            car6_GW1 = 0;

        }
        if (CTHMI_EDCU12On_B1 )
        {
            if((g_dataBuffer_MVB[1118+352]/256)==1)
            {
                car6_GW2 = 1;
            }
            else if((g_dataBuffer_MVB[1118+352]/256)==2)
            {
                car6_GW2 = 2;
            }
            else if((g_dataBuffer_MVB[1118+352]/256)==3)
            {
                car6_GW2 = 4;
            }
            else if((g_dataBuffer_MVB[1118+352]/256)==0)
            {
                car6_GW2 = 3;
            }else
            {
                car6_GW2 = 3;

            }
        }
        else
        {
            car6_GW2 = 0;

        }



    SetGwLabelColor(ID_PIBCS_LABEL_CAR1_GW1, car1_GW1);
    SetGwLabelColor(ID_PIBCS_LABEL_CAR1_GW2, car1_GW2);
//    SetGwLabelColor(ID_PIBCS_LABEL_CAR2_GW1, car2_GW1);
//    SetGwLabelColor(ID_PIBCS_LABEL_CAR2_GW2, car2_GW2);
    SetGwLabelColor(ID_PIBCS_LABEL_CAR3_GW1, car2_GW1);
    SetGwLabelColor(ID_PIBCS_LABEL_CAR3_GW2, car2_GW2);
    SetGwLabelColor(ID_PIBCS_LABEL_CAR4_GW1, car3_GW1);
    SetGwLabelColor(ID_PIBCS_LABEL_CAR4_GW2, car3_GW2);
    SetGwLabelColor(ID_PIBCS_LABEL_CAR5_GW1, car4_GW1);
    SetGwLabelColor(ID_PIBCS_LABEL_CAR5_GW2, car4_GW2);
//    SetGwLabelColor(ID_PIBCS_LABEL_CAR6_GW1, car6_GW1);
//    SetGwLabelColor(ID_PIBCS_LABEL_CAR6_GW2, car6_GW2);
    SetGwLabelColor(ID_PIBCS_LABEL_CAR7_GW1, car5_GW1);
    SetGwLabelColor(ID_PIBCS_LABEL_CAR7_GW2, car5_GW2);
    SetGwLabelColor(ID_PIBCS_LABEL_CAR8_GW1, car6_GW1);
    SetGwLabelColor(ID_PIBCS_LABEL_CAR8_GW2, car6_GW2);
}

void CCommStatusPage::SetCcuLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
    }

    return;
}

void CCommStatusPage::SetRiomLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }

    return;
}

void CCommStatusPage::SetAcuLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
    }

    return;
}

void CCommStatusPage::SetTcuLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }

    return;
}

void CCommStatusPage::SetAtcLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 3));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }

    return;
}

void CCommStatusPage::SetHmiLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 3));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }

    return;
}

void CCommStatusPage::SetBcuLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 3));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }

    return;
}

void CCommStatusPage::SetBcucanLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::darkGreen);
    }

    return;
}

void CCommStatusPage::SetHvacLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
//    else if (2 == colorVal)
//    {
//        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
//    }

    return;
}

void CCommStatusPage::SetPisLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 3));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }

    return;
}

void CCommStatusPage::SetDoorLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 2));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }

    return;
}

void CCommStatusPage::SetGwLabelColor(int id, int colorVal)
{
    ASSERT((colorVal >= 0) && (colorVal <= 4));
    if (0 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::white);
    }
    else if (1 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::green);
    }
    else if (2 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::yellow);
    }
    else if (3 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(Qt::red);
    }
    else if (4 == colorVal)
    {
        ((CLabel *)GetDlgItem(id))->SetCtrlBKColor(QColor(255,0,255));
    }

    return;
}

void CCommStatusPage::OnRealTimeFaultsWarnningIconClk()
{
    if (0 == g_RealTimeFaultsNum)
    {
        return;
    }
    g_backtoprepage = true;
    SetFaultType(E_FAULTS_TYPE_REALTIME);
    ChangePage(PAGE_INDEX_REALTIMEFAULT);
}

void CCommStatusPage::UpdateRLD()
{


//    if(Bit(DI_110_15,15)==0)
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR1_RLD))->SetCtrlBKColor(Qt::blue);
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR1_RLD))->SetCtrlBKColor(Qt::red);
//    }

//    if(Bit(DI_120_15,15)==0)
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR2_RLD))->SetCtrlBKColor(Qt::blue);
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR2_RLD))->SetCtrlBKColor(Qt::red);
//    }

//    if(Bit(DI_130_15,15)==0)
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR3_RLD))->SetCtrlBKColor(Qt::blue);
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR3_RLD))->SetCtrlBKColor(Qt::red);
//    }

//    if(Bit(DI_140_15,15)==0)
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR4_RLD))->SetCtrlBKColor(Qt::blue);
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR4_RLD))->SetCtrlBKColor(Qt::red);
//    }

//    if(Bit(DI_150_15,15)==0)
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR5_RLD))->SetCtrlBKColor(Qt::blue);
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR5_RLD))->SetCtrlBKColor(Qt::red);
//    }

//    if(Bit(DI_160_15,15)==0)
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR6_RLD))->SetCtrlBKColor(Qt::blue);
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR6_RLD))->SetCtrlBKColor(Qt::red);
//    }

//    if(Bit(DI_170_15,15)==0)
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR7_RLD))->SetCtrlBKColor(Qt::blue);
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR7_RLD))->SetCtrlBKColor(Qt::red);
//    }

//    if(Bit(DI_180_15,15)==0)
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR8_RLD))->SetCtrlBKColor(Qt::blue);
//    }
//    else
//    {
//        ((CLabel *)GetDlgItem(ID_PIBCS_LABEL_CAR8_RLD))->SetCtrlBKColor(Qt::red);
//    }
}





