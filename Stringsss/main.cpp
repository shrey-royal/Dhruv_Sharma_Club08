#include<iostream>
#include<string>
using namespace std;

int main() {
    //Declare and initialize a string
    string myStr = "Hello, World";

    //length -> returns the length of the string
   //  cout << myStr.length();

    //substr() -> used to extract a part of a string
   //  string mySubStr = myStr.substr(7, 5);
   //  cout << mySubStr << endl; 

    //find() -> returns index of found substring (returns -1 if not found)
   //  int index = myStr.find("World", 5);
   //  cout << "'world' found at index: " << index << endl;
   //  if(index != string::npos) {
   //      cout << "'World' found at position: " << index << endl;
   //  } else {
   //      cout << "'World' not found in the string." << endl;
   //  }

    //replace() -> replaces a certain substring into the given string
   //  myStr.replace(7, 5, "everyone");
   //  cout << "After replacement: " << myStr << endl;

    //append() -> add new string at the end of an existing one
   //  myStr.append(" Have a nice day!");
   //  cout << "After appending: " << myStr << endl;

    //erase() -> used to remove a part of a string
   //  myStr.erase(6, 9);
   //  cout << "After erasing: " << myStr << endl;

    //compare() -> match 2 strings (output is same as strcmp())
   //  string anotherString = "Hello, World!";

   //  int comparision = myStr.compare(anotherString);
   //  if(comparision == 0) {
   //      cout << "The strings are equal." << endl;
   //  } else if(comparision < 0) {
   //      cout << "The first string is less than the second string." << endl;
   //  } else {
   //      cout << "The first string is greater than the second string." << endl;
   //  }

    //swap() -> used to swap 2 strings
   //  string tempString = "Goodbye!";
   //  cout << "Before Swap - myStr: " << myStr << ", tempString: " << tempString << endl;
   //  myStr.swap(tempString);
   //  cout << "After Swap - myStr: " << myStr << ", tempString: " << tempString << endl;

    //size() -> get the size in bytes
   //  cout << "Size of the string in bytes: " << myStr.size() << endl;

    //resize() -> allocate a new size to the string
   //  myStr.resize(50);
   //  cout << "After resizing: " << myStr << endl;
   //  cout << "Size of the string in bytes: " << myStr.size() << endl;

    //at() -> returns a character present the the specified index
   //  char character = myStr.at(4);
   //  cout << "Character at index 2: '" << character << "'" << endl;


    return 0;
}

/*
Tasks - Level 0:

1. Movie Ticket Booking System:
   Implement a movie ticket booking system where users can input their desired movie, date, and time, and the system checks for available seats. Upon successful booking, the system should update the seat availability and generate a unique booking ID for the user.

2. Theater Concession Stand Management:
   Develop a program for managing inventory and sales at a theater's concession stand. The system should allow employees to add new items, update quantities, and process sales transactions. Additionally, it should generate daily reports summarizing total sales and remaining inventory.

3. Airline Reservation System:
   Create an airline reservation system that enables users to search for flights based on their origin, destination, and preferred travel dates. Once a flight is selected, the system should display available seats and allow users to book tickets. It should also handle seat assignments and confirmations.

4. Restaurant Menu Management:
   Design a system for managing menus at a restaurant, allowing the staff to add, remove, or modify menu items. The system should also support categorization of items (e.g., appetizers, main courses, desserts) and pricing adjustments. Additionally, it should generate printable menus for customers.

5. Food Delivery Service Tracking:
   Develop a program for tracking food delivery orders from a restaurant to customers' locations. The system should provide real-time updates on order status, including preparation, pickup, and delivery stages. It should also calculate estimated delivery times based on distance and traffic conditions.

*/