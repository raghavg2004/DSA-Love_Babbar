#include <iostream>
using namespace std;

// =================== Abstraction & Encapsulation =====================
class Account {
private:
    string owner;
    double balance;

public:
    // Constructor
    Account(string name, double initialBalance) {
        owner = name;
        balance = initialBalance;
    }

    // Public method (Abstraction)
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: rs" << amount << endl;
        }
    }

    void withdraw(double amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: rs" << amount << endl;
        } else {
            cout << "Insufficient balance!" << endl;
        }
    }

    void displayBalance() {
        cout << owner << "'s Balance: rs" << balance << endl;
    }

    // Virtual method for Polymorphism
    virtual void accountType() {
        cout << "Generic Account" << endl;
    }
};

// ===================== Inheritance ===========================
class SavingsAccount : public Account {
public:
    SavingsAccount(string name, double initialBalance) : Account(name, initialBalance) {}

    // Overriding method for Polymorphism
    void accountType() override {
        cout << "Savings Account" << endl;
    }
};

class CurrentAccount : public Account {
public:
    CurrentAccount(string name, double initialBalance) : Account(name, initialBalance) {}

    void accountType() override {
        cout << "Current Account" << endl;
    }
};

// ======================= Main Function =======================
int main() {
    // Base class pointer for runtime Polymorphism
    Account* acc1 = new SavingsAccount("Alice", 1000);
    Account* acc2 = new CurrentAccount("Bob", 2000);

    // Using Encapsulation and Abstraction
    acc1->deposit(200);
    acc1->withdraw(100);
    acc1->displayBalance();
    acc1->accountType();  // Polymorphism

    cout << "------------------" << endl;

    acc2->deposit(500);
    acc2->withdraw(300);
    acc2->displayBalance();
    acc2->accountType();  // Polymorphism

    delete acc1;
    delete acc2;

    return 0;
}
