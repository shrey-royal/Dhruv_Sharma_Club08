#include <iostream>
using namespace std;

class ClassB; // Forward declaration for friend function

class ClassA {
private:
    int dataA;

public:
    ClassA(int val) {
        dataA = val;
    }

    friend int sumData(ClassA& objA, ClassB& objB);
};

class ClassB {
private:
    int dataB;

public:
    ClassB(int val) {
        dataB = val;
    }

    friend int sumData(ClassA& objA, ClassB& objB);
};

int sumData(ClassA& objA, ClassB& objB) {
    return objA.dataA + objB.dataB;
}

int main() {
    ClassA objA(5);
    ClassB objB(15);

    cout << "Sum of private data members: " << sumData(objA, objB) << endl;

    return 0;
}
