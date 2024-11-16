#include "movie.h"
#include <iostream>

using namespace std;

//constructor
Movie::Movie(const char* title, const char* directorInput, int year, int duration, int rating)
    : Media(title, year), duration(duration), rating(rating) {
    strncpy(director, directorInput, sizeof(director) - 1);
    director[sizeof(director) - 1] = '\0';
}

//print details of movie
void Movie::print() const {
    cout << "Movie - Title: " << title << ", Director: " << director << ", Year: " << year
         << ", Duration: " << duration << " mins, Rating: " << rating << endl;
}

//return duration
int Movie::getDuration() const {
    return duration;
}

