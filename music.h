#ifndef MUSIC_H //header guard
#define MUSIC_H

#include "media.h"
#include <string>

using namespace std;


//class for music, from Media
class Music : public Media {
private:
    string artist;
    int duration;
    string publisher;
public:
  //constructor
    Music(const string& title, const string& artist, int year, int duration, const string& publisher);
  void print() const override; //print details
  int getDuration() const; //get duration
};

#endif
