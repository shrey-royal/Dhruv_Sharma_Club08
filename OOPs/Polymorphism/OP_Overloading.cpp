#include<iostream>
using namespace std;

class Test {
private:
    int num;
public:
    Test(int n) : num(n) {}

    int operator++() {
        return (num += 2);
    }

    int operator++(int) {
        return (num += 3);
    }

    void print() {
        cout << "The count is " << num << endl;
    }
};

class StringArithmetic {
private:
    string str;
public:
    StringArithmetic() {}
    StringArithmetic(string s) : str(s) {}

    StringArithmetic operator+(StringArithmetic& obj) {
        return StringArithmetic(str + obj.str);
    }

    void display() {
        cout << str << endl;
    }

};


int main() {
    // Test t(5);

    // cout << ++t << endl;
    // // t.print();
    
    // cout << t++ << endl;
    // t.print();

    // StringArithmetic s1("Hello"), s2(" World!"), s3;
    // s3 = s1 + s2;
    // s3.display();

    StringArithmetic s1("Hello"), s2(" World!");

    cout << "\nAddition: ";
    (s1 + s2).display();
    cout << endl;

    // cout << "\nSubtraction: ";
    // (s1 - StringArithmetic("l")).display();   // Removing 'l' from "Hello"
    // cout << endl;

    // cout << "\nMultiplication: ";
    // (s1*3).display();   // "Hello" repeated 3 times
    // cout << endl;


    return 0;
}

/*
OPs that can't be overloaded:
    - Scope Operator (::)
    - Sizeof
    - member selector (.)
    - member pointer selector (*)
    - ternary operator (?:)

*/