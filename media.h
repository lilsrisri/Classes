#ifndef MEDIA_H
#define MEDIA_H

#include <string>

using namespace std;

class Media { //Base class for all media types
protected:
    string title;
    int year;
public:
  Media(const string& title, int year); //Constructor
    virtual ~Media(); // Virtual destructor that should help with cleanup
    virtual void print() const = 0; // Virtual function
  string getTitle() const; //gets title
  int getYear() const; //gets year
};

#endif
