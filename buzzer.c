/*
    Project name : Buzzer Active Passive module
    Modified Date: 10-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-nano-buzzer-active-passive-module
*/

const int buzzerPin = 2;  // Pin connected to the buzzer module

void setup() 
{
  pinMode(buzzerPin, OUTPUT);  // Set the buzzer pin as output
}

void loop() 
{
  // Turn on the buzzer
  digitalWrite(buzzerPin, HIGH);
  delay(1000);  // Buzzer on time
  
  // Turn off the buzzer
  digitalWrite(buzzerPin, LOW);
  delay(1000);  // Buzzer off time
}
