# Soil Moisture Sensor and DC Motor Project

This project uses an Arduino Uno, a soil moisture sensor, and a DC motor to measure the moisture level in soil and start the motor if the moisture level is low.

## Requirements
* Arduino Uno
* Soil moisture sensor
* DC motor
* Resistor (100 ohm)

## Instructions
1. Connect the soil moisture sensor to the Arduino as follows:
    * Connect the VCC pin of the sensor to the 5V pin of the Arduino.
    * Connect the GND pin of the sensor to the GND pin of the Arduino.
    * Connect the SIG (signal) pin of the sensor to the A0 (Analog) pin of Arduino.

2. Connect the DC motor to the Arduino as follows:
    * Connect the positive terminal of the motor to the digital pin 8 of the Arduino.
    * Connect the negative terminal of the motor to the GND pin of the Arduino.
    * Connect a 100 ohm resistor in series with the positive terminal of the motor.

3. Upload the code to the Arduino.

4. Test the project by placing the soil moisture sensor in dry soil. The motor should start if the moisture level is low.
