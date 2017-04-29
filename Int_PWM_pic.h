// This is a guard condition so that contents of this file are not included
// more than once.  
#ifndef INT_PWM_PIC_H
#define	INT_PWM_PIC_H

#include <xc.h> // include processor files - each processor file is guarded.  

//external enumerated type declarations
typedef enum{                             //required for enable,disable, and 
  Voltage,                                //Set_DC funcs
  Current
}V_or_I_PWM;

V_or_I_PWM Voltage_or_current_PWM;

//declare external functions
void PWM_init(void);
void PWM_enable(V_or_I_PWM V_or_I_PWM);
void PWM_disable(V_or_I_PWM V_or_I_PWM);

#endif	/* INT_PWM_PIC_H*/

