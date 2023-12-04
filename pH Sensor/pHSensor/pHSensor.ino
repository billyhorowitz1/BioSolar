// Configuration Variables

int sensorPin = A0; // Establish A0 as the pin that the pH sensor hooks up to

// Setup Function
void setup() {
 
    Serial.begin(9600); // Start serial communication at baud rate of 9600

}

// Loop Function
void loop() {
  
    int sensorValue = analogRead(A0); // Read analog value from pH sensor
    float voltageValue = sensorValue * (5.0/1023.0); // Converting analog values to voltage values for calibration
    
    Serial.println(voltageValue); // Print out the voltage value to serial monitor

    delay(1000); // Print every second

}
