template <typename T>
LinkedList<T>::LinkedList()
{
  m_length = 0;
  m_front = nullptr;
}

template <typename T>
LinkedList<T>::~LinkedList()
{
  while(m_length != 0)
  {
    Node<T>* temp = m_front;
    m_front = m_front -> getNext();
    delete temp;
    m_length--;
  }
}

template <typename T>
bool LinkedList<T>::isEmpty() const
{
    if(m_length == 0)
    {
      return(true);
    }
    else
    {
      return(false);
    }
}

template <typename T>
int LinkedList<T>::getLength() const
{
  return(m_length);
}

template <typename T>
int LinkedList<T>::positionOf(T value) const
{
if(isEmpty())
{
  return(0);
}
else{
  int pos = 1;
  bool exitLoop = false;
  Node<T>* temp = m_front;

  while(exitLoop == false)
  {
    if((temp -> getValue()) == value)
    {
      exitLoop == true;
      return(pos);
    }
    else if(pos > m_length || pos <= 0)
    {
      temp = temp -> getNext();
      pos++;
    }
    else
    {
      return(0);
    }
    }
  }
}

template <typename T>
void LinkedList<T>::addBack(T Value)
{
  Node<T>* temp = m_front;

  if(isEmpty())
  {
    addFront(Value);
  }
  else
  {
  Node<T>* temp2 = new Node<T>(Value);
    while(temp -> getNext() != nullptr)
    {
      temp = temp -> getNext();
    }

  temp -> setNext(temp2);
    m_length++;
  }
}

template <typename T>
void LinkedList<T>::addFront(T value)
{
  Node<T>* temp = new Node<T>(value);
  m_length++;

  if(isEmpty() == true)
  {
    m_front = temp;
    //m_front ->setNext(temp);
  }
  else
  {
      temp -> setNext(m_front);
      m_front = temp;
  }
}

template <typename T>
bool LinkedList<T>::insert(int position, T value)
{
    if(position < 0 || position > m_length)
    {
      return(false);
    }
    else if(position == 1)
    {
      addFront(value);
      return(true);
    }
    else
    {
      Node<T>* temp = new Node<T>(value);
      Node<T>* temp2 = m_front;

      for(int lcv = 2; lcv < position; lcv++)
      {
        temp2 = temp2 -> getNext();
      }

      temp -> setNext(temp2 -> getNext());
      temp2 -> setNext(temp);
        m_length++;
        return(true);
    }
}

template <typename T>
bool LinkedList<T>::removeBack()
{
  if(isEmpty())
  {
    return(false);
  }
  else
  {
    Node<T>* delNode = GetNodeAt(m_length);
      //std::cout << "delNode set to: " <<delNode -> getValue() <<'\n';
    Node<T>* nulNode = GetNodeAt(m_length-1);
      //std::cout << "nulNode set to: " <<nulNode -> getValue() <<'\n';

      //std::cout << "NulNode set to null...";
        nulNode -> setNext(nullptr);
      //std::cout << "Done!\n";

      //std::cout << "delNode deleting...";
    delete delNode;
      //std::cout << "Done!\n";
      m_length--;
      return(true);
  }
}

template <typename T>
bool LinkedList<T>::removeFront()
{
  if(isEmpty() == true)
  {
    return(false);
  }
  else
  {
    Node<T>* temp = m_front;
    temp = temp -> getNext();
    delete m_front;
    m_front = temp;
        m_length--;
        return(true);
  }
}

  template <typename T>
  Node<T>* LinkedList<T>::GetNodeAt(int position) const
  {
      if(isEmpty())
      {
        return(nullptr);
      }
      else
      {
          int counter = 1;
          Node<T>* temp = m_front;

          while(temp->getNext() != nullptr && counter != position)
          {
            temp = temp -> getNext();
            counter++;
          }
          if(counter == position)
          {
            return(temp);
          }
        return(nullptr);
      }
    return(nullptr);
  }

//Really should be a bool in case position > m_length || position < 1
  template <typename T>
	bool LinkedList<T>::setEntry(int position, T value)
  {
    Node<T>* temp = m_front;
    if(position > m_length || position < 0)
    {
      return(false);
    }
    for(int lcv = 1; lcv < position; lcv++)
    {
      temp = temp -> getNext();
    }
    temp -> setValue(value);
    return(true);
  }

  template <typename T>
  T& LinkedList<T>::getEntry( int position ) const
  {
    Node<T>* temp = m_front;

    for(int lcv = 1; lcv < position; lcv++)
    {
      temp = temp -> getNext();
    }

    return(temp->getValue());
  }

  template <typename T>
  void LinkedList<T>::printList()
  {
    Node<T>* temp = m_front;
    int tempPos = 0;

      std::cout << "[";
    while(tempPos < m_length)
    {
      if(tempPos < m_length -1)
      {
      tempPos++;
      std::cout << getEntry(tempPos) <<", ";
      temp = temp -> getNext();
      }
      else
      {
        tempPos++;
        std::cout << getEntry(tempPos);
        temp = temp -> getNext();
      }
    }
      std::cout <<"]\n";
  }
