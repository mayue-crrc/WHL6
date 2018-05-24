#ifndef CCOMMSTATUS5PAGE_H
#define CCOMMSTATUS5PAGE_H

#include "CPage.h"
#include "DataBuffer.h"


#define ID_COMSTATUS5_LINE1_ARRAY1 0x0001
#define ID_COMSTATUS5_LINE1_ARRAY2 0x0002
#define ID_COMSTATUS5_LINE1_ARRAY3 0x0003
#define ID_COMSTATUS5_LINE1_ARRAY4 0x0004
#define ID_COMSTATUS5_LINE1_ARRAY5 0x0005
#define ID_COMSTATUS5_LINE1_ARRAY6 0x0006
#define ID_COMSTATUS5_LINE1_ARRAY7 0x0007
#define ID_COMSTATUS5_LINE1_ARRAY8 0x0008
#define ID_COMSTATUS5_LINE1_ARRAY9 0x0009
#define ID_COMSTATUS5_LINE1_ARRAY10 0x000A
#define ID_COMSTATUS5_LINE1_ARRAY11 0x000B
#define ID_COMSTATUS5_LINE1_ARRAY12 0x000C


#define ID_COMSTATUS5_LINE2_ARRAY1 0x000D
#define ID_COMSTATUS5_LINE2_ARRAY2 0x000E
#define ID_COMSTATUS5_LINE2_ARRAY3 0x000F
#define ID_COMSTATUS5_LINE2_ARRAY4 0x0010
#define ID_COMSTATUS5_LINE2_ARRAY5 0x0011
#define ID_COMSTATUS5_LINE2_ARRAY6 0x0012
#define ID_COMSTATUS5_LINE2_ARRAY7 0x0013
#define ID_COMSTATUS5_LINE2_ARRAY8 0x0014
#define ID_COMSTATUS5_LINE2_ARRAY9 0x0015
#define ID_COMSTATUS5_LINE2_ARRAY10 0x0016
#define ID_COMSTATUS5_LINE2_ARRAY11 0x0017
#define ID_COMSTATUS5_LINE2_ARRAY12 0x0018

#define ID_COMSTATUS5_LINE3_ARRAY1 0x0019
#define ID_COMSTATUS5_LINE3_ARRAY2 0x001A


#define ID_COMSTATUS5_LINE4_ARRAY1 0x0025
#define ID_COMSTATUS5_LINE4_ARRAY2 0x0026
#define ID_COMSTATUS5_LINE4_ARRAY3 0x0027
#define ID_COMSTATUS5_LINE4_ARRAY4 0x0028
#define ID_COMSTATUS5_LINE4_ARRAY5 0x0029
#define ID_COMSTATUS5_LINE4_ARRAY6 0x002A
#define ID_COMSTATUS5_LINE4_ARRAY7 0x002B
#define ID_COMSTATUS5_LINE4_ARRAY8 0x002C
#define ID_COMSTATUS5_LINE4_ARRAY9 0x002D
#define ID_COMSTATUS5_LINE4_ARRAY10 0x002E
#define ID_COMSTATUS5_LINE4_ARRAY11 0x002F
#define ID_COMSTATUS5_LINE4_ARRAY12 0x0030

#define ID_COMSTATUS5_LINE5_ARRAY1 0x0031
#define ID_COMSTATUS5_LINE5_ARRAY2 0x0032
#define ID_COMSTATUS5_LINE5_ARRAY3 0x0033
#define ID_COMSTATUS5_LINE5_ARRAY4 0x0034
#define ID_COMSTATUS5_LINE5_ARRAY5 0x0035
#define ID_COMSTATUS5_LINE5_ARRAY6 0x0036
#define ID_COMSTATUS5_LINE5_ARRAY7 0x0037
#define ID_COMSTATUS5_LINE5_ARRAY8 0x0038
#define ID_COMSTATUS5_LINE5_ARRAY9 0x0039
#define ID_COMSTATUS5_LINE5_ARRAY10 0x003A
#define ID_COMSTATUS5_LINE5_ARRAY11 0x003B
#define ID_COMSTATUS5_LINE5_ARRAY12 0x003C


#define ID_COMSTATUS5_LINE6_ARRAY1 0x003D
#define ID_COMSTATUS5_LINE6_ARRAY2 0x003E
#define ID_COMSTATUS5_LINE6_ARRAY3 0x003F
#define ID_COMSTATUS5_LINE6_ARRAY4 0x0040
#define ID_COMSTATUS5_LINE6_ARRAY5 0x0041
#define ID_COMSTATUS5_LINE6_ARRAY6 0x0042
#define ID_COMSTATUS5_LINE6_ARRAY7 0x0043
#define ID_COMSTATUS5_LINE6_ARRAY8 0x0044
#define ID_COMSTATUS5_LINE6_ARRAY9 0x0045
#define ID_COMSTATUS5_LINE6_ARRAY10 0x0046
#define ID_COMSTATUS5_LINE6_ARRAY11 0x0047
#define ID_COMSTATUS5_LINE6_ARRAY12 0x0048



#define ID_COMSTATUS5_LINE7_ARRAY1 0x004B
#define ID_COMSTATUS5_LINE7_ARRAY2 0x004C
#define ID_COMSTATUS5_LINE7_ARRAY3 0x004D
#define ID_COMSTATUS5_LINE7_ARRAY4 0x004E
#define ID_COMSTATUS5_LINE7_ARRAY5 0x004F
#define ID_COMSTATUS5_LINE7_ARRAY6 0x0050
#define ID_COMSTATUS5_LINE7_ARRAY7 0x0051
#define ID_COMSTATUS5_LINE7_ARRAY8 0x0052
#define ID_COMSTATUS5_LINE7_ARRAY9 0x0053
#define ID_COMSTATUS5_LINE7_ARRAY10 0x0054
#define ID_COMSTATUS5_LINE7_ARRAY11 0x0055
#define ID_COMSTATUS5_LINE7_ARRAY12 0x0056

#define ID_COMSTATUS5_LINE8_ARRAY1 0x0057
#define ID_COMSTATUS5_LINE8_ARRAY2 0x0058
#define ID_COMSTATUS5_LINE8_ARRAY3 0x0059
#define ID_COMSTATUS5_LINE8_ARRAY4 0x005A
#define ID_COMSTATUS5_LINE8_ARRAY5 0x005B
#define ID_COMSTATUS5_LINE8_ARRAY6 0x005C
#define ID_COMSTATUS5_LINE8_ARRAY7 0x005D
#define ID_COMSTATUS5_LINE8_ARRAY8 0x005E
#define ID_COMSTATUS5_LINE8_ARRAY9 0x005F
#define ID_COMSTATUS5_LINE8_ARRAY10 0x0060
#define ID_COMSTATUS5_LINE8_ARRAY11 0x0061
#define ID_COMSTATUS5_LINE8_ARRAY12 0x0062


#define ID_COMSTATUS5_LINE9_ARRAY1 0x0063
#define ID_COMSTATUS5_LINE9_ARRAY2 0x0064
#define ID_COMSTATUS5_LINE9_ARRAY3 0x0065
#define ID_COMSTATUS5_LINE9_ARRAY4 0x0066
#define ID_COMSTATUS5_LINE9_ARRAY5 0x0067
#define ID_COMSTATUS5_LINE9_ARRAY6 0x0068
#define ID_COMSTATUS5_LINE9_ARRAY7 0x0069
#define ID_COMSTATUS5_LINE9_ARRAY8 0x006A
#define ID_COMSTATUS5_LINE9_ARRAY9 0x006B
#define ID_COMSTATUS5_LINE9_ARRAY10 0x006C
#define ID_COMSTATUS5_LINE9_ARRAY11 0x006D
#define ID_COMSTATUS5_LINE9_ARRAY12 0x006E


#define ID_COMSTATUS5_LINE10_ARRAY1 0x006F
#define ID_COMSTATUS5_LINE10_ARRAY2 0x0070
#define ID_COMSTATUS5_LINE10_ARRAY3 0x0071
#define ID_COMSTATUS5_LINE10_ARRAY4 0x0072
#define ID_COMSTATUS5_LINE10_ARRAY5 0x0073
#define ID_COMSTATUS5_LINE10_ARRAY6 0x0074
#define ID_COMSTATUS5_LINE10_ARRAY7 0x0075
#define ID_COMSTATUS5_LINE10_ARRAY8 0x0076
#define ID_COMSTATUS5_LINE10_ARRAY9 0x0077
#define ID_COMSTATUS5_LINE10_ARRAY10 0x0078
#define ID_COMSTATUS5_LINE10_ARRAY11 0x0079
#define ID_COMSTATUS5_LINE10_ARRAY12 0x007A


#define ID_COMSTATUS5_LINE11_ARRAY1 0x007B
#define ID_COMSTATUS5_LINE11_ARRAY2 0x007C
#define ID_COMSTATUS5_LINE11_ARRAY3 0x007D
#define ID_COMSTATUS5_LINE11_ARRAY4 0x007E
#define ID_COMSTATUS5_LINE11_ARRAY5 0x007F
#define ID_COMSTATUS5_LINE11_ARRAY6 0x0080
#define ID_COMSTATUS5_LINE11_ARRAY7 0x0081
#define ID_COMSTATUS5_LINE11_ARRAY8 0x0082


#define ID_COMSTATUS5_LINE12_ARRAY1 0x0087
#define ID_COMSTATUS5_LINE12_ARRAY2 0x0088
#define ID_COMSTATUS5_LINE12_ARRAY3 0x0089
#define ID_COMSTATUS5_LINE12_ARRAY4 0x008A
#define ID_COMSTATUS5_LINE12_ARRAY5 0x008B
#define ID_COMSTATUS5_LINE12_ARRAY6 0x008C
#define ID_COMSTATUS5_LINE12_ARRAY7 0x008D
#define ID_COMSTATUS5_LINE12_ARRAY8 0x008E
#define ID_COMSTATUS5_LINE12_ARRAY9 0x008F
#define ID_COMSTATUS5_LINE12_ARRAY10 0x0090
#define ID_COMSTATUS5_LINE12_ARRAY11 0x0091
#define ID_COMSTATUS5_LINE12_ARRAY12 0x0092

#define ID_COMSTATUS5_LINE13_ARRAY1 0x0093
#define ID_COMSTATUS5_LINE13_ARRAY2 0x0094
#define ID_COMSTATUS5_LINE13_ARRAY3 0x0095
#define ID_COMSTATUS5_LINE13_ARRAY4 0x0096
#define ID_COMSTATUS5_LINE13_ARRAY5 0x0097
#define ID_COMSTATUS5_LINE13_ARRAY6 0x0098
#define ID_COMSTATUS5_LINE13_ARRAY7 0x0099
#define ID_COMSTATUS5_LINE13_ARRAY8 0x009A
#define ID_COMSTATUS5_LINE13_ARRAY9 0x009B
#define ID_COMSTATUS5_LINE13_ARRAY10 0x009C
#define ID_COMSTATUS5_LINE13_ARRAY11 0x009D
#define ID_COMSTATUS5_LINE13_ARRAY12 0x009E

#define ID_COMSTATUS5_LINE14_ARRAY1 0x009F
#define ID_COMSTATUS5_LINE14_ARRAY2 0x0100
#define ID_COMSTATUS5_LINE14_ARRAY3 0x0101
#define ID_COMSTATUS5_LINE14_ARRAY4 0x0102
#define ID_COMSTATUS5_LINE14_ARRAY5 0x0103
#define ID_COMSTATUS5_LINE14_ARRAY6 0x0104
#define ID_COMSTATUS5_LINE14_ARRAY7 0x0105
#define ID_COMSTATUS5_LINE14_ARRAY8 0x0106
#define ID_COMSTATUS5_LINE14_ARRAY9 0x0107
#define ID_COMSTATUS5_LINE14_ARRAY10 0x0108
#define ID_COMSTATUS5_LINE14_ARRAY11 0x0109
#define ID_COMSTATUS5_LINE14_ARRAY12 0x0110


#define ID_COMSTATUS5_QUIT 0x0111

class CCommStatus5Page : public CPage
{
    DECLEAR_MESSAGE_MAP(CCommStatus5Page)
public:
    CCommStatus5Page();

protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnShowPage();
    void OnInitPage();
    void UpdateCommStatusData();
    void OnQuitBtnClk();
};

#endif // CCOMMSTATUS5PAGE_H