// Rajendra Chaganti
// PRN : 24070123150 
// B3
#include <iostream>
using namespace std;
int main() {
    char ch;
    // Take input from user
    cout << "Enter a character: ";
    cin >> ch;
    // Check if the inputted character is vowel or consonant
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        cout << "It is a vowel." << endl;
    } else {
        cout << "It is a consonant." << endl;
    }
    return 0;
}
/*
Output
Enter a character: r
It is a consonant.
*/
