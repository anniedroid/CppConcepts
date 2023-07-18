#ifndef CPPCONCEPTS_DESTRUCTOR_H
#define CPPCONCEPTS_DESTRUCTOR_H

#include <iostream>
using namespace std;

class ConcertTicket {
public:
    ConcertTicket() {
        cout << "Got ticket to see a concert!\n";
    }
    ~ConcertTicket() {
        cout << "Concert is over!\n";
    }
};

#endif
