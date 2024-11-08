#include "music.h"
#include <iostream>

using namespace std;

//implementing constructor from .h
Music::Music(const string& title, const string& artist, int year, int duration, const string& publisher)
    : Media(title, year), artist(artist), duration(duration), publisher(publisher) {}

//print details of music
void Music::print() const {
    cout << "Music - Title: " << title << ", Artist: " << artist << ", Year: " << year 
         << ", Duration: " << duration << " mins, Publisher: " << publisher << endl;
}

//return duration
int Music::getDuration() const {
    return duration;
}
