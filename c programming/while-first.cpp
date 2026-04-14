#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double balance = 5000.0;
    int choice;
    double amount;

    cout << "Welcome to the Console Bank!" << endl;
    cout << "Your starting balance is: Rs " << fixed << setprecision(2) << balance << endl;

    // Loop continues as long as balance is above 0
    while (balance > 0) {
        cout << "\n1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "Enter your choice (1 or 2): ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter deposit amount: ";
            cin >> amount;
            if (amount > 0) {
                balance += amount;
                cout << "Successfully deposited Rs " << amount << endl;
            } else {
                cout << "Invalid deposit amount." << endl;
            }
        } 
        else if (choice == 2) {
            cout << "Enter withdrawal amount: ";
            cin >> amount;
            
            // Check if user has enough balance
            if (amount > balance) {
                cout << "Transaction Failed! Insufficient balance." << endl;
            } else if (amount <= 0) {
                cout << "Invalid withdrawal amount." << endl;
            } else {
                balance -= amount;
                cout << "Successfully withdrawn Rs " << amount << endl;
            }
        } 
        else {
            cout << "Invalid option selected." << endl;
        }

        cout << "Current Balance: Rs " << balance << endl;
        cout << "-------------------------------" << endl;
    }

    cout << "\nYour balance has reached zero. The program will now exit." << endl;
    return 0;
}