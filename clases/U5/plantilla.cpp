#include <string>
#include <iostream>

using namespace std; // hace disponible el uso de todos los nombres de std

// para hacer lo mismo que antes pero sin sobrecargar la funcion, se usa una plantilla
template <typename T>
T cuadrado(T a){
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
