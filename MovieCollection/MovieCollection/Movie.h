#pragma once
#include <string>

class Movie
{
private:
	std::string* movie_name;
	std::string* movie_rating;
	int* num_watched;
public:
	const std::string *getMovieName() const;
	const std::string *getMovieRating() const;
	const int *getNumWatched() const;
	void increaseNumWatched();
	void setMovieName(std::string *movie_name);
	void setMovieRating(std::string *movie_rating);
	void setNumWatched(int *num_watched);
	void displayMovie() const;
	//constructors
	Movie(std::string *movie_name, std::string *movie_rating, int *num_watched);
	Movie(const Movie& movie);//copy constructor
	Movie(Movie&& movie);//move constructor
	//destructors
	~Movie();
};

