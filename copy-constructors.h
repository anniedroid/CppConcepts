#ifndef CPPCONCEPTS_COPY_CONSTRUCTORS_H
#define CPPCONCEPTS_COPY_CONSTRUCTORS_H

#include <iostream>
using namespace std;

class Phone {
public:
    float weight;
    float display_size;
    int capacity;

    Phone(float w, float s, int c) {
        weight = w;
        display_size = s;
        capacity = c;
    }

    Phone(Phone &obj) {
        weight = obj.weight;
        display_size = obj.display_size;
        capacity = obj.capacity;
    }

    void display() {
        cout << "*** Phone specs ***\n" << "Weight: " << weight << " ounces\n" <<
            "Display size: " << display_size << " inches\n" << "Capacity: " << capacity << " GB\n";
    }
};

#endif
