const int tempPin = A1;  // Pin for temperature sensor
const int lightPin = A0; // Pin for photoresistor

int temp = 0;
int light = 0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  temp = analogRead(tempPin);
  light = analogRead(lightPin);

  Serial.print((temp/1024.0)*500.0);
  Serial.print(";");
  Serial.println(light);
  
  delay(200);
}
