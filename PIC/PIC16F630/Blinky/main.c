/****************************************************************
Programa Ejemplo: Blinky
Microcontrolador: PIC16F630
****************************************************************/
#include <xc.h> // Librería XC8
 
#define _XTAL_FREQ 12000000 // Indicamos a qué frecuencia de reloj está funcionando el micro
 
// PIC16F630A Configuration Bit Settings

#pragma config FOSC = HS  // Oscillator Selection bits (INTOSC oscillator: I/O function on RA6/OSC2/CLKOUT pin, I/O function on RA7/OSC1/CLKIN)
#pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
#pragma config PWRTE = ON      // Power-up Timer Enable bit (PWRT disabled)
#pragma config MCLRE = ON      // RA5/MCLR/VPP Pin Function Select bit (RA5/MCLR/VPP pin function is digital input, MCLR internally tied to VDD)
#pragma config BOREN = ON       // Brown-out Detect Enable bit (BOD enabled)
#pragma config LVP = OFF        // Low-Voltage Programming Enable bit (RB4/PGM pin has digital I/O function, HV on MCLR must be used for programming)
#pragma config CPD = OFF        // Data EE Memory Code Protection bit (Data memory code protection off)
#pragma config CP = OFF         // Flash Program Memory Code Protection bit (Code protection off)
 
// FUNCION PRINCIPAL

void main ()
{
    //************************************************
    //Configuración de puertos como entrada o salida
    //************************************************
    
    TRISCbits.TRISC2 = 0; // Se configura el bit RC 2 como salida
    // TRISC = 0b00000000; // Se configura a todos los bits del puerto C, como salidas
     
    //******************************
    // Envío de datos a los puertos
    //******************************
     while (1) // Bucle infinito
     {
       //  PORTC = 0b00000000; // Se envía el dato 0X00 a todo el puerto C
         PORTCbits.RC2 = 0; // Sen envía el dato "0" al bit RC2
         __delay_ms(50);
         
       //  PORTC = 0b11111111; // Se envía el dato 0XFF a todo el puerto C
         PORTCbits.RC2 = 1; // Sen envía el dato "1" al bit RC2
         __delay_ms(50);
     } 
}
