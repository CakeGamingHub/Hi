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
	std::getline(std::cin, Target);
	TargetCharacteristics.AddressAs = Target;
	
	std::size_t ContainsSpace = Target.find(" ");
	std::size_t ContainsDot = Target.find(".");
	std::size_t ContainsUnderscore = Target.find("_");
	std::size_t ContainsExclaim = Target.find("!");
	std::size_t ContainsZero = Target.find("0");
	std::size_t ContainsOne = Target.find("1");
	std::size_t ContainsTwo = Target.find("2");
	std::size_t ContainsThree = Target.find("3");
	std::size_t ContainsFour = Target.find("4");
	std::size_t ContainsFive = Target.find("5");
	std::size_t ContainsSix = Target.find("6");
	std::size_t ContainsSeven = Target.find("7");
	std::size_t ContainsEight = Target.find("8");
	std::size_t ContainsNine = Target.find("9");

	bool ContainsPseudonymalUpper = false;

	int i = 1; // Start at 2nd item
	char TestChar;

	while (Target[i])
	{
		TestChar = Target[i];
		if (isupper(TestChar)) {
			if (!isspace(Target[i - 1])) { ContainsPseudonymalUpper = true; }
		}
		i++;
	}

	if (ContainsDot != std::string::npos
		|| ContainsUnderscore != std::string::npos
		|| ContainsExclaim != std::string::npos
		|| ContainsZero != std::string::npos
		|| ContainsOne != std::string::npos
		|| ContainsTwo != std::string::npos
		|| ContainsThree != std::string::npos
		|| ContainsFour != std::string::npos
		|| ContainsFive != std::string::npos
		|| ContainsSix != std::string::npos
		|| ContainsSeven != std::string::npos
		|| ContainsEight != std::string::npos
		|| ContainsNine != std::string::npos 
		|| ContainsPseudonymalUpper)
	{
		TargetCharacteristics.Psuedonym = Target;
	}
	if (ContainsSpace != std::string::npos)
	{
		if (TargetCharacteristics.Psuedonym == "BLANK")
		{
			TargetCharacteristics.FullName = Target;
		}
	}
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
