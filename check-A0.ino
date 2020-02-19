int sensorPin = A0;    // select the input pin for the potentiometer
int sensorValue = 0; 
const int buzzer =  6;      // the number of the LED pin

void setup() {
  // put your setup code here, to run once:

    Serial.begin(9600);
    pinMode(buzzer, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(sensorPin);
  Serial.println(sensorValue);
  if(sensorValue < 400){
      tone(buzzer, 1000);
     Serial.println("light up!");
     delay(100);
  }else{
  noTone(buzzer);     // Stop sound...
     Serial.println("light out!");
      delay(100);
  }
  
}
