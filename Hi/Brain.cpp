#include "stdafx.h"
#include "Brain.h"


Brain::Brain()
{
}


Brain::~Brain()
{
}

int Brain::CalcScore()
{
	int NewScore = 0;
	
	NewScore += OwnCharacteristics.GetScoreChange();
	NewScore += OwnTendencies.GetScoreChange();
	NewScore += OwnEMon.GetScoreChange();

	NewScore += TargetCharacteristics.GetScoreChange();
	NewScore += TargetTendencies.GetScoreChange();
	NewScore += TargetEMon.GetScoreChange();

	return NewScore;
}
