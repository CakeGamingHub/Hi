#include "stdafx.h"
#include "Charactertistics.h"


Charactertistics::Charactertistics()
{
}


Charactertistics::~Charactertistics()
{
}

int Charactertistics::GetScoreChange()
{
	int ToReturn = 0;
	if (FullName == "BLANK") { ToReturn -= 5; }
	if (DoBLB == -1) { ToReturn -= 3; }
	if (DoBUB == -1) { ToReturn -= 3; }
	if (Psuedonym == "BLANK") { ToReturn -= 5; }
	if (AddressAs == "BLANK") { ToReturn -= 10; }
	if (HairColour == "BLANK") { ToReturn -= 1; }
	if (HairLength == "BLANK") { ToReturn -= 1; }
	if (HairStyle == "BLANK") { ToReturn -= 1; }
	
	if (ToReturn < 0) { NeedInfoScore = -ToReturn; }

	return ToReturn;
}
