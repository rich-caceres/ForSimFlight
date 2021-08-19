#include "Movie.h"
#include <iostream>
#include <sstream>
#include <string>

Movie::Movie() 
	: movie_name{ "No name added" }, movie_rating{ '\0' }, num_watched{0} {
	std::cout << "Please add the name of the movie:\n";
	std::getline(std::cin, movie_name);
	std::cout << "Please add the movie rating: \n";
	movie_rating = getchar();
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
