/* DESPACHADOR DE GEL ANTIBACTERIAL PARA MANOS V0.3
 * 
 * Un servomotor mueve una palanca que presiona una bomba de
 * gel antibacterial. El servo es controlado por un Arduino Nano 
 * y un sensor. Se pueden conectar varios tipos de sensores:
 *   + PIR
 *   + Ultrasónico
 *   + Infrarrojo
 * En esta versión se usa un sensor infrarrojo TCRT5000.
 */
 
#define PIN_SENSOR A4
#define PIN_SERVO A5
#define PIN_LED 13

#include <Servo.h>
Servo servo;

int sen = 0; //estado actual del sensor

// Umbral de detección (valores de 0 a 1024)
// Si el valor es grande incrementa la sensibilidad
// Si el valor es pequeño disminuye la sensibilidad
#define UMBRAL 600

void setup() {
  pinMode(PIN_SENSOR, INPUT);
  sen = analogRead(PIN_SENSOR); //primera lectura
  
  pinMode(PIN_LED, OUTPUT);
  digitalWrite(PIN_LED, 0); //LED apagado
  
  servo.attach(PIN_SERVO);
  servo.write(180); //levantar palanca
}

void loop() {
  sen = analogRead(PIN_SENSOR);
  
  if (sen < UMBRAL) {
    servo.write(0); //bajar palanca
    digitalWrite(PIN_LED, 1); //LED indica que el sensor detecta un objeto
  }
  else {
    servo.write(180); //levantar palanca
    digitalWrite(PIN_LED, 0); //LED indica que el sensor no detecta un objeto
  }
  
  delay(20); //tiempo de espera entre loops
}
