// Rajendra Chaganti
// PRN : 24070123150
// B3
#include <iostream>
using namespace std;
int main(){
    float num1, num2;   // which will be used to take input of two numbers 
    int choice;         // which will be used for choice
    float result;       // to store result
    // take input for two numbers 
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    // Showing operation options
    cout << "Choose operation:\n";
    cout << "1 for Addition\n";
    cout << "2 for Subtraction\n";
    cout << "3 for Multiplication\n";
    cout << "4 for Division\n";
    // to take aking user's choice
    cout << "Enter your choice (1 to 4): ";
    cin >> choice;
    // to perform operation using switch-case
    switch (choice) {
        case 1:  // Addition
            result = num1 + num2;
            cout << "Result = " << result;
            break;
        case 2:  // Subtraction
            result = num1 - num2;
            cout << "Result = " << result;
            break;
        case 3:  // Multiplication
            result = num1 * num2;
            cout << "Result = " << result;
            break;
        case 4:  // Division
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Result = " << result;
            } else {
                cout << "Error: Cannot divide by zero!";
            }
            break;
        default:  // to print invalid input
            cout << "Invalid choice!";
    }
    return 0;
}
