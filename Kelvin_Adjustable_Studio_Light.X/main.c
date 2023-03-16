#include "config.h"
#include <xc.h>
#include "functions.h"
#include "definitions.h"


//Flags
volatile unsigned char lights_hold_flag = false;

//Variables
unsigned int pot_brightness   = 0;
unsigned int pot_temperature  = 0;

unsigned long white_DC  = 0;
unsigned int yellow_DC = 0;


void main(void) {
    
    //Initialize modules
    init();    
    init_interrtupt();    
    init_adc();    
    init_pwm();
    

    while(1){
        
        //If the lights are toggled on, adjust the values; if not, turn them off
        if(lights_hold_flag == true){
            WPUAbits.WPUA3 = 1;
        }
        else{
            WPUAbits.WPUA3 = 0;
            
            //Measure the pot values
            pot_brightness  = ADC_read(0);
            pot_temperature = ADC_read(1);

            //Find white DC value(">>10" = "/1024")
            white_DC = (unsigned long)pot_temperature * (unsigned long)pot_brightness;            
            white_DC = white_DC >> 10;

            //Find yellow DC value
            yellow_DC = pot_brightness - (unsigned int)white_DC;

            //Update the DC values of both lights
            PWM_dc_set_white((unsigned int)white_DC);
            PWM_dc_set_yellow(yellow_DC);


            //Delay to slow everything down
            __delay_us(500);
        }       
} 
return;}


//Interrupt routine
void __interrupt() ISR(void){

    //Toggle the flag
    lights_hold_flag = !(lights_hold_flag);
    
    //Delay to pseudo-debounce the button
    __delay_ms(200);
    INTCONbits.INTF = 0;
}
