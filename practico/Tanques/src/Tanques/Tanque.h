#include <Arduino.h>

class Tanque{
  public:
    Tanque(int _pinBoya,int _pinEV);
    void setUp();
    int isEmpty();
    void EVOpen();
    void EVClose();
    int readCuenta();
  private:
    int cuenta;
    int pinBoya;
    int pinEV;
};
