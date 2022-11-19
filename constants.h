/* 
 * File:   constants.h
 * Author: User
 *
 * Created on 15 November 2022, 18:16
 */

#ifndef CONSTANTS_H
#define	CONSTANTS_H

#define _XTAL_FREQ 16000000

/********PIN ALIASES**********/
#define SDO PORTCbits.RC7  // SDO pin 19
#define SCK PORTBbits.RB6  // SCK pin 11
#define CE1 PORTAbits.RA4  // CE1 chip enable 1 pin 3
#define CE2 LATAbits.LATA5  // CE2 chip enable 2 pin 2
#define RST LATBbits.LATB5  // RST reset pin 12
#define DCI LATCbits.LATC6  // DCI (Data = HI, Command = LO) pin 8


void constants (void);
typedef enum{
    LO,
    HI
}pin;

#include <stdint.h>
#include <stdio.h>
#include <stdbool.h>
#include <xc.h>
#endif	/* CONSTANTS_H */

