#include<iostream>
using namespace std;

class Vehicle {
protected:
    string brand;
public:
    Vehicle(string b) : brand(b) {}

    void displayBrand() {
        cout << "Brand: " << brand << endl;
    }
};

class Car : public Vehicle {
protected:
    int seats;
public:
    Car(string b, int s) : Vehicle(b), seats(s) {}

    void displaySeats() {
        cout << "Seats: " << seats << endl;
    }
};

class SUV : public Car {
private:
    bool offRoadCapability;
public:
    SUV(string b, int s, bool offRoad) : Car(b, s), offRoadCapability(offRoad) {}

    void displayOffRoadCapability() {
        cout << "OffRoadCapability: " << (offRoadCapability ? "Yes" : "No") << endl;
        cout << endl;
    }
};

int main() {
    SUV suv("Toyota Land Cruiser", 7, true);

    suv.displayBrand();
    suv.displaySeats();
    suv.displayOffRoadCapability();

    return 0;
}