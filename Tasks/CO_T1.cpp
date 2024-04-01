/*
1. Library Management System (Simple):

-> Problem: Design a system to track books borrowed by a patron.
-> Classes:
    -> Book (attributes: title, author, ISBN)
    -> Patron (attributes: name, library ID)
    -> Checkout (attributes: book object, patron object, checkout date)
-> Methods:
    -> 'Book.borrowedBy(patron)': Marks the book as borrowed by the patron (updates a flag or creates a checkout object).
    -> 'Patron.borrows(book)': Records the borrowing of the book for the patron.
*/

#include<iostream>
#include<string>
using namespace std;

class Book {
private:
    string title, author, ISBN;
    bool borrowed;  //true, false

public:
    Book(string t, string a, string isbn) {
        title = t;
        author = a;
        ISBN = isbn;
        borrowed = false;
    }

    bool isBorrowed() {
        return borrowed;
    }

    void borrowedBy(string p_name) {
        // cout << "Title: " << title << endl;
        // cout << "Author: " << author << endl;
        // cout << "ISBN: " << ISBN << endl;
        borrowed = true;
        cout << "Book \"" << title << "\" borrowed by " << p_name << endl;
    }
};

class Patron {
private:
    string name;
    int LibraryID;

public:
    Patron(string n, int lid) {
        name = n;
        LibraryID = lid;
    }

    void borrows(Book &b) {
        if(!b.isBorrowed()) {
            b.borrowedBy(name);
        } else {
            cout << "Sorry " << name << ", the book is already borrowed." << endl;
        }
    }
};

// class Checkout {
// private:
//     Book* book;
//     Patron* patron;
//     string checkoutDate;

// public:
//     Checkout(Book* b, Patron* p, string chkoutDate) {
//         book = b;
//         patron = p;
//         checkoutDate = chkoutDate;
//     }

//     void display() {
//         cout << "\nBook Details: " << endl;
//         book->displayBookDetails();
//         cout << "\nPatron Details: " << endl;
//         patron->displayPatronDetails();
//         cout << "\nCheckout Date: " << checkoutDate << endl;
//     }
// };

int main() {
    Book b("Life's a Lie", "Dhruv Sharma", "9780743273565");
    Patron p("Saumyya D", 123456);
    Patron p1("Pratham P", 987654);

    // Checkout checkout(&b, &p, "2024-04-01");
    // b.setBorrowed(true);
    // checkout.display();

    p.borrows(b);
    p1.borrows(b);


    return 0;
}