#include<iostream>
using namespace std;

class Employee {
private:
    string name;
    int employeeID;
public:
    Employee(string n, int id) : name(n), employeeID(id) {}

    void display() {
        cout << "Name: " << name << ", Employee ID: " << employeeID;
    }
};

class Manager : public Employee {
private:
    string department;
public:
    Manager(string n, int id, string dept) : Employee(n, id), department(dept) {}

    void display() {
        cout << "Manager - ";
        Employee::display();
        cout << ", Department: " << department << endl;
    }
};

class Engineer : public Employee {
private:
    string specialization;
public:
    Engineer(string n, int id, string spec) : Employee(n, id), specialization(spec) {}

    void display() {
        cout << "Engineer - ";
        Employee::display();
        cout << ", Specialization: " << specialization << endl;
    }
};

int main() {
    Manager manager("Dhruv S", 1011, "Engineering Department");
    Engineer employee("Yug P", 3402, "Software Development");

    cout << endl;
    manager.display();
    employee.display();
    cout << endl;


    return 0;
}