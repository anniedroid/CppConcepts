#ifndef CPPCONCEPTS_STATIC_FIELD_H
#define CPPCONCEPTS_STATIC_FIELD_H

#include <iostream>
#include <string>
using namespace std;

class HP_Book {
public:
    static string author;
    string title;
    int year;

    HP_Book(string t, int y) {
        this->title = t;
        this->year = y;
    }

    void display() {
        cout << "Tittle: " << title << " - " << year << " by " << author << endl;
    }

    static void authorIntro() {
        cout << "J.K. Rowling wrote all Harry Potter books!\n";
    }
};

string HP_Book::author  = "J.K. Rowling";

#endif
