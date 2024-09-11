#include <string>
#include <iostream>

using namespace std; // hace disponible el uso de todos los nombres de std

int cuadradoPorValor(int a){
  a *= a;
  return a;
}

void cuadradoPorReferencia(int &a /*define a 'a' como un alias de la variable que se pasa*/){
  a *= a; //modifica la variable que se pasó por referencia
}

int main() {
  int ingreso;
  cin >> ingreso;
  cout << ingreso << endl;
  cuadradoPorValor(ingreso);
  cout << ingreso << endl;
  cuadradoPorReferencia(ingreso);
  cout << ingreso << endl;
  return 0;
}

