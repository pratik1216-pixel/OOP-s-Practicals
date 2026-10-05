#include <iostream>
#include <cstring>
using namespace std;
// Define a class named String
class String
{
  // Pointer to store the string dynamically
  char *str;
public:
    // Constructor
    String()
    {
        // Dynamically allocate memory for 100 characters
        str = new char[100];

        // Initialize the string as empty
        str[0] = '\0';
    }
    // Destructor
    ~String()
    {
        // Release the dynamically allocated memory
        delete[] str;
    }

    // Function to accept a string from the user
    void Accept()
    {
        cout << "Enter a string: ";

        // Read the string including spaces
        cin.getline(str, 100);
    }
    // Function to display the string
    void Display()
    {
        cout << "String is: " << str << endl;
    }
};
// Main function
int main()
{
    // Create an object of String class
    String s;
    // Call Accept() to take input
    s.Accept();
    // Call Display() to display the string
    s.Display();
    return 0;
}
