// Rajendra Chaganti
// PRN : 24070123150
// B3
#include <iostream>
using namespace std;
int main() {
    int number;
    // Input from user
    cout << "Enter a number: ";
    cin >> number;
    // Check if the number is even or odd using if-else
    if (number % 2 == 0) {
        cout << number << " is even." << endl;
    } else {
        cout << number << " is odd." << endl;
    }
    return 0;
}

