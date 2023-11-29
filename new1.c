
#include <stdio.h>
#include <stdlib.h>


unsigned char a1 = 10 ; 

unsigned char b1 = 20 ; 


unsigned char c1 = 0  ;


unsigned char d1      ;


extern unsigned char a2  ;  


uint32_t global =15 ; 


#define RCC_BASE        0x40023800UL


#define PORTA_BASE      0x40020000UL

/* register of enable AHP pre... */ 
#define RCC_AHB1 	 	(*(volatile uint32_t*)(RCC_BASE+0x30))



#define GPIOA_MODER 	 (*(volatile uint32_t*)(PORTA_BASE+0x00))
#define GPIOA_OTYPER 	 (*(volatile uint32_t*)(PORTA_BASE+0x04))
#define GPIOA_ODR 		 (*(volatile uint32_t*)(PORTA_BASE+0x14))



__attribute__ ((section (".newsection")))
int sum (unsigned char num1 , unsigned char num2){
	
	int sum  =  num1  + num2 ; 
	
	return sum  ;
	
}


int main (void){
	
	
	int cc = sum(10,100) ; 
		
	cc   = (a2 , 255) ; 
	
	
	global = a2+50 ; 
	
	/*  PORTA clock enable */
	RCC_AHB1 = 0x01 ; 
	
	/* config all of pins for portA as output */ 
	GPIOA_MODER = 0x55555555 ; /* OUTPUT MODE */
	GPIOA_OTYPER = 0; /* push pull */
	GPIOA_ODR = 0b101010101010101 ;      /* low */ 
	
	
	while(1){
		
		/*
		
		
		for (uint32_t i  = 0  ; i <0xffffffff;i++){
			
			
			
			GPIOA_ODR=  1 ; 
		}
		
		for (uint32_t i  = 0  ; i <0xffffffff;i++){
			
			
			
			GPIOA_ODR=  1 ; 
		}
		for (uint32_t i  = 0  ; i <0xffffffff;i++){
			
			
			
			GPIOA_ODR=  1 ; 
		}
			
		
		for (uint32_t i  = 0  ; i <0xffffffff;i++){
			
			
			
			GPIOA_ODR=  1 ; 
		}
		
		for (uint32_t i  = 0  ; i <0xffffffff;i++){
			
			
			
			GPIOA_ODR=  1 ; 
		}
		for (uint32_t i  = 0  ; i <0xffffffff;i++){
			
			
			
			GPIOA_ODR=  1 ; 
		}
			
		
		for (uint32_t i  = 0  ; i <0xffffffff;i++){
			
			
			
			GPIOA_ODR=  1 ; 
		}
		
		for (uint32_t i  = 0  ; i <0xffffffff;i++){
			
			
			
			GPIOA_ODR=  1 ; 
		}
		for (uint32_t i  = 0  ; i <0xffffffff;i++){
			
			
			
			GPIOA_ODR=  1 ; 
		}
			
		
		for (uint32_t i  = 0  ; i <0xffffffff;i++){
			
			
			
			GPIOA_ODR=  1 ; 
		}
		
		for (uint32_t i  = 0  ; i <0xffffffff;i++){
			
			
			
			GPIOA_ODR=  1 ; 
		}
		for (uint32_t i  = 0  ; i <0xffffffff;i++){
			
			
			
			GPIOA_ODR=  1 ; 
		}
			
		
		for (uint32_t i  = 0  ; i <0xffffffff;i++){
			
			
			
			GPIOA_ODR=  1 ; 
		}
		
		for (uint32_t i  = 0  ; i <0xffffffff;i++){
			
			
			
			GPIOA_ODR=  1 ; 
		}
		for (uint32_t i  = 0  ; i <0xffffffff;i++){
			
			
			
			GPIOA_ODR=  1 ; 
		}
			
		
		for (uint32_t i  = 0  ; i <0xffffffff;i++){
			
			
			
			GPIOA_ODR=  1 ; 
		}
		
		for (uint32_t i  = 0  ; i <0xffffffff;i++){
			
			
			
			GPIOA_ODR=  1 ; 
		}
		for (uint32_t i  = 0  ; i <0xffffffff;i++){
			
			
			
			GPIOA_ODR=  1 ; 
		}
	
		
		for (uint32_t i  = 0  ; i <0xffffffff;i++){
			
			
			
			GPIOA_ODR=  0; 
		}
		for (uint32_t i  = 0  ; i <0xffffffff;i++){
			
			
			
			GPIOA_ODR=  0; 
		}	
			for (uint32_t i  = 0  ; i <0xffffffff;i++){
			
			
			
			GPIOA_ODR=  0; 
		}
			for (uint32_t i  = 0  ; i <0xffffffff;i++){
			
			
			
			GPIOA_ODR=  0; 
		}
		for (uint32_t i  = 0  ; i <0xffffffff;i++){
			
			
			
			GPIOA_ODR=  0; 
		}	
			for (uint32_t i  = 0  ; i <0xffffffff;i++){
			
			
			
			GPIOA_ODR=  0; 
		}
			for (uint32_t i  = 0  ; i <0xffffffff;i++){
			
			
			
			GPIOA_ODR=  0; 
		}
		for (uint32_t i  = 0  ; i <0xffffffff;i++){
			
			
			
			GPIOA_ODR=  0; 
		}	
			for (uint32_t i  = 0  ; i <0xffffffff;i++){
			
			
			
			GPIOA_ODR=  0; 
		}
			for (uint32_t i  = 0  ; i <0xffffffff;i++){
			
			
			
			GPIOA_ODR=  0; 
		}
		for (uint32_t i  = 0  ; i <0xffffffff;i++){
			
			
			
			GPIOA_ODR=  0; 
		}	
			for (uint32_t i  = 0  ; i <0xffffffff;i++){
			
			
			
			GPIOA_ODR=  0; 
		}
			for (uint32_t i  = 0  ; i <0xffffffff;i++){
			
			
			
			GPIOA_ODR=  0; 
		}
		for (uint32_t i  = 0  ; i <0xffffffff;i++){
			
			
			
			GPIOA_ODR=  0; 
		}	
			for (uint32_t i  = 0  ; i <0xffffffff;i++){
			
			
			
			GPIOA_ODR=  0; 
		}
			for (uint32_t i  = 0  ; i <0xffffffff;i++){
			
			
			
			GPIOA_ODR=  0; 
		}
		for (uint32_t i  = 0  ; i <0xffffffff;i++){
			
			
			
			GPIOA_ODR=  0; 
		}	
			for (uint32_t i  = 0  ; i <0xffffffff;i++){
			
			
			
			GPIOA_ODR=  0; 
		}
			for (uint32_t i  = 0  ; i <0xffffffff;i++){
			
			
			
			GPIOA_ODR=  0; 
		}
		for (uint32_t i  = 0  ; i <0xffffffff;i++){
			
			
			
			GPIOA_ODR=  0; 
		}	
			for (uint32_t i  = 0  ; i <0xffffffff;i++){
			
			
			
			GPIOA_ODR=  0; 
		}
			for (uint32_t i  = 0  ; i <0xffffffff;i++){
			
			
			
			GPIOA_ODR=  0; 
		}
		for (uint32_t i  = 0  ; i <0xffffffff;i++){
			
			
			
			GPIOA_ODR=  0; 
		}	
			for (uint32_t i  = 0  ; i <0xffffffff;i++){
			
			
			
			GPIOA_ODR=  0; 
		}
			for (uint32_t i  = 0  ; i <0xffffffff;i++){
			
			
			
			GPIOA_ODR=  0; 
		}
		for (uint32_t i  = 0  ; i <0xffffffff;i++){
			
			
			
			GPIOA_ODR=  0; 
		}	
			for (uint32_t i  = 0  ; i <0xffffffff;i++){
			
			
			
			GPIOA_ODR=  0; 
		}
		
		*/
		
		
	}
	
	return 0 ; 
	
	
}