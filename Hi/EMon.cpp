#include "stdafx.h"
#include "EMon.h"


EMon::EMon()
{
}


EMon::~EMon()
{
}

int EMon::GetScoreChange()
{
	int ToReturn = 0;
	if (Anger = -1) { ToReturn -= 5; }
	if (Friendship = -1) { ToReturn -= 5; }
	if (Fear = -1) { ToReturn -= 5; }
	if (Shame = -1) { ToReturn -= 5; }
	if (Kindness = -1) { ToReturn -= 5; }
	if (Pity = -1) { ToReturn -= 5; }
	if (Indignation = -1) { ToReturn -= 5; }
	if (Envy = -1) { ToReturn -= 5; }
	if (Love = -1) { ToReturn -= 5; }
	
	if (ToReturn < 0) { NeedInfoScore = -ToReturn; }

	return ToReturn;
}
