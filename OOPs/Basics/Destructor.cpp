#include<iostream>
using namespace std;

class Student {
public:
    int rollNo;
    string name;
    float marks;
    int *arr;

    Student() {
        rollNo = 1;
        name = "dhaval";
        marks = 68.4;
        cout << "Constructor called" << endl;
        arr = (int *)malloc(10*sizeof(int));
    }

    void display() {
        cout << "Roll No.: " << rollNo << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
        arr[0] = 345;
        cout << "arr[0] = " << arr[0] << endl;
    }

    //Destructor (~ tilde)
    ~Student() {
        // free(arr);
        delete arr;
        cout << "Destructor called! -> arr[0] = " << arr[0] << endl;
    }
};

int main() {
    Student s;

    s.display();

    return 0;
}

/*
Tasks:

1. Shape Class: Create a simple 'Shape' class with a destructor. The destructor should print a message indicating that the shape object is being destroyed. This class can serve as a base class for other shapes like 'Circle', 'Rectangle', etc.

2. Calculator Class: Design a basic 'Calculator' class with functionalities for addition, subtraction, multiplication, and division. Implement a destructor to print a message when the calculator object is destroyed.

3. Point Class: Define a 'Point' class representing a point in 2D space. Implement a destructor to print a message when a 'Point' object is destroyed.

4. Triangle Class: Create a 'Triangle' class that inherits from the 'Shape' class. Implement a destructor for the 'Triangle' class that prints a message when a 'Triangle' object is destroyed.

5. Simple Inventory Management: Design an 'InventoryItem' class to represent items in an inventory. Implement a destructor to print a message when an 'InventoryItem' object is destroyed.

*/