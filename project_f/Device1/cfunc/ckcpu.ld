/*
 * ROM map
 * 0x00000000                     0x00000FFF                  
 *    |---------------------------------| 
 *              ROM (4K)  
 *
 * SDRAM map
 * 0x00100000                     0x0017FFFF
 *    |---------------------------------| 
 *              SDRAM(512K)
 *
 * DEVICE: MEMORIGIN
 * MU-213: 0x0016D000
 * MU-213.EDU: 0x0016F000
 * MCS-200: 0x0016D000
 * DEB-200: 0x0016B000
 * EPC-200: 0x0016F000
 * FPC-200: 0x0016B000
 * FPC-300: 0x0016B000
 * FPC-300S: 0x0016B000
 *
 */

ENTRY(BlockMain)

MEMORY
{
  FLASH : ORIGIN = 0x00080000 , LENGTH = 0x80000
  
  MEM   : ORIGIN = 0x0016C000 , LENGTH = 0x13000
}

PROVIDE (__stack =  0x0017F000 - 8);


SECTIONS
{
  .text : {
    . = ALIGN(0x4) ;
    __stext = . ;

    *crt0.o(.data)
    *(.text)
    *(.text*)
    *(.text.*)
    *(.gnu.warning)
    *(.stub)
    *(.gnu.linkonce.t*)
    *(.glue_7t)
    *(.glue_7)
    *(.jcr)
    *(.init)
    *(.fini)
    
    . = ALIGN (4) ;
    PROVIDE(__ctbp = .);
    *(.call_table_data)
    *(.call_table_text)

    . = ALIGN(0x10);
    __etext = . ;
  }> MEM

  .rodata : {
    . = ALIGN(0x4);

    __srodata = .;
    *(.rdata)
    *(.rdata*)
    *(.rdata1)
    *(.rdata.*)
    *(.rodata)
    *(.rodata1)
    *(.rodata*)
    *(.rodata.*)
    *(.rodata.str1.4)

    . = ALIGN(0x10) ;
    __erodata = .;
  } >MEM
  
  .data : AT(__erodata){
    __sdata = . ;
    . = ALIGN(0x4) ;

    __data_start = . ;
    data_start = . ;
    *(.got.plt)
    *(.got)
    FILL(0) ;
    . = ALIGN(0x20) ; 
    LONG(-1)
    . = ALIGN(0x20) ;
    *(.gnu.linkonce.r*)
    *(.data)
    *(.data*)
    *(.data1)
    *(.data.*)
    *(.gnu.linkonce.d*)
    *(.data1)
    *(.eh_frame)
    *(.gcc_except_table)
    *(.gcc_except_table*)
    *(.sdata) 
    *(.sdata.*)
    *(.gnu.linkonce.s.*)
    *(__libc_atexit)
    *(__libc_subinit)
    *(__libc_subfreeres)
    *(.note.ABI-tag)

    . = ALIGN(4) ;
    PROVIDE(__CTOR_LIST__ = .);
    /*LONG( (__CTOR_LIST_END__ - __CTOR_LIST__) / 4 - 2 ) */
    KEEP(*(SORT(.ctors*)))
    PROVIDE(__CTOR_END__ = .);
    PROVIDE(__CTOR_LIST_END__ = .);
    PROVIDE(__DTOR_LIST__ = .);
    /*//LONG( (__DTOR_END__ - __DTOR_LIST__) / 4 - 2 )*/
    KEEP (*(SORT(.dtors*)))
    PROVIDE(__DTOR_END__ = .);
    
    . = ALIGN(0x10) ; 
    __edata = . ;
  } > MEM

__sdata_load  = LOADADDR(.data); 

  .bss : {
    . = ALIGN(0x4) ;
    __sbss = ALIGN(0x4) ;

    __bss_start = . ;
    *(.dynsbss)
    *(.sbss)
    *(.sbss.*)
    *(.scommon)
    *(.dynbss)
    *(.bss)
    *(.bss.*)
    *(COMMON)

    . = ALIGN(0x10) ;
    __ebss = . ;
    __end = . ;
    end = . ;
  } > MEM

  .preinit_array :
  {
    PROVIDE_HIDDEN (__preinit_array_start = .);
    KEEP (*(.preinit_array))
    PROVIDE_HIDDEN (__preinit_array_end = .);
  }
  .init_array :
  {
    PROVIDE_HIDDEN (__init_array_start = .);
    KEEP (*(SORT(.init_array.*)))
    KEEP (*(.init_array))
    PROVIDE_HIDDEN (__init_array_end = .);
  }
  .fini_array :
  {
    PROVIDE_HIDDEN (__fini_array_start = .);
    KEEP (*(.fini_array))
    KEEP (*(SORT(.fini_array.*)))
    PROVIDE_HIDDEN (__fini_array_end = .);
  }  

  .junk 0 : { *(.rel*) *(.rela*) }
  
  /* Stabs debugging sections.  */
  .stab          0 : { *(.stab) }
  .stabstr       0 : { *(.stabstr) }
  .stab.excl     0 : { *(.stab.excl) }
  .stab.exclstr  0 : { *(.stab.exclstr) }
  .stab.index    0 : { *(.stab.index) }
  .stab.indexstr 0 : { *(.stab.indexstr) }
  .comment       0 : { *(.comment) }
  /* DWARF debug sections.
     Symbols in the DWARF debugging sections are relative to the beginning
     of the section so we begin them at 0.  */
  /* DWARF 1 */
  .debug          0 : { *(.debug) }
  .line           0 : { *(.line) }
  /* GNU DWARF 1 extensions */
  .debug_srcinfo  0 : { *(.debug_srcinfo) }
  .debug_sfnames  0 : { *(.debug_sfnames) }
  /* DWARF 1.1 and DWARF 2 */
  .debug_aranges  0 : { *(.debug_aranges) }
  .debug_pubnames 0 : { *(.debug_pubnames) }
  /* DWARF 2 */
  .debug_info     0 : { *(.debug_info .gnu.linkonce.wi.*) }
  .debug_abbrev   0 : { *(.debug_abbrev) }
  .debug_line     0 : { *(.debug_line) }
  .debug_frame    0 : { *(.debug_frame) }
  .debug_str      0 : { *(.debug_str) }
  .debug_loc      0 : { *(.debug_loc) }
  .debug_macinfo  0 : { *(.debug_macinfo) }
  /* SGI/MIPS DWARF 2 extensions */
  .debug_weaknames 0 : { *(.debug_weaknames) }
  .debug_funcnames 0 : { *(.debug_funcnames) }
  .debug_typenames 0 : { *(.debug_typenames) }
  .debug_varnames  0 : { *(.debug_varnames) }
  /* DWARF 3 */
  .debug_pubtypes 0 : { *(.debug_pubtypes) }
  .debug_ranges   0 : { *(.debug_ranges) }
  .gnu.attributes 0 : { KEEP (*(.gnu.attributes)) }
  /DISCARD/ : { *(.note.GNU-stack) *(.gnu_debuglink) *(.gnu.lto_*) }

}
