/*******************************************************************************
* File Name: Red_LED.h  
* Version 1.90
*
* Description:
*  This file containts Control Register function prototypes and register defines
*
* Note:
*
********************************************************************************
* Copyright 2008-2012, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions, 
* disclaimers, and limitations in the end user license agreement accompanying 
* the software package with which this file was provided.
*******************************************************************************/

#if !defined(CY_PINS_Red_LED_H) /* Pins Red_LED_H */
#define CY_PINS_Red_LED_H

#include "cytypes.h"
#include "cyfitter.h"
#include "Red_LED_aliases.h"


/***************************************
*        Function Prototypes             
***************************************/    

void    Red_LED_Write(uint8 value) ;
void    Red_LED_SetDriveMode(uint8 mode) ;
uint8   Red_LED_ReadDataReg(void) ;
uint8   Red_LED_Read(void) ;
uint8   Red_LED_ClearInterrupt(void) ;


/***************************************
*           API Constants        
***************************************/

/* Drive Modes */
#define Red_LED_DRIVE_MODE_BITS        (3)
#define Red_LED_DRIVE_MODE_IND_MASK    (0xFFFFFFFFu >> (32 - Red_LED_DRIVE_MODE_BITS))
#define Red_LED_DRIVE_MODE_SHIFT       (0x00u)
#define Red_LED_DRIVE_MODE_MASK        (0x07u << Red_LED_DRIVE_MODE_SHIFT)

#define Red_LED_DM_ALG_HIZ         (0x00u << Red_LED_DRIVE_MODE_SHIFT)
#define Red_LED_DM_DIG_HIZ         (0x01u << Red_LED_DRIVE_MODE_SHIFT)
#define Red_LED_DM_RES_UP          (0x02u << Red_LED_DRIVE_MODE_SHIFT)
#define Red_LED_DM_RES_DWN         (0x03u << Red_LED_DRIVE_MODE_SHIFT)
#define Red_LED_DM_OD_LO           (0x04u << Red_LED_DRIVE_MODE_SHIFT)
#define Red_LED_DM_OD_HI           (0x05u << Red_LED_DRIVE_MODE_SHIFT)
#define Red_LED_DM_STRONG          (0x06u << Red_LED_DRIVE_MODE_SHIFT)
#define Red_LED_DM_RES_UPDWN       (0x07u << Red_LED_DRIVE_MODE_SHIFT)

/* Digital Port Constants */
#define Red_LED_MASK               Red_LED__MASK
#define Red_LED_SHIFT              Red_LED__SHIFT
#define Red_LED_WIDTH              1u


/***************************************
*             Registers        
***************************************/

/* Main Port Registers */
/* Pin State */
#define Red_LED_PS                     (* (reg32 *) Red_LED__PS)
/* Port Configuration */
#define Red_LED_PC                     (* (reg32 *) Red_LED__PC)
/* Data Register */
#define Red_LED_DR                     (* (reg32 *) Red_LED__DR)
/* Input Buffer Disable Override */
#define Red_LED_INP_DIS                (* (reg32 *) Red_LED__PC2)


#if defined(Red_LED__INTSTAT)  /* Interrupt Registers */

    #define Red_LED_INTSTAT                (* (reg32 *) Red_LED__INTSTAT)

#endif /* Interrupt Registers */

#endif /* End Pins Red_LED_H */


/* [] END OF FILE */
