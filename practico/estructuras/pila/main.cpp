#include <iostream>
#include <string>
#include "node.h"
#include "stack.h"

using namespace std;

int main(){
  cout << "Hello World" << endl;
  Node nodo3(23);
  Node nodo4(34,nodo3.getAddr());

  Stack s1 = Stack<float>(15);
  s1.add(11.2);
  s1.add(22);
  s1.add(16);
  s1.add(21);
  s1.add(65);

  cout << "Nodo 3: " << nodo3 << endl;
  cout << "Nodo 3 addr: " << nodo3.getAddr() << endl;
  cout << "Nodo 4 value: " << nodo4 << endl;


  while (!s1.isEmpty()){
    cout << "s1 last val: " << s1.rmLast() << endl;
  }

}
