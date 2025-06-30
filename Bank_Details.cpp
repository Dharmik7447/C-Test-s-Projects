#include<iostream>
#include<string>
using namespace std;

class BankAccount 
{
private:

string accountNumber;
    double balance;
    string ownerName;
public:

    BankAccount(string accNum, string owner, double initialBalance) 
    {
        accountNumber = accNum;
        ownerName = owner;
        balance = initialBalance;
    }

    void credit(double amount) 
    {
        if (amount > 0) 
        {
            balance += amount;
            cout << "Credited: " << amount << endl;
        } 
        else 
        {
            cout << "Invalid credit amount!" << endl;
        }
    }
    
    void debit(double amount) 
    {
        if (amount > 0 && amount <= balance) 
        {
            balance -= amount;
            cout << "Debited: " << amount << endl;
        } 
        else 
        {
            cout << "Invalid debit amount or insufficient balance!" << endl;
        }
    }
    
    void displayBalance() const 
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Owner Name: " << ownerName << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() 
{
    BankAccount acc("123456789", "Dharmik Champaneria", 1000.0);

    acc.displayBalance();
    acc.credit(500.0);
    acc.debit(200.0);
    
    acc.displayBalance();
    acc.debit(2000.0); 
    acc.credit(-50.0); 
    
    return 0;
}
