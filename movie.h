#ifndef MOVIE_H
#define MOVIE_H

#include "media.h"
#include <cstring>

using namespace std;

//class for movies from media
class Movie : public Media {
private:
    char director[100];
    int duration;
    int rating;
public:
    Movie(const char* title, const char* director, int year, int duration, int rating); //constructor
    void print() const override; //print details
    int getDuration() const; //getter for duration
};

#endif

