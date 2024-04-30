#include<iostream>
using namespace std;

class Account {
private:
    int accNo;
    string accHolderName;
    double balance;

public:
    Account(int accNo, string accHolderName) {
        this->accNo = accNo;
        this->accHolderName = accHolderName;
        this->balance = 10000;
    }

    //getter
    int getAccountNumber() {
        return accNo;
    }

    string getAccountHolderName() {
        return accHolderName;
    }

    double getBalance() {
        return balance;
    }

    //setter
    void setAccountHolderName(string newAcocuntHolderName) {
        accHolderName = newAcocuntHolderName;
    }
};

int main() {
    Account a1(1011, "Dhruv");

    cout << "Account Number: " << a1.getAccountNumber() << endl;
    a1.setAccountHolderName("Dhruv Sharma");
    cout << "Account Holder Name: " << a1.getAccountHolderName() << endl;
    cout << "Balance: " << a1.getBalance() << endl;

    return 0;
}