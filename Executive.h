#ifndef EXECUTIVE_H
#define EXECUTIVE_H
#include "LinkedList.h"
#include <iostream>
#include <string>

class Executive
{
        public:
          ~Executive();
            Executive(char*);
            void run();
            std::string m_command = "";
          private:
            LinkedList<int>* IntList;

};


#endif // EXECUTIVE_H
