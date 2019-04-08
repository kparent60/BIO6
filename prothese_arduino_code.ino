#include <Servo.h>
 
Servo monservo1;  // crée l’objet pour contrôler le servomoteur
Servo monservo2;  // crée l’objet pour contrôler le servomoteur
Servo monservo3;  // crée l’objet pour contrôler le servomoteur
Servo monservo4;  // crée l’objet pour contrôler le servomoteur
Servo monservo5;  // crée l’objet pour contrôler le servomoteur
const int analog = A0;

// digital value of signal 
// 1023 = 5V (signal)
// 0 = no signal
int muscleSensorValue = 0;
 
void setup()
{
  monservo1.attach(9);  // utilise la broche 9 pour le contrôle du servomoteur
  monservo1.write(0); // positionne le servomoteur à 0°
  monservo2.attach(8);  // utilise la broche 8 pour le contrôle du servomoteur
  monservo2.write(0); // positionne le servomoteur à 0°
  monservo3.attach(7);  // utilise la broche 7 pour le contrôle du servomoteur
  monservo3.write(0); // positionne le servomoteur à 0°
  monservo4.attach(6);  // utilise la broche 6 pour le contrôle du servomoteur
  monservo4.write(0); // positionne le servomoteur à 0°
  monservo5.attach(5);  // utilise la broche 5 pour le contrôle du servomoteur
  monservo5.write(0); // positionne le servomoteur à 0°
  Serial.begin(9600);
}
 
 
void loop()
{
  // read the analog sensor value if promoted
  muscleSensorValue = analogRead(analog);

  Serial.print("sensor = ");
  Serial.print(muscleSensorValue);
  Serial.print(" ");
  Serial.print("\n");

  if(muscleSensorValue > 200){
    monservo1.write(70);
    monservo2.write(70);
    monservo3.write(70);
    monservo4.write(70);
    monservo5.write(70);
    delay(1000);
  }
}
