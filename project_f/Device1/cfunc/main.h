/*
 * main.h
 *
 *  Created on: 2019-7-3
 *      Author: lenovo
 */

#ifndef MAIN_H_
#define MAIN_H_

# include <stdlib.h>
# include <string.h>
# include <limits.h>
# include <float.h>
# include <stdio.h>
# include <math.h>
# include <ctype.h>

/*************************datatype.h******************************/
#ifndef NULL
#define	NULL  0x00
#endif

#ifndef TRUE
#define TRUE  0x01
#endif
#ifndef FALSE
#define FALSE 0x00
#endif

#ifndef true
#define true  0x01
#endif
#ifndef false
#define false 0x00
#endif

#ifndef SUCCESS
#define SUCCESS  0
#endif
#ifndef FAILURE
#define FAILURE  -1
#endif
#define TIMEOUT         0x1000

#define	STATUS_ERR	1
#define	STATUS_OK	0

#define SIZEOF_BYTE	1
#define SIZEOF_CHAR	1

#define SIZEOF_INT	2
#define SIZEOF_SINT	2
#define SIZEOF_WORD	2

#define SIZEOF_DWORD 4
#define SIZEOF_LONG 4
#define SIZEOF_DOUBLE 8

#define SIZEOF_DATASEGHDR 8

#define SIZEOF_SETDATA 64

typedef	unsigned char       CK_UINT8;
typedef unsigned short      CK_UINT16;
typedef unsigned int        CK_UINT32;
typedef	signed char         CK_INT8;
typedef signed short        CK_INT16;
typedef signed int          CK_INT32;
/* typedef signed long long    CK_INT64; */
typedef signed long         CK_INT64;
#ifndef CBLOCK_H_
typedef unsigned char        BOOL;
#endif
#ifndef CBLOCK_H_
typedef	unsigned char	    BYTE;
#endif
#ifndef CBLOCK_H_
typedef unsigned short	    WORD;
#endif

typedef volatile unsigned int 		CK_REG;
typedef volatile unsigned short 	CK_SREG;
typedef volatile unsigned char 		CK_CREG;

// FIXME:
typedef struct
{
	CK_UINT16 year;
	CK_UINT8  month;
	CK_UINT8  day;
	CK_UINT8  weekday;
	CK_UINT8  hour;
	CK_UINT8  min;
	CK_UINT8  sec;
}__attribute__((packed)) RTCTIME, *pRTCTIME;


#if defined(DEBUG)
#define Debug     printf
#else
#define Debug
#endif

#define  IN
#define  OUT
#define INOUT

typedef volatile unsigned int 		REG;
typedef volatile unsigned short 	SREG;
typedef volatile unsigned char 		CREG;

typedef REG * 						pREG;

//typedef unsigned char 				BOOL;

typedef signed char					INT8S;
typedef signed short	 			INT16S;
typedef signed  int					INT32S;
typedef signed long long 			INT64S;

typedef unsigned char 				INT8U;
typedef unsigned short  			INT16U;
typedef unsigned int 				INT32U;

typedef char         		        INT8, *PINT8;

typedef unsigned char       		UINT8, *PUINT8;
typedef unsigned short     	 		UINT16, *PUINT16;
typedef unsigned int        		UINT32, *PUINT32;
typedef unsigned long long 	  		UINT64, *PUINT64;

typedef float 						Float32;
typedef double 						Float64;

typedef unsigned int 				CPU_Type;

/*************************datatype.h  end******************************/

/*******************************GlbDatatype.h ***********************************/
#ifndef NULL
#define	NULL  	((void *) 0)
#endif

#ifndef CNULL
#define	CNULL  	(0)
#endif

#ifndef ENULL
#define	ENULL  	((void *) 0xFFFFFFFF)
#endif

#ifndef INVALID
#define INVALID (0xFFFFFFFF)
#endif

#ifndef TRUE
#define	TRUE  	(0xFF)
#endif

#ifndef FALSE
#define	FALSE  	(0x00)
#endif

#ifndef SUCCESS
#define SUCCESS  (0)
#endif

#ifndef FAILURE
#define FAILURE  (-1)
#endif

#ifndef SET
#define	SET      (1)
#endif

#ifndef CLR
#define	CLR      (0)
#endif

#ifndef CONST
#define CONST const
#endif

#ifndef STATIC
#define STATIC static
#endif

#define BYTE_MIN	(UINT8)0
#define BYTE_MAX 	(UINT8)255
#define SINT_MAX 	(INT8S)127
#define SINT_MIN	(INT8S)-128
#define USINT_MIN	(UINT8)0
#define USINT_MAX	(UINT8)255
//#define INT_MIN		(INT16S)-32768
//#define INT_MAX		(INT16S)32767
#define UINT_MIN	(UINT16)0
//#define UINT_MAX	(UINT16)65535
#define DINT_MIN	(INT32S)-2147483648UL
#define DINT_MAX	(INT32S)2147483647UL
#define UDINT_MIN	(UINT32)0
#define UDINT_MAX	(UINT32)4294967295UL
#define WORD_MIN	(UINT16)0
#define WORD_MAX	(UINT16)65535
#define DWORD_MIN	(UINT32)0
#define DWORD_MAX	(UINT32)4294967295UL

/* LD-specific */
#define	AWL_INT		signed short int
#define	AWL_INT_MAX SINT_MAX
#define	AWL_INT_MIN SINT_MIN
#define	AWL_UINT	unsigned short int
#define	AWL_UINT_MAX WORD_MAX

/******************************MemAcess.h**************************************/

#define LOBYTE(w)	    		((UINT8)((w) & 0x00FF))
#define HIBYTE(w)      			((UINT8)(((INT16S)(w) >> 8) & 0x00FF))

#define LOWORD(l)           	((UINT16)(UINT32)(l) & 0xFFFF)
#define HIWORD(l)           	((UINT16)((((UINT32)(l)) >> 16) & 0xFFFF))

#define BYTECAST(arg)			(UINT8)(arg)
#define WORDCAST(arg)			(UINT16)(arg)


#define MIN(arg1, arg2)			(((arg1) < (arg2)) ? (arg1) : (arg2))
#define MAX(arg1, arg2)			(((arg1) > (arg2)) ? (arg1) : (arg2))

/***************************/
/*	SZM NEAR DATA ACCESS   */
/***************************/

#define MEM_NEAR_SET_BYTE(Addr_p,ByteVal_p) MemNearSetByte(Addr_p,ByteVal_p)
#define MEM_NEAR_SET_WORD(Addr_p,WordVal_p) MemNearSetWord(Addr_p,WordVal_p)
#define MEM_NEAR_SET_DWORD(Addr_p,DwordVal_p) MemNearSetDword(Addr_p,DwordVal_p)
#define MEM_NEAR_GET_BYTE(Addr_p) MemNearGetByte(Addr_p)
#define MEM_NEAR_GET_WORD(Addr_p) MemNearGetWord(Addr_p)
#define MEM_NEAR_GET_DWORD(Addr_p) MemNearGetDword(Addr_p)
#define MEM_NEAR_GET_ARRAY(Addr_p) MemGetArrayAddr(Addr_p)

#define MEM_NEAR_GET_PARAM_ADDR(Addr_p)	MemNearGetParamAddr( Addr_p )

/**********************************MemAcess.h  end*************************************/

/************************************FirmFunc.h****************************************/
#define 	OFFSET_ENABLE			(0x08)

#define     GETBIT(addr)            MemNearGetBit (addr)
#define     GETINT(addr)            (INT16S)MEM_NEAR_GET_WORD(addr)
#define     GETWORD(addr)           (UINT16)MEM_NEAR_GET_WORD(addr)
#define     GETUINT(addr)           (UINT16)MEM_NEAR_GET_WORD(addr)
#define     GETTIME(addr)           MEM_NEAR_GET_DWORD(addr)
#define     GETDATE(addr)           MEM_NEAR_GET_DWORD(addr)
#define     GETDT(addr)             MEM_NEAR_GET_DWORD(addr)
#define     GETTOD(addr)            MEM_NEAR_GET_DWORD(addr)
#define     GETDINT(addr)           (INT32S)MEM_NEAR_GET_DWORD(addr)
#define     GETUDINT(addr)          MEM_NEAR_GET_DWORD(addr)
#define     GETDWORD(addr)          MEM_NEAR_GET_DWORD(addr)
#define 	GETBYTE(addr)			(UINT8)MEM_NEAR_GET_BYTE(addr)
#define 	GETUSINT(addr)			(UINT8)MEM_NEAR_GET_BYTE(addr)
#define 	GETSINT(addr)			(INT8S)MEM_NEAR_GET_BYTE(addr)
#define 	GETSTRING(addr)			(UINT8 *)MEM_NEAR_GET_STRING(addr)
#define 	GETARRAY(addr)			(UINT8 *)MEM_NEAR_GET_ARRAY(addr)
#define 	GETPARAMADDR(addr)		(void *)MEM_NEAR_GET_PARAM_ADDR(addr)


//#define		GETPARAMADDR(addr)		(UINT8 *)MEM_NEAR_GET_PARAM_ADDR(addr)

#define     SETBIT(addr, val)       MemNearSetBit((UINT16)addr, val)
#define     SETINT(addr, val)       MEM_NEAR_SET_WORD(addr, WORDCAST(val))
#define     SETWORD(addr, val)      MEM_NEAR_SET_WORD(addr, WORDCAST(val))
#define     SETUINT(addr, val)      MEM_NEAR_SET_WORD(addr, WORDCAST(val))
#define     SETTIME(addr, val)      MEM_NEAR_SET_DWORD(addr,(UINT32)val)
#define     SETDATE(addr, val)      MEM_NEAR_SET_DWORD(addr,(UINT32)val)
#define     SETDT(addr, val)        MEM_NEAR_SET_DWORD(addr,(UINT32)val)
#define     SETTOD(addr, val)       MEM_NEAR_SET_DWORD(addr,(UINT32)val)
#define     SETDINT(addr, val)      MEM_NEAR_SET_DWORD(addr, (UINT32)val)
#define     SETUDINT(addr, val)     MEM_NEAR_SET_DWORD(addr,(UINT32)val)
#define     SETDWORD(addr, val)     MEM_NEAR_SET_DWORD(addr,(UINT32)val)
#define 	SETBYTE(addr, val)		MEM_NEAR_SET_BYTE(addr,BYTECAST(val))
#define 	SETSINT(addr, val)		MEM_NEAR_SET_BYTE(addr,BYTECAST(val))
#define 	SETUSINT(addr, val)		MEM_NEAR_SET_BYTE(addr,BYTECAST(val))
#define 	SETSTRING(addr)			MEM_NEAR_SET_STRING(addr)

#define     SETSEGBYTE(source, destin, len)		MemSetSegByte(source, destin, len);
#define     SETSEGBIT(source, destin, len)		MemSetSegBool(source, destin, len);
#define		CLEARSEGBYTE(addr, len)				MemClearSegByte(addr, len);
#define		CLEARSEGBIT(addr, len)				MemClearSegBit(addr, len);

#define 	_OFFSET_EN 8
#define		_OFFSET_ENO	9

#define ERR_TRACE(...)

typedef enum
{
    kEOK               = 0x00,     /* 功能块正常返回*/
    kERUNNING          = 0x01,     /* 功能块正在执行*/
	kENOIMP            = 0x02,	   /* 功能块未执行*/
	kENODEV 		   = 0x0A,	   /*无此设备*/
	kEUNINIT		   = 0x0B,	   /*设备未初始化*/
	kEBUSY  		   = 0x0C,     /*设备忙碌*/
	kEMODE  		   = 0x14,     /*设备运行模式错误*/
	kEIO               = 0x1E,     /*O功能块试图操作复用引脚*/
	kEUNREL            = 0x28,     /*数据不可信*/

	kEVARRNG           = 0x64,     /*变量超过允许范围*/
	kEFAIL			   = 0x65,     /*功能块执行失败*/
	kEADDROV           = 0x67,     /*地址溢出*/
	kEMCSEG			   = 0x78,     /*G代码段号无效*/
	kEMCFUL			   = 0x79,     /*G代码调度器已满*/
	kEINPUTDATAERROR   = 0x68,    /*输入数据有误*/

    kEGeneralError     = 0xFF,     /* 一般错误*/
    kEFBNotSupported   = 0xFE,     /* FB 没有实现*/
    kEHardwareError    = 0xFD,     /* 访问硬件错误*/

    /*此类错误出现功能块仍然执行,Warning*/
    kWDataOver         = 0x69,      /*数据上溢*/
    kWNoStart          = 0x29

} tEErrorCode;
/**********************************FirmFunc.h  end*************************************/

/************************************stdfct.h****************************************/
typedef struct
{
    INT32S quot;
    INT32S rem;

}CMCLDIV_T;

//void  MemCopy (UINT8 * pDst, UINT8 * pSrc, UINT16 wLen);
//INT16S  Abs(INT16S iValue);

/************************************stdfct.h  end*********************************/

/***************************************鍏朵粬**************************************/
/* 鏁版嵁娈电浉鍏冲畾涔�*/
#define		SEG_TABLE_NUM			(4)		/* 娈佃〃涓暟 */
#define		SEG_TABLE_DS			(0)		/* 鏁版嵁娈垫琛ㄥ亸绉�*/
#define		SEG_TABLE_CS			(1)		/* 浠ｇ爜娈垫琛ㄥ亸绉�*/
#define		SEG_TABLE_US			(2)		/* 鐢ㄦ埛鍔熻兘鍧楁琛ㄥ亸绉�*/
#define		SEG_TABLE_GS			(3)		/* G浠ｇ爜娈佃〃鍋忕Щ */

/****************************************鍥哄寲鍔熻兘鍧楄鏄�*******************************************/
tEErrorCode  FB_BoolToByte(void);
tEErrorCode  FB_BoolToDint(void);
tEErrorCode  FB_BoolToDword(void);
tEErrorCode  FB_BoolToInt(void);
tEErrorCode  FB_BoolToReal(void);
tEErrorCode  FB_BoolToSint(void);
tEErrorCode  FB_BoolToString(void);
tEErrorCode  FB_BoolToTime(void);
tEErrorCode  FB_BoolToUdint(void);
tEErrorCode  FB_BoolToUint(void);
tEErrorCode  FB_BoolToUsint(void);
tEErrorCode  FB_BoolToWord(void);
tEErrorCode  FB_BoolToDate(void);
tEErrorCode  FB_BoolToDt(void);
tEErrorCode  FB_BoolToTod(void);
tEErrorCode  FB_ByteToBool(void);
tEErrorCode  FB_ByteToDint(void);
tEErrorCode  FB_ByteToDword(void);
tEErrorCode  FB_ByteToInt(void);
tEErrorCode  FB_ByteToReal(void);
tEErrorCode  FB_ByteToSint(void);
tEErrorCode  FB_ByteToString(void);
tEErrorCode  FB_ByteToTime(void);
tEErrorCode  FB_ByteToUdint(void);
tEErrorCode  FB_ByteToUint(void);
tEErrorCode  FB_ByteToUsint(void);
tEErrorCode  FB_ByteToWord(void);
tEErrorCode  FB_ByteToDate(void);
tEErrorCode  FB_ByteToDt(void);
tEErrorCode  FB_ByteToTod(void);
tEErrorCode  FB_DintToBool(void);
tEErrorCode  FB_DintToByte(void);
tEErrorCode  FB_DintToDword(void);
tEErrorCode  FB_DintToInt(void);
tEErrorCode  FB_DintToReal(void);
tEErrorCode  FB_DintToSint(void);
tEErrorCode  FB_DintToString(void);
tEErrorCode  FB_DintToTime(void);
tEErrorCode  FB_DintToUdint(void);
tEErrorCode  FB_DintToUint(void);
tEErrorCode  FB_DintToUsint(void);
tEErrorCode  FB_DintToWord(void);
tEErrorCode  FB_DintToDate(void);
tEErrorCode  FB_DintToDt(void);
tEErrorCode  FB_DintToTod(void);
tEErrorCode  FB_DwordToBool(void);
tEErrorCode  FB_DwordToByte(void);
tEErrorCode  FB_DwordToDint(void);
tEErrorCode  FB_DwordToInt(void);
tEErrorCode  FB_DwordToReal(void);
tEErrorCode  FB_DwordToSint(void);
tEErrorCode  FB_DwordToString(void);
tEErrorCode  FB_DwordToTime(void);
tEErrorCode  FB_DwordToUdint(void);
tEErrorCode  FB_DwordToUint(void);
tEErrorCode  FB_DwordToUsint(void);
tEErrorCode  FB_DwordToWord(void);
tEErrorCode  FB_DwordToDate(void);
tEErrorCode  FB_DwordToDt(void);
tEErrorCode  FB_DwordToTod(void);
tEErrorCode  FB_IntToBool(void);
tEErrorCode  FB_IntToByte(void);
tEErrorCode  FB_IntToDint(void);
tEErrorCode  FB_IntToDword(void);
tEErrorCode  FB_IntToReal(void);
tEErrorCode  FB_IntToSint(void);
tEErrorCode  FB_IntToString(void);
tEErrorCode  FB_IntToTime(void);
tEErrorCode  FB_IntToUdint(void);
tEErrorCode  FB_IntToUint(void);
tEErrorCode  FB_IntToUsint(void);
tEErrorCode  FB_IntToWord(void);
tEErrorCode  FB_IntToDate(void);
tEErrorCode  FB_IntToDt(void);
tEErrorCode  FB_IntToTod(void);
tEErrorCode  FB_PackBool(void);
tEErrorCode  FB_PackByte(void);
tEErrorCode  FB_PackWord(void);
tEErrorCode  FB_UnpackByte(void);
tEErrorCode  FB_UnpackDword(void);
tEErrorCode  FB_UnpackWord(void);
tEErrorCode  FB_RealToBool(void);
tEErrorCode  FB_RealToByte(void);
tEErrorCode  FB_RealToDint(void);
tEErrorCode  FB_RealToDword(void);
tEErrorCode  FB_RealToInt(void);
tEErrorCode  FB_RealToSint(void);
tEErrorCode  FB_RealToString(void);
tEErrorCode  FB_RealToTime(void);
tEErrorCode  FB_RealToUdint(void);
tEErrorCode  FB_RealToUint(void);
tEErrorCode  FB_RealToUsint(void);
tEErrorCode  FB_RealToWord(void);
tEErrorCode  FB_RealToDate(void);
tEErrorCode  FB_RealToDt(void);
tEErrorCode  FB_RealToTod(void);
tEErrorCode  FB_SintToBool(void);
tEErrorCode  FB_SintToByte(void);
tEErrorCode  FB_SintToDint(void);
tEErrorCode  FB_SintToDword(void);
tEErrorCode  FB_SintToInt(void);
tEErrorCode  FB_SintToReal(void);
tEErrorCode  FB_SintToString(void);
tEErrorCode  FB_SintToTime(void);
tEErrorCode  FB_SintToUdint(void);
tEErrorCode  FB_SintToUint(void);
tEErrorCode  FB_SintToUsint(void);
tEErrorCode  FB_SintToWord(void);
tEErrorCode  FB_SintToDate(void);
tEErrorCode  FB_SintToDt(void);
tEErrorCode  FB_SintToTod(void);
tEErrorCode  FB_CTD(void);
tEErrorCode  FB_CTU(void);
tEErrorCode  FB_CTUD(void);
tEErrorCode  FB_F_TRIG(void);
tEErrorCode  FB_RS(void);
tEErrorCode  FB_R_TRIG(void);
tEErrorCode  FB_SR(void);
tEErrorCode  FB_StringToBool(void);
tEErrorCode  FB_StringToByte(void);
tEErrorCode  FB_StringToDint(void);
tEErrorCode  FB_StringToDword(void);
tEErrorCode  FB_StringToInt(void);
tEErrorCode  FB_StringToReal(void);
tEErrorCode  FB_StringToSint(void);
tEErrorCode  FB_StringToTime(void);
tEErrorCode  FB_StringToUdint(void);
tEErrorCode  FB_StringToUint(void);
tEErrorCode  FB_StringToUsint(void);
tEErrorCode  FB_StringToWord(void);
tEErrorCode  FB_StringToDate(void);
tEErrorCode  FB_StringToDt(void);
tEErrorCode  FB_StringToTod(void);
tEErrorCode  FB_TimeToBool(void);
tEErrorCode  FB_TimeToByte(void);
tEErrorCode  FB_TimeToDint(void);
tEErrorCode  FB_TimeToDword(void);
tEErrorCode  FB_TimeToInt(void);
tEErrorCode  FB_TimeToReal(void);
tEErrorCode  FB_TimeToSint(void);
tEErrorCode  FB_TimeToString(void);
tEErrorCode  FB_TimeToUdint(void);
tEErrorCode  FB_TimeToUint(void);
tEErrorCode  FB_TimeToUsint(void);
tEErrorCode  FB_TimeToWord(void);
tEErrorCode  FB_TimeToDate(void);
tEErrorCode  FB_TimeToDt(void);
tEErrorCode  FB_TimeToTod(void);
tEErrorCode  FB_TodToBool(void);
tEErrorCode  FB_TodToByte(void);
tEErrorCode  FB_TodToDint(void);
tEErrorCode  FB_TodToDt(void);
tEErrorCode  FB_TodToDword(void);
tEErrorCode  FB_TodToInt(void);
tEErrorCode  FB_TodToReal(void);
tEErrorCode  FB_TodToSint(void);
tEErrorCode  FB_TodToString(void);
tEErrorCode  FB_TodToTime(void);
tEErrorCode  FB_TodToUdint(void);
tEErrorCode  FB_TodToUint(void);
tEErrorCode  FB_TodToUsint(void);
tEErrorCode  FB_TodToWord(void);
tEErrorCode  FB_UdintToBool(void);
tEErrorCode  FB_UdintToByte(void);
tEErrorCode  FB_UdintToDint(void);
tEErrorCode  FB_UdintToDword(void);
tEErrorCode  FB_UdintToInt(void);
tEErrorCode  FB_UdintToReal(void);
tEErrorCode  FB_UdintToSint(void);
tEErrorCode  FB_UdintToString(void);
tEErrorCode  FB_UdintToTime(void);
tEErrorCode  FB_UdintToUint(void);
tEErrorCode  FB_UdintToUsint(void);
tEErrorCode  FB_UdintToWord(void);
tEErrorCode  FB_UdintToDate(void);
tEErrorCode  FB_UdintToDt(void);
tEErrorCode  FB_UdintToTod(void);
tEErrorCode  FB_UintToBool(void);
tEErrorCode  FB_UintToByte(void);
tEErrorCode  FB_UintToDint(void);
tEErrorCode  FB_UintToDword(void);
tEErrorCode  FB_UintToInt(void);
tEErrorCode  FB_UintToReal(void);
tEErrorCode  FB_UintToSint(void);
tEErrorCode  FB_UintToString(void);
tEErrorCode  FB_UintToTime(void);
tEErrorCode  FB_UintToUdint(void);
tEErrorCode  FB_UintToUsint(void);
tEErrorCode  FB_UintToWord(void);
tEErrorCode  FB_UintToDate(void);
tEErrorCode  FB_UintToDt(void);
tEErrorCode  FB_UintToTod(void);
tEErrorCode  FB_UsintToBool(void);
tEErrorCode  FB_UsintToByte(void);
tEErrorCode  FB_UsintToDint(void);
tEErrorCode  FB_UsintToDword(void);
tEErrorCode  FB_UsintToInt(void);
tEErrorCode  FB_UsintToReal(void);
tEErrorCode  FB_UsintToSint(void);
tEErrorCode  FB_UsintToString(void);
tEErrorCode  FB_UsintToTime(void);
tEErrorCode  FB_UsintToUdint(void);
tEErrorCode  FB_UsintToUint(void);
tEErrorCode  FB_UsintToWord(void);
tEErrorCode  FB_UsintToDate(void);
tEErrorCode  FB_UsintToDt(void);
tEErrorCode  FB_UsintToTod(void);
tEErrorCode  FB_WordToBool(void);
tEErrorCode  FB_WordToByte(void);
tEErrorCode  FB_WordToDint(void);
tEErrorCode  FB_WordToDword(void);
tEErrorCode  FB_WordToInt(void);
tEErrorCode  FB_WordToReal(void);
tEErrorCode  FB_WordToSint(void);
tEErrorCode  FB_WordToString(void);
tEErrorCode  FB_WordToTime(void);
tEErrorCode  FB_WordToUdint(void);
tEErrorCode  FB_WordToUint(void);
tEErrorCode  FB_WordToUsint(void);
tEErrorCode  FB_WordToDate(void);
tEErrorCode  FB_WordToDt(void);
tEErrorCode  FB_WordToTod(void);
tEErrorCode  FB_MulByte(void);
tEErrorCode  FB_MulDint(void);
tEErrorCode  FB_MulDword(void);
tEErrorCode  FB_MulInt(void);
tEErrorCode  FB_MulReal(void);
tEErrorCode  FB_MulSint(void);
tEErrorCode  FB_MulTime(void);
tEErrorCode  FB_MulUdint(void);
tEErrorCode  FB_MulUint(void);
tEErrorCode  FB_MulUsint(void);
tEErrorCode  FB_MulWord(void);
tEErrorCode  FB_SubByte(void);
tEErrorCode  FB_SubDate(void);
tEErrorCode  FB_SubDint(void);
tEErrorCode  FB_SubDT(void);
tEErrorCode  FB_SubDword(void);
tEErrorCode  FB_SubInt(void);
tEErrorCode  FB_SubReal(void);
tEErrorCode  FB_SubSint(void);
tEErrorCode  FB_SubTime(void);
tEErrorCode  FB_SubTod(void);
tEErrorCode  FB_SubUdint(void);
tEErrorCode  FB_SubUint(void);
tEErrorCode  FB_SubUsint(void);
tEErrorCode  FB_SubWord(void);
tEErrorCode  FB_SwapDint(void);
tEErrorCode  FB_SwapDword(void);
tEErrorCode  FB_SwapInt(void);
tEErrorCode  FB_SwapUdint(void);
tEErrorCode  FB_SwapUint(void);
tEErrorCode  FB_SwapWord(void);
tEErrorCode  FB_AddByte(void);
tEErrorCode  FB_AddDate(void);
tEErrorCode  FB_AddDint(void);
tEErrorCode  FB_AddDT(void);
tEErrorCode  FB_AddDword(void);
tEErrorCode  FB_AddInt(void);
tEErrorCode  FB_AddReal(void);
tEErrorCode  FB_AddSint(void);
tEErrorCode  FB_AddTime(void);
tEErrorCode  FB_AddTod(void);
tEErrorCode  FB_AddUdint(void);
tEErrorCode  FB_AddUint(void);
tEErrorCode  FB_AddUsint(void);
tEErrorCode  FB_AddWord(void);
tEErrorCode  FB_Compare_String(void);
tEErrorCode  FB_Concat_String(void);
tEErrorCode  FB_Delete_String(void);
tEErrorCode  FB_Find_String(void);
tEErrorCode  FB_Insert_String(void);
tEErrorCode  FB_Left_String(void);
tEErrorCode  FB_Len_String(void);
tEErrorCode  FB_Mid_String(void);
tEErrorCode  FB_Replace_String(void);
tEErrorCode  FB_Right_String(void);
tEErrorCode  FB_ExptByte(void);
tEErrorCode  FB_ExptDint(void);
tEErrorCode  FB_ExptDword(void);
tEErrorCode  FB_ExptInt(void);
tEErrorCode  FB_ExptReal(void);
tEErrorCode  FB_ExptSint(void);
tEErrorCode  FB_ExptUdint(void);
tEErrorCode  FB_ExptUint(void);
tEErrorCode  FB_ExptUsint(void);
tEErrorCode  FB_ExptWord(void);
tEErrorCode  FB_INV_Byte(void);
tEErrorCode  FB_INV_Dint(void);
tEErrorCode  FB_INV_Dword(void);
tEErrorCode  FB_INV_Int(void);
tEErrorCode  FB_INV_Sint(void);
tEErrorCode  FB_INV_Udint(void);
tEErrorCode  FB_INV_Uint(void);
tEErrorCode  FB_INV_Usint(void);
tEErrorCode  FB_INV_Word(void);
tEErrorCode  FB_AbsByte(void);
tEErrorCode  FB_AbsDint(void);
tEErrorCode  FB_AbsDword(void);
tEErrorCode  FB_AbsInt(void);
tEErrorCode  FB_AbsReal(void);
tEErrorCode  FB_AbsSint(void);
tEErrorCode  FB_AbsUdint(void);
tEErrorCode  FB_AbsUint(void);
tEErrorCode  FB_AbsUsint(void);
tEErrorCode  FB_AbsWord(void);
tEErrorCode  FB_AcosByte(void);
tEErrorCode  FB_AcosDint(void);
tEErrorCode  FB_AcosDword(void);
tEErrorCode  FB_AcosInt(void);
tEErrorCode  FB_AcosReal(void);
tEErrorCode  FB_AcosSint(void);
tEErrorCode  FB_AcosUdint(void);
tEErrorCode  FB_AcosUint(void);
tEErrorCode  FB_AcosUsint(void);
tEErrorCode  FB_AcosWord(void);
tEErrorCode  FB_AsinByte(void);
tEErrorCode  FB_AsinDint(void);
tEErrorCode  FB_AsinDword(void);
tEErrorCode  FB_AsinInt(void);
tEErrorCode  FB_AsinReal(void);
tEErrorCode  FB_AsinSint(void);
tEErrorCode  FB_AsinUdint(void);
tEErrorCode  FB_AsinUint(void);
tEErrorCode  FB_AsinUsint(void);
tEErrorCode  FB_AsinWord(void);
tEErrorCode  FB_AtanByte(void);
tEErrorCode  FB_AtanDint(void);
tEErrorCode  FB_AtanDword(void);
tEErrorCode  FB_AtanInt(void);
tEErrorCode  FB_AtanReal(void);
tEErrorCode  FB_AtanSint(void);
tEErrorCode  FB_AtanUdint(void);
tEErrorCode  FB_AtanUint(void);
tEErrorCode  FB_AtanUsint(void);
tEErrorCode  FB_AtanWord(void);
tEErrorCode  FB_CosByte(void);
tEErrorCode  FB_CosDint(void);
tEErrorCode  FB_CosDword(void);
tEErrorCode  FB_CosInt(void);
tEErrorCode  FB_CosReal(void);
tEErrorCode  FB_CosSint(void);
tEErrorCode  FB_CosUdint(void);
tEErrorCode  FB_CosUint(void);
tEErrorCode  FB_CosUsint(void);
tEErrorCode  FB_CosWord(void);
tEErrorCode  FB_ExpByte(void);
tEErrorCode  FB_ExpDint(void);
tEErrorCode  FB_ExpDword(void);
tEErrorCode  FB_ExpInt(void);
tEErrorCode  FB_ExpReal(void);
tEErrorCode  FB_ExpSint(void);
tEErrorCode  FB_ExpUdint(void);
tEErrorCode  FB_ExpUint(void);
tEErrorCode  FB_ExpUsint(void);
tEErrorCode  FB_ExpWord(void);
tEErrorCode  FB_LnByte(void);
tEErrorCode  FB_LnDint(void);
tEErrorCode  FB_LnDword(void);
tEErrorCode  FB_LnInt(void);
tEErrorCode  FB_LnReal(void);
tEErrorCode  FB_LnSint(void);
tEErrorCode  FB_LnUdint(void);
tEErrorCode  FB_LnUint(void);
tEErrorCode  FB_LnUsint(void);
tEErrorCode  FB_LnWord(void);
tEErrorCode  FB_LogByte(void);
tEErrorCode  FB_LogDint(void);
tEErrorCode  FB_LogDword(void);
tEErrorCode  FB_LogInt(void);
tEErrorCode  FB_LogReal(void);
tEErrorCode  FB_LogSint(void);
tEErrorCode  FB_LogUdint(void);
tEErrorCode  FB_LogUint(void);
tEErrorCode  FB_LogUsint(void);
tEErrorCode  FB_LogWord(void);
tEErrorCode  FB_SinByte(void);
tEErrorCode  FB_SinDint(void);
tEErrorCode  FB_SinDword(void);
tEErrorCode  FB_SinInt(void);
tEErrorCode  FB_SinReal(void);
tEErrorCode  FB_SinSint(void);
tEErrorCode  FB_SinUdint(void);
tEErrorCode  FB_SinUint(void);
tEErrorCode  FB_SinUsint(void);
tEErrorCode  FB_SinWord(void);
tEErrorCode  FB_SqrtByte(void);
tEErrorCode  FB_SqrtDint(void);
tEErrorCode  FB_SqrtDword(void);
tEErrorCode  FB_SqrtInt(void);
tEErrorCode  FB_SqrtReal(void);
tEErrorCode  FB_SqrtSint(void);
tEErrorCode  FB_SqrtUdint(void);
tEErrorCode  FB_SqrtUint(void);
tEErrorCode  FB_SqrtUsint(void);
tEErrorCode  FB_SqrtWord(void);
tEErrorCode  FB_TanByte(void);
tEErrorCode  FB_TanDint(void);
tEErrorCode  FB_TanDword(void);
tEErrorCode  FB_TanInt(void);
tEErrorCode  FB_TanReal(void);
tEErrorCode  FB_TanSint(void);
tEErrorCode  FB_TanUdint(void);
tEErrorCode  FB_TanUint(void);
tEErrorCode  FB_TanUsint(void);
tEErrorCode  FB_TanWord(void);
tEErrorCode  FB_TRUNC(void);
tEErrorCode  FB_MaxBool(void);
tEErrorCode  FB_MaxByte(void);
tEErrorCode  FB_MaxDate(void);
tEErrorCode  FB_MaxDint(void);
tEErrorCode  FB_MaxDT(void);
tEErrorCode  FB_MaxDword(void);
tEErrorCode  FB_MaxInt(void);
tEErrorCode  FB_MaxReal(void);
tEErrorCode  FB_MaxSint(void);
tEErrorCode  FB_MaxString(void);
tEErrorCode  FB_MaxTime(void);
tEErrorCode  FB_MaxTod(void);
tEErrorCode  FB_MaxUdint(void);
tEErrorCode  FB_MaxUint(void);
tEErrorCode  FB_MaxUsint(void);
tEErrorCode  FB_MaxWord(void);
tEErrorCode  FB_MinBool(void);
tEErrorCode  FB_MinByte(void);
tEErrorCode  FB_MinDate(void);
tEErrorCode  FB_MinDint(void);
tEErrorCode  FB_MinDT(void);
tEErrorCode  FB_MinDword(void);
tEErrorCode  FB_MinInt(void);
tEErrorCode  FB_MinReal(void);
tEErrorCode  FB_MinSint(void);
tEErrorCode  FB_MinString(void);
tEErrorCode  FB_MinTime(void);
tEErrorCode  FB_MinTod(void);
tEErrorCode  FB_MinUdint(void);
tEErrorCode  FB_MinUint(void);
tEErrorCode  FB_MinUsint(void);
tEErrorCode  FB_MinWord(void);
tEErrorCode  FB_ModDint(void);
tEErrorCode  FB_ModInt(void);
tEErrorCode  FB_ModSint(void);
tEErrorCode  FB_ModUdint(void);
tEErrorCode  FB_ModUint(void);
tEErrorCode  FB_ModUsint(void);
tEErrorCode  FB_RolBool(void);
tEErrorCode  FB_RolByte(void);
tEErrorCode  FB_RolDint(void);
tEErrorCode  FB_RolDword(void);
tEErrorCode  FB_RolInt(void);
tEErrorCode  FB_RolSint(void);
tEErrorCode  FB_RolUdint(void);
tEErrorCode  FB_RolUint(void);
tEErrorCode  FB_RolUsint(void);
tEErrorCode  FB_RolWord(void);
tEErrorCode  FB_RorBool(void);
tEErrorCode  FB_RorByte(void);
tEErrorCode  FB_RorDint(void);
tEErrorCode  FB_RorDword(void);
tEErrorCode  FB_RorInt(void);
tEErrorCode  FB_RorSint(void);
tEErrorCode  FB_RorUdint(void);
tEErrorCode  FB_RorUint(void);
tEErrorCode  FB_RorUsint(void);
tEErrorCode  FB_RorWord(void);
tEErrorCode  FB_ShlBool(void);
tEErrorCode  FB_ShlByte(void);
tEErrorCode  FB_ShlDint(void);
tEErrorCode  FB_ShlDword(void);
tEErrorCode  FB_ShlInt(void);
tEErrorCode  FB_ShlSint(void);
tEErrorCode  FB_ShlUdint(void);
tEErrorCode  FB_ShlUint(void);
tEErrorCode  FB_ShlUsint(void);
tEErrorCode  FB_ShlWord(void);
tEErrorCode  FB_ShrBool(void);
tEErrorCode  FB_ShrByte(void);
tEErrorCode  FB_ShrDint(void);
tEErrorCode  FB_ShrDword(void);
tEErrorCode  FB_ShrInt(void);
tEErrorCode  FB_ShrSint(void);
tEErrorCode  FB_ShrUdint(void);
tEErrorCode  FB_ShrUint(void);
tEErrorCode  FB_ShrUsint(void);
tEErrorCode  FB_ShrWord(void);
tEErrorCode  FB_MoveBool(void);
tEErrorCode  FB_MoveByte(void);
tEErrorCode  FB_MoveDate(void);
tEErrorCode  FB_MoveDint(void);
tEErrorCode  FB_MoveDT(void);
tEErrorCode  FB_MoveDword(void);
tEErrorCode  FB_MoveInt(void);
tEErrorCode  FB_MoveReal(void);
tEErrorCode  FB_MoveSint(void);
tEErrorCode  FB_MoveString(void);
tEErrorCode  FB_MoveTime(void);
tEErrorCode  FB_MoveTod(void);
tEErrorCode  FB_MoveUdint(void);
tEErrorCode  FB_MoveUint(void);
tEErrorCode  FB_MoveUsint(void);
tEErrorCode  FB_MoveWord(void);
tEErrorCode  FB_LimitBool(void);
tEErrorCode  FB_LimitByte(void);
tEErrorCode  FB_LimitDate(void);
tEErrorCode  FB_LimitDint(void);
tEErrorCode  FB_LimitDT(void);
tEErrorCode  FB_LimitDword(void);
tEErrorCode  FB_LimitInt(void);
tEErrorCode  FB_LimitReal(void);
tEErrorCode  FB_LimitSint(void);
tEErrorCode  FB_LimitString(void);
tEErrorCode  FB_LimitTime(void);
tEErrorCode  FB_LimitTod(void);
tEErrorCode  FB_LimitUdint(void);
tEErrorCode  FB_LimitUint(void);
tEErrorCode  FB_LimitUsint(void);
tEErrorCode  FB_LimitWord(void);
tEErrorCode  FB_SELBool(void);
tEErrorCode  FB_SELByte(void);
tEErrorCode  FB_SELDate(void);
tEErrorCode  FB_SELDint(void);
tEErrorCode  FB_SELDT(void);
tEErrorCode  FB_SELDword(void);
tEErrorCode  FB_SELInt(void);
tEErrorCode  FB_SELReal(void);
tEErrorCode  FB_SELSint(void);
tEErrorCode  FB_SELString(void);
tEErrorCode  FB_SELTime(void);
tEErrorCode  FB_SELTod(void);
tEErrorCode  FB_SELUdint(void);
tEErrorCode  FB_SELUint(void);
tEErrorCode  FB_SELUsint(void);
tEErrorCode  FB_SELWord(void);
tEErrorCode  FB_DivByte(void);
tEErrorCode  FB_DivDint(void);
tEErrorCode  FB_DivDword(void);
tEErrorCode  FB_DivInt(void);
tEErrorCode  FB_DivReal(void);
tEErrorCode  FB_DivSint(void);
tEErrorCode  FB_DivTime(void);
tEErrorCode  FB_DivUdint(void);
tEErrorCode  FB_DivUint(void);
tEErrorCode  FB_DivUsint(void);
tEErrorCode  FB_DivWord(void);
tEErrorCode  FB_SEG_AreaBit(void);
tEErrorCode  FB_SEG_AreaBitClear(void);
tEErrorCode  FB_SEG_AreaByte(void);
tEErrorCode  FB_SEG_AreaByteClear(void);

/******************************************C鍔熻兘鍧楀０鏄�*******************************************/
extern PUINT8   pRelatedDataSegBase;
#endif /* MAIN_H_ */
