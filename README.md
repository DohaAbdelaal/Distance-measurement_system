# Distance-measurement_system

It is a system to measure the distance using ultrasonic sensor 
HC-SR04 with the specifications listed below:

1. Using ATmega32 Microcontroller with frequency 8Mhz

2.The LCD should display the distance value by cm.

3.The project is designed and implemented based on the layered architecture 
model as follow:

-DIO, ICU drivers in the MCAL layer.

-LCD , Ultrasonic sensor drivers in the HAL layer.

4. The ICU is used to measure the time the wave is on. Throughout the time and knowing the velocity of ultrasonic wave we can measure the distance.

More details of the calculation is provided in the ultasonic folder.
