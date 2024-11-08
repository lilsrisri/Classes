#include "media.h"
#include <iostream>

using namespace std;

//implementing the constructor
Media::Media(const string& title, int year) : title(title), year(year) {}

//virtual destructor
Media::~Media() {}

//returns the title
string Media::getTitle() const {
    return title;
}


//returns the year
int Media::getYear() const {
    return year;
}
