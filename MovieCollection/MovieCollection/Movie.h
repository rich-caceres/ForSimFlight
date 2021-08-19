#pragma once
#include <string>

class Movie
{
private:
	std::string movie_name;
	char movie_rating;
	int num_watched;
public:
	std::string getMovieName() const;
	char getMovieRating() const;
	int getNumWatched() const;
	void setMovieName();
	void setMovieRating();
	void setNumWatched();
	void displayMovie();
	//constructors
	Movie();
	Movie(std::string name, char movie_rating, int num_watched);
	//destructors
	~Movie();
};

