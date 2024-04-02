#include<iostream>
using namespace std;

class Book {
    int ISBN;
    string title, author;
    float price;

public:
    Book() {}

    Book(int isbn, string t, string a, float p) {
        ISBN = isbn;
        title = t;
        author = a;
        price = p;
    }

    Book (Book &book) {
        ISBN = book.ISBN;
        title = book.title;
        author = book.author;
        price = book.price;
    }

    void display() {
        cout << "ISBN: " << ISBN << endl;
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    Book b(1244, "Life's a Lie", "Dhruv Sharma", 499);

    // b.ISBN = 1234;
    // b.title = "Life's a Lie";
    // b.author = "Dhruv Sharma";
    // b.price = 499;

    b.display();
    cout << endl;

    Book b1(b);
    b1.display();

    return 0;
}

/*
Tasks: 

1. Create a class representing a basic geometric shape such as a circle or rectangle. Implement a copy constructor to duplicate objects of this class.
   
2. Design a class to represent a simple shopping cart item with attributes like name, price, and quantity. Implement a copy constructor to create a copy of a shopping cart item object.

3. Develop a class to model a basic employee with attributes like name, age, and salary. Write a copy constructor to duplicate an employee object.

4. Construct a class to represent a basic book with attributes such as title, author, and publication year. Implement a copy constructor to duplicate book objects.

5. Create a class to represent a simple bank account with attributes like account number, balance, and account holder name. Write a copy constructor to duplicate a bank account object.

6. Design a class to model a basic vehicle with attributes like make, model, and year. Implement a copy constructor to duplicate a vehicle object.

7. Develop a class to represent a simple student with attributes like name, age, and grade. Write a copy constructor to duplicate a student object.

8. Construct a class to represent a basic computer with attributes such as brand, processor type, and RAM size. Implement a copy constructor to duplicate computer objects.

9. Create a class to represent a simple contact with attributes like name, email, and phone number. Write a copy constructor to duplicate a contact object.

10. Design a class to model a basic product with attributes such as name, description, and price. Implement a copy constructor to duplicate product objects.

*/