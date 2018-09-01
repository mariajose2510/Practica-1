#include <xc.h>

// 0.Sección de documentación 
// main.c
// Dispositivo: PIC16F18877
// Práctica 1.1 
// Autores: Gabriel Casarrubias Guerrero
// Fecha: Agosto 14, 2018

// I/O List
//Inputs************************************************************************

//Outputs***********************************************************************
// LED en RB0

// 1. Sección Directivas pre-proceso
// Incluir librerías
#include <xc.h>  //Esta es la librería principal del compilador
//en ella se encuentran todas las definiciones para el microcontrolador utilizado
#include "Config.H"
// Definiciones
#define _XTAL_FREQ 32000000
// Macros

// 2. Sección de declaraciones
//   Variables Globales

//   Prototipos de funciones

// 3. Sección de subrutinas
// MAIN: obligatorio para un programa en C
void main(void) {
    
    //Configuración del Oscilador
    //OSCCON1bits.NOSC=0b110;
    // OSCCON1bits.NDIV=0b000;
    OSCFRQbits.HFFRQ=0b101; //Selecciona la frecuencia de 16MHz del INTOSC
    //Configuración de puertos
    PORTB=0;    //Limpia puerto B
    TRISB=0;    //Puerto B como salidas
    ANSELB=0;   //Puerto B como digital
 
//4. Inicia ciclo infinito
    while(1){
        LATBbits.LATB7=~LATBbits.LATB7;  //Toggle bits RB0
        __delay_ms(1000);                //Espera 1 segundo
    }
    return;
}

// Subrutinas 



