#include <iostream>
using namespace std;
int power(int n) {
    return n * n;         
}
int power(int n, int x) {
    return n * n * n;      
}
int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;
    cout << "Square = " << power(n) << endl;
    cout << "Cube = " << power(n, 3) << endl;
    return 0;
}
