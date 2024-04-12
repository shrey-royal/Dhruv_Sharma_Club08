#include<iostream>
using namespace std;

class Item {
protected:
    string name;
    float price;
    string* ingredients;
    int numIngredients; 

public:
    Item(string name, float price, string* ingr, int numIngr) : name(name), price(price), numIngredients(numIngr) {
        ingredients = new string[numIngr];
        for(int i=0 ; i<numIngr; i++) {
            ingredients[i] = ingr[i];
        }
    }

    ~Item() {
        delete[] ingredients;
    }
};

class Appetizer : public Item {
public:
    Appetizer(string name, float price, string* ingr, int numIngr) : Item(name, price, ingr, numIngr) {}

    void customizeItem() {
        cout << "Customizing Appetizer: " << name << endl;
        //add customization logic here
    }

    void displayMenu() {
        cout << "Appetizer: " << name << ", Price: Rs." << price << ", Ingredients: ";
        for (int i = 0; i < numIngredients; i++)
        {
            cout << ingredients[i];
            if(i < numIngredients-1) {
                cout << ", ";
            }
        }
        cout << endl;
    }
};

class MainCourse : public Item {
public:
    MainCourse(string name, float price, string* ingr, int numIngr) : Item(name, price, ingr, numIngr) {}

    void customizeItem() {
        cout << "Customizing Main Course: " << name << endl;
        //add customization logic here
    }

    void displayMenu() {
        cout << "Main Course: " << name << ", Price: Rs." << price << ", Ingredients: ";
        for (int i = 0; i < numIngredients; i++)
        {
            cout << ingredients[i];
            if(i < numIngredients-1) {
                cout << ", ";
            }
        }
        cout << endl;
    }
};

int main() {
    string appetizerIngredients[] = {"Tomato", "Basil", "Bread"};
    string mainCourseIngredients[] = {"Pasta", "Sauce", "Spices"};

    Appetizer appetizer("Bruschetta", 899, appetizerIngredients, 3);
    MainCourse mainCourse("Spaghetti", 1299, mainCourseIngredients, 3);

    cout << "Menu: \n";
    appetizer.displayMenu();
    mainCourse.displayMenu();

    //customizing
    appetizer.customizeItem();
    mainCourse.customizeItem();


    return 0;
}
