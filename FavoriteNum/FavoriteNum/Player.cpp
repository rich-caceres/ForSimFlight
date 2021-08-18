#include "Player.h"
#include<iostream>
#include<string>

Player::Player() {
	player_name = "No name here";
	score = 0;
}

Player::Player(std::string set_name, int set_score)
	:player_name{ set_name }, score{set_score} {
//default constructor
	std::cout << "New player has been created" << std::endl;
}
Player::~Player(){
//default destructor
	std::cout << "Player destructor executed" << std::endl;
}

std::string Player::getPlayerName() {
	return player_name;
}

int Player::getPlayerScore() {
	return score;
}

void Player::setPlayerName(std::string newPlayerName) {
	player_name = newPlayerName;
}

void Player::setPlayerScore(int newPlayerScore) {
	score = newPlayerScore;
}

void Player::increaseScore() {
	score++;
}