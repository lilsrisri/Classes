#ifndef MOVIE_H
#define MOVIE_H

#include "media.h"
#include <string>

using namespace std;

//class for movies from media
class Movie : public Media {
private:
    string director;
    int duration;
    int rating;
public:

  //constructor
    Movie(const string& title, const string& director, int year, int duration, int rating);
  void print() const override; //print details
  int getDuration() const; //getter for duration
};

#endif
