#include "Movie.h"
#include <iostream>
#include <sstream>
#include <string>

Movie::Movie(std::string movie_name, std::string movie_rating, int num_watched)
	: movie_name{ movie_name }, movie_rating{ movie_rating }, num_watched{ num_watched } {
	std::cout << "Movie created!\n";
}

Movie::~Movie() {
	std::cout << "Destructor called\n";
}


std::string Movie::getMovieName() const{
	return movie_name;
}

std::string Movie::getMovieRating() const {
	return movie_rating;
}

int Movie::getNumWatched() const {
	return num_watched;
}

void Movie::setMovieName(std::string movie_name) {

	this->movie_name = movie_name;
}

void Movie::displayMovie() const {
	std::cout << "Movie Titel: " << this->getMovieName() << "\n" 
		<< "Rating: " << this->getMovieRating() << "\n" 
		<< "Times watched: " << this->getNumWatched() << std::endl;
}

