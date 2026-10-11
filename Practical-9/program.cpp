#include <iostream>              // Header file for input and output
using namespace std;              // Use cout and cin directly

class Payment {                   // Base class
public:
    virtual void pay() {          // Virtual function
        cout << "Making a payment" << endl;
    }
};

class CashPayment : public Payment { // Derived class for cash
public:
    void pay() override {            // Overrides the base function
        cout << "Payment made using Cash" << endl;
    }
};

class CardPayment : public Payment { // Derived class for card
public:
    void pay() override {             // Overrides the base function
        cout << "Payment made using Card" << endl;
    }
};

int main() {                         // Main function
    Payment *p;                      // Base class pointer
    CashPayment c;                   // Cash payment object
    CardPayment d;                   // Card payment object
    int choice;                      // Variable to store user choice

    cout << "Choose Payment Method:" << endl;
    cout << "1. Cash Payment" << endl;
    cout << "2. Card Payment" << endl;
    cout << "Enter your choice: ";
    cin >> choice;                   // Takes input from user

    if (choice == 1) {               // Checks if user selects cash
        p = &c;                      // Points to cash object
        p->pay();                    // Calls cash payment function
    }
    else if (choice == 2) {          // Checks if user selects card
        p = &d;                      // Points to card object
        p->pay();                    // Calls card payment function
    }
    else {                           // If choice is invalid
        cout << "Invalid choice!" << endl;
    }

    return 0;                        // Ends the program
}
