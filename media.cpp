#include "media.h"
#include <iostream>

using namespace std;

//implementing the constructor
Media::Media(const char* titleInput, int yearInput) : year(yearInput) {
    strncpy(title, titleInput, sizeof(title) - 1);
    title[sizeof(title) - 1] = '\0';
}

//virtual destructor
Media::~Media() {}

//returns the title
const char* Media::getTitle() const {
    return title;
}

//returns the year
int Media::getYear() const {
    return year;
}
