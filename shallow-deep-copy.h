#ifndef CPPCONCEPTS_SHALLOW_DEEP_COPY_H
#define CPPCONCEPTS_SHALLOW_DEEP_COPY_H

#include <iostream>
#include <cstring>

using namespace std;

class Cake {
public:
    char* cake_base;
    char* filling;
    char* icing;
    // Parameter constructor
    Cake(char* b, char* f, char* i) {
        cake_base = b;
        filling = f;
        icing = i;
    }
    // Shallow copy constructor
    /*Cake(const Cake& obj) {
        cake_base = obj.cake_base;
        filling = obj.filling;
        icing = obj.icing;
    }*/
    // Deep copy
    Cake(const Cake& obj) {
        cake_base = new char[strlen(obj.cake_base) + 1];
        strcpy(cake_base, obj.cake_base);
        filling = new char[strlen(obj.filling) + 1];
        strcpy(filling, obj.filling);
        icing = new char[strlen(obj.icing) + 1];
        strcpy(icing, obj.icing);
    }
    // Display
    void display() {
        cout << "This is a " << cake_base << " cake with " << filling << " filling and " << icing << " icing!\n";
    }
};

#endif
