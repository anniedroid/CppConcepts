#include <iomanip>
#include "constructors-call.h"
#include "diamond.h"
#include "aggregation.h"
#include "composition.h"
#include "abstraction.h"
#include "shallow-deep-copy.h"

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
    Kitchen new_kitchen(2023, "first floor", new_cook_top);
    new_kitchen.display();

    // Composition/Complex class
    Person bride("Mia", 25, "actress", 1234);
    Person groom("Sebastian", 28, "musician", 5678);
    Marriage marriage(&bride, &groom);
    marriage.display();

    // Abstraction
    Salary my_salary(456789.50);
    Wages her_wages(25.25);

    cout << "My annual income is: $" << fixed << setprecision(2) << my_salary.total() << endl;
    cout << "My annual income is: $" << fixed << setprecision(2) << her_wages.total() << endl;

    // Deep Copies
    Cake my_cake("Red Velvet", "Cream cheese", "Chocolate");
    Cake deep_cake(my_cake);
    deep_cake.icing = "Vanilla";
    my_cake.display();
    deep_cake.display();

    return 0;
}
