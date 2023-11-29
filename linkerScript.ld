/* 
&   File    : Linker scipt file 
@ 	Author  : Moahmed Hussein
@   brief   : Linker script file for STM32F401CC
*/


/* defination of highest address of the stack  */

_estack  =  ORIGIN(RAM) + LENGTH(RAM);

/* size of the stack required */

_stack_size  = 0x8000 ; /* 32K */

/*  Memories defination */

MEMORY {

/*  define size of the RAM with basic address and the length's */
RAM   (rwx)    : ORIGIN = 0x20000000 , LENGTH = 64K
/*  define size of the FLASH with basic address and the length's */
FLASH (rx)     : ORIGIN = 0x08000000 , LENGTH = 256K

}

/*  Sections */

SECTIONS {

	/* The startup code into "FLASH" Rom type memory */
	.isr_vector :
	{
    . = ALIGN(4);
    *(.isr_vector)
    . = ALIGN(4);
	} >FLASH


	/*  Allocate .text sesction in FLASH  */ 
	.text : {
	. = ALIGN(4); 
	*(.text)     /* .text sections (code) */
	*(.text*)    /* .text* sections (code) */
	. = ALIGN(4); 
	} >FLASH
	
	
	/*  Allocate .newsection sesction in FLASH  */
	.newsection : {
	. = ALIGN(4); 
	*(.newsection)    /* .newsection sections  (special section for a test) */
	*(.newsection*)   /* .newsection* sections (special section for a test ) */
	. = ALIGN(4); 
	} >FLASH
			
	/*  Allocate .rodata sesction in FLASH  */
	.rodata : {
	. = ALIGN(4); 
	*(.rodata)    /* .rodata sections (constants, strings, etc.) */
	*(.rodata*)   /* .rodata* sections (constants, strings, etc.) */
	. = ALIGN(4); 
	} >FLASH
	
	 /* Used by the startup to initialize data */
	_sflashdata = LOADADDR(.data);
	
	/*  Allocate .data sesction in FLASH  */
	.data : {
	 _sdata = .;        /* Create a global symbol at data start */
	. = ALIGN(4) ; 
    *(.data)           /* .data sections */
    *(.data*)          /* .data* sections */
    . = ALIGN(4);
    _edata = .;        /* Define a global symbol at data end */
	} >	RAM AT > FLASH


	
	/*  Allocate .bss sesction in RAM  */
	.bss : { 
	 _sbss = .;         /* Define a global symbol at bss start */
	 . = ALIGN(4);
    *(.bss)            /* .bss sections */
    *(.bss*)           /* .bss* sections */
    . = ALIGN(4);
    _ebss = .;         /* Define a global symbol at bss end */
	} > RAM 
	

}