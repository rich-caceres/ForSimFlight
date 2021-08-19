#include "Movie.h"\
#include <iostream>

Movie::Movie() 
	:movie_name{ "No name added" }, movie_rating{ '\0' }, num_watched{0} {
	
	movie_name = "";
	movie_rating= '\0';
	num_watched = 0;
}

