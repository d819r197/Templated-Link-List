#include <iostream>
#include <string>
#include "LinkedList.h"
#include "LinkedListTester.h"


// LinkedListTester<T>::LinkedListTester()
LinkedListTester::LinkedListTester()
{

}


// void LinkedListTester<T>::runTests()
void LinkedListTester::runTests()
{
    std::cout << "Test #1: Size of empty list is zero: ";
      if(test01())
      {
        std::cout << "PASSED\n";
      }
      else
      {
        std::cout << "FAILED\n";
      }

    std::cout << "Test #2: Size returns correct value after addFront: ";
      if(test02())
      {
        std::cout << "PASSED\n";
      }
      else
      {
        std::cout << "FAILED\n";
      }

    std::cout << "Test #3: Size returns correct value after addBack: ";
      if(test03())
      {
        std::cout << "PASSED\n";
      }
      else
      {
        std::cout << "FAILED\n";
      }

      std::cout << "Test #4: Size returns correct value after multiple addFront: ";
        if(test04())
        {
          std::cout << "PASSED\n";
        }
        else
        {
          std::cout << "FAILED\n";
        }

      std::cout << "Test #5: Size returns correct value after multiple addBack: ";
        if(test05())
        {
          std::cout << "PASSED\n";
        }
        else
        {
          std::cout << "FAILED\n";
        }

      std::cout << "Test #6: Size returns correct value after adds and removeFront: ";
        if(test06())
        {
          std::cout << "PASSED\n";
        }
        else
        {
          std::cout << "FAILED\n";
        }


        std::cout << "Test #7: Size returns correct value after adds and removeBack: ";
          if(test07())
          {
            std::cout << "PASSED\n";
          }
          else
          {
            std::cout << "FAILED\n";
          }

        std::cout << "Test #8: Size reduced by 1 removeFront on populated list: ";
          if(test08())
          {
            std::cout << "PASSED\n";
          }
          else
          {
            std::cout << "FAILED\n";
          }

        std::cout << "Test #9: Size reduced by 1 removeBack on populated list: ";
          if(test09())
          {
            std::cout << "PASSED\n";
          }
          else
          {
            std::cout << "FAILED\n";
          }

          std::cout << "Test #10: PositionOf returns 0 on empty list: ";
            if(test10())
            {
              std::cout << "PASSED\n";
            }
            else
            {
              std::cout << "FAILED\n";
            }

          std::cout << "Test #11: PositionOf returns 0 when value not in list: ";
            if(test11())
            {
              std::cout << "PASSED\n";
            }
            else
            {
              std::cout << "FAILED\n";
            }

          std::cout << "Test #12: PositionOf returns true if value is in populated list: ";
            if(test12())
            {
              std::cout << "PASSED\n";
            }
            else
            {
              std::cout << "FAILED\n";
            }


            std::cout << "Test #13: RemoveFront on empty list returns false: ";
              if(test13())
              {
                std::cout << "PASSED\n";
              }
              else
              {
                std::cout << "FAILED\n";
              }

              std::cout << "Test #14: RemoveBack on empty list returns false: ";
                if(test14())
                {
                  std::cout << "PASSED\n";
                }
                else
                {
                  std::cout << "FAILED\n";
                }

              std::cout << "Test #15: Insert returns false given an invalid position: ";
                if(test15())
                {
                  std::cout << "PASSED\n";
                }
                else
                {
                  std::cout << "FAILED\n";
                }

              std::cout << "Test #16: Order preserved by insert on populated list: ";
                if(test16())
                {
                  std::cout << "PASSED\n";
                }
                else
                {
                  std::cout << "FAILED\n";
                }
}


bool LinkedListTester::test01()
{
  LinkedList<int>* TestList01 = new LinkedList<int>();
  int size = -1;

  size = TestList01->getLength();
  if(size == 0)
  {
    return(true);
  }
    return(false);
    delete TestList01;
}

bool LinkedListTester::test02()
{

  LinkedList<int>* TestList02 = new LinkedList<int>();
  int size = -1;
  int value = 25;
  TestList02->addFront(value);
    size = TestList02->getLength();

  if(size == 1)
  {
    return(true);
  }
    return(false);
    delete TestList02;
}

bool LinkedListTester::test03()
{
  LinkedList<int>* TestList03 = new LinkedList<int>();
  int size = -1;

  TestList03->addBack(25);
    size = TestList03->getLength();

  if(size == 1)
  {
    return(true);
  }
    return(false);
    delete TestList03;
}

bool LinkedListTester::test04()
{
  LinkedList<int>* TestList04 = new LinkedList<int>();

  TestList04->addFront(50);
  TestList04->addFront(40);
  TestList04->addFront(30);
  TestList04->addFront(20);
  TestList04->addFront(10);

  int size = -1;
    size = TestList04->getLength();
  if(size == 5)
  {
    return(true);
  }
    return(false);
    delete TestList04;
}


bool LinkedListTester::test05()
{
  LinkedList<int>* TestList05 = new LinkedList<int>();

  TestList05->addBack(10);
  TestList05->addBack(20);
  TestList05->addBack(30);
  TestList05->addBack(40);
  TestList05->addBack(50);

  int size = -1;
    size = TestList05->getLength();

    if(size == 5)
    {
      return(true);
    }
      return(false);
      delete TestList05;
}


bool LinkedListTester::test06()
{
  LinkedList<int>* TestList06 = new LinkedList<int>();

  TestList06->addBack(10);
  TestList06->addBack(20);
  TestList06->addBack(30);
    TestList06->removeFront();

    int size = -1;
      size = TestList06->getLength();

      if(size == 2)
      {
        return(true);
      }
        return(false);
        delete TestList06;
}


bool LinkedListTester::test07()
{
  LinkedList<int>* TestList07 = new LinkedList<int>();

  TestList07->addBack(10);
  TestList07->addBack(20);
  TestList07->addBack(30);
    TestList07->removeBack();

    int size = -1;
      size = TestList07->getLength();

      if(size == 2)
      {
        return(true);
      }
        return(false);
        delete TestList07;
}

bool LinkedListTester::test08()
{
  LinkedList<int>* TestList08 = new LinkedList<int>();
  int firstNum = 0;

  TestList08->addBack(10);
  TestList08->addBack(20);
  TestList08->addBack(30);
    firstNum = TestList08->getLength();
    TestList08->removeFront();

    int size = -1;
      size = TestList08->getLength();

      if(size == firstNum - 1)
      {
        return(true);
      }
        return(false);
        delete TestList08;
}


bool LinkedListTester::test09()
{
  LinkedList<int>* TestList09 = new LinkedList<int>();
  int firstNum = 0;

  TestList09->addBack(10);
  TestList09->addBack(20);
  TestList09->addBack(30);
    firstNum = TestList09->getLength();
    TestList09->removeBack();

    int size = -1;
      size = TestList09->getLength();

      if(size == firstNum - 1)
      {
        return(true);
      }
        return(false);
        delete TestList09;
}


bool LinkedListTester::test10()
{
  LinkedList<int>* TestList10 = new LinkedList<int>();
  int position = -1;
    position = TestList10->positionOf(1);

  if(position == 0)
  {
    return(true);
  }
    return(false);
    delete TestList10;
}

bool LinkedListTester::test11()
{
  LinkedList<int>* TestList11 = new LinkedList<int>();
  int position = -1;
    TestList11->addFront(10);
    position = TestList11->positionOf(5);

  if(position == 0)
  {
    return(true);
  }
    return(false);
    delete TestList11;
}

bool LinkedListTester::test12()
{
  LinkedList<int>* TestList12 = new LinkedList<int>();
  int position = -1;
    TestList12->addFront(10);
    position = TestList12->positionOf(10);

  if(position == 1)
  {
    return(true);
  }
  return(false);
  delete TestList12;
}

bool LinkedListTester::test13()
{
  LinkedList<int>* TestList13 = new LinkedList<int>();
  if(TestList13->removeFront())
  {
    return(false);
  }
    return(true);
    delete TestList13;
}


bool LinkedListTester::test14()
{
  LinkedList<int>* TestList14 = new LinkedList<int>();
  if(TestList14->removeBack())
  {
    return(false);
  }
    return(true);
    delete TestList14;
}


bool LinkedListTester::test15()
{
  LinkedList<int>* TestList15 = new LinkedList<int>();
  if(TestList15->insert(2,20))
  {
    return(false);
  }
  return(true);
  delete TestList15;
}


bool LinkedListTester::test16()
{
  LinkedList<int>* TestList16 = new LinkedList<int>();

  TestList16->addFront(3);
  TestList16->addFront(2);
  TestList16->addFront(1);
    int firstVal = 1;
    TestList16->insert(1,0);
    int secVal = TestList16 -> getEntry(2);


  if(firstVal == secVal)
  {
    return(true);
  }
    return(false);
    delete TestList16;
}
