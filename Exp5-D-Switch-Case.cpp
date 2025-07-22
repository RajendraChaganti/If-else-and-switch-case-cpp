// Rajendra Chaganti
// PRN : 24070123150
// B3
#include <iostream>
using namespace std;
int main()
{
    int choice;
    cout << "Enter any number in between 1 to 5 to choose for any outdoor local game:";
    cin >> choice;
    switch(choice) {
        case 1:
            cout << "Lagoori" << endl;
            break;
        case 2:
            cout << "Kho Kho" << endl;
            break;
        case 3:
            cout << "Gilli Danda" << endl;
            break;
        case 4:
            cout << "Kabbadi"<<endl;
            break;
        case 5:
            cout << "Pakdam Pakdai" << endl;
            break;
        default:
            cout << "Invalid choice.Please enter a number between 1 and 5." << endl;
    }
    return 0;
}
/*
Enter any number in between 1 to 5 to choose for any outdoor local game:3
Gilli Danda
*/
