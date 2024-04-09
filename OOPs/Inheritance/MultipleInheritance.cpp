#include<iostream>
using namespace std;

class Beverages {
protected:
    string name;
    float price;
public:
    Beverages(string n, float p) : name(n), price(p) {}
};

class Soda {
protected:
    string flavor;
public:
    Soda(string flvr) : flavor(flvr) {}
};

class ColdDrink : public Beverages, public Soda {
public:
    ColdDrink(string n, float p, string flvr) : Beverages(n, p), Soda(flvr) {}

    void display() {
        cout << "Name: " << name << ", Price: Rs." << price << ", Flavor: " << flavor << endl;
    }
};

int main() {
    ColdDrink c("Coca Cola", 20, "Cola");
    ColdDrink c2("Limca", 20, "Lemon");

    c.display();
    c2.display();

    return 0;
}