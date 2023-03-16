#include <xc.h>


/**
 * Initializes the adc registers
 */
void init_adc(){
    
    /**
     * -Right justified
     * -Fosc/64
     * -Positive reference connected to FVR
     */
    ADCON1 = 0b11100011;
    
    /**
     * -Turn on the ADC
     * -Select channel 0 to begin with
     */
    ADCON0 = 0b00000001;
    
    /**
     * -Enable the FVR module
     * -x4 amplify it for ADC to achieve 4.096v +ref
     */
    FVRCON = 0b10000011;
}
