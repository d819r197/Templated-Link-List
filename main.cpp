/* -----------------------------------------------------------------------------
 * File Name: main.cpp
 * Author: Blake Rieschick - d819r197@ku.edu
 * Assignment:   EECS-268 Lab 1
 * Description:  This program inports and exports pokemon to files.
 * Date: January 25, 2017
 ---------------------------------------------------------------------------- */

#include <iostream>
#include <string>
#include "Executive.h"

//Starts the program
int main(int argc, char* argv[])
{
	if(argc < 2)
	{
		std::cout <<"Sorry, that was the incorrect number of perameters!\n";
	}
	else
	{
		Executive exec(argv[1]);
		exec.run();
	}
return 0;
}
