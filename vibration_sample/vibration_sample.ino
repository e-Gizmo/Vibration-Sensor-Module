/*
  e-Gizmo Vibration sensor module
  
  This example code reads an analog input on pin 0
  and on pin 2 digital input, then prints the
  result to the serial monitor.
  
  Codes by
  e-Gizmo Mechtronix Central
  http://www.e-gizmo.com
  August 10,2017

 */
// pins assignment
int OUTPUT_PIN = 2;
// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
    pinMode(OUTPUT_PIN, INPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0 and pin 2:
  int SENSOR_VALUE = analogRead(A0);
  int OUTPUT_STATE = digitalRead(OUTPUT_PIN);
  // print out the value you read:
  Serial.print(SENSOR_VALUE);
  Serial.print("  ");
  Serial.println(OUTPUT_STATE);
  delay(10);        // delay in between reads for stability
}

