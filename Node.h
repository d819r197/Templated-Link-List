#ifndef NODE_H
#define NODE_H

template <typename T>
class Node
{
  public:
    Node(T Value);

    T& getValue();
    void setValue(T Value);
    Node<T>* getNext();
    void setNext(Node<T>* ptr);

  private:
    T m_value;
    Node<T>* m_next;

};

#include "Node.hpp"

#endif
