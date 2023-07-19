#include "constructors-call.h"
#include "diamond.h"
#include "aggregation.h"
#include "composition.h"
#include "copy-constructors.h"
#include "friend-function.h"
#include "destructor.h"

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

    // Copy constructor
    Phone iphone14(6.07, 6.1, 128);
    Phone another_iphone14 = iphone14;
    iphone14.display();
    another_iphone14.display();

    // Friend function
    Investment my_invesment(1000);
    my_invesment.display();
    calculateInterest(my_invesment, 0.1, 1);
    my_invesment.display();

    // Destructor
    ConcertTicket taylor_swift_ticket;
    ConcertTicket EDM_ticket;
    EDM_ticket.~ConcertTicket(); // Calling destructor explicitly
    cout << "This is the end of my program\n";
    return 0;
}
