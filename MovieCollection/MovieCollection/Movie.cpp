#include "Movie.h"
#include <iostream>
#include <sstream>
#include <string>


Movie::Movie(std::string *mov_name, std::string *mov_rating, int *num_watch)
	: movie_name{nullptr}, movie_rating{ nullptr }, num_watched{ nullptr } {
	if (mov_name == nullptr) {
		*movie_name = "this is null";
	}
	else {
		movie_name = new std::string(*mov_name);
	}
	if (mov_rating == nullptr) {
		*movie_rating = "this is null";
	}
	else {
		movie_rating = new std::string(*mov_rating);
	}
	if (num_watch == nullptr) {
		num_watched = 0;
	}
	else {
		num_watched = new int(*num_watch);
	}

	std::cout << "Movie created!\n";
}

Movie::Movie(const Movie& movie) 
	: movie_name{ movie.movie_name }, movie_rating{ movie.movie_rating }, num_watched{ movie.num_watched } {
	std::cout << "copy constructor called\n";
}

Movie::Movie(Movie&& movie)
	: movie_name{ movie.movie_name }, movie_rating{ movie.movie_rating }, num_watched{ movie.num_watched }{
	std::cout << "move constructor called\n";
	movie.movie_name = nullptr;
	movie.movie_rating = nullptr;
	movie.num_watched = nullptr;
}

Movie::~Movie() {
	std::cout << "Destructor called\n";
}

const std::string *Movie::getMovieName() const{
	return movie_name;
}

const std::string *Movie::getMovieRating() const {
	return movie_rating;
}

const int *Movie::getNumWatched() const {
	return num_watched;
}

void Movie::setMovieName(std::string *movie_name) {
	this->movie_name = movie_name;
}

void Movie::setMovieRating(std::string *movie_rating) {
	this->movie_rating = movie_rating;
}

void Movie::setNumWatched(int *num_watched) {
	this->num_watched = num_watched;
}

void Movie::increaseNumWatched() {
	++*this->num_watched;
}

void Movie::displayMovie() const {
	std::cout << "Movie Title: " << *this->getMovieName() << "\n" 
		<< "Rating: " << *this->getMovieRating() << "\n" 
		<< "Times watched: " << *this->getNumWatched() << std::endl;
}

