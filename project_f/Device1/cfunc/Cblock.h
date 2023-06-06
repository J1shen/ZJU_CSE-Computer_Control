#ifndef CBLOCK_H_
#define CBLOCK_H_

#ifndef TRUE
#define TRUE  0x01
#endif
#ifndef FALSE
#define FALSE 0x00
#endif


typedef signed char					SINT;
typedef signed short	 			INT;
typedef signed  int					DINT;

typedef unsigned char 				USINT;
typedef unsigned short  			UINT;
typedef unsigned int 				UDINT;


typedef unsigned char 				BYTE;
typedef unsigned short  			WORD;
typedef unsigned int 				DWORD;

typedef unsigned char               BOOL;
typedef float		     			REAL;
typedef char STRING[36]; 			

typedef unsigned int                TIME;
typedef unsigned int                DATE;
typedef unsigned int                TOD;
typedef unsigned int                DT;

extern void *MemGetArrayAddr (UDINT Addr_p);

#endif /* CBLOCK_H_ */
