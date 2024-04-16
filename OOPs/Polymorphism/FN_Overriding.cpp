// Implement a base class 'BankAccount' with a function 'calculateInterest()'. Derive classes 'SavingsAccount' and 'CurrentAccount' from 'BankAccount' class. Override the 'calculateInterest()' function in each derived class to calculate the interest based on the type of account.

#include<iostream>
using namespace std;

class BankAccount {
protected:
    double balance;
public:
    BankAccount(double initialBalance) : balance(initialBalance) {}

    double calculateInterest() {
        return 0.0;
    }

    double getBalance() {
        return balance;
    }
};

class SavingsAccount : public BankAccount {
public:
    SavingsAccount(double initialBalance) : BankAccount(initialBalance) {}

    double calculateInterest() {
        balance += balance * 0.05;
        return balance;
    }
};

class CurrentAccount : public BankAccount {
public:
    CurrentAccount(double initialBalance) : BankAccount(initialBalance) {}

    double calculateInterest() {
        balance += balance * 0.02;
        return balance;
    }
};

int main() {
    SavingsAccount savings(1000);
    CurrentAccount current(2000);

    cout << "Savings Account Balance: Rs." << savings.getBalance() << endl;
    cout << "Interest earned on Savings Account: Rs." << savings.calculateInterest() << endl;
    cout << "Savings Account Balance: Rs." << savings.getBalance() << endl;

    cout << "Current Account Balance: Rs." << current.getBalance() << endl;
    cout << "Interest earned on Current Account: Rs." << current.calculateInterest() << endl;
    cout << "Current Account Balance: Rs." << current.getBalance() << endl;

    return 0;
}




/*
Tasks:

1. Create a base class 'Shape' with a function 'calculateArea()'. Derive classes 'Circle' and 'Rectangle' from 'Shape' class and override the 'calculateArea()' function in each derived class to compute the area specific to the shape.

2. Implement a base class 'Animal' with a function 'makeSound()'. Derive classes 'Dog', 'Cat', and 'Bird' from 'Animal' class. Override the 'makeSound()' function in each derived class to represent the unique sound each animal makes.

3. Design a base class 'Employee' with a function 'calculateSalary()'. Derive classes 'Manager' and 'Developer' from 'Employee' class. Override the 'calculateSalary()' function in each derived class to compute the salary based on specific criteria for each role.

4. Create a base class 'Vehicle' with a function 'accelerate()'. Derive classes 'Car' and 'Bike' from 'Vehicle' class. Override the 'accelerate()' function in each derived class to represent the acceleration behavior of a car and a bike respectively.

5. Design a base class 'Shape' with a function 'draw()'. Derive classes 'Circle', 'Square', and 'Triangle' from 'Shape' class. Override the 'draw()' function in each derived class to visualize the respective shapes using ASCII art or graphics libraries.

*/