// This project uses PWM to control the intensity of the 
// Red and Blue LEDs on the PSoC4 Pioneer Board. The PWM 
// has a 1kHz frequency and the duty cycle of each output 
// is adjusted using a 16-bit timer. The compare value for 
// each output is either incremented or decremented at a 
// frequency defined by UPDATE_PERIOD.


#include <project.h>

#define ON 0
#define OFF 1
#define UPDATE_PERIOD 4 //ms
#define COMPARE_VAL_MIN 51
#define COMPARE_VAL_MAX 11949

uint16 ms_count = 0;
uint16 comp_val1 = 0;
uint16 comp_val2 = 2000;
uint8 increment = 1;

/* functions to create
- go forward
- stop
- turn (angle, direction)
- slow down
 */


CY_ISR(BLUE_ISR) {
	Blue_LED_Write(ON);
}



CY_ISR(RED_ISR) {
	Red_LED_Write(ON);
}

CY_ISR(TC_ISR) {
	Blue_LED_Write(OFF);
	Red_LED_Write(OFF);
}

// This ISR updates the compare values at a frequency
// defined by UPDATE_PERIOD
CY_ISR(MS_ISR) {
	comp_val1 = 5000;
    comp_val2 = 2000;
    /*
    ms_count++;
	if(ms_count == UPDATE_PERIOD) {
	
		if(increment) {
			comp_val1 += 50; // increment compare value 1
			comp_val2 -= 50; // decrement compare value 2
		}else{
			comp_val1 -= 50; // decrement compare value 1
			comp_val2 += 50; // increment compare value 2
		}
		
		if(comp_val1 < COMPARE_VAL_MIN) { // make increment "true"
			increment = 1;
		}
		if(comp_val1 > COMPARE_VAL_MAX) { // make decrement "true"
			increment = 0;
		}
		ms_count = 0; // reset ms counter
	}
    */
    
}

int main()
{
	Timer_1_Start(); // Configure and enable ms timer
    PWM_1_Start(); // Configure and enable PWM module
	
	
	blue_isr_StartEx(BLUE_ISR); // Point to BLUE_ISR to turn on the blue LED
	red_isr_StartEx(RED_ISR); // Point to RED_ISR to turn on the red LED
	tc_isr_StartEx(TC_ISR); // Point to TC_ISR to turn off both LEDs
	ms_isr_StartEx(MS_ISR); // Point to MS_ISR to update the compare values

    CyGlobalIntEnable; // Enable global interrupts
	
    for(;;)
    {
        PWM_1_WriteCompare1(comp_val1); // Write new compare value to PWM output 1
		PWM_1_WriteCompare2(comp_val2); // Write new compare value to PWM output 2
    }
}

/* [] END OF FILE */
