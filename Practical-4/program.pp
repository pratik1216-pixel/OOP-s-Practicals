#include <iostream>
#include <cmath>
using namespace std;
class Complex
{
    int real, imag
public:
    void get()
    {
        cout << "Enter real part: ";
        cin >> real;
        cout << "Enter imaginary part: ";
        cin >> imag;
    }
    void display()
    {
        cout << "Complex number = " << real << " + " << imag << "i" << endl;
        cout << "Modulus = " << sqrt(real * real + imag * imag);
    }
};
int main()
{
    Complex c;
    c.get();
    c.display();

    return 0;
}
