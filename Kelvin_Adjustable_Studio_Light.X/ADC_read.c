#include "config.h"
#include <xc.h>

/**
 * Reads the currently selected ADC channel and returns the result
 * @param channel: Channel to be read
 * @return Returns the resulting value
 */
unsigned int ADC_read(unsigned char channel){
    
    ADCON0bits.CHS = channel;
    
    //Acquisition delay (1ms just in case)
    __delay_ms(1);
    
    //Start the conversion
    ADCON0bits.GO_nDONE = 1;
    
    //Wait for the conversion to finish
    while(ADCON0bits.GO_nDONE == 1);
    
    //Construct the final result
    unsigned int result = (ADRESH<<8) + ADRESL;
    
    //Return the result
    return result;
}