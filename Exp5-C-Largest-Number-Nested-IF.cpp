// Rajendra Chaganti
// PRN : 24070123150
//B3
#include <iostream>
using namespace std;
int main() {
    int a, b, c;
    // Take input for three numbers to find largest in between them using nested if 
    cout << "Enter first number: ";
    cin >> a;
    cout << "Enter second number: ";
    cin >> b;
    cout << "Enter third number: ";
    cin >> c;
    // Nested if to find greatest between all three inputted numbers
    if (a >= b) {
        if (a >= c) {
            cout << "Greatest number is: " << a << endl;
        } else {
            cout << "Greatest number is: " << c << endl;
        }
    } else {
        if (b >= c) {
            cout << "Greatest number is: " << b << endl;
        } else {
            cout << "Greatest number is: " << c << endl;
        }
    }
    return 0;
}
