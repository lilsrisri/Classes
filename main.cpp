#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include "media.h"
#include "videogame.h"
#include "music.h"
#include "movie.h"


/*
  Code made mainly from the videos, and reading/watching a lot of stuff about classes, vectors, pointers, and also media guards since I heard that was a problem people had
  Got some help from my dad, for some things like the vectors, and to see if there was flaws within some of my logic, and with how i deleted some stuff, since I got confused with vectors a little
 */


using namespace std;

//function prototypes
void addMedia(vector<shared_ptr<Media>>& mediaList);
void searchMedia(const vector<shared_ptr<Media>>& mediaList);
void deleteMedia(vector<shared_ptr<Media>>& mediaList);

int main() {
  vector<shared_ptr<Media>> mediaList; //vector for media items
    bool running = true;
    string command;

    //main command loop
    while (running) {
        cout << "Enter command (ADD, SEARCH, DELETE, QUIT): ";
        cin >> command;

        if (command == "ADD") {
            addMedia(mediaList);
        } else if (command == "SEARCH") {
            searchMedia(mediaList);
        } else if (command == "DELETE") {
            deleteMedia(mediaList);
        } else if (command == "QUIT") {
            running = false;
        } else {
            cout << "Invalid command!" << endl;
        }
    }

    return 0;
}

//function to add media

void addMedia(vector<shared_ptr<Media>>& mediaList) {
    string type;
    cout << "Enter media type (videogame, music, movie): ";
    cin >> type;

    if (type == "videogame") {
        string title, publisher;
        int year, rating;
        cout << "Enter title, year, publisher, rating: ";
        cin >> title >> year >> publisher >> rating;
        mediaList.push_back(make_shared<VideoGame>(title, year, publisher, rating));
    } else if (type == "music") {
        string title, artist, publisher;
        int year, duration;
        cout << "Enter title, artist, year, duration, publisher: ";
        cin >> title >> artist >> year >> duration >> publisher;
        mediaList.push_back(make_shared<Music>(title, artist, year, duration, publisher));
    } else if (type == "movie") {
        string title, director;
        int year, duration, rating;
        cout << "Enter title, director, year, duration, rating: ";
        cin >> title >> director >> year >> duration >> rating;
        mediaList.push_back(make_shared<Movie>(title, director, year, duration, rating));
    }
}

//function to search media by title or the year
void searchMedia(const vector<shared_ptr<Media>>& mediaList) {
    string query;
    cout << "Search by title or year: ";
    cin >> query;

    for (const auto& media : mediaList) {
        if (media->getTitle() == query || to_string(media->getYear()) == query) {
            media->print();
        }
    }
}

//function to delete media by title or year
void deleteMedia(vector<shared_ptr<Media>>& mediaList) {
    string query;
    cout << "Delete by title or year: ";
    cin >> query;

    for (auto it = mediaList.begin(); it != mediaList.end();) {
        if ((*it)->getTitle() == query || to_string((*it)->getYear()) == query) {
            (*it)->print();
            cout << "Delete this item? (y/n): ";
            char confirm;
            cin >> confirm;
            if (confirm == 'y') {
                it = mediaList.erase(it);
            } else {
                ++it;
            }
        } else {
            ++it;
        }
    }
}
