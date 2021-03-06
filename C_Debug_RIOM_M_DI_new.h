#ifndef C_DEBUG_RIOM_M_DI_NEW_H
#define C_DEBUG_RIOM_M_DI_NEW_H

#include "CPage.h"
#include "DataBuffer.h"

#define ID_PIBIOM_NEW_TABLE_BUTTON_PAGEDOWN 0X00AA
#define ID_PIBIOM_NEW_TABLE_BUTTON_PAGEUP   0X00AB


//Mp DIM1
#define ID_CIOM_NEW_TABLE_IO_TC1DATA1   0X0001
#define ID_CIOM_NEW_TABLE_IO_TC1DATA2   0X0002
#define ID_CIOM_NEW_TABLE_IO_TC1DATA3   0X0003
#define ID_CIOM_NEW_TABLE_IO_TC1DATA4   0X0004
#define ID_CIOM_NEW_TABLE_IO_TC1DATA5   0X0005
#define ID_CIOM_NEW_TABLE_IO_TC1DATA6   0X0006
#define ID_CIOM_NEW_TABLE_IO_TC1DATA7   0X0007
#define ID_CIOM_NEW_TABLE_IO_TC1DATA8   0X0008
#define ID_CIOM_NEW_TABLE_IO_TC1DATA9   0X0009
#define ID_CIOM_NEW_TABLE_IO_TC1DATA10   0X000A
#define ID_CIOM_NEW_TABLE_IO_TC1DATA11   0X000B
#define ID_CIOM_NEW_TABLE_IO_TC1DATA12   0X000C
#define ID_CIOM_NEW_TABLE_IO_TC1DATA13   0X000D
#define ID_CIOM_NEW_TABLE_IO_TC1DATA14   0X000E
#define ID_CIOM_NEW_TABLE_IO_TC1DATA15   0X000F
#define ID_CIOM_NEW_TABLE_IO_TC1DATA16   0X0010
#define ID_CIOM_NEW_TABLE_IO_TC1DATA17   0X0011
#define ID_CIOM_NEW_TABLE_IO_TC1DATA18   0X0012
#define ID_CIOM_NEW_TABLE_IO_TC1DATA19   0X0013
#define ID_CIOM_NEW_TABLE_IO_TC1DATA20   0X0014
#define ID_CIOM_NEW_TABLE_IO_TC1DATA21   0X0015
#define ID_CIOM_NEW_TABLE_IO_TC1DATA22   0X0016
#define ID_CIOM_NEW_TABLE_IO_TC1DATA23   0X0017
#define ID_CIOM_NEW_TABLE_IO_TC1DATA24   0X0018

#define ID_CIOM_NEW_TABLE_IO_TC2DATA1   0x0101
#define ID_CIOM_NEW_TABLE_IO_TC2DATA2   0x0102
#define ID_CIOM_NEW_TABLE_IO_TC2DATA3   0x0103
#define ID_CIOM_NEW_TABLE_IO_TC2DATA4   0x0104
#define ID_CIOM_NEW_TABLE_IO_TC2DATA5   0x0105
#define ID_CIOM_NEW_TABLE_IO_TC2DATA6   0x0106
#define ID_CIOM_NEW_TABLE_IO_TC2DATA7   0x0107
#define ID_CIOM_NEW_TABLE_IO_TC2DATA8   0x0108
#define ID_CIOM_NEW_TABLE_IO_TC2DATA9   0x0109
#define ID_CIOM_NEW_TABLE_IO_TC2DATA10   0x010A
#define ID_CIOM_NEW_TABLE_IO_TC2DATA11   0x010B
#define ID_CIOM_NEW_TABLE_IO_TC2DATA12   0x010C
#define ID_CIOM_NEW_TABLE_IO_TC2DATA13   0x010D
#define ID_CIOM_NEW_TABLE_IO_TC2DATA14   0x010E
#define ID_CIOM_NEW_TABLE_IO_TC2DATA15   0x010F
#define ID_CIOM_NEW_TABLE_IO_TC2DATA16   0x0110
#define ID_CIOM_NEW_TABLE_IO_TC2DATA17   0x0111
#define ID_CIOM_NEW_TABLE_IO_TC2DATA18   0x0112
#define ID_CIOM_NEW_TABLE_IO_TC2DATA19   0x0113
#define ID_CIOM_NEW_TABLE_IO_TC2DATA20   0x0114
#define ID_CIOM_NEW_TABLE_IO_TC2DATA21   0x0115
#define ID_CIOM_NEW_TABLE_IO_TC2DATA22   0x0116
#define ID_CIOM_NEW_TABLE_IO_TC2DATA23   0x0117
#define ID_CIOM_NEW_TABLE_IO_TC2DATA24   0x0118

#define ID_CIOM_NEW_TABLE_IO_1STATE0        0x0200
#define ID_CIOM_NEW_TABLE_IO_1STATE1   0x0201
#define ID_CIOM_NEW_TABLE_IO_1STATE2   0x0202
#define ID_CIOM_NEW_TABLE_IO_1STATE3   0x0203
#define ID_CIOM_NEW_TABLE_IO_1STATE4   0x0204
#define ID_CIOM_NEW_TABLE_IO_1STATE5   0x0205
#define ID_CIOM_NEW_TABLE_IO_1STATE6   0x0206
#define ID_CIOM_NEW_TABLE_IO_1STATE7   0x0207
#define ID_CIOM_NEW_TABLE_IO_1STATE8   0x0208
#define ID_CIOM_NEW_TABLE_IO_1STATE9   0x0209
#define ID_CIOM_NEW_TABLE_IO_1STATE10   0x020A
#define ID_CIOM_NEW_TABLE_IO_1STATE11   0x020B
#define ID_CIOM_NEW_TABLE_IO_1STATE12   0x020C
#define ID_CIOM_NEW_TABLE_IO_1STATE13   0x020D
#define ID_CIOM_NEW_TABLE_IO_1STATE14   0x020E
#define ID_CIOM_NEW_TABLE_IO_1STATE15   0x020F
#define ID_CIOM_NEW_TABLE_IO_1STATE16   0x0210
#define ID_CIOM_NEW_TABLE_IO_1STATE17   0x0211
#define ID_CIOM_NEW_TABLE_IO_1STATE18   0x0212
#define ID_CIOM_NEW_TABLE_IO_1STATE19   0x0213
#define ID_CIOM_NEW_TABLE_IO_1STATE20   0x0214
#define ID_CIOM_NEW_TABLE_IO_1STATE21   0x0215
#define ID_CIOM_NEW_TABLE_IO_1STATE22   0x0216
#define ID_CIOM_NEW_TABLE_IO_1STATE23   0x0217
#define ID_CIOM_NEW_TABLE_IO_1STATE24   0x0218


//M DIM1
#define ID_CIOM_NEW_TABLE_LINE1_TC1DATA1   0x1001
#define ID_CIOM_NEW_TABLE_LINE1_TC1DATA2   0x1002
#define ID_CIOM_NEW_TABLE_LINE1_TC1DATA3   0x1003
#define ID_CIOM_NEW_TABLE_LINE1_TC1DATA4   0x1004
#define ID_CIOM_NEW_TABLE_LINE1_TC1DATA5   0x1005
#define ID_CIOM_NEW_TABLE_LINE1_TC1DATA6   0x1006
#define ID_CIOM_NEW_TABLE_LINE1_TC1DATA7   0x1007
#define ID_CIOM_NEW_TABLE_LINE1_TC1DATA8   0x1008
#define ID_CIOM_NEW_TABLE_LINE1_TC1DATA9   0x1009
#define ID_CIOM_NEW_TABLE_LINE1_TC1DATA10   0x100A
#define ID_CIOM_NEW_TABLE_LINE1_TC1DATA11   0x100B
#define ID_CIOM_NEW_TABLE_LINE1_TC1DATA12   0x100C
#define ID_CIOM_NEW_TABLE_LINE1_TC1DATA13   0x100D
#define ID_CIOM_NEW_TABLE_LINE1_TC1DATA14   0x100E
#define ID_CIOM_NEW_TABLE_LINE1_TC1DATA15   0x100F
#define ID_CIOM_NEW_TABLE_LINE1_TC1DATA16   0x1010
#define ID_CIOM_NEW_TABLE_LINE1_TC1DATA17   0x1011
#define ID_CIOM_NEW_TABLE_LINE1_TC1DATA18   0x1012
#define ID_CIOM_NEW_TABLE_LINE1_TC1DATA19   0x1013
#define ID_CIOM_NEW_TABLE_LINE1_TC1DATA20   0x1014
#define ID_CIOM_NEW_TABLE_LINE1_TC1DATA21   0x1015
#define ID_CIOM_NEW_TABLE_LINE1_TC1DATA22   0x1016
#define ID_CIOM_NEW_TABLE_LINE1_TC1DATA23   0x1017
#define ID_CIOM_NEW_TABLE_LINE1_TC1DATA24   0x1018

#define ID_CIOM_NEW_TABLE_LINE1_TC2DATA1   0x1101
#define ID_CIOM_NEW_TABLE_LINE1_TC2DATA2   0x1102
#define ID_CIOM_NEW_TABLE_LINE1_TC2DATA3   0x1103
#define ID_CIOM_NEW_TABLE_LINE1_TC2DATA4   0x1104
#define ID_CIOM_NEW_TABLE_LINE1_TC2DATA5   0x1105
#define ID_CIOM_NEW_TABLE_LINE1_TC2DATA6   0x1106
#define ID_CIOM_NEW_TABLE_LINE1_TC2DATA7   0x1107
#define ID_CIOM_NEW_TABLE_LINE1_TC2DATA8   0x1108
#define ID_CIOM_NEW_TABLE_LINE1_TC2DATA9   0x1109
#define ID_CIOM_NEW_TABLE_LINE1_TC2DATA10   0x110A
#define ID_CIOM_NEW_TABLE_LINE1_TC2DATA11   0x110B
#define ID_CIOM_NEW_TABLE_LINE1_TC2DATA12   0x110C
#define ID_CIOM_NEW_TABLE_LINE1_TC2DATA13   0x110D
#define ID_CIOM_NEW_TABLE_LINE1_TC2DATA14   0x110E
#define ID_CIOM_NEW_TABLE_LINE1_TC2DATA15   0x110F
#define ID_CIOM_NEW_TABLE_LINE1_TC2DATA16   0x1110
#define ID_CIOM_NEW_TABLE_LINE1_TC2DATA17   0x1111
#define ID_CIOM_NEW_TABLE_LINE1_TC2DATA18   0x1112
#define ID_CIOM_NEW_TABLE_LINE1_TC2DATA19   0x1113
#define ID_CIOM_NEW_TABLE_LINE1_TC2DATA20   0x1114
#define ID_CIOM_NEW_TABLE_LINE1_TC2DATA21   0x1115
#define ID_CIOM_NEW_TABLE_LINE1_TC2DATA22   0x1116
#define ID_CIOM_NEW_TABLE_LINE1_TC2DATA23   0x1117
#define ID_CIOM_NEW_TABLE_LINE1_TC2DATA24   0x1118

#define ID_CIOM_NEW_TABLE_IO_2STATE0        0x1200
#define ID_CIOM_NEW_TABLE_IO_2STATE1   0x1201
#define ID_CIOM_NEW_TABLE_IO_2STATE2   0x1202
#define ID_CIOM_NEW_TABLE_IO_2STATE3   0x1203
#define ID_CIOM_NEW_TABLE_IO_2STATE4   0x1204
#define ID_CIOM_NEW_TABLE_IO_2STATE5   0x1205
#define ID_CIOM_NEW_TABLE_IO_2STATE6   0x1206
#define ID_CIOM_NEW_TABLE_IO_2STATE7   0x1207
#define ID_CIOM_NEW_TABLE_IO_2STATE8   0x1208
#define ID_CIOM_NEW_TABLE_IO_2STATE9   0x1209
#define ID_CIOM_NEW_TABLE_IO_2STATE10   0x120A
#define ID_CIOM_NEW_TABLE_IO_2STATE11   0x120B
#define ID_CIOM_NEW_TABLE_IO_2STATE12   0x120C
#define ID_CIOM_NEW_TABLE_IO_2STATE13   0x120D
#define ID_CIOM_NEW_TABLE_IO_2STATE14   0x120E
#define ID_CIOM_NEW_TABLE_IO_2STATE15   0x120F
#define ID_CIOM_NEW_TABLE_IO_2STATE16   0x1210
#define ID_CIOM_NEW_TABLE_IO_2STATE17   0x1211
#define ID_CIOM_NEW_TABLE_IO_2STATE18   0x1212
#define ID_CIOM_NEW_TABLE_IO_2STATE19   0x1213
#define ID_CIOM_NEW_TABLE_IO_2STATE20   0x1214
#define ID_CIOM_NEW_TABLE_IO_2STATE21   0x1215
#define ID_CIOM_NEW_TABLE_IO_2STATE22   0x1216
#define ID_CIOM_NEW_TABLE_IO_2STATE23   0x1217
#define ID_CIOM_NEW_TABLE_IO_2STATE24   0x1218



//Line3

#define ID_CIOM_NEW_TABLE_LINE2_TC1DATA1   0x2001
#define ID_CIOM_NEW_TABLE_LINE2_TC1DATA2   0x2002
#define ID_CIOM_NEW_TABLE_LINE2_TC1DATA3   0x2003
#define ID_CIOM_NEW_TABLE_LINE2_TC1DATA4   0x2004
#define ID_CIOM_NEW_TABLE_LINE2_TC1DATA5   0x2005
#define ID_CIOM_NEW_TABLE_LINE2_TC1DATA6   0x2006
#define ID_CIOM_NEW_TABLE_LINE2_TC1DATA7   0x2007
#define ID_CIOM_NEW_TABLE_LINE2_TC1DATA8   0x2008
#define ID_CIOM_NEW_TABLE_LINE2_TC1DATA9   0x2009
#define ID_CIOM_NEW_TABLE_LINE2_TC1DATA10   0x200A
#define ID_CIOM_NEW_TABLE_LINE2_TC1DATA11   0x200B
#define ID_CIOM_NEW_TABLE_LINE2_TC1DATA12   0x200C
#define ID_CIOM_NEW_TABLE_LINE2_TC1DATA13   0x200D
#define ID_CIOM_NEW_TABLE_LINE2_TC1DATA14   0x200E
#define ID_CIOM_NEW_TABLE_LINE2_TC1DATA15   0x200F
#define ID_CIOM_NEW_TABLE_LINE2_TC1DATA16   0x2010
#define ID_CIOM_NEW_TABLE_LINE2_TC1DATA17   0x2011
#define ID_CIOM_NEW_TABLE_LINE2_TC1DATA18   0x2012
#define ID_CIOM_NEW_TABLE_LINE2_TC1DATA19   0x2013
#define ID_CIOM_NEW_TABLE_LINE2_TC1DATA20   0x2014
#define ID_CIOM_NEW_TABLE_LINE2_TC1DATA21   0x2015
#define ID_CIOM_NEW_TABLE_LINE2_TC1DATA22   0x2016
#define ID_CIOM_NEW_TABLE_LINE2_TC1DATA23   0x2017
#define ID_CIOM_NEW_TABLE_LINE2_TC1DATA24   0x2018

#define ID_CIOM_NEW_TABLE_LINE2_TC2DATA1   0x2101
#define ID_CIOM_NEW_TABLE_LINE2_TC2DATA2   0x2102
#define ID_CIOM_NEW_TABLE_LINE2_TC2DATA3   0x2103
#define ID_CIOM_NEW_TABLE_LINE2_TC2DATA4   0x2104
#define ID_CIOM_NEW_TABLE_LINE2_TC2DATA5   0x2105
#define ID_CIOM_NEW_TABLE_LINE2_TC2DATA6   0x2106
#define ID_CIOM_NEW_TABLE_LINE2_TC2DATA7   0x2107
#define ID_CIOM_NEW_TABLE_LINE2_TC2DATA8   0x2108
#define ID_CIOM_NEW_TABLE_LINE2_TC2DATA9   0x2109
#define ID_CIOM_NEW_TABLE_LINE2_TC2DATA10   0x210A
#define ID_CIOM_NEW_TABLE_LINE2_TC2DATA11   0x210B
#define ID_CIOM_NEW_TABLE_LINE2_TC2DATA12   0x210C
#define ID_CIOM_NEW_TABLE_LINE2_TC2DATA13   0x210D
#define ID_CIOM_NEW_TABLE_LINE2_TC2DATA14   0x210E
#define ID_CIOM_NEW_TABLE_LINE2_TC2DATA15   0x210F
#define ID_CIOM_NEW_TABLE_LINE2_TC2DATA16   0x2110
#define ID_CIOM_NEW_TABLE_LINE2_TC2DATA17   0x2111
#define ID_CIOM_NEW_TABLE_LINE2_TC2DATA18   0x2112
#define ID_CIOM_NEW_TABLE_LINE2_TC2DATA19   0x2113
#define ID_CIOM_NEW_TABLE_LINE2_TC2DATA20   0x2114
#define ID_CIOM_NEW_TABLE_LINE2_TC2DATA21   0x2115
#define ID_CIOM_NEW_TABLE_LINE2_TC2DATA22   0x2116
#define ID_CIOM_NEW_TABLE_LINE2_TC2DATA23   0x2117
#define ID_CIOM_NEW_TABLE_LINE2_TC2DATA24   0x2118

#define ID_CIOM_NEW_TABLE_IO_3STATE0        0x2200
#define ID_CIOM_NEW_TABLE_IO_3STATE1   0x2201
#define ID_CIOM_NEW_TABLE_IO_3STATE2   0x2202
#define ID_CIOM_NEW_TABLE_IO_3STATE3   0x2203
#define ID_CIOM_NEW_TABLE_IO_3STATE4   0x2204
#define ID_CIOM_NEW_TABLE_IO_3STATE5   0x2205
#define ID_CIOM_NEW_TABLE_IO_3STATE6   0x2206
#define ID_CIOM_NEW_TABLE_IO_3STATE7   0x2207
#define ID_CIOM_NEW_TABLE_IO_3STATE8   0x2208
#define ID_CIOM_NEW_TABLE_IO_3STATE9   0x2209
#define ID_CIOM_NEW_TABLE_IO_3STATE10   0x220A
#define ID_CIOM_NEW_TABLE_IO_3STATE11   0x220B
#define ID_CIOM_NEW_TABLE_IO_3STATE12   0x220C
#define ID_CIOM_NEW_TABLE_IO_3STATE13   0x220D
#define ID_CIOM_NEW_TABLE_IO_3STATE14   0x220E
#define ID_CIOM_NEW_TABLE_IO_3STATE15   0x220F
#define ID_CIOM_NEW_TABLE_IO_3STATE16   0x2210
#define ID_CIOM_NEW_TABLE_IO_3STATE17   0x2211
#define ID_CIOM_NEW_TABLE_IO_3STATE18   0x2212
#define ID_CIOM_NEW_TABLE_IO_3STATE19   0x2213
#define ID_CIOM_NEW_TABLE_IO_3STATE20   0x2214
#define ID_CIOM_NEW_TABLE_IO_3STATE21   0x2215
#define ID_CIOM_NEW_TABLE_IO_3STATE22   0x2216
#define ID_CIOM_NEW_TABLE_IO_3STATE23   0x2217
#define ID_CIOM_NEW_TABLE_IO_3STATE24   0x2218

//Line 4

#define ID_CIOM_NEW_TABLE_LINE3_TC1DATA1   0x3001
#define ID_CIOM_NEW_TABLE_LINE3_TC1DATA2   0x3002
#define ID_CIOM_NEW_TABLE_LINE3_TC1DATA3   0x3003
#define ID_CIOM_NEW_TABLE_LINE3_TC1DATA4   0x3004
#define ID_CIOM_NEW_TABLE_LINE3_TC1DATA5   0x3005
#define ID_CIOM_NEW_TABLE_LINE3_TC1DATA6   0x3006
#define ID_CIOM_NEW_TABLE_LINE3_TC1DATA7   0x3007
#define ID_CIOM_NEW_TABLE_LINE3_TC1DATA8   0x3008
#define ID_CIOM_NEW_TABLE_LINE3_TC1DATA9   0x3009
#define ID_CIOM_NEW_TABLE_LINE3_TC1DATA10   0x300A
#define ID_CIOM_NEW_TABLE_LINE3_TC1DATA11   0x300B
#define ID_CIOM_NEW_TABLE_LINE3_TC1DATA12   0x300C
#define ID_CIOM_NEW_TABLE_LINE3_TC1DATA13   0x300D
#define ID_CIOM_NEW_TABLE_LINE3_TC1DATA14   0x300E
#define ID_CIOM_NEW_TABLE_LINE3_TC1DATA15   0x300F
#define ID_CIOM_NEW_TABLE_LINE3_TC1DATA16   0x3010
#define ID_CIOM_NEW_TABLE_LINE3_TC1DATA17   0x3011
#define ID_CIOM_NEW_TABLE_LINE3_TC1DATA18   0x3012
#define ID_CIOM_NEW_TABLE_LINE3_TC1DATA19   0x3013
#define ID_CIOM_NEW_TABLE_LINE3_TC1DATA20   0x3014
#define ID_CIOM_NEW_TABLE_LINE3_TC1DATA21   0x3015
#define ID_CIOM_NEW_TABLE_LINE3_TC1DATA22   0x3016
#define ID_CIOM_NEW_TABLE_LINE3_TC1DATA23   0x3017
#define ID_CIOM_NEW_TABLE_LINE3_TC1DATA24   0x3018

#define ID_CIOM_NEW_TABLE_LINE3_TC2DATA1   0x3101
#define ID_CIOM_NEW_TABLE_LINE3_TC2DATA2   0x3102
#define ID_CIOM_NEW_TABLE_LINE3_TC2DATA3   0x3103
#define ID_CIOM_NEW_TABLE_LINE3_TC2DATA4   0x3104
#define ID_CIOM_NEW_TABLE_LINE3_TC2DATA5   0x3105
#define ID_CIOM_NEW_TABLE_LINE3_TC2DATA6   0x3106
#define ID_CIOM_NEW_TABLE_LINE3_TC2DATA7   0x3107
#define ID_CIOM_NEW_TABLE_LINE3_TC2DATA8   0x3108
#define ID_CIOM_NEW_TABLE_LINE3_TC2DATA9   0x3109
#define ID_CIOM_NEW_TABLE_LINE3_TC2DATA10   0x310A
#define ID_CIOM_NEW_TABLE_LINE3_TC2DATA11   0x310B
#define ID_CIOM_NEW_TABLE_LINE3_TC2DATA12   0x310C
#define ID_CIOM_NEW_TABLE_LINE3_TC2DATA13   0x310D
#define ID_CIOM_NEW_TABLE_LINE3_TC2DATA14   0x310E
#define ID_CIOM_NEW_TABLE_LINE3_TC2DATA15   0x310F
#define ID_CIOM_NEW_TABLE_LINE3_TC2DATA16   0x3110
#define ID_CIOM_NEW_TABLE_LINE3_TC2DATA17   0x3111
#define ID_CIOM_NEW_TABLE_LINE3_TC2DATA18   0x3112
#define ID_CIOM_NEW_TABLE_LINE3_TC2DATA19   0x3113
#define ID_CIOM_NEW_TABLE_LINE3_TC2DATA20   0x3114
#define ID_CIOM_NEW_TABLE_LINE3_TC2DATA21   0x3115
#define ID_CIOM_NEW_TABLE_LINE3_TC2DATA22   0x3116
#define ID_CIOM_NEW_TABLE_LINE3_TC2DATA23   0x3117
#define ID_CIOM_NEW_TABLE_LINE3_TC2DATA24   0x3118

#define ID_CIOM_NEW_TABLE_IO_4STATE0        0x3200
#define ID_CIOM_NEW_TABLE_IO_4STATE1   0x3201
#define ID_CIOM_NEW_TABLE_IO_4STATE2   0x3202
#define ID_CIOM_NEW_TABLE_IO_4STATE3   0x3203
#define ID_CIOM_NEW_TABLE_IO_4STATE4   0x3204
#define ID_CIOM_NEW_TABLE_IO_4STATE5   0x3205
#define ID_CIOM_NEW_TABLE_IO_4STATE6   0x3206
#define ID_CIOM_NEW_TABLE_IO_4STATE7   0x3207
#define ID_CIOM_NEW_TABLE_IO_4STATE8   0x3208
#define ID_CIOM_NEW_TABLE_IO_4STATE9   0x3209
#define ID_CIOM_NEW_TABLE_IO_4STATE10   0x320A
#define ID_CIOM_NEW_TABLE_IO_4STATE11   0x320B
#define ID_CIOM_NEW_TABLE_IO_4STATE12   0x320C
#define ID_CIOM_NEW_TABLE_IO_4STATE13   0x320D
#define ID_CIOM_NEW_TABLE_IO_4STATE14   0x320E
#define ID_CIOM_NEW_TABLE_IO_4STATE15   0x320F
#define ID_CIOM_NEW_TABLE_IO_4STATE16   0x3210
#define ID_CIOM_NEW_TABLE_IO_4STATE17   0x3211
#define ID_CIOM_NEW_TABLE_IO_4STATE18   0x3212
#define ID_CIOM_NEW_TABLE_IO_4STATE19   0x3213
#define ID_CIOM_NEW_TABLE_IO_4STATE20   0x3214
#define ID_CIOM_NEW_TABLE_IO_4STATE21   0x3215
#define ID_CIOM_NEW_TABLE_IO_4STATE22   0x3216
#define ID_CIOM_NEW_TABLE_IO_4STATE23   0x3217
#define ID_CIOM_NEW_TABLE_IO_4STATE24   0x3218




class C_Debug_RIOM_M_DI_new : public CPage
{
    DECLEAR_MESSAGE_MAP(C_Debug_RIOM_M_DI_new)
public:
    C_Debug_RIOM_M_DI_new();

protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnShowPage();
    void OnInitPage();
private:
    void OnPageUpBtnClk();
    void OnComBtn1Clk();
    void OnComBtn5Clk();
    void OnComBtn6Clk();
    void UpdateData();

};



#endif // C_DEBUG_RIOM_M_DI_NEW_H
