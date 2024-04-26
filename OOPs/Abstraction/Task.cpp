/*
Problem Statement: Food Ordering System

Design and implement a simple food ordering system using C++ that allows customers to order burgers and drinks. The system should provide the following functionalities:

1. Food Items: Implement an abstract class 'FoodItem' with the following attributes:
   - 'name': Name of the food item (string).
   - 'price': Price of the food item (double).

2. Concrete Classes: Implement concrete classes 'Burger' and 'Drink' that inherit from the 'FoodItem' class. Each of these classes should:
   - Override the 'display()' function to display the details of the food item (name and price).
   
3. Order Management: Implement a class 'Order' to manage customer orders. The 'Order' class should:
   - Allow customers to add food items to their order. 
   - Calculate the total price of the order.
   - Display the details of the order, including the items ordered and the total price.

4. Main Program: Write a main program that demonstrates the functionalities of the food ordering system:
   - Create an order instance.
   - Add multiple burger and drink items to the order.
   - Display the details of the order, including the items ordered and the total price.

Ensure proper memory management and error handling in your implementation. Use arrays to store food items in an order, and demonstrate abstraction by utilizing abstract classes and virtual functions appropriately.
*/

#include<iostream>
using namespace std;

class FoodItem {
protected:
    string name;
    double price;
public:
    FoodItem(string n, double p) : name(n), price(p) {}

    virtual void display() = 0;
    
    virtual string getName() {
        return name;
    }
    
    virtual double getPrice() {
        return price;
    }
};


class Burger : public FoodItem {
public:
    Burger(string n, double p) : FoodItem(n, p) {}

    void display() override {
        cout << "Burger: " << name << " - Rs." << price << endl;
    }
};

class Drink : public FoodItem {
public:
    Drink(string n, double p) : FoodItem(n, p) {}

    void display() override {
        cout << "Drink: " << name << " - Rs." << price << endl;
    }
};

class Order {
private:
    FoodItem **items;
    int size;
    int capacity;
public:
    Order(int cap) : size(0), capacity(cap) {
        items = new FoodItem*[capacity];
    }

    ~Order() {
        for (int i = 0; i < size; i++) {
            delete items[i];
        }
        delete[] items;
    }

    void addItem(FoodItem *item) {
        if(size < capacity) {
            items[size++] = item;
        } else {
            cout << "Order is full. Cannot add " << item->getName() << " into the menu." << endl;
        }
    }

    double calculateTotal() {
        double total = 0.0;
        for (int i = 0; i < size; i++) {
            total += items[i]->getPrice();
        }
        return total;
    }

    void displayOrder() {
        cout << "Your Order: " << endl;
        for (int i = 0; i < size; i++) {
            items[i]->display();
        }
        cout << "Total: Rs." << calculateTotal() << endl;
    }
};

int main() {
    Order order(3);

    order.addItem(new Burger("Cheeseburger", 199));
    order.addItem(new Drink("Coke", 40));
    order.addItem(new Drink("Pepsi", 20));
    order.addItem(new Drink("Classic Burger", 70));

    order.displayOrder();

    return 0;
}

