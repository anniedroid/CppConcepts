#ifndef CPPCONCEPTS_CONSTRUCTORS_CALL_H
#define CPPCONCEPTS_CONSTRUCTORS_CALL_H

#include <iostream>
using namespace std;

class MusicalInstrument {
public:
    MusicalInstrument(string s) {
        cout << "This is a musical instrument\n";
    }
};

class Piano : public MusicalInstrument {
public:
    Piano(string s) : MusicalInstrument(s) {
        cout << "This is a " << s << endl;
    }
};

class Guitar : public MusicalInstrument {
public:
    Guitar(string s) : MusicalInstrument(s) {
        cout << "This is a " << s << endl;
    }
};

#endif
