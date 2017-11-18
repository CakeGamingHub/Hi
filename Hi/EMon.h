#pragma once
class EMon
{
public:
	EMon();
	~EMon();

	float Anger = -1;
	float Friendship = -1;
	float Fear = -1;
	float Shame = -1;
	float Kindness = -1;
	float Pity = -1;
	float Indignation = -1;
	float Envy = -1;
	float Love = -1;

	int NeedInfoScore = 0;

	int GetScoreChange();
};

