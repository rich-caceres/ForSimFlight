#include "Player.h"
#include<iostream>
#include<string>

Player::Player(std::string set_name, int set_score)
	:player_name{ set_name }, score{set_score} {
//default constructor
	std::cout << "New player has been created" << std::endl;
}
Player::~Player(){
//default destructor
	std::cout << "Player destructor executed" << std::endl;
}

std::string Player::getPlayerName() const {
	return player_name;
}

int Player::getPlayerScore() const {
	return score;
}

void Player::setPlayerName(std::string player_name) {
	this->player_name = player_name;
}

void Player::setPlayerScore(int score) {
	this->score = score;
}

void Player::increaseScore() {
	score++;
}
int Player::displayActivePlayers(){

	return active_players;
}