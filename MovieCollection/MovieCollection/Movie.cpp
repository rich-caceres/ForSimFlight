#include "Movie.h"
#include <iostream>
#include <sstream>
#include <string>


Movie::Movie(std::string mov_name, std::string mov_rating, int num_watch)
	: movie_name{ mov_name}, movie_rating{ mov_rating }, num_watched{ num_watch } {

	std::cout << "Movie created!\n";
}

Movie::Movie(const Movie& movie) 
	: movie_name{ movie.movie_name }, movie_rating{ movie.movie_rating }, num_watched{movie.num_watched} {
	std::cout << "copy constructor called";
}

Movie::~Movie() {
	std::cout << "Destructor called\n";
}

const std::string Movie::getMovieName() const{
	return movie_name;
}

const std::string Movie::getMovieRating() const {
	return movie_rating;
}

const int Movie::getNumWatched() const {
	return num_watched;
}

void Movie::setMovieName(std::string movie_name) {
	this->movie_name = movie_name;
}

void Movie::setMovieRating(std::string movie_rating) {
	this->movie_rating = movie_rating;
}

void Movie::setNumWatched(int num_watched) {
	this->num_watched = num_watched;
}

void Movie::increaseNumWatched() {
	++this->num_watched;
}

void Movie::displayMovie() const {
	std::cout << "Movie Titel: " << this->getMovieName() << "\n" 
		<< "Rating: " << this->getMovieRating() << "\n" 
		<< "Times watched: " << this->getNumWatched() << std::endl;
}

