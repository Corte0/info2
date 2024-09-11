#include "Tanque.h"

Tanque::Tanque(int _pinBoya,int _pinEV){
  pinBoya = _pinBoya;
  pinEV = _pinEV;
}

void Tanque::setUp(){
  pinMode(pinBoya,INPUT);
  pinMode(pinEV,OUTPUT);
}

int Tanque::readCuenta(){
  return cuenta;
}

int Tanque::isEmpty(){
  if (digitalRead(pinBoya)){
    cuenta ++;
    return 1;
    }
  return 0;
}

void Tanque::EVOpen(){
  digitalWrite(pinEV,1);
}
void Tanque::EVClose(){
  digitalWrite(pinEV,0);
}
