#include "Cblock.h"
#include "FunctionLib.h"


typedef struct{
	PUINT8   pSegBase;//���ݶε�ַ
	volatile UINT64 *pSysTime;//ϵͳʱ���ַ
	PUINT8 *pDataSegTable;		//���ݶζα�
}Cf_Info_t,*pCf_Info_t;

PUINT8   pRelatedDataSegBase = NULL;

tEErrorCode BlockMain(UINT32 index, void * Info)
{
	tEErrorCode RetCode = kEOK;
	pCf_Info_t pCf_Info=Info;

	pRelatedDataSegBase = pCf_Info->pSegBase;
	pSysTime=pCf_Info->pSysTime;
	pDataSegTab = pCf_Info->pDataSegTable;
	switch(index){
	default :
		break;
	}
	return (RetCode);
}

