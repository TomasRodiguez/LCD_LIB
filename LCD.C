#include "MKL25Z4.h"
#include "LCD.h"


void ledOutput(){
    SIM->SCGC5 |= SIM_SCGC5_PORTA_MASK;
    GPIOA -> PDDR |= 0XFFFFFFFF;
}

void led_init(int B,int C,int D){ 
    PTA -> PSOR |= B;  
    PTA -> PSOR |= C;
    PTA -> PSOR |= D;    
    PTA -> PSOR |= (3u << 1);  
    PTA -> PSOR |= (4u << 0);  
    PTA -> PSOR |= (5u << 0);  
    PTA -> PSOR |= (6u << 0);  
    PTA -> PSOR |= (7u << 0);  
    PTA -> PSOR |= (8u << 0);  
    PTA -> PSOR |= (9u << 0); 
}
void led_clear(){
    PTA -> PSOR |= (0u << 1);  
    PTA -> PSOR |= (1u << 0);
    PTA -> PSOR |= (2u << 0);    
    PTA -> PSOR |= (3u << 0);  
    PTA -> PSOR |= (4u << 0);  
    PTA -> PSOR |= (5u << 0);  
    PTA -> PSOR |= (6u << 0);  
    PTA -> PSOR |= (7u << 0);  
    PTA -> PSOR |= (8u << 0);  
    PTA -> PSOR |= (9u << 0);  
}
void led_setCursor(int S,int ID){
    PTA -> PSOR |= S;  
    PTA -> PSOR |= ID;
    PTA -> PSOR |= (2u << 1);    
    PTA -> PSOR |= (3u << 0);  
    PTA -> PSOR |= (4u << 0);  
    PTA -> PSOR |= (5u << 0);  
    PTA -> PSOR |= (6u << 0);  
    PTA -> PSOR |= (7u << 0);  
    PTA -> PSOR |= (8u << 0);  
    PTA -> PSOR |= (9u << 0); 
}
void led_print(int D0,int D1,int D2,int D3,int D4,int D5,int D6,int D7){
    PTA -> PSOR |= D0;  
    PTA -> PSOR |= D1;
    PTA -> PSOR |= D2;    
    PTA -> PSOR |= D3;  
    PTA -> PSOR |= D4;  
    PTA -> PSOR |= D5;  
    PTA -> PSOR |= D6;  
    PTA -> PSOR |= D7;  
    PTA -> PSOR |= (8u << 0);  
    PTA -> PSOR |= (9u << 1); 
}
void led_srollDisplayLeft(){
    PTA -> PSOR |= (0u << 1);  
    PTA -> PSOR |= (1u << 1);
    PTA -> PSOR |= (2u << 1);    
    PTA -> PSOR |= (3u << 0);  
    PTA -> PSOR |= (4u << 0);  
    PTA -> PSOR |= (5u << 0);  
    PTA -> PSOR |= (6u << 0);  
    PTA -> PSOR |= (7u << 0);  
    PTA -> PSOR |= (8u << 0);  
    PTA -> PSOR |= (9u << 0);  
}
void led_srollDisplayRight(){
    PTA -> PSOR |= (0u << 1);  
    PTA -> PSOR |= (1u << 0);
    PTA -> PSOR |= (2u << 1);    
    PTA -> PSOR |= (3u << 0);  
    PTA -> PSOR |= (4u << 0);  
    PTA -> PSOR |= (5u << 0);  
    PTA -> PSOR |= (6u << 0);  
    PTA -> PSOR |= (7u << 0);  
    PTA -> PSOR |= (8u << 0);  
    PTA -> PSOR |= (9u << 0);  
}
void led_createChar(){
    
}