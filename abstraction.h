#ifndef CPPCONCEPTS_ABSTRACTION_H
#define CPPCONCEPTS_ABSTRACTION_H

#include <iostream>
using namespace std;

class Income {
public:
    virtual double total() = 0;
};

class Salary : public Income {
private:
    double annual_salary;

public:
    Salary(double a) {
        annual_salary = a;
    }

    double total() {
        return annual_salary;
    }
};

class Wages : public Income {
private:
    double hourly_rate;

public:
    Wages(double h) {
        hourly_rate = h;
    }

    double total() {
        return hourly_rate * 2080;
    }
};

#endif
