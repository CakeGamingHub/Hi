// Hi.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Brain.h"

#include <iostream>
#include <string>
#include "Hi.h"

int main()
{
	Brain HiBrain = Brain();

	std::cout << HiBrain.CalcScore() << std::endl;

	HiBrain.StartConversation();
	std::cout << HiBrain.TargetCharacteristics.FullName << std::endl;

	std::cout << HiBrain.CalcScore() << std::endl;

	/*for (;;)
	{
		std::cout << HiBrain.CalcScore() << std::endl;
	}*/

    return 0;
}

