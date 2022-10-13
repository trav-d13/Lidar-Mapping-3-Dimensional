const int LDR_pin = A0;
int LDR_value = 0;


void setup() {
  Serial.begin(9600);
}

void loop() {
  // Detect LDR values
  LDR_value = analogRead(LDR_pin);

  // Send values to Serial port using 
  Serial.println(LDR_value);

  // Delay to allow for plotting
  delay(1);
}
