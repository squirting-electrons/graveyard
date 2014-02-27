/*******************************************************************************
* File Name: red_isr.h
* Version 1.70
*
*  Description:
*   Provides the function definitions for the Interrupt Controller.
*
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/
#if !defined(CY_ISR_red_isr_H)
#define CY_ISR_red_isr_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void red_isr_Start(void);
void red_isr_StartEx(cyisraddress address);
void red_isr_Stop(void);

CY_ISR_PROTO(red_isr_Interrupt);

void red_isr_SetVector(cyisraddress address);
cyisraddress red_isr_GetVector(void);

void red_isr_SetPriority(uint8 priority);
uint8 red_isr_GetPriority(void);

void red_isr_Enable(void);
uint8 red_isr_GetState(void);
void red_isr_Disable(void);

void red_isr_SetPending(void);
void red_isr_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the red_isr ISR. */
#define red_isr_INTC_VECTOR            ((reg32 *) red_isr__INTC_VECT)

/* Address of the red_isr ISR priority. */
#define red_isr_INTC_PRIOR             ((reg32 *) red_isr__INTC_PRIOR_REG)

/* Priority of the red_isr interrupt. */
#define red_isr_INTC_PRIOR_NUMBER      red_isr__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable red_isr interrupt. */
#define red_isr_INTC_SET_EN            ((reg32 *) red_isr__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the red_isr interrupt. */
#define red_isr_INTC_CLR_EN            ((reg32 *) red_isr__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the red_isr interrupt state to pending. */
#define red_isr_INTC_SET_PD            ((reg32 *) red_isr__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the red_isr interrupt. */
#define red_isr_INTC_CLR_PD            ((reg32 *) red_isr__INTC_CLR_PD_REG)



#endif /* CY_ISR_red_isr_H */


/* [] END OF FILE */
