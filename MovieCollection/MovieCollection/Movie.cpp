#include "Movie.h"
#include <iostream>

Movie::Movie() 
	:movie_name{ "No name added" }, movie_rating{ '\0' }, num_watched{0} {
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

void Movie::displayMovie() {


}

