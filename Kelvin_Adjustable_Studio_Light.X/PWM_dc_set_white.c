#include <xc.h>


/**
 * Sets the duty cycle of the white lights PWM
 * @param duty_cycle: Duty cycle to be set(0-1023)
 */
void PWM_dc_set_white(unsigned int duty_cycle){
    
    //Put here to allow reaching min and max values without the noise
    if(duty_cycle < 10){
        PWM1CONbits.PWM1EN = 0;
        LATAbits.LATA5 = 0;
    }
    else if(duty_cycle > 1013){
        PWM1CONbits.PWM1EN = 0;
        LATAbits.LATA5 = 1;
    }
    else{
        PWM1CONbits.PWM1EN = 1;
    }
    
    //Update the buffer for the DC
    PWM1DC = (unsigned short)duty_cycle;
            
    //Load the DC from the buffer to the register
    PWM1LDCONbits.LDA = 1;
}
