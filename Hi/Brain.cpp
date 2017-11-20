#include "stdafx.h"
#include "Brain.h"


Brain::Brain()
{
}


Brain::~Brain()
{
}

void Brain::StartConversation()
{
	std::cout << "Hi, I'm Hi. Who are you?" << std::endl;
	std::string Target;
	std::cin >> Target;
	TargetCharacteristics.AddressAs = Target;

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
