// PIC12F1571 Configuration Bit Settings

#ifndef CONFIG_H
    #define CONFIG_H

    // CONFIG1
    #pragma config FOSC = INTOSC    //  (INTOSC oscillator; I/O function on CLKIN pin)
    #pragma config WDTE = OFF       // Watchdog Timer Enable (WDT disabled)
    #pragma config PWRTE = ON       // Power-up Timer Enable (PWRT enabled)
    #pragma config MCLRE = OFF      // MCLR Pin Function Select (MCLR/VPP pin function is digital input)
    #pragma config CP = OFF         // Flash Program Memory Code Protection (Program memory code protection is disabled)
    #pragma config BOREN = OFF      // Brown-out Reset Enable (Brown-out Reset disabled)
    #pragma config CLKOUTEN = OFF   // Clock Out Enable (CLKOUT function is disabled. I/O or oscillator function on the CLKOUT pin)

    // CONFIG2
    #pragma config WRT = OFF        // Flash Memory Self-Write Protection (Write protection off)
    #pragma config PLLEN = ON       // PLL Enable (4x PLL enabled)
    #pragma config STVREN = ON      // Stack Overflow/Underflow Reset Enable (Stack Overflow or Underflow will cause a Reset)
    #pragma config BORV = LO        // Brown-out Reset Voltage Selection (Brown-out Reset Voltage (Vbor), low trip point selected.)
    #pragma config LPBOREN = OFF    // Low Power Brown-out Reset enable bit (LPBOR is disabled)
    #pragma config LVP = OFF        // Low-Voltage Programming Enable (High-voltage on MCLR/VPP must be used for programming)

    // #pragma config statements should precede project file includes.
    // Use project enums instead of #define for ON and OFF.

    #define _XTAL_FREQ 32000000

#endif
