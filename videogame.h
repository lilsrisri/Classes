#ifndef VIDEOGAME_H
#define VIDEOGAME_H

#include "media.h"
#include <string>

using namespace std;

//class for video games, derived from media
class VideoGame : public Media {
private:
    string publisher;
    int rating;
public:
  //constructor
    VideoGame(const string& title, int year, const string& publisher, int rating);
  void print() const override; //print details
  int getRating() const; //getter for rating
};

#endif
