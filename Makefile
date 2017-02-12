Lab2: main.o Executive.o LinkedListTester.o
	g++ -g -std=c++11 main.o Executive.o LinkedListTester.o -o Lab2

main.o: main.cpp Executive.h LinkedList.h LinkedList.hpp Node.h Node.hpp LinkedListTester.h
	g++ -std=c++11 -g -c main.cpp

Executive.o: Executive.h Executive.cpp
	g++ -std=c++11 -g -c Executive.cpp

LinkedListTester.o: LinkedListTester.h LinkedListTester.cpp
	g++ -std=c++11 -g -c LinkedListTester.cpp

clean:
	rm *.o Lab2
