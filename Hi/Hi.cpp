// Hi.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Brain.h"

#include <iostream>
#include <string>

int main()
{
	Brain HiBrain = Brain();

	std::cout << HiBrain.CalcScore() << std::endl;

    return 0;
}

