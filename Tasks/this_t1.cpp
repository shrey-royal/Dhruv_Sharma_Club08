// 1. "Create a class 'Employee' to represent an employee in a company. Each employee has a unique ID and salary. Implement a member function 'compareSalary(Employee other)' that takes another employee object as a parameter and uses the 'this' pointer to compare the salary of the current employee with the other employee."

#include<iostream>
using namespace std;

class Employee {
    int id;
    float salary;

public:
    Employee(int id, float salary) {
        this->id = id;
        this->salary = salary;
    }

    void compareSalary(Employee &emp) {
        if(this->salary == emp.salary) {
            cout << "both employees have same salary" << endl;
        } else if(this->salary > emp.salary) {
            cout << "employee 1 have more salary than employee 2" << endl;
        } else {
            cout << "employee 1 have less salary than employee 2" << endl;
        }
    }
};

int main() {
    Employee e1(1, 1000);
    Employee e2(2, 2000);

    e1.compareSalary(e2);
}