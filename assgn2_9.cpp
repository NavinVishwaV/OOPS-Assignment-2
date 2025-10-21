#include <iostream>
using namespace std;

class BankAccount {
private:
    int accountNumber;
    double balance;

public:
    BankAccount(int accNum, double initialBalance) {
        accountNumber = accNum;
        if (initialBalance >= 0) {
            balance = initialBalance;
        } else {
            balance = 0.0;
        }
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful. New balance: $" << balance << endl;
        } else {
            cout << "Deposit failed: Amount must be positive." << endl;
        }
    }

    bool withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful. New balance: $" << balance << endl;
            return true;
        } else {
            cout << "Withdrawal failed: Insufficient funds or invalid amount." << endl;
            return false;
        }
    }

    void display() const {
        cout << "\nAccount " << accountNumber << " Summary" << endl;
        cout << "Current Balance: $" << balance << endl;
    }
};

int main() {
    BankAccount acc(123456, 1500.0);

    acc.display();
    acc.deposit(500.0);
    acc.withdraw(200.0);
    acc.withdraw(3000.0);

    return 0;
}