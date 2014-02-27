/*******************************************************************************
* File Name: tc_isr.h
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
#if !defined(CY_ISR_tc_isr_H)
#define CY_ISR_tc_isr_H


#include <cytypes.h>
#include <cyfitter.h>

/* Interrupt Controller API. */
void tc_isr_Start(void);
void tc_isr_StartEx(cyisraddress address);
void tc_isr_Stop(void);

CY_ISR_PROTO(tc_isr_Interrupt);

void tc_isr_SetVector(cyisraddress address);
cyisraddress tc_isr_GetVector(void);

void tc_isr_SetPriority(uint8 priority);
uint8 tc_isr_GetPriority(void);

void tc_isr_Enable(void);
uint8 tc_isr_GetState(void);
void tc_isr_Disable(void);

void tc_isr_SetPending(void);
void tc_isr_ClearPending(void);


/* Interrupt Controller Constants */

/* Address of the INTC.VECT[x] register that contains the Address of the tc_isr ISR. */
#define tc_isr_INTC_VECTOR            ((reg32 *) tc_isr__INTC_VECT)

/* Address of the tc_isr ISR priority. */
#define tc_isr_INTC_PRIOR             ((reg32 *) tc_isr__INTC_PRIOR_REG)

/* Priority of the tc_isr interrupt. */
#define tc_isr_INTC_PRIOR_NUMBER      tc_isr__INTC_PRIOR_NUM

/* Address of the INTC.SET_EN[x] byte to bit enable tc_isr interrupt. */
#define tc_isr_INTC_SET_EN            ((reg32 *) tc_isr__INTC_SET_EN_REG)

/* Address of the INTC.CLR_EN[x] register to bit clear the tc_isr interrupt. */
#define tc_isr_INTC_CLR_EN            ((reg32 *) tc_isr__INTC_CLR_EN_REG)

/* Address of the INTC.SET_PD[x] register to set the tc_isr interrupt state to pending. */
#define tc_isr_INTC_SET_PD            ((reg32 *) tc_isr__INTC_SET_PD_REG)

/* Address of the INTC.CLR_PD[x] register to clear the tc_isr interrupt. */
#define tc_isr_INTC_CLR_PD            ((reg32 *) tc_isr__INTC_CLR_PD_REG)



#endif /* CY_ISR_tc_isr_H */


/* [] END OF FILE */
