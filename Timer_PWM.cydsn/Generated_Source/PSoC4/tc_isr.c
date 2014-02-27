/*******************************************************************************
* File Name: tc_isr.c  
* Version 1.70
*
*  Description:
*   API for controlling the state of an interrupt.
*
*
*  Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/


#include <cydevice_trm.h>
#include <CyLib.h>
#include <tc_isr.h>

#if !defined(tc_isr__REMOVED) /* Check for removal by optimization */

/*******************************************************************************
*  Place your includes, defines and code here 
********************************************************************************/
/* `#START tc_isr_intc` */

/* `#END` */

extern cyisraddress CyRamVectors[CYINT_IRQ_BASE + CY_NUM_INTERRUPTS];

/* Declared in startup, used to set unused interrupts to. */
CY_ISR_PROTO(IntDefaultHandler);


/*******************************************************************************
* Function Name: tc_isr_Start
********************************************************************************
*
* Summary:
*  Set up the interrupt and enable it.
*
* Parameters:  
*   None
*
* Return:
*   None
*
*******************************************************************************/
void tc_isr_Start(void)
{
    /* For all we know the interrupt is active. */
    tc_isr_Disable();

    /* Set the ISR to point to the tc_isr Interrupt. */
    tc_isr_SetVector(&tc_isr_Interrupt);

    /* Set the priority. */
    tc_isr_SetPriority((uint8)tc_isr_INTC_PRIOR_NUMBER);

    /* Enable it. */
    tc_isr_Enable();
}


/*******************************************************************************
* Function Name: tc_isr_StartEx
********************************************************************************
*
* Summary:
*  Set up the interrupt and enable it.
*
* Parameters:  
*   address: Address of the ISR to set in the interrupt vector table.
*
* Return:
*   None
*
*******************************************************************************/
void tc_isr_StartEx(cyisraddress address)
{
    /* For all we know the interrupt is active. */
    tc_isr_Disable();

    /* Set the ISR to point to the tc_isr Interrupt. */
    tc_isr_SetVector(address);

    /* Set the priority. */
    tc_isr_SetPriority((uint8)tc_isr_INTC_PRIOR_NUMBER);

    /* Enable it. */
    tc_isr_Enable();
}


/*******************************************************************************
* Function Name: tc_isr_Stop
********************************************************************************
*
* Summary:
*   Disables and removes the interrupt.
*
* Parameters:  
*
* Return:
*   None
*
*******************************************************************************/
void tc_isr_Stop(void)
{
    /* Disable this interrupt. */
    tc_isr_Disable();

    /* Set the ISR to point to the passive one. */
    tc_isr_SetVector(&IntDefaultHandler);
}


/*******************************************************************************
* Function Name: tc_isr_Interrupt
********************************************************************************
*
* Summary:
*   The default Interrupt Service Routine for tc_isr.
*
*   Add custom code between the coments to keep the next version of this file
*   from over writting your code.
*
* Parameters:  
*   None
*
* Return:
*   None
*
*******************************************************************************/
CY_ISR(tc_isr_Interrupt)
{
    /*  Place your Interrupt code here. */
    /* `#START tc_isr_Interrupt` */

    /* `#END` */
}


/*******************************************************************************
* Function Name: tc_isr_SetVector
********************************************************************************
*
* Summary:
*   Change the ISR vector for the Interrupt. Note calling tc_isr_Start
*   will override any effect this method would have had. To set the vector 
*   before the component has been started use tc_isr_StartEx instead.
*
* Parameters:
*   address: Address of the ISR to set in the interrupt vector table.
*
* Return:
*   None
*
*******************************************************************************/
void tc_isr_SetVector(cyisraddress address)
{
    CyRamVectors[CYINT_IRQ_BASE + tc_isr__INTC_NUMBER] = address;
}


/*******************************************************************************
* Function Name: tc_isr_GetVector
********************************************************************************
*
* Summary:
*   Gets the "address" of the current ISR vector for the Interrupt.
*
* Parameters:
*   None
*
* Return:
*   Address of the ISR in the interrupt vector table.
*
*******************************************************************************/
cyisraddress tc_isr_GetVector(void)
{
    return CyRamVectors[CYINT_IRQ_BASE + tc_isr__INTC_NUMBER];
}


/*******************************************************************************
* Function Name: tc_isr_SetPriority
********************************************************************************
*
* Summary:
*   Sets the Priority of the Interrupt. Note calling tc_isr_Start
*   or tc_isr_StartEx will override any effect this method would 
*   have had. This method should only be called after tc_isr_Start or 
*   tc_isr_StartEx has been called. To set the initial
*   priority for the component use the cydwr file in the tool.
*
* Parameters:
*   priority: Priority of the interrupt. 0 - 3, 0 being the highest.
*
* Return:
*   None
*
*******************************************************************************/
void tc_isr_SetPriority(uint8 priority)
{
	uint8 interruptState;
    uint32 priorityOffset = ((tc_isr__INTC_NUMBER % 4u) * 8u) + 6u;
    
	interruptState = CyEnterCriticalSection();
    *tc_isr_INTC_PRIOR = (*tc_isr_INTC_PRIOR & (uint32)(~tc_isr__INTC_PRIOR_MASK)) |
                                    ((uint32)priority << priorityOffset);
	CyExitCriticalSection(interruptState);
}


/*******************************************************************************
* Function Name: tc_isr_GetPriority
********************************************************************************
*
* Summary:
*   Gets the Priority of the Interrupt.
*
* Parameters:
*   None
*
* Return:
*   Priority of the interrupt. 0 - 3, 0 being the highest.
*
*******************************************************************************/
uint8 tc_isr_GetPriority(void)
{
    uint32 priority;
	uint32 priorityOffset = ((tc_isr__INTC_NUMBER % 4u) * 8u) + 6u;

    priority = (*tc_isr_INTC_PRIOR & tc_isr__INTC_PRIOR_MASK) >> priorityOffset;

    return (uint8)priority;
}


/*******************************************************************************
* Function Name: tc_isr_Enable
********************************************************************************
*
* Summary:
*   Enables the interrupt.
*
* Parameters:
*   None
*
* Return:
*   None
*
*******************************************************************************/
void tc_isr_Enable(void)
{
    /* Enable the general interrupt. */
    *tc_isr_INTC_SET_EN = tc_isr__INTC_MASK;
}


/*******************************************************************************
* Function Name: tc_isr_GetState
********************************************************************************
*
* Summary:
*   Gets the state (enabled, disabled) of the Interrupt.
*
* Parameters:
*   None
*
* Return:
*   1 if enabled, 0 if disabled.
*
*******************************************************************************/
uint8 tc_isr_GetState(void)
{
    /* Get the state of the general interrupt. */
    return ((*tc_isr_INTC_SET_EN & (uint32)tc_isr__INTC_MASK) != 0u) ? 1u:0u;
}


/*******************************************************************************
* Function Name: tc_isr_Disable
********************************************************************************
*
* Summary:
*   Disables the Interrupt.
*
* Parameters:
*   None
*
* Return:
*   None
*
*******************************************************************************/
void tc_isr_Disable(void)
{
    /* Disable the general interrupt. */
    *tc_isr_INTC_CLR_EN = tc_isr__INTC_MASK;
}


/*******************************************************************************
* Function Name: tc_isr_SetPending
********************************************************************************
*
* Summary:
*   Causes the Interrupt to enter the pending state, a software method of
*   generating the interrupt.
*
* Parameters:
*   None
*
* Return:
*   None
*
*******************************************************************************/
void tc_isr_SetPending(void)
{
    *tc_isr_INTC_SET_PD = tc_isr__INTC_MASK;
}


/*******************************************************************************
* Function Name: tc_isr_ClearPending
********************************************************************************
*
* Summary:
*   Clears a pending interrupt.
*
* Parameters:
*   None
*
* Return:
*   None
*
*******************************************************************************/
void tc_isr_ClearPending(void)
{
    *tc_isr_INTC_CLR_PD = tc_isr__INTC_MASK;
}

#endif /* End check for removal by optimization */


/* [] END OF FILE */
