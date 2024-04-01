#include<iostream>
using namespace std;

class Student {
private:
    int rollNo;
    string name;
    float marks;

public:
    Student() {}
    // Student() {
    //     rollNo = 0;
    //     name = "";
    //     marks = 0.0;
    //     cout << "Default constructor called..." << endl;
    // }

    Student(const std::string& naam, string n) {
        cout << "\nEnter your rollNo.: ";
        cin >> rollNo;

        cout << "\nEnter your name: ";
        cin.ignore();
        getline(cin, name);

        cout << "\nEnter your marks: ";
        cin >> marks;
    }

    // Student(int r, string n, float m) {
    //     rollNo = r;
    //     name = n;
    //     marks = m;
    //     cout << "Parameterized constructor called..." << endl;
    // }

    void display() {
        cout << "RollNo.: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};


int main() {
    // int rno;
    // string n;
    // float m;
    // Student s(101, "Dhruv", 90.9), s1(102, "Saumyya", 99.9);
    
    // s.display();
    // cout << endl;
    // s1.display();

    // cout << "\nEnter your rollNo.: ";
    // cin >> rno;

    // cout << "\nEnter your name: ";
    // cin.ignore();
    // getline(cin, n);

    // cout << "\nEnter your marks: ";
    // cin >> m;

    // Student s2(rno, n, m);

    // s2.display();

    Student s;
    s.display();


    return 0;
}

/*
Constructor: it is a special method which invokes automatically upon creation of the object.
constructors are used to initialize the data members

3 types of constructors: 
1) Default Constructor (Non-parameterized Constructor)
2) Parameterized Constructor (Parameterized Constructor)
3) Copy Constructor

Rules: 
> the name of the constructor should be the same as the class name
> it cannot have return type
> it must be public

> CPP will create a default constructor everytime we create an object.

*/