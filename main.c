#include <xc.h> 
#include "delays.h" 
 
void MOTORDESCE(); void MOTORSOBE(); void CABINEDESCE(); void CABINESOBE(); void EMERG(); 
 
     
     
void main(void)   
{ 
 
  
    #pragma config FOSC = HS 
    #pragma config WDT = OFF 
    #pragma config LVP = OFF 
 
    #define RB0 PORTBbits.RB0   //LED PATAMAR SUP 
    #define RB1 PORTBbits.RB1   //LED PATAMAR INF 
    #define RB2 PORTBbits.RB2   //MOTOR SOBE 
    #define RB3 PORTBbits.RB3   //MOTOR DESCE     #define RB4 PORTBbits.RB4   //LED CABINE 
    #define RB5 PORTBbits.RB5   //EMERGENCIA 
    #define RB6 PORTBbits.RB6   //BUZZER 
 
     
    #define RA0 PORTAbits.RA0   //BT CHAMA SUP 
    #define RA1 PORTAbits.RA1   //BT CHAMA INF 
    #define RA2 PORTAbits.RA2   //SENSOR SUP 
    #define RA3 PORTAbits.RA3   //SENSOR INF  
    #define RA4 PORTAbits.RA4   //SENSOR CABINE 
    #define RA5 PORTAbits.RA5   //BT CABINE 
 
    #define RC0 PORTCbits.RC0   //BT EMERGENCIA 
    #define RC1 PORTCbits.RC1   //LED EMERGENCIA 
    // Delay1TCY() 
    // Delay10TCYx() 
    //Delay100TCYx() 
    //Delay1KTCYx() 
    // Delay10KTCYx() 
 
    char display[10]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F}; 
    int i; 
    ADCON1 =  0X0F;  
    TRISB  =  0X00; 
    TRISD  =  0X00; 
    TRISA  =  0XFF; 
    TRISC  =  0b00000001; 
    PORTB = 0; 
    PORTD = 0; 
     
    while(1) 
    { 
         
        if(RC0 == 1)    EMERG();         PORTD = display[0];         if(RA2 == 1)//SENSOR SUP { 
            RB0 = 0;             RB1 = 1;             RB2 = 0;             RB3 = 0;             RB4 = 1;             if(RC0 == 1)    EMERG();             if(RA1 == 1)    MOTORDESCE();              if(RA4 == 1) 
            {                 
              if(RC0 == 1)    EMERG();               PORTD = display[3];                 while(RA4 == 1) 
              { 
                  if(RC0 == 1)    EMERG();                   if(RA5 == 1) CABINEDESCE(); 
                
              } 
            } 
             
        } 
     
        if(RA3 == 1)//SENSOR INF 
        { 
        RB1 = 0;         RB0 = 1;         RB2 = 0; 
        RB3 = 0;         RB4 = 1;         if(RC0 == 1)    EMERG();         if(RA0 == 1) MOTORSOBE(); 
          
         
        if(RA4 == 1) 
            { 
PORTD = display[3];   while(RA4 == 1) 
            { 
            if(RC0 == 1)    EMERG();             if(RA5 == 1)  CABINESOBE(); 
            } 
         
            } 
             
         
        } 
         
        if(RA2 == 0 && RA3 == 0) 
        { 
        MOTORDESCE();         if(RC0 == 1)    EMERG(); 
        }  
     
     } 
     
    return; 
}    
 
void MOTORDESCE() 
 
{ 
         
        while(RA3 == 0) 
        {     
        if(RC0 == 1)    EMERG();     
        RB3 = 1;//motor desce 
        RB1 = 1; 
        RB5 = 1;         RB4 = 0; 
        RB0 = 1; 
         
Delay10KTCYx(50); 
RB1 = 0; 
        RB5 = 0;         RB4 = 0;         RB0 = 0;         if(RC0 == 1)    EMERG(); 
        Delay10KTCYx(50); 
        }                  return; 
         
}     
 
 
void MOTORSOBE() 
 
{ 
     
     
        while(RA2 == 0) 
        { 
        if(RC0 == 1)    EMERG();     
        RB2 = 1;//motor SOBE 
        RB3 = 0; 
        RB1 = 1;         RB5 = 1;         RB4 = 0; 
        RB0 = 1; 
        
        Delay10KTCYx(50); 
        RB1 = 0;         RB5 = 0; 
        RB4 = 0;         RB0 = 0;         if(RC0 == 1)    EMERG(); Delay10KTCYx(50); 
}                  return; 
}   
 
void CABINEDESCE() 
{ 
 
char display_2[10]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F}; 
int a; 
             
    a = 0;     for(a = 3;a>=0;a--) 
    { 
    PORTD = display_2[a]; 
    Delay10KTCYx(100); 
    PORTD = 0; 
    } 
     
    RB2 = 0;     RB6 = 1; 
    Delay10KTCYx(200); 
    RB6 = 0;     RB3 = 1; 
    RB4 = 0; 
     
     
    a = 9;     while(RA3 == 0) 
    { 
     
    if(RC0 == 1)    EMERG();         PORTD = display_2[a];         RB0 = 1; 
    RB1 = 1; 
    RB5 = 1; 
   
    Delay10KTCYx(50);     
    RB0 = 0;     RB1 = 0;     RB5 = 0;     if(RC0 == 1)    EMERG();     Delay10KTCYx(50); 
    a--;     if(a <= 0) a = 0; 
    } 
     
    RB3 = 0;     RB6 = 1; 
    Delay10KTCYx(200); 
    RB6 = 0;     RB1 = 0;     RB0 = 1;     RB4 = 1;     if(RC0 == 1)    EMERG();     while(RA4 == 1) 
    { 
        RB4 = 1; 
        Delay10KTCYx(50); 
        RB4 = 0;         Delay10KTCYx(50);         if(RC0 == 1)    EMERG(); 
    }     
 
    return; 
    
} 
  
 
void CABINESOBE() 
{ 
     
char display_2[10]={0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F}; int a; 
     
    a = 0;     for(a = 3;a>=0;a--) 
    { 
    PORTD = display_2[a]; 
    Delay10KTCYx(100); 
    PORTD = 0; 
    } 
          
    RB3 = 0; 
    RB6 = 1; 
    Delay10KTCYx(200); 
    RB6 = 0; 
    RB2 = 1; 
    RB4 = 0; 
     
     
    a = 9;     while(RA2 == 0) 
    { 
     
    if(RC0 == 1)    EMERG();     
    PORTD = display_2[a];     
    RB0 = 1;     RB1 = 1; 
    RB5 = 1; 
   
    Delay10KTCYx(50);     
    RB0 = 0; 
    RB1 = 0; 
    RB5 = 0; 
     
    if(RC0 == 1)    EMERG();     Delay10KTCYx(50); 
    a--;     if(a <= 0) a = 0; 
    } 
     
    RB2 = 0;     RB6 = 1; 
    Delay10KTCYx(200); 
    RB6 = 0; 
    RB1 = 1;     RB0 = 0;     RB4 = 1;     if(RC0 == 1)    EMERG();     while(RA4 == 1) 
    { 
        if(RC0 == 1)    EMERG();         RB4 = 1; 
        Delay10KTCYx(50); 
        RB4 = 0;         Delay10KTCYx(50);         if(RC0 == 1)    EMERG(); 
    }     
     
     
    return; 
} 
 
void EMERG() 
{ 
     
     
    while(RC0 == 1) 
    { 
    RB3 = 0;     RB2 = 0; 
    RB5 = 0; 
         
    } 
     
    return; 
}  