#include<iostream>  // Includes input and output functions
using namespace std;  // Allows us to use cout and cin directly

int main()  // Main function starts
{
    int a[5] = {10, 20, 30, 40, 50};  // Declares an array of 5 elements
    int index;  // Declares a variable to store the array index

    cout<<"Enter array index: ";  // Asks the user to enter an index
    cin>>index;  // Accepts the index from the user

    try  // Starts the try block to check for exceptions
    {
        if(index < 0 || index >= 5)  // Checks whether the index is invalid
            throw index;  // Throws an exception if the index is out of bounds

        cout<<"Array element: "<<a[index]<<endl;  // Displays the element at the given index
    }
    catch(int x)  // Catches the integer exception
    {
        cout<<"Exception caught: Array index out of bounds!"<<endl;  // Displays the error message
    }

    return 0;  // Ends the program
}
