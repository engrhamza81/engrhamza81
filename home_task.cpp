#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string accountNumber;
    double balance;

public:
    BankAccount(string _accountNumber, double _balance) {
        accountNumber = _accountNumber;
        balance = _balance;
    }

    string getAccountNumber() {
        return accountNumber;
    }

    double getBalance() {
        return balance;
    }

    void deposit(double amount) {
        balance += amount;
    }

    bool withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount;
            return true;
        } else {
            return false;
        }
    }

    void display() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

class Transaction {
private:
    BankAccount* sender;
    BankAccount* receiver;
    double amount;

public:
    Transaction(BankAccount* _sender, BankAccount* _receiver, double _amount) {
        sender = _sender;
        receiver = _receiver;
        amount = _amount;
    }

    bool execute() {
        if (sender->withdraw(amount)) {
            receiver->deposit(amount);
            return true;
        } else {
            return false;
        }
    }

    void display() {
        cout << "Transaction Details:" << endl;
        cout << "Sender Account Number: " << sender->getAccountNumber() << endl;
        cout << "Receiver Account Number: " << receiver->getAccountNumber() << endl;
        cout << "Transferred Amount: " << amount << endl;
    }
};

int main() {
    // Create BankAccount instances
    BankAccount account1("123456789", 1000);
    BankAccount account2("987654321", 2000);

    // Display initial account details
    cout << "Initial Account Details:" << endl;
    account1.display();
    account2.display();

    // Perform transactions
    Transaction transaction1(&account1, &account2, 500);
    Transaction transaction2(&account2, &account1, 300);

    // Execute transactions
    cout << "\nExecuting Transactions:" << endl;
    transaction1.execute();
    transaction2.execute();

    // Display final account details
    cout << "\nFinal Account Details:" << endl;
    account1.display();
    account2.display();

    // Display transaction details
    cout << "\nTransaction 1 Details:" << endl;
    transaction1.display();
    cout << "\nTransaction 2 Details:" << endl;
    transaction2.display();

    return 0;
}
