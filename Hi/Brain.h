#pragma once

#include "Charactertistics.h"
#include "Tendencies.h"
#include "EMon.h"

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

	int Score;

	int CalcScore();
};

