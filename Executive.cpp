#include <fstream>
#include <iostream>
#include <string>

#include "LinkedList.h"
#include "Executive.h"
#include "LinkedListTester.h"


//Constructor
Executive::Executive(char* command)
{
  m_command = command;
}

Executive::~Executive()
{
  delete IntList;
}

void Executive::run()
 {

   if(m_command == "i" || m_command == "I")
   {
     int runProgram = 1;
    //  LinkedList<int> IntList;
    IntList = new LinkedList<int>();

     do{
          int menuChoice = 0;
          int userValue = 0;

          std::cout << "Make a selection: \n";
          std::cout << "1) Add Front\n";
          std::cout << "2) Add Back\n";
          std::cout << "3) Remove Front\n";
          std::cout << "4) Remove Back\n";
          std::cout << "5) Insert Value at Position\n";
          std::cout << "6) Print Length\n";
          std::cout << "7) Print List\n";
          std::cout << "8) Exit\n";
            std::cout<<"Choice: ";
            std::cin >> menuChoice;

          //Add Front
          if(menuChoice==1)
          {
            std::cout << "Add an Int Node to the front of the LinkedList.\n";
            std::cout << "Value: ";
              std::cin >> userValue;
              std::cout << std::endl;
            std::cout <<"Adding Node to front of list...";
               IntList->addFront(userValue);
              std::cout <<"Done!\n";
          }

          //Add Back
          else if(menuChoice==2)
          {
            std::cout << "Add an Int Node to the back of the LinkedList.\n";
            std::cout << "Value: ";
              std::cin >> userValue;
              std::cout << std::endl;
            std::cout <<"Adding Node to back of list...";
               IntList->addBack(userValue);
              std::cout <<"Done!\n";
          }


          //Remove Front
          else if(menuChoice==3)
          {
            std::cout << "Remove the Node at the front of the LinkedList.\n";
            std::cout <<"Removing Node from the front of Linkedlist...";
              if( IntList->removeFront() == true)
              {
                std::cout <<"Done!\n";
              }
              else
              {
                std::cout <<"Failed!\n";
              }
          }

          //Remove Back
          else if(menuChoice==4)
          {
            std::cout << "Remove the Node at the back of the LinkedList.\n";
            std::cout <<"Removing Node from the back of Linkedlist...";
              if( IntList->removeBack())
              {
                std::cout <<"Done!\n";
              }
              else
              {
                std::cout <<"Failed!\n";
              }
          }

          //Insert Value at Position
          else if(menuChoice==5)
          {
            int pos = 0;
            int value = 0;

            std::cout << "Insert Node at position in the LinkedList.\n";
              std::cout << "Position: ";
                std::cin >> pos;
                std::cout << std::endl;
              std::cout << "Value: ";
                std::cin >> value;
                std::cout << std::endl;
            std::cout <<"Adding Node to Linkedlist...";
              if( IntList->insert(pos, value) == true)
              {
                std::cout <<"Done!\n";
              }
              else
              {
                std::cout <<"Failed!\n";
              }
          }

          //Print Length
          else if(menuChoice==6)
          {
            std::cout << "There is " << IntList->getLength() <<" Nodes in LinkedList\n";
          }

          //Print List
          else if(menuChoice==7)
          {
             IntList->printList();
          }

          //Quit
          if(menuChoice==8)
          {
            break;
          }
      }while(true);
    }

    else if(m_command == "t" || m_command == "T")
    {
      // LinkedListTester<int> Test;
      LinkedListTester Test;
      Test.runTests();
    }

    else
    {
      std::cout << "Wrong command, please type 't' or 'i'.\n";
    }
}
