// #include "Node.h"

template <typename T>
Node<T>::Node(T Value)
{
  m_value = Value;
}

template <typename T>
T& Node<T>::getValue() 
{
  return(m_value);
}

template <typename T>
void Node<T>::setValue(T Value)
{
  m_value = Value;
}

template <typename T>
Node<T>* Node<T>::getNext()
{
  return(m_next);
}

template <typename T>
void Node<T>::setNext(Node<T>* ptr)
{
  m_next = ptr;
}
