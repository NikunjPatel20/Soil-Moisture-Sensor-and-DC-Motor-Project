"""
This code reads the moisture level from a sensor and starts a motor if the moisture level is low.

The sensor pin is connected to A0.
The motor pin is connected to 8.
"""

int sensorPin = A0  # The pin connected to the sensor.
int motorPin = 8  # The pin connected to the motor.
int moistureLevel  # The moisture level.

def setup():
  """
  Initialize the serial port and the motor pin.
  """
  Serial.begin(9600)  # Initialize the serial port at 9600 baud rate.
  pinMode(motorPin, OUTPUT)  # Set the motor pin as an output.

def loop():
  """
  Read the moisture level from the sensor and start the motor if the moisture level is low.
  """
  moistureLevel = analogRead(sensorPin)  # Read the moisture level from the sensor.
  Serial.println(moistureLevel)  # Print the moisture level to the serial monitor.

  if moistureLevel < 100:  # If the moisture level is low, start the motor.
    digitalWrite(motorPin, HIGH)
  else:
    digitalWrite(motorPin, LOW)

if __name__ == "__main__":
  setup()
  while True:
    loop()
