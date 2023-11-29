/*
    @file   StartupCode_STM322F401xx.c
    @author Mohamed Hussein
    @brief  Startup code 
*/

#define NULL 0

typedef unsigned int uint32_t  ; 

extern uint32_t _estack , _sdata, _edata, _sbss, _ebss, _sflashdata;

extern int main(void);



void System_Intitialization (void);
void Default_Handler        (void);

void Reset_Handler                  (void);
void NMI_Handler_Handler 			(void) __attribute__((alias ("Default_Handler")));
void HardFault_Handler	 			(void) __attribute__((alias ("Default_Handler")));
void MemManage_Handler	 			(void) __attribute__((alias ("Default_Handler")));
void BusFault_Handler 				(void) __attribute__((alias ("Default_Handler")));
void UsageFault_Handler  			(void) __attribute__((alias ("Default_Handler")));
void SVCall_Handler  				(void) __attribute__((alias ("Default_Handler")));
void Debug_Monitor_Handler   		(void) __attribute__((alias ("Default_Handler")));
void PendSV_Handler					(void) __attribute__((alias ("Default_Handler")));
void Systick_Handler				(void) __attribute__((alias ("Default_Handler")));
void WWDG_Handler   				(void) __attribute__((alias ("Default_Handler")));
void EXTI16_Handler 				(void) __attribute__((alias ("Default_Handler")));
void EXTI21_Handler 				(void) __attribute__((alias ("Default_Handler")));
void EXTI22_Handler 				(void) __attribute__((alias ("Default_Handler")));
void FLASH_Handler  				(void) __attribute__((alias ("Default_Handler")));
void RCC_Handler  	 				(void) __attribute__((alias ("Default_Handler")));
void EXTI0_Handler  				(void) __attribute__((alias ("Default_Handler")));
void EXTI1_Handler  				(void) __attribute__((alias ("Default_Handler")));
void EXTI2_Handler  				(void) __attribute__((alias ("Default_Handler")));
void EXTI3_Handler  				(void) __attribute__((alias ("Default_Handler")));
void EXTI4_Handler  				(void) __attribute__((alias ("Default_Handler")));
void DMA1_Stream0_Handler 	 		(void) __attribute__((alias ("Default_Handler")));
void DMA1_Stream1_Handler 	 		(void) __attribute__((alias ("Default_Handler")));
void DMA1_Stream2_Handler 	 		(void) __attribute__((alias ("Default_Handler")));
void DMA1_Stream3_Handler 	 		(void) __attribute__((alias ("Default_Handler")));
void DMA1_Stream4_Handler 	 		(void) __attribute__((alias ("Default_Handler")));
void DMA1_Stream5_Handler 	 		(void) __attribute__((alias ("Default_Handler")));
void DMA1_Stream6_Handler 	 		(void) __attribute__((alias ("Default_Handler")));
void ADC_Handler    				(void) __attribute__((alias ("Default_Handler")));
void EXTI9_5_Handler    			(void) __attribute__((alias ("Default_Handler")));
void TIM1_BRK_TIM9_Handler   		(void) __attribute__((alias ("Default_Handler")));
void TIM1_UP_TIM10_Handler   		(void) __attribute__((alias ("Default_Handler")));
void TIM1_TRG_COM_TIM11_Handler     (void) __attribute__((alias ("Default_Handler")));
void TIM1_CC_Handler  				(void) __attribute__((alias ("Default_Handler")));
void TIM2_Handler 	 				(void) __attribute__((alias ("Default_Handler")));
void TIM3_Handler 	 				(void) __attribute__((alias ("Default_Handler")));
void TIM4_Handler 	 				(void) __attribute__((alias ("Default_Handler")));
void I2C1_EV_Handler 	 			(void) __attribute__((alias ("Default_Handler")));
void I2C1_ER_Handler 	 			(void) __attribute__((alias ("Default_Handler")));
void I2C2_EV_Handler 	 			(void) __attribute__((alias ("Default_Handler")));
void I2C2_ER_Handler 	 			(void) __attribute__((alias ("Default_Handler")));
void SPI1_Handler  	 				(void) __attribute__((alias ("Default_Handler")));
void SPI2_Handler  	 				(void) __attribute__((alias ("Default_Handler")));
void USART1_Handler 	 			(void) __attribute__((alias ("Default_Handler")));
void USART2_Handler  				(void) __attribute__((alias ("Default_Handler")));
void EXTI15_10_Handler  		    (void) __attribute__((alias ("Default_Handler")));
void EXTI17_Handler   				(void) __attribute__((alias ("Default_Handler")));
void EXTI18_Handler   				(void) __attribute__((alias ("Default_Handler")));
void OTG_FS_WKUP_Handler  			(void) __attribute__((alias ("Default_Handler")));
void DMA1_Stream7_Handler			(void) __attribute__((alias ("Default_Handler")));
void SDIO_Handler                   (void) __attribute__((alias ("Default_Handler")));
void TIM5_Handler                   (void) __attribute__((alias ("Default_Handler")));
void SPI3_Handler                   (void) __attribute__((alias ("Default_Handler")));
void DMA2_Stream0_Handler           (void) __attribute__((alias ("Default_Handler")));
void DMA2_Stream1_Handler           (void) __attribute__((alias ("Default_Handler")));
void DMA2_Stream2_Handler           (void) __attribute__((alias ("Default_Handler")));
void DMA2_Stream3_Handler           (void) __attribute__((alias ("Default_Handler")));
void DMA2_Stream4_Handler           (void) __attribute__((alias ("Default_Handler")));
void OTG_FS_Handler                 (void) __attribute__((alias ("Default_Handler")));
void DMA2_Stream5_Handler           (void) __attribute__((alias ("Default_Handler")));
void DMA2_Stream6_Handler           (void) __attribute__((alias ("Default_Handler")));
void DMA2_Stream7_Handler			(void) __attribute__((alias ("Default_Handler")));
void USART6_Handler                 (void) __attribute__((alias ("Default_Handler")));
void I2C3_EV_Handler                (void) __attribute__((alias ("Default_Handler")));
void I2C3_ER_Handler                (void) __attribute__((alias ("Default_Handler")));
void FPU_Handler                    (void) __attribute__((alias ("Default_Handler")));
void SPI4_Handler                   (void) __attribute__((alias ("Default_Handler")));


uint32_t* const ptr_MSPValue = (uint32_t*)&_estack ;


uint32_t* VactorTableArray[]  __attribute__ ((section (".isr_vector"))) ={
	
	(uint32_t*)ptr_MSPValue ,
	(uint32_t*)Reset_Handler ,
	(uint32_t*)NMI_Handler_Handler , 
	(uint32_t*)HardFault_Handler  ,
	(uint32_t*)MemManage_Handler  ,
	(uint32_t*)BusFault_Handler  ,
	(uint32_t*)UsageFault_Handler  ,
	0     ,
	(uint32_t*)SVCall_Handler  ,
	(uint32_t*)Debug_Monitor_Handler  ,
	0    ,
	(uint32_t*)PendSV_Handler  ,
	(uint32_t*)Systick_Handler  ,
	(uint32_t*)WWDG_Handler  ,
	(uint32_t*)EXTI16_Handler  ,
	(uint32_t*)EXTI21_Handler  ,
	(uint32_t*)EXTI22_Handler  ,
	(uint32_t*)FLASH_Handler  ,
	(uint32_t*)RCC_Handler  ,
	(uint32_t*)EXTI0_Handler  ,
	(uint32_t*)EXTI1_Handler  ,
	(uint32_t*)EXTI2_Handler  ,
	(uint32_t*)EXTI3_Handler  ,
	(uint32_t*)EXTI4_Handler  ,
	(uint32_t*)DMA1_Stream0_Handler  ,
	(uint32_t*)DMA1_Stream1_Handler  ,
	(uint32_t*)DMA1_Stream2_Handler  ,
	(uint32_t*)DMA1_Stream3_Handler  ,
	(uint32_t*)DMA1_Stream4_Handler  ,
	(uint32_t*)DMA1_Stream5_Handler  ,
	(uint32_t*)DMA1_Stream6_Handler  ,
	(uint32_t*)ADC_Handler  ,
	(uint32_t*)EXTI9_5_Handler  ,
	(uint32_t*)TIM1_BRK_TIM9_Handler  ,
	(uint32_t*)TIM1_UP_TIM10_Handler  ,
	(uint32_t*)TIM1_TRG_COM_TIM11_Handler  ,
	(uint32_t*)TIM1_CC_Handler  ,
	(uint32_t*)TIM2_Handler  ,
	(uint32_t*)TIM3_Handler  ,
	(uint32_t*)TIM4_Handler  ,
	(uint32_t*)I2C1_EV_Handler  ,
	(uint32_t*)I2C1_ER_Handler  ,
	(uint32_t*)I2C2_EV_Handler  ,
	(uint32_t*)I2C2_ER_Handler  ,
	(uint32_t*)SPI1_Handler  ,
	(uint32_t*)SPI2_Handler  ,
	(uint32_t*)USART1_Handler  ,
	(uint32_t*)USART2_Handler  ,
	(uint32_t*)EXTI15_10_Handler  ,
	(uint32_t*)EXTI17_Handler  ,
	(uint32_t*)EXTI18_Handler  ,
	(uint32_t*)OTG_FS_WKUP_Handler  ,
	(uint32_t*)DMA1_Stream7_Handler  ,
	(uint32_t*)SDIO_Handler  ,
	(uint32_t*)TIM5_Handler  ,
	(uint32_t*)SPI3_Handler  ,
	(uint32_t*)DMA2_Stream0_Handler  ,
	(uint32_t*)DMA2_Stream1_Handler  ,
	(uint32_t*)DMA2_Stream2_Handler  ,
	(uint32_t*)DMA2_Stream3_Handler  ,
	(uint32_t*)DMA2_Stream4_Handler  ,
	(uint32_t*)OTG_FS_Handler  ,
	(uint32_t*)DMA2_Stream5_Handler  ,
	(uint32_t*)DMA2_Stream6_Handler  ,
	(uint32_t*)DMA2_Stream7_Handler  ,
	(uint32_t*)USART6_Handler  ,
	(uint32_t*)I2C3_EV_Handler  ,
	(uint32_t*)I2C3_ER_Handler  ,
	(uint32_t*)FPU_Handler  ,
	(uint32_t*)SPI4_Handler  ,
	
} ; 



void Default_Handler(void){
	
	
	
	
	
}


void Reset_Handler(void){
	
	 uint32_t Section_Size = 0;
	 uint32_t *MemSourceAddr = NULL;   /* source -> Flash */
     uint32_t *MemDestAddr = NULL;	   /* destanation -> Ram */
    
     /* 1) Copy  .data segment initializers from flash to SRAM */
     Section_Size = &_edata - &_sdata;  /* Length of .data segment */
     MemSourceAddr = (uint32_t *)&_sflashdata;  /* Start address of .data sengement (LMA) -> Load Memory Address (FLASH)*/
     MemDestAddr = (uint32_t *)&_sdata;     /* Start address of .data sengement (VMA) -> Virtual Memory Address(RAM) */
     
     for(uint32_t MemCounter = 0; MemCounter < Section_Size; MemCounter++){
         *MemDestAddr++ = *MemSourceAddr++;
     }
    
    /* 2) Initialize .bss segment with zero */
      Section_Size = &_ebss- &_sbss;        /* Length of .bss segment */
      MemDestAddr = (uint32_t *)&_sbss;     /* Start address of .bss sengement */
    
     for(uint32_t MemCounter = 0; MemCounter < Section_Size; MemCounter++){
         *MemDestAddr++ = 0;
     }
    
    /* 3) Call the system intitialization function to do any thing else */
     System_Intitialization();
    
    /* 4) main function call */
     main();	 
	 
}



 void System_Intitialization(void){
	 
	 
	 
 }