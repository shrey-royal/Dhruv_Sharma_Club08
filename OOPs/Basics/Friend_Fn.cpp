#include<iostream>
using namespace std;

class MyClass {
private:
    int data;

public:
    MyClass(int d) {
        data = d;
    }

    friend void printData(MyClass& obj);    //made friend
};

void printData(MyClass& obj) {      //use friendship
    cout << "current data: " << obj.data << endl;
}

int main() {
    MyClass a(45);
    MyClass b(987);
    MyClass c(450);

    printData(b);

    return 0;
}

/*
Tasks:

1. Calculate the sum of two private data members of different classes: Create two classes with private data members and a friend function to calculate the sum of those data members.
   
2. Compare the private data members of two different classes: Define two classes with private data members and a friend function to compare those data members and determine which class has a greater value.

3. Access private members of a class from another class: Define a class with private data members and another class with a friend function to access and modify those private members.

4. Calculate the average of private data members of a class: Create a class with private data members and a friend function to calculate the average of those data members.

5. Perform matrix addition using friend function: Define a class for matrices with private data members and a friend function to add two matrices.

6. Perform vector addition using friend function: Create a class for vectors with private data members and a friend function to add two vectors.

7. Implement a simple calculator using friend functions: Define a class representing a calculator with private data members for operands and a friend function for performing arithmetic operations.

8. Swap private data members of two different classes: Define two classes with private data members and a friend function to swap those data members between instances of the classes.

9. Calculate the area of a triangle using friend function: Define a class representing a triangle with private data members for its sides and a friend function to calculate its area.

10. Perform string concatenation using friend function: Create a class for strings with private data members and a friend function to concatenate two strings.

*/