#include <xc.h>

/**
 * Initializes pwm registers
 */
void init_pwm(){
    
    /**
     * -PWM enabled
     * -PWM output enabled
     * -PWM standard mode
     */
    PWM1CON = 0b11000000;
    PWM2CON = 0b11000000;
    
    /**
     * -Prescaler set to 8
     * -Fosc
     */
    PWM1CLKCON = 0b00110000;
    PWM2CLKCON = 0b00110000;
    
    //Period of ~4kHz (comes from the need to use 1022)
    PWM1PR = 1022;
    PWM2PR = 1022;
    
    //Put the phase to 0 so that DC can be directly calculated
    PWM1PH = 0;
    PWM2PH = 0;
        
    //Put the DC to 0 to begin with
    PWM1DC = 0;
    PWM2DC = 0;
}
