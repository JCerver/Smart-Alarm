#include <LowPower.h> //Importamos la libreria para poner nuestro Arduino en modo de animación suspendida, reduciendo al mínimo su consumo.

//Definición de variables correspondientes a los pines de salida  y entrada digital del arduino
#define reedswitch  2    //Uso de la interrupción 0 asociada al pin 2 en la placa arduino UNO
#define led  3
#define buzzer 4
int estado;             //Variable para determinar el estado del reedSwitch ya sea HIGH o LOW

void setup() {
  //Se especifican los puertos correspondientes de salida y entrada
  pinMode(led, OUTPUT);
  pinMode(reedswitch, INPUT);
  pinMode(buzzer, OUTPUT);
  estado = 0;           //se inicializa el estado en 0
  attachInterrupt(digitalPinToInterrupt(reedswitch), activarAlarma, FALLING); //Interupcion generada a partir de un flanco de bajada de HIGH a LOW
}

void loop() {
  LowPower.powerDown(SLEEP_FOREVER, ADC_OFF, BOD_OFF);//mantener apagados los convertidores analógico a digital, y el circuito BOD de manera infinita.
  detachInterrupt(digitalPinToInterrupt(0));          //Al detectar la interupcion hardware del reed switch en el pin 2 o interrupcion 0 se despierta el sistema
  estado = digitalRead(reedswitch);               //Al activarse el sistema se lee el estadodel reed switch.     
}

//Metodo para comparar el estado del reed switch y saber si fue cerrada la puerta o fue abierta
void activarAlarma() {
  if (estado == HIGH) {
    digitalWrite(led, HIGH);
    digitalWrite(buzzer, HIGH);
  } else {
    digitalWrite(led, LOW);
    digitalWrite(buzzer, LOW);
  }
}
