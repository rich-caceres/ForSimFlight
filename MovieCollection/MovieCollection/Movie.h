#pragma once
#include <string>

class Movie
{
private:
	std::string movie_name;
	char movie_rating;
	int num_watched;
public:
	Movie();
	std::string getMovieName() const;
	char getMovieRating() const;
	int getNumWatched() const;
	void setMovieName();
	void setMovieRating();
	void setNumWatched();
};

