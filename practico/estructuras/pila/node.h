#ifndef NODE_H
#define NODE_H

#include <iostream>
using namespace std;

template <typename T>
class Node{
  public:
    Node(T data);
    Node(T data, Node<T>* prev);
    Node(T data, Node<T>* prev, Node<T>* next);
    T getData() const;
    Node<T>* getNext() const;
    Node<T>* getPrev() const;
    Node<T>* getAddr() const;
    friend ostream& operator<<(ostream& os, const Node<T> node){
      return os << node.data;
    }
  private:
    T data;
    Node<T>* next;
    Node<T>* prev;
};

template <typename T>
Node<T>::Node(T data, Node<T>* prev, Node<T> *next){
  this->data = data;
  this->prev = prev;
  this->next = next;
}

template <typename T>
Node<T>::Node(T data, Node<T> *prev){
  this->data = data;
  this->prev = prev;
  this->next = nullptr;
}

template <typename T>
Node<T>::Node(T data){
  this->data = data;
  this->prev = nullptr;
  this->next = nullptr;
}

template <typename T>
T Node<T>::getData(){
  return data;
}

template <typename T>
Node<T>* Node<T>::getNext(){
  return next;
}

template <typename T>
Node<T>* Node<T>::getPrev(){
  return prev;
}

template <typename T>
Node<T>* Node<T>::getAddr(){
  return this;
}

#endif
