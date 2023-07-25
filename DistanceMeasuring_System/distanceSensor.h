/*
 * distanceSensor.h
 *
 *  Created on: May 24, 2023
 *      Author: Doha
 */

#ifndef DISTANCESENSOR_H_
#define DISTANCESENSOR_H_

#include "std_types.h"
#include "icu.h"

#define TRIGGERPIN 5
/*initialize ICU
 * set call back function
 * configure trigger pin as an output pin*/
void Ultrasonic_init(void);

/*send trigger signal to make the ultrasonic send its echo signal and measure the distance*/
void Ultrasonic_Trigger(void);

/*calls Ultrasonic_Trigger function
 * then the calculate the distance based on  the relation between the sound velocity and the time */
uint16 Ultrasonic_readDistance(void);

/*calculate the time take finish the pulse of the echo signal that feeds the ICU */
void Ultrasonic_edgeProcessing(void);


#endif /* DISTANCESENSOR_H_ */
