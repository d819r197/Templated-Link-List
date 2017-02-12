#ifndef LINKED_LIST_Tester_H
#define LINKED_LIST_Tester_H

class LinkedListTester
{
    public:
      LinkedListTester();

      //This will call all your test methods
      void runTests();

    private:
      /**
      * @brief Creates an empty list and verifies isEmpty() returns true
      **/
      bool test01();

      /**
      * @brief Creates an empty list adds 1 value, verifies isEmpty() returns false
      **/
      bool test02();

      /**
      * @brief Creates an empty list and verifies getLength() returns 0
      **/
      bool test03();

      /**
      * @Size returns correct value after multiple addFront
      **/
      bool test04();

      /**
      * @Size returns correct value after multiple addBack
      **/
       bool test05();

      /**
      * @Size returns correct value after adds and removeFront
      **/
       bool test06();

      /**
      * @Size returns correct value after adds and removeBack
      **/
       bool test07();

      /**
      * @Size reduced by 1 removeFront on populated list
      **/
       bool test08();

      /**
      * @Size reduced by 1 removeBack on populated list
      **/
       bool test09();

      /**
      * @PositionOf returns 0 on empty list
      **/
      bool test10();

      /**
      * @PositionOf returns 0 when value not in list
      **/
      bool test11();

      /**
      * @PositionOf returns true if value is in populated list
      **/
      bool test12();

      /**
      * @RemoveFront on empty list returns false
      **/
      bool test13();

      /**
      * @RemoveBack on empty list returns false
      **/
      bool test14();

      /**
      * @Insert returns false given an invalid position
      **/
      bool test15();

      /**
      * @Order preserved by insert on populated list
      **/
      bool test16();
};

#endif
