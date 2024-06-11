#ifndef TITLES
#define TITLES

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Titles {
protected:
    int id;
    string title;
    string genre;
    float rating;
    float duration;

public:
    Titles();
    Titles(int _id, const string& _title, const string& _genre, float _rating, float _duration);
    const string& getTitle() const;
    float getRating() const;
    const string& getGenre() const;
    float getDuration() const;

    virtual string show() const = 0; 
};

#endif 
