#ifndef CPPCONCEPTS_FRIEND_FUNCTION_H
#define CPPCONCEPTS_FRIEND_FUNCTION_H

#include <iostream>
using namespace std;

class Investment {
private:
    float balance;
public:
    Investment(float p) {
        balance = p;
    }

    void display() {
        cout << "Account balance: $" << balance << endl;
    }

    friend void calculateInterest(Investment &investment, float interest, int time_in_year);
};

void calculateInterest(Investment &investment, float interest, int time_in_year)
{
    investment.balance = investment.balance + (investment.balance * interest * time_in_year);
}
#endif
