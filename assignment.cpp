#include <iostream>
using namespace std;

class bank {
private:
    int accno;
    string name;
    double balance;

public:
    void createaccount(int a, string n, double b) {
        accno = a;
        name = n;
        balance = b;
        cout << "account created successfully.\n";
    }

    void deposit(double amount) {
        balance = balance + amount;
        cout << "amount deposited: " << amount << endl;
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance = balance - amount;
            cout << "amount withdrawn: " << amount << endl;
        } else {
            cout << "insufficient balance.\n";
        }
    }

    void checkbalance() {
        cout << "current balance: " << balance << endl;
    }

    void displaydetails() {
        cout << "account number: " << accno << endl;
        cout << "name: " << name << endl;
        cout << "balance: " << balance << endl;
    }
};

int main() {

    bank b;

    b.createaccount(1001, "ram", 5000);
    b.deposit(1000);
    b.withdraw(2000);
    b.checkbalance();
    b.displaydetails();

    return 0;
}
