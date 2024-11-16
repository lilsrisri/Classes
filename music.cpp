#include "music.h"
#include <iostream>

using namespace std;

//implementing constructor from .h
Music::Music(const char* title, const char* artistInput, int year, int duration, const char* publisherInput)
    : Media(title, year), duration(duration) {
    strncpy(artist, artistInput, sizeof(artist) - 1);
    artist[sizeof(artist) - 1] = '\0';
    strncpy(publisher, publisherInput, sizeof(publisher) - 1);
    publisher[sizeof(publisher) - 1] = '\0';
}

//print details of music
void Music::print() const {
    cout << "Music - Title: " << title << ", Artist: " << artist << ", Year: " << year
         << ", Duration: " << duration << " mins, Publisher: " << publisher << endl;
}

//return duration
int Music::getDuration() const {
    return duration;
}
