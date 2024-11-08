#include "movie.h"
#include <iostream>

using namespace std;

//constructor
Movie::Movie(const string& title, const string& director, int year, int duration, int rating)
    : Media(title, year), director(director), duration(duration), rating(rating) {}

//print details of movie
void Movie::print() const {
    cout << "Movie - Title: " << title << ", Director: " << director << ", Year: " << year 
         << ", Duration: " << duration << " mins, Rating: " << rating << endl;
}

//return duration
int Movie::getDuration() const {
    return duration;
}


