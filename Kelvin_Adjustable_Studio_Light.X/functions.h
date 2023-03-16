#ifndef FUNCTIONS_H
    #define	FUNCTIONS_H

    //Initialization functions
    void init(void);
    void init_interrtupt(void);    
    void init_adc(void);
    void init_pwm(void);

    //ADC functions
    unsigned int ADC_read(unsigned char);
    
    //PWM functions
    void PWM_dc_set_white(unsigned int);
    void PWM_dc_set_yellow(unsigned int);
    
#endif

