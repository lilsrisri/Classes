#ifndef VIDEOGAME_H
#define VIDEOGAME_H

#include "media.h"
#include <cstring>

using namespace std;

//class for video games, derived from media
class VideoGame : public Media {
private:
    char publisher[100];
    int rating;
public:
    VideoGame(const char* title, int year, const char* publisher, int rating); //constructor
    void print() const override; //print details
    int getRating() const; //getter for rating
};

#endif
