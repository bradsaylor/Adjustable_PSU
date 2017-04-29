/*
 * File:   Int_PWM_pic.c
 * Author: rbs
 *
 * Created on April 26, 2017, 9:29 PM
 */


#include <xc.h>
#include "170402_PSU.h"
#include "Int_PWM_pic.h"

//internal variable declarations
typedef struct{
  float PWM_DC_out_range;
  float Input_value_range;
}PWM_config;
static PWM_config Current_PWM_configuration;
static PWM_config Voltage_PWM_configuration;

static float Voltage_to_PWM_ratio;
static float Current_to_PWM_ratio;

//internal function declarations:
void Set_DC(float value, V_or_I_PWM V_or_I_PWM);

//internal functions
void Set_DC(float value, V_or_I_PWM V_or_I_PWM){
  
}

void PWM_init(void){
  __SET_TIMER_PWM3;
  __SET_TIMER_PWM4;
  __SET_PWM3_PPS;
  __SET_PWM4_PPS;
  
Current_PWM_configuration.Input_value_range = 1;
Current_PWM_configuration.PWM_DC_out_range = 0x200;    //9 bits
Voltage_PWM_configuration.Input_value_range = 5;
Voltage_PWM_configuration.PWM_DC_out_range = 0x200;    //9 bits

Voltage_to_PWM_ratio = 
        Voltage_PWM_configuration.Input_value_range /    //=in_range/out_range
        Voltage_PWM_configuration.PWM_DC_out_range;  
Current_to_PWM_ratio = 
        Current_PWM_configuration.Input_value_range /
        Current_PWM_configuration.PWM_DC_out_range;  
}

void PWM_enable(V_or_I_PWM V_or_I_PWM){
  
}

void PWM_disable(V_or_I_PWM V_or_I_PWM){
  
}