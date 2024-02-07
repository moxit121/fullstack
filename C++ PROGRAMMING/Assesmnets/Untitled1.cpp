#include <iostream>
#include <ctime>

using namespace std;

int main() {
    // Display welcome screen with date and time
    time_t now = time(0);
    char* dt = ctime(&now);
    cout << "Welcome to the ATM!" << endl;
    cout << "Current date and time: " << dt << endl;

    // Display menu
    cout << "Please select an option from the menu:" << endl;
    cout << "1. Check account balance" << endl;
    cout << "2. Withdraw money" << endl;
    cout << "3. Deposit money" << endl;
    cout << "4. Help" << endl;

    // Prompt user for choice
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;

    // Check ATM PIN
    int attempts = 1;
    int pin;
    while (attempts <= 3) {
        cout << "Enter your ATM PIN: ";
        cin >> pin;

        if (pin == 12345) {
            // User entered correct PIN
            switch (choice) {
                case 1:
                    // Check account balance logic
                    cout << "Initial starting account balance: Rs. 60000" << endl;
                    cout << "Present account balance: Rs. 20000" << endl;
                    break;
                case 2:
                    // Withdraw money logic
                    cout << "Enter the amount to withdraw: ";
                    double withdraw;
                    cin >> withdraw;

                    if (withdraw > 20000.0) {
                        // Withdrawal amount exceeds present account balance
                        cout << "Sorry, not enough funds available for withdrawal." << endl;
                    } else {
                        // Withdrawal successful
                        double balance = 20000.0 - withdraw;
                        cout << "Withdrawal successful. Present account balance: Rs. " << balance << endl;
                    }
                    break;
                case 3:
                    // Deposit money logic
                    cout << "Enter the amount to deposit: ";
                    double deposit;
                    cin >> deposit;
                    double balance = 60000.0 + deposit;
                    cout << "Initial starting account balance: Rs. 60000" << endl;
                    cout << "Present account balance: Rs. " << balance << endl;
                    break;
                case 4:
                    // Help screen
                    cout << "Help:" << endl;
                    cout << "To check your account balance, choose option 1." << endl;
                    cout << "To withdraw money, choose option 2." << endl;
                    cout << "To deposit money, choose option 3." << endl;
                    cout << "To exit the program, choose option 4." << endl;
                    break;
                default:
                    cout << "Invalid choice. Exiting program." << endl;
                    break;
            }
            break;
        } else {
            // User entered incorrect PIN
            if (attempts == 3) {
                cout << "Incorrect PIN. You have no attempts left. Exiting program." << endl;
                exit(0);
            } else {
                cout << "Incorrect PIN. You have " << 3-attempts << " attempts left." << endl;
            }
            attempts++;
        }
    }

    return 0;
}
