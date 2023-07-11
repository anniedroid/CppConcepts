#ifndef CPPCONCEPTS_AGGREGATION_H
#define CPPCONCEPTS_AGGREGATION_H

#include <iostream>
using namespace std;

class CookTop {
public:
    string brand, model;
    CookTop(string brand, string model) {
        this->brand = brand;
        this->model = model;
    }
};

class Kitchen {
public:
    int year_built;
    string location;
    CookTop* cook_top;
    Kitchen(int year_built, string location, CookTop* cook_top) {
        this->year_built = year_built;
        this->location = location;
        this->cook_top = cook_top;
    }
    void display() {
        cout << "This kitchen was built in " << year_built << endl <<
        "It is located on the " << location << " of the house\n" <<
        "It has been equipped with " << cook_top->brand << "/" <<
        cook_top->model << " cooktop\n";
    }
};

#endif
