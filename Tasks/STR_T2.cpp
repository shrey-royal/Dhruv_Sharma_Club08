// 2. Theater Concession Stand Management:
//    Develop a program for managing inventory and sales at a theater's concession stand. The system should allow employees to add new items, update quantities, and process sales transactions. Additionally, it should generate daily reports summarizing total sales and remaining inventory.


#include<iostream>
#include<string>
using namespace std;

class Item {
    string name;
    int quantity;
    float price;

public:
    Item() {}
    Item(string n, int q, float p) : name(n), quantity(q), price(p) {}

    string getName() {
        return name;
    }

    int getQuantity() {
        return quantity;
    }

    float getPrice() {
        return price;
    }

    void updateQuantity(int q) {
        quantity += q;
    }

    float getTotalPrice(int q) {
        return q * price;
    }
};

class ConcessionStand {
private:
    Item items[10];
    int itemCount;
    float totalSales;
public:
    ConcessionStand() : itemCount(0), totalSales(0) {}

    void addItem(string name, int quantity, float price) {
        if(itemCount < 10) {
            items[itemCount++] = Item(name, quantity, price);
        } else {
            cout << "Inventory is full. Cannot add more items." << endl;
        }
    }

    void updateItem(string name, int quantity) {
        for (int i = 0; i < itemCount; i++) {
            if(items[i].getName().compare(name) == 0) {
                items[i].updateQuantity(quantity);
                return;
            }
        }
        cout << "Item not found in inventory." << endl;      
    }

    void processSales(string name, int quantity) {
        for (int i = 0; i < itemCount; i++)
        {
            if(items[i].getName() == name) {
                if(items[i].getQuantity() >= quantity) {
                    float totalPrice = items[i].getTotalPrice(quantity);
                    cout << "Total price for " << quantity << " " << name << " is Rs." << totalPrice << endl;
                    totalSales += totalPrice;
                    items[i].updateQuantity(-quantity);
                    return;
                } else {
                    cout << "Insufficient quantity of " << name << " in inventory." << endl;
                    return;
                }
            }
        }
        cout << "Item not found in inventory." << endl;
    }

    void generateReport() {
        cout << "Daily Report: " << endl;
        for (int i = 0; i < itemCount; i++) {
            cout << items[i].getName() << " - Quantity: " << items[i].getQuantity() << ", Price: Rs." <<  items[i].getTotalPrice(items[i].getQuantity()) << endl;
        }
        cout << "Total Sales: Rs." << totalSales << endl;
    }
};

int main() {
    ConcessionStand stand;

    //Adding items into inventory
    stand.addItem("Popcorn", 20, 250);
    stand.addItem("Soda", 30, 100);
    stand.addItem("Candy", 15, 70);

    //processing sales
    stand.processSales("Popcorn", 5);
    stand.processSales("Soda", 10);
    stand.processSales("Candy", 8);

    //updating inventory
    stand.updateItem("Popcorn", 10);

    //generate daily report
    stand.generateReport();

    return 0;
}