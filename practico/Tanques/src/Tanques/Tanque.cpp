#include "Tanque.h"

Tanque::Tanque(int _pinBoya,int _pinEV){
  pinBoya = _pinBoya;
  pinEV = _pinEV;
}

void Tanque::setUp(){
  pinMode(pinBoya,INPUT);
  pinMode(pinEV,OUTPUT);
}

int Tanque::getCuenta(){
  print = 0;
  return cuenta;
}

int Tanque::getPrint(){
  return print;
}

int Tanque::isEmpty() {
    static int readed = 0;  // Variable estática para evitar múltiples lecturas consecutivas
    if (digitalRead(pinBoya)) {  // Verifica si el sensor detecta que el tanque está vacío
        if (!readed) {  // Solo realiza la lectura si no ha sido registrada antes
            delay(20);  // Espera para evitar rebotes en la señal del sensor
            if (digitalRead(pinBoya)) {  // Vuelve a verificar después del delay
                cuenta++;  // Incrementa la cuenta solo una vez
                readed = 1;  // Marca que ya se ha leído el estado vacío para evitar múltiples incrementos
                return 1;  // Retorna 1 indicando que el tanque está vacío
            }
        }
    } else {
        readed = 0;  // Reinicia la lectura si el tanque ya no está vacío
    }
    return 0;  // Retorna 0 si el tanque no está vacío
}

void Tanque::EVOpen(){
  digitalWrite(pinEV,1);
}
void Tanque::EVClose(){
  digitalWrite(pinEV,0);
}
