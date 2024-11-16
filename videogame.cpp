#include "videogame.h"
#include <iostream>

using namespace std;

//constructor
VideoGame::VideoGame(const char* title, int year, const char* publisherInput, int rating)
    : Media(title, year), rating(rating) {
    strncpy(publisher, publisherInput, sizeof(publisher) - 1);
    publisher[sizeof(publisher) - 1] = '\0';
}

//print details of the video game
void VideoGame::print() const {
    cout << "Video Game - Title: " << title << ", Year: " << year
         << ", Publisher: " << publisher << ", Rating: " << rating << endl;
}

//return rating
int VideoGame::getRating() const {
    return rating;
}
