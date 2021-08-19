#include "Movie.h"
#include <iostream>

Movie::Movie() 
	:movie_name{ "No name added" }, movie_rating{ '\0' }, num_watched{0} {
	std::cout << "Please add the name of the movie:\n";
	std::cin >> movie_name;
	std::cout << "Please add the movie rating: \n";
	std::cin >> movie_rating;
	
	num_watched = 0;
}

