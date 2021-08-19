#include "Movie.h"
#include <iostream>

Movie::Movie() {
	std::cout << "Please add the name of the movie:\n";
	std::cin >> movie_name;
	std::cout << "Please add the movie rating: \n";
	std::cin >> movie_rating;
	std::cout << "Please add the number of times watched: \n";
	std::cin >> num_watched;
}

std::string Movie::getMovieName() const{
	return movie_name;
}

char Movie::getMovieRating() const {
	return movie_rating;
}

int Movie::getNumWatched() const {
	return num_watched;
}

void Movie::displayMovie() const {
	std::cout << "Movie Titel: " << this->getMovieName() << "\n" 
		<< "Rating: " << this->getMovieRating() << "\n" 
		<< "Times watched: " << this->getNumWatched() << std::endl;
}

Movie::~Movie() {
	std::cout << "Destructor called";
}
