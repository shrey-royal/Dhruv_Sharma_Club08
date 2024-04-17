#include <iostream>
using namespace std;

// Define enum for transaction types
enum class TransactionType { BORROW, RETURN, RENEW };

// Define a struct to represent a resource
struct Resource {
    string title;
    string author;
    bool isAvailable;
    string type; // Type of resource (e.g., "Book", "Journal", "DVD")
};

class Library {
public:
    Resource resources[200]; 

    void performTransaction(TransactionType transaction, int resourceId) {
        if (resourceId >= 0 && resourceId < 200) {
            if (transaction == TransactionType::BORROW) {
                borrowResource(resourceId);
            } else if (transaction == TransactionType::RETURN) {
                returnResource(resourceId);
            } else if (transaction == TransactionType::RENEW) {
                renewResource(resourceId);
            }
        } else {
            cout << "Invalid resource ID.\n";
        }
    }

private:

    void borrowResource(int id) {
        if (resources[id].isAvailable) {
            resources[id].isAvailable = false;
            cout << resources[id].type << " '" << resources[id].title << "' has been borrowed.\n";
        } else {
            cout << resources[id].type << " not available for borrowing.\n";
        }
    }

    void returnResource(int id) {
        if (!resources[id].isAvailable) {
            resources[id].isAvailable = true;
            cout << resources[id].type << " '" << resources[id].title << "' has been returned.\n";
        } else {
            cout << "Cannot return an available " << resources[id].type << ".\n";
        }
    }

    void renewResource(int id) {
        if (!resources[id].isAvailable) {
            cout << resources[id].type << " '" << resources[id].title << "' has been renewed.\n";
        } else {
            cout << "Cannot renew an available " << resources[id].type << ".\n";
        }
    }
};

int main() {
    Library library;

    library.resources[0] = { "Introduction to C++", "John Doe", true, "Book" };
    Resource journal1 = { "Scientific Journal", "Jane Smith", false, "Journal" };
    Resource dvd1 = { "Movie DVD", "Director X", true, "DVD" };

    library.resources[1] = journal1;
    library.resources[2] = dvd1;

    library.performTransaction(TransactionType::BORROW, 0); // Borrowing a book
    library.performTransaction(TransactionType::BORROW, 1); // Borrowing a journal
    library.performTransaction(TransactionType::BORROW, 2); // Borrowing a DVD

    return 0;
}
