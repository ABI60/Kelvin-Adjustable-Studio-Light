#include <xc.h>


/**
 * Initializes the basic registers before starting
 */
void init(){
    
    //Configure the system clock
    OSCCON = 0b11110000;
    
    //Configure tris
    TRISA = 0b00000111;
    
    //Configure ansel
    ANSELA = 0b00000011;
    
    //Configure the functionality location for pins
    APFCON = 0b00000011;
    
    //Enable weak pull-up on RA3 to use it as psuedo-output
    OPTION_REG = 0b01111111;
    WPUA = 0b00001000;
}