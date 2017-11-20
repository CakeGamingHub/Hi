#pragma once

#include "Charactertistics.h"
#include "Tendencies.h"
#include "EMon.h"
#include <iostream>


class Brain
{
public:
	Brain();
	~Brain();

	Charactertistics OwnCharacteristics;
	Tendencies OwnTendencies;
	EMon OwnEMon;

	Charactertistics TargetCharacteristics;
	Tendencies TargetTendencies;
	EMon TargetEMon;

	void StartConversation();

	int Score;

	int CalcScore();
};

