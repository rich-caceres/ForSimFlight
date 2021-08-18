#pragma once
#include <iostream>
#include <string>
class Player
{
private:
	static int active_players;
	int score;
	std::string player_name;
public:
	void setPlayerName(std::string newName);
	void setPlayerScore(int newScore);
	void increaseScore();
	std::string getPlayerName() const;
	int getPlayerScore() const;
	//default constructor
	Player(std::string name = "no name here", int score = 0);
	//default destructor
	~Player();

	static int displayActivePlayers();
};

