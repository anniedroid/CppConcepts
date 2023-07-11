#ifndef CPPCONCEPTS_DIAMOND_H
#define CPPCONCEPTS_DIAMOND_H

#include <iostream>
using namespace std;

class Human {
public:
    void display() {
        cout << "This is a human\n";
    }
};

class Boy : public Human {
public:
    void display() {
        cout << "This is a boy\n";
    }
};

class Girl : public Human {
public:
    void display() {
        cout << "This is a girl\n";
    }
};

class Baby : public Boy, public Girl{};

#endif
