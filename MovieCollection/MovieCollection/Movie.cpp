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

}

char Movie::getMovieRating() const {

}

int Movie::getNumWatched() const {

}

void Movie::displayMovie() {


}

