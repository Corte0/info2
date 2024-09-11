#include <string>
#include <iostream>

//std es un namespace, y cout es un name que vive dentro de std
using namespace std; // hace disponible el uso de todos los nombres de std
using std::cout;// permite el uso de cout sin la necesidad de especificar que pertenece a std

int main() {
  string ingreso;
  // << operador de insercion
  std::cout << "Hola mundo" << std::endl;
  cout << "Hola mundo" << endl;
  // >> operador de insercion
  cin >> ingreso;
  cout << ingreso << endl;
  return 0;
}

