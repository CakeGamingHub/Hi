#pragma once
class Tendencies
{
public:
	Tendencies();
	~Tendencies();

	float Sarcastic = -1;
	float Factual = -1;
	float Misleading = -1;
	float Hyperbolic = -1;
	float Sociable = -1;
	float Flirtatious = -1;
	float PlatonicRelationshipForming = -1;
	float PlatonicRelationshipBreaking = -1;
	float RomanticRelationshipForming = -1;
	float RomanticRelationshipBreaking = -1;
	float SexualRelationshipForming = -1;
	float SexualRelationshipBreaking = -1;
	float LikesSelf = -1;
	float LikesLikeSelf = -1; // The tendency to like that which is similar to itself

	int NeedInfoScore = 0;

	int GetScoreChange();

};

