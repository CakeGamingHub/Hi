#pragma once

#include <string>

class Charactertistics
{
public:
	Charactertistics();
	~Charactertistics();

	std::string FullName = "BLANK";
	int DoBUB = -1; // Unix epoch
	int DoBLB = -1;
	std::string Psuedonym = "BLANK";
	std::string AddressAs = "BLANK";
	std::string HairColour = "BLANK";
	std::string HairLength = "BLANK";
	std::string HairStyle = "BLANK";

	int NeedInfoScore = 0;

	int GetScoreChange();

};

