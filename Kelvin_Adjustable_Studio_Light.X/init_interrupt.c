#include <xc.h>


/**
 * Initializes the interrupt registers
 */
void init_interrtupt(){

    //Configure external interrupt(don't need to configure edge
    //since it's high edge by default)
    INTCON = 0b11010000;
}
