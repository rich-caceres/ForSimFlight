#include "Player.h"
#include<iostream>
#include<string>

Player::Player() {
//default constructor
}

Player::~Player(){
//default destructor
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