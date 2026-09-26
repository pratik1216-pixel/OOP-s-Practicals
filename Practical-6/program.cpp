#include<iostream>
using namespace std;
class complex
{
    int real, imag; //store real and imaginary parts
public:
// Constructor to initialize values
complex(int r=0, int i=0)
    {
        real = r; // store real part
        imag = i; // store imaginary part
    }
    void display() // Display the complex number
    {
        if(imag > 0) // Check if imaginary part is positive
            cout << real << "+i" << imag << endl;
        else
            cout << real << "-i" << -imag << endl;
    }
    // Overload == operator
    bool operator==(complex c)
    {
        // Compare real and imaginary parts
        if(real == c.real && imag == c.imag)
            return true;         // if both parts are equal
        else
            return false;        // if parts are different
    }
};
int main()
{
    int r1, i1, r2, i2; // Variables for user input
    cout << "Enter r1 & i1 parts of first complex number: ";
    cin >> r1 >> i1;
    cout << "Enter r2 & i2 parts of second complex number: ";
    cin >> r2 >> i2;
    // Create two complex number objects
    complex c1(r1, i1), c2(r2, i2);
    // Display first complex number
    cout << "\nFirst complex no: ";
    c1.display();
    // Display second complex number
    cout << "Second complex no: ";
    c2.display();
    // Compare both complex numbers
    if(c1 == c2)
        cout << "Both complex numbers are equal";
    else
        cout << "Complex numbers are not equal";

    return 0;// End the program
}
