#include <iostream>
using namespace std;

int main() {
    int rows, val;
    cout << "Enter number of rows: ";
    cin >> rows;

    for (int i = 0; i < rows; i++) {
        val = 1;
        for (int s = 0; s < rows - i - 1; s++)
            cout << " ";

        for (int j = 0; j <= i; j++) {
            cout << val << " ";
            val = val * (i - j) / (j + 1);
        }
        cout << endl;
    }
    return 0;
}
