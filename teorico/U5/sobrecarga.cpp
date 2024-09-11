#include <string>
#include <iostream>

using namespace std; // hace disponible el uso de todos los nombres de std

int cuadrado(int a){
  a *= a;
  return a;
}

double cuadrado(double a){
  a *= a;
  return a;
}

int main() {
  int entero;
  cin >> entero;
  cout << cuadrado(entero) << endl;
  double flotante;
  cin >> flotante;
  cout << cuadrado(flotante) << endl;
  /*el codigo puede elegir que funcion llamar en funcion del tipo de dato*/
  return 0;
}

