#include <xc.h>


/**
 * Sets the duty cycle of the yellow lights PWM
 * @param duty_cycle: Duty cycle to be set(0-1023)
 */
void PWM_dc_set_yellow(unsigned int duty_cycle){
    
    //Put here to allow reaching min and max values without the noise
    if(duty_cycle < 10){
        PWM2CONbits.PWM2EN = 0;
        LATAbits.LATA4 = 0;
    }
    else if(duty_cycle > 1013){
        PWM2CONbits.PWM2EN = 0;
        LATAbits.LATA4 = 1;
    }
    else{
        PWM2CONbits.PWM2EN = 1;
    }
    
    //Update the buffer for the DC
    PWM2DC = (unsigned short)duty_cycle;
            
    //Load the DC from the buffer to the register
    PWM2LDCONbits.LDA = 1;
}
