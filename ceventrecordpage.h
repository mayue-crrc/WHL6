#ifndef CEVENTRECORDPAGE_H
#define CEVENTRECORDPAGE_H



#include "CPage.h"

#define ID_FAULTS_LIST_PAGE_LABEL_S_DATE1    0X4401
#define ID_FAULTS_LIST_PAGE_LABEL_S_DATE2    0X4402
#define ID_FAULTS_LIST_PAGE_LABEL_S_DATE3    0X4403
#define ID_FAULTS_LIST_PAGE_LABEL_S_DATE4    0X4404
#define ID_FAULTS_LIST_PAGE_LABEL_S_DATE5    0X4405
#define ID_FAULTS_LIST_PAGE_LABEL_S_DATE6    0X4406
#define ID_FAULTS_LIST_PAGE_LABEL_S_DATE7    0X4407
#define ID_FAULTS_LIST_PAGE_LABEL_S_DATE8    0X4408
#define ID_FAULTS_LIST_PAGE_LABEL_S_DATE9    0X4409
#define ID_FAULTS_LIST_PAGE_LABEL_S_DATE10   0X440a
#define ID_FAULTS_LIST_PAGE_LABEL_S_DATE11   0X440b
#define ID_FAULTS_LIST_PAGE_LABEL_S_DATE12   0X440c
#define ID_FAULTS_LIST_PAGE_LABEL_S_DATE13   0X440d
#define ID_FAULTS_LIST_PAGE_LABEL_S_DATE14   0X440e
#define ID_FAULTS_LIST_PAGE_LABEL_S_DATE15   0X440f
#define ID_FAULTS_LIST_PAGE_LABEL_S_DATE16   0X4410
#define ID_FAULTS_LIST_PAGE_LABEL_S_DATE17   0X4411
#define ID_FAULTS_LIST_PAGE_LABEL_S_DATE18   0X4412
#define ID_FAULTS_LIST_PAGE_LABEL_S_DATE19   0X4413
#define ID_FAULTS_LIST_PAGE_LABEL_S_DATE20   0X4414

#define ID_FAULTS_LIST_PAGE_LABEL_S_TIME1    0X4415
#define ID_FAULTS_LIST_PAGE_LABEL_S_TIME2    0X4416
#define ID_FAULTS_LIST_PAGE_LABEL_S_TIME3    0X4417
#define ID_FAULTS_LIST_PAGE_LABEL_S_TIME4    0X4418
#define ID_FAULTS_LIST_PAGE_LABEL_S_TIME5    0X4419
#define ID_FAULTS_LIST_PAGE_LABEL_S_TIME6    0X441a
#define ID_FAULTS_LIST_PAGE_LABEL_S_TIME7    0X441b
#define ID_FAULTS_LIST_PAGE_LABEL_S_TIME8    0X441c
#define ID_FAULTS_LIST_PAGE_LABEL_S_TIME9    0X441d
#define ID_FAULTS_LIST_PAGE_LABEL_S_TIME10   0X441e
#define ID_FAULTS_LIST_PAGE_LABEL_S_TIME11   0X441f
#define ID_FAULTS_LIST_PAGE_LABEL_S_TIME12   0X4420
#define ID_FAULTS_LIST_PAGE_LABEL_S_TIME13   0X4421
#define ID_FAULTS_LIST_PAGE_LABEL_S_TIME14   0X4422
#define ID_FAULTS_LIST_PAGE_LABEL_S_TIME15   0X4423
#define ID_FAULTS_LIST_PAGE_LABEL_S_TIME16   0X4424
#define ID_FAULTS_LIST_PAGE_LABEL_S_TIME17   0X4425
#define ID_FAULTS_LIST_PAGE_LABEL_S_TIME18   0X4426
#define ID_FAULTS_LIST_PAGE_LABEL_S_TIME19   0X4427
#define ID_FAULTS_LIST_PAGE_LABEL_S_TIME20   0X4428

#define ID_FAULTS_LIST_PAGE_LABEL_CODE1    0X4429
#define ID_FAULTS_LIST_PAGE_LABEL_CODE2    0X442a
#define ID_FAULTS_LIST_PAGE_LABEL_CODE3    0X442b
#define ID_FAULTS_LIST_PAGE_LABEL_CODE4    0X442c
#define ID_FAULTS_LIST_PAGE_LABEL_CODE5    0X442d
#define ID_FAULTS_LIST_PAGE_LABEL_CODE6    0X442e
#define ID_FAULTS_LIST_PAGE_LABEL_CODE7    0X442f
#define ID_FAULTS_LIST_PAGE_LABEL_CODE8    0X4430
#define ID_FAULTS_LIST_PAGE_LABEL_CODE9    0X4431
#define ID_FAULTS_LIST_PAGE_LABEL_CODE10   0X4432
#define ID_FAULTS_LIST_PAGE_LABEL_CODE11   0X4433
#define ID_FAULTS_LIST_PAGE_LABEL_CODE12   0X4434
#define ID_FAULTS_LIST_PAGE_LABEL_CODE13   0X4435
#define ID_FAULTS_LIST_PAGE_LABEL_CODE14   0X4436
#define ID_FAULTS_LIST_PAGE_LABEL_CODE15   0X4437
#define ID_FAULTS_LIST_PAGE_LABEL_CODE16   0X4438
#define ID_FAULTS_LIST_PAGE_LABEL_CODE17   0X4439
#define ID_FAULTS_LIST_PAGE_LABEL_CODE18   0X443a
#define ID_FAULTS_LIST_PAGE_LABEL_CODE19   0X443b
#define ID_FAULTS_LIST_PAGE_LABEL_CODE20   0X443c

#define ID_FAULTS_LIST_PAGE_LABEL_CATEGORY1    0X443d
#define ID_FAULTS_LIST_PAGE_LABEL_CATEGORY2    0X443e
#define ID_FAULTS_LIST_PAGE_LABEL_CATEGORY3    0X443f
#define ID_FAULTS_LIST_PAGE_LABEL_CATEGORY4    0X4440
#define ID_FAULTS_LIST_PAGE_LABEL_CATEGORY5    0X4441
#define ID_FAULTS_LIST_PAGE_LABEL_CATEGORY6    0X4442
#define ID_FAULTS_LIST_PAGE_LABEL_CATEGORY7    0X4443
#define ID_FAULTS_LIST_PAGE_LABEL_CATEGORY8    0X4444
#define ID_FAULTS_LIST_PAGE_LABEL_CATEGORY9    0X4445
#define ID_FAULTS_LIST_PAGE_LABEL_CATEGORY10   0X4446
#define ID_FAULTS_LIST_PAGE_LABEL_CATEGORY11   0X4447
#define ID_FAULTS_LIST_PAGE_LABEL_CATEGORY12   0X4448
#define ID_FAULTS_LIST_PAGE_LABEL_CATEGORY13   0X4449
#define ID_FAULTS_LIST_PAGE_LABEL_CATEGORY14   0X444a
#define ID_FAULTS_LIST_PAGE_LABEL_CATEGORY15   0X444b
#define ID_FAULTS_LIST_PAGE_LABEL_CATEGORY16   0X444c
#define ID_FAULTS_LIST_PAGE_LABEL_CATEGORY17   0X444d
#define ID_FAULTS_LIST_PAGE_LABEL_CATEGORY18   0X444e
#define ID_FAULTS_LIST_PAGE_LABEL_CATEGORY19   0X444f
#define ID_FAULTS_LIST_PAGE_LABEL_CATEGORY20   0X4450

#define ID_FAULTS_LIST_PAGE_LABEL_NAME1    0X4451
#define ID_FAULTS_LIST_PAGE_LABEL_NAME2    0X4452
#define ID_FAULTS_LIST_PAGE_LABEL_NAME3    0X4453
#define ID_FAULTS_LIST_PAGE_LABEL_NAME4    0X4454
#define ID_FAULTS_LIST_PAGE_LABEL_NAME5    0X4455
#define ID_FAULTS_LIST_PAGE_LABEL_NAME6    0X4456
#define ID_FAULTS_LIST_PAGE_LABEL_NAME7    0X4457
#define ID_FAULTS_LIST_PAGE_LABEL_NAME8    0X4458
#define ID_FAULTS_LIST_PAGE_LABEL_NAME9    0X4459
#define ID_FAULTS_LIST_PAGE_LABEL_NAME10   0X445a
#define ID_FAULTS_LIST_PAGE_LABEL_NAME11   0X445b
#define ID_FAULTS_LIST_PAGE_LABEL_NAME12   0X445c
#define ID_FAULTS_LIST_PAGE_LABEL_NAME13   0X445d
#define ID_FAULTS_LIST_PAGE_LABEL_NAME14   0X445e
#define ID_FAULTS_LIST_PAGE_LABEL_NAME15   0X445f
#define ID_FAULTS_LIST_PAGE_LABEL_NAME16   0X4460
#define ID_FAULTS_LIST_PAGE_LABEL_NAME17   0X4461
#define ID_FAULTS_LIST_PAGE_LABEL_NAME18   0X4462
#define ID_FAULTS_LIST_PAGE_LABEL_NAME19   0X4463
#define ID_FAULTS_LIST_PAGE_LABEL_NAME20   0X4464

#define ID_FAULTS_LIST_PAGE_LABEL_E_DATE1    0X4465
#define ID_FAULTS_LIST_PAGE_LABEL_E_DATE2    0X4466
#define ID_FAULTS_LIST_PAGE_LABEL_E_DATE3    0X4467
#define ID_FAULTS_LIST_PAGE_LABEL_E_DATE4    0X4468
#define ID_FAULTS_LIST_PAGE_LABEL_E_DATE5    0X4469
#define ID_FAULTS_LIST_PAGE_LABEL_E_DATE6    0X446a
#define ID_FAULTS_LIST_PAGE_LABEL_E_DATE7    0X446b
#define ID_FAULTS_LIST_PAGE_LABEL_E_DATE8    0X446c
#define ID_FAULTS_LIST_PAGE_LABEL_E_DATE9    0X446d
#define ID_FAULTS_LIST_PAGE_LABEL_E_DATE10   0X446e
#define ID_FAULTS_LIST_PAGE_LABEL_E_DATE11   0X446f
#define ID_FAULTS_LIST_PAGE_LABEL_E_DATE12   0X4470
#define ID_FAULTS_LIST_PAGE_LABEL_E_DATE13   0X4471
#define ID_FAULTS_LIST_PAGE_LABEL_E_DATE14   0X4472
#define ID_FAULTS_LIST_PAGE_LABEL_E_DATE15   0X4473
#define ID_FAULTS_LIST_PAGE_LABEL_E_DATE16   0X4474
#define ID_FAULTS_LIST_PAGE_LABEL_E_DATE17   0X4475
#define ID_FAULTS_LIST_PAGE_LABEL_E_DATE18   0X4476
#define ID_FAULTS_LIST_PAGE_LABEL_E_DATE19   0X4477
#define ID_FAULTS_LIST_PAGE_LABEL_E_DATE20   0X4478

#define ID_FAULTS_LIST_PAGE_LABEL_E_TIME1    0X4479
#define ID_FAULTS_LIST_PAGE_LABEL_E_TIME2    0X447a
#define ID_FAULTS_LIST_PAGE_LABEL_E_TIME3    0X447b
#define ID_FAULTS_LIST_PAGE_LABEL_E_TIME4    0X447c
#define ID_FAULTS_LIST_PAGE_LABEL_E_TIME5    0X447d
#define ID_FAULTS_LIST_PAGE_LABEL_E_TIME6    0X447e
#define ID_FAULTS_LIST_PAGE_LABEL_E_TIME7    0X447f
#define ID_FAULTS_LIST_PAGE_LABEL_E_TIME8    0X4480
#define ID_FAULTS_LIST_PAGE_LABEL_E_TIME9    0X4481
#define ID_FAULTS_LIST_PAGE_LABEL_E_TIME10   0X4482
#define ID_FAULTS_LIST_PAGE_LABEL_E_TIME11   0X4483
#define ID_FAULTS_LIST_PAGE_LABEL_E_TIME12   0X4484
#define ID_FAULTS_LIST_PAGE_LABEL_E_TIME13   0X4485
#define ID_FAULTS_LIST_PAGE_LABEL_E_TIME14   0X4486
#define ID_FAULTS_LIST_PAGE_LABEL_E_TIME15   0X4487
#define ID_FAULTS_LIST_PAGE_LABEL_E_TIME16   0X4488
#define ID_FAULTS_LIST_PAGE_LABEL_E_TIME17   0X4489
#define ID_FAULTS_LIST_PAGE_LABEL_E_TIME18   0X448a
#define ID_FAULTS_LIST_PAGE_LABEL_E_TIME19   0X448b
#define ID_FAULTS_LIST_PAGE_LABEL_E_TIME20   0X448c


#define ID_FAULTS_LIST_PAGE_BTN_PAGEDOWN    0x448d
#define ID_FAULTS_LIST_PAGE_BTN_PAGEUP      0x448e
#define ID_FAULTS_LIST_PAGE_LABEL_PAGENUM   0x448f

#define ID_FAULTS_LIST_PAGE_BTN_LEVEL12     0x4490
#define ID_FAULTS_LIST_PAGE_BTN_LEVEL3      0x4491
#define ID_FAULTS_LIST_PAGE_BTN_ALL         0x4492

#define ID_FAULTS_LIST_PAGE_BTN_TODAY       0x4493

#define ID_FAULTS_LIST_PAGE_BTN_DETAIL1    0X4494
#define ID_FAULTS_LIST_PAGE_BTN_DETAIL2    0X4495
#define ID_FAULTS_LIST_PAGE_BTN_DETAIL3    0X4496
#define ID_FAULTS_LIST_PAGE_BTN_DETAIL4    0X4497
#define ID_FAULTS_LIST_PAGE_BTN_DETAIL5    0X4498
#define ID_FAULTS_LIST_PAGE_BTN_DETAIL6    0X4499
#define ID_FAULTS_LIST_PAGE_BTN_DETAIL7    0X449A
#define ID_FAULTS_LIST_PAGE_BTN_DETAIL8    0X449B
#define ID_FAULTS_LIST_PAGE_BTN_DETAIL9    0X449C
#define ID_FAULTS_LIST_PAGE_BTN_DETAIL10   0X449D
#define ID_FAULTS_LIST_PAGE_BTN_DETAIL11   0X449E
#define ID_FAULTS_LIST_PAGE_BTN_DETAIL12   0X449F
#define ID_FAULTS_LIST_PAGE_BTN_DETAIL13   0X44A0
#define ID_FAULTS_LIST_PAGE_BTN_DETAIL14   0X44A1
#define ID_FAULTS_LIST_PAGE_BTN_DETAIL15   0X44A2
#define ID_FAULTS_LIST_PAGE_BTN_DETAIL16   0X44A3
#define ID_FAULTS_LIST_PAGE_BTN_DETAIL17   0X44A4
#define ID_FAULTS_LIST_PAGE_BTN_DETAIL18   0X44A5
#define ID_FAULTS_LIST_PAGE_BTN_DETAIL19   0X44A6
#define ID_FAULTS_LIST_PAGE_BTN_DETAIL20   0X44A7


#define D_EVENTS_NUM_PER_PAGE       20

extern vector<CPage*>  g_PageVec;

class CEventRecordPage : public CPage
{
    DECLEAR_MESSAGE_MAP(CEventRecordPage)
public:
    CEventRecordPage();

private:
    int m_eligiblecount;

protected:
    //TODO:declear call back function
    void OnUpdatePage();
    void OnShowPage();
    void OnInitPage();
    void OnComBtn1Clk();
    void OnComBtn2Clk();
    void OnComBtn3Clk();
    void OnComBtn4Clk();
    void OnComBtn5Clk();
    void OnComBtn6Clk();
#ifdef PAGE_BUTTON_BAR_NEW
    void OnComBtn7Clk();
    void OnComBtn8Clk();
    void OnComBtn9Clk();
    void OnComBtn10Clk();
    void OnComBtn11Clk();
    void OnComBtn12Clk();
#endif
    void DrawLineHistory(int linenum, ST_HISTORY_FAULT_INFO *pHisInfo);
    void ClearTable();
    void DrawHistory();
    bool HistoryConditionFilter(int idx);
    void OnPageDownBtnClk();
    void OnPageUpBtnClk();
    void UpdateHistoryPageNum();
    void OnBtnAllDown();
    void OnBtnLevel12Down();
    void OnBtnLevel3Down();
    void UpdateHistoryPage();
    void OnBtnTodayClk();

    void OnDetailClk1();
    void OnDetailClk2();
    void OnDetailClk3();
    void OnDetailClk4();
    void OnDetailClk5();
    void OnDetailClk6();
    void OnDetailClk7();
    void OnDetailClk8();
    void OnDetailClk9();
    void OnDetailClk10();
    void OnDetailClk11();
    void OnDetailClk12();
    void OnDetailClk13();
    void OnDetailClk14();
    void OnDetailClk15();
    void OnDetailClk16();
    void OnDetailClk17();
    void OnDetailClk18();
    void OnDetailClk19();
    void OnDetailClk20();
    void OnDetailClkN(int n);
};

#endif // CTractionSystemFaultPage_H
