#include "videogame.h"
#include <iostream>

using namespace std;

//constructor
VideoGame::VideoGame(const string& title, int year, const string& publisher, int rating)
    : Media(title, year), publisher(publisher), rating(rating) {}

//print details of the video game
void VideoGame::print() const {
    cout << "Video Game - Title: " << title << ", Year: " << year 
         << ", Publisher: " << publisher << ", Rating: " << rating << endl;
}

//return rating
int VideoGame::getRating() const {
    return rating;
}
