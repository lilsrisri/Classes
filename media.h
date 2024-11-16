#ifndef MEDIA_H
#define MEDIA_H

#include <cstring>

using namespace std;

class Media { //Base class for all media types
protected:
    char title[100];
    int year;
public:
    Media(const char* title, int year); //Constructor
    virtual ~Media(); // Virtual destructor that should help with cleanup
    virtual void print() const = 0; // Virtual function
    const char* getTitle() const; //gets title
    int getYear() const; //gets year
};

#endif
