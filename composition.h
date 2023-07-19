#ifndef CPPCONCEPTS_COMPOSITION_H
#define CPPCONCEPTS_COMPOSITION_H

#include <iostream>
using namespace std;

class Person {
private:
    int SSN; // Social Security Number
public:
    string name;
    int age;
    string job;
    Person(string name, int age, string job, int SSN) {
        this->name = name;
        this->age = age;
        this->job = job;
        this->SSN = SSN;
    }
    void display() {
        cout << "Name: " << name << endl << "Age: " << age << endl <<
        "Job: " << job << endl << "SSN: " << SSN << endl;
    }
};

class Marriage {
public:
    Person* person1;
    Person* person2;
    Marriage(Person* person1, Person* person2) {
        this->person1 = person1;
        this->person2 = person2;
    }
    void display() {
        person1->display();
        person2->display();
        cout << "They're married!\n";
    }
};

#endif
