#include "stdafx.h"
#include "Tendencies.h"


Tendencies::Tendencies()
{
}


Tendencies::~Tendencies()
{
}

int Tendencies::GetScoreChange()
{
	int ToReturn = 0;
	if (Sarcastic == -1) { ToReturn -= 10; }
	if (Factual == -1) { ToReturn -= 10; }
	if (Misleading == -1) { ToReturn -= 10; }
	if (Hyperbolic == -1) { ToReturn -= 10; }
	if (Sociable == -1) { ToReturn -= 10; }
	if (Flirtatious == -1) { ToReturn -= 10; }
	if (PlatonicRelationshipForming == -1) { ToReturn -= 10; }
	if (PlatonicRelationshipBreaking == -1) { ToReturn -= 10; }
	if (RomanticRelationshipForming == -1) { ToReturn -= 10; }
	if (RomanticRelationshipBreaking == -1) { ToReturn -= 10; }
	if (SexualRelationshipForming == -1) { ToReturn -= 10; }
	if (SexualRelationshipBreaking == -1) { ToReturn -= 10; }
	if (LikesSelf == -1) { ToReturn -= 10; }
	if (LikesLikeSelf == -1) { ToReturn -= 10; }

	if (ToReturn < 0) { NeedInfoScore = -ToReturn; }

	return ToReturn;
}
