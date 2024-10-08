#ifndef STACK_H
#define STACK_H

#include "node.h"

template <typename T>
class Stack{
  public:
    Stack(T);
    void add(T);
    T rmLast();
    T getLast() const;
    bool isEmpty() const;
    void empty();
  private:
    Node<T>* last;
};

template <typename T>
void Stack<T>::empty(){
  while (!isEmpty())
    rmLast();
}

template <typename T>
bool Stack<T>::isEmpty() const{
  return last == nullptr;
}

template <typename T>
T Stack<T>::rmLast(){
  Node<T> *aux = last;
  T data = last->getData();

  if(last->getPrev() != nullptr){
    last = last->getPrev();
  }else{
    last = nullptr;
  }

  delete aux;
  return data;
}

template <typename T>
void Stack<T>::add(T newValue){
  last = new Node(newValue, last->getAddr());
}

template <typename T>
Stack<T>::Stack(T first){
  last = new Node(first);
}

template <typename T>
T Stack<T>::getLast() const{
  return last->getData();
}

#endif
