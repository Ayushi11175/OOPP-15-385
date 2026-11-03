// 05.Design a class to represent a bank account with proper data hiding and member functions for deposit 
//and withdrawal operations. 

#include <iostream>
#include <string>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    string accountHolder;
    double balance;

public:
    // Function to input account details
    void createAccount()
    {
        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cin.ignore();

        cout << "Enter Account Holder Name: ";
        getline(cin, accountHolder);

        cout << "Enter Initial Balance: ";
        cin >> balance;
    }

    // Function to deposit money
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Amount Deposited Successfully!" << endl;
        }
        else
        {
            cout << "Invalid Deposit Amount!" << endl;
        }
    }

    // Function to withdraw money
    void withdraw(double amount)
    {
        if (amount <= 0)
        {
            cout << "Invalid Withdrawal Amount!" << endl;
        }
        else if (amount > balance)
        {
            cout << "Insufficient Balance!" << endl;
        }
        else
        {
            balance -= amount;
            cout << "Withdrawal Successful!" << endl;
        }
    }

    // Function to display account details
    void display()
    {
        cout << "\n----- Account Details -----" << endl;
        cout << "Account Number : " << accountNumber << endl;
        cout << "Account Holder : " << accountHolder << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main()
{
    BankAccount account;
    double amount;

    account.createAccount();

    cout << "\nEnter Amount to Deposit: ";
    cin >> amount;
    account.deposit(amount);

    cout << "\nEnter Amount to Withdraw: ";
    cin >> amount;
    account.withdraw(amount);

    account.display();

    return 0;
}