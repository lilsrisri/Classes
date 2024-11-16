#ifndef MUSIC_H
#define MUSIC_H

#include "media.h"
#include <cstring>

using namespace std;

//class for music, from Media
class Music : public Media {
private:
    char artist[100];
    int duration;
    char publisher[100];
public:
    Music(const char* title, const char* artist, int year, int duration, const char* publisher); //constructor
    void print() const override; //print details
    int getDuration() const; //get duration
};

#endif
