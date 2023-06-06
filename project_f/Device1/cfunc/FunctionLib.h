/*
 * FunctionLib.h
 *
 *  Created on: 2020-2-27
 *      Author: lenovo
 */

#ifndef FUNCTIONLIB_H_
#define FUNCTIONLIB_H_
#include "main.h"
#include <string.h>
#include <stddef.h>

CMCLDIV_T uldiv(UINT32 num, UINT32 denom);
INT8 * ltoa(INT32S N, INT8 *str, INT16S base);
INT8  *ultoa(UINT32 N, INT8 *str, INT16S base);
void NumberToString(UINT32 Data,char *Str, UINT8 Len);
INT8  *itoa( INT16S n,INT8  *s, INT16S b);
INT16S stricmp(CONST INT8  *s, CONST INT8  *t);
INT16S strnicmp(CONST INT8  *s,CONST INT8  *t,UINT32 n);
UINT8 FloatToString(double value,UINT8 int_width,UINT8 Wrange,INT8 * data);
double SQRT(double src);
extern volatile UINT64 *pSysTime;
extern PUINT8   *pDataSegTab;
/*
 * 返回获取系统 时间
 * */
UINT32 GETSYSTIMEMS();
int Hex2Str_w8(UINT8 value, char *pstr);
int Hex2Str_w32(UINT32 value, char *pstr);
BOOL  IecFallingEdgeDetect (BOOL fSignal_p, UINT16 wOffsCompSignal_p);
BOOL  IecRisingEdgeDetect (BOOL fSignal_p, UINT16 wOffsCompSignal_p);
void take_lit(char *s, char *t);
//UINT32 mktime(UINT32 year, UINT32 mon, UINT32 day, UINT32 hour, UINT32 min, UINT32 sec);
void  MemNearSetBit (UINT16 Addr_p, BOOL BitVal_p);
void  MemNearSetByte (UINT16 Addr_p, UINT8 ByteVal_p);
void  MemNearSetWord(UINT16 Addr_p, UINT16 WordVal_p);
void  MemNearSetDword (UINT16 Addr_p, UINT32 DwordVal_p);
BOOL  MemNearGetBit (UINT16 Addr_p);
UINT8  MemNearGetByte (UINT16 Addr_p);
UINT16  MemNearGetWord (UINT16 Addr_p);
UINT32  MemNearGetDword (UINT16 Addr_p);
PUINT8 MemNearGetParamAddr(UINT16 Addr_p);
void  MemAbsSetByte (UINT8 * pAddr_p, UINT8 ByteVal_p);
void  MemAbsSetWord (UINT8 * pAddr_p, UINT16 WordVal_p);
void  MemAbsSetDword (UINT8 * pAddr_p, UINT32 DwordVal_p);
/****************************************************************************
  *	函数名称:MemGetArrayAddr
  *	功能描述:获取数组的地址
  *	入口参数:Addr_p   :地址
  *	出口参数:返回获得的地址
  *	调用说明:
******************************************************************************/
void *MemGetArrayAddr (UINT32 Addr_p);
void MemSetSegByte(UINT32 SourceAddr_p, UINT32 DestinAddr_p, UINT16 Len);
void MemSetSegBool (UINT32 SourceAddr_p, UINT32 DestinAddr_p, UINT16 Len);
void MemClearSegByte(UINT32 addr, UINT32 len);
void MemClearSegBit(UINT32 addr, UINT32 len);

#endif /* FUNCTIONLIB_H_ */
