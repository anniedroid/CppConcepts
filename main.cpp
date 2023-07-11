#include "constructors-call.h"
#include "diamond.h"
#include "aggregation.h"
#include "composition.h"

using namespace std;

int main() {
    // Constructor Call (with parameter)
    MusicalInstrument my_instrument("instrument");
    Piano my_piano("piano");
    Guitar my_guitar("guitar");

    // Diamond problem
    Baby my_baby;
    my_baby.Boy::display();
    my_baby.Girl::display();

    // Aggregation
    CookTop new_cook_top("KitchenAid", "KCES550HSS");
    Kitchen new_kitchen(2023, "first floor", &new_cook_top);
    new_kitchen.display();

    // Composition/Complex class
    Person bride("Mia", 25, "actress", 1234);
    Person groom("Sebastian", 28, "musician", 5678);
    Marriage marriage(&bride, &groom);
    marriage.display();

    return 0;
}
