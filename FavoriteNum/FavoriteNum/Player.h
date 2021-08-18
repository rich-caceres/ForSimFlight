#pragma once
#include <iostream>
#include <string>
class Player
{
private:
	int score;
	std::string player_name;
public:
	void setPlayerName(std::string newName);
	void setPlayerScore(int newScore);
	void increaseScore();
	std::string getPlayerName();
	int getPlayerScore();
	//default constructor
	Player();
	Player(std::string name = "no name", int score = 0);
	//default destructor
	~Player();
};

