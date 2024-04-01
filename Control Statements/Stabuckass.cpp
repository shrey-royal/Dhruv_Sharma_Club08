#include<iostream>
using namespace std;

// void coffeeTypes();
void teaTypes();
void milkTypes();
void juiceTypes();
void waterTypes();
void sodaTypes();
int chooseSize(int);

int main() {
    int price=0, choice;

    do {
        // system("pause");    //getch
        system("cls");  //clear your console screen
        cout << "\nYour Total Bill: " << price;
        cout << "\n\n1. Coffee" << endl;
        cout << "2. Tea" << endl;
        cout << "3. Milk" << endl;
        cout << "4. Juice" << endl;
        cout << "5. Water" << endl;
        cout << "6. Soda" << endl;
        cout << "0. Exit" << endl;
        cout << "-> Select your option: ";
        cin >> choice;

        system("cls");
        cout << "\nYour Total Bill: " << price;
        switch (choice) {
            case 1:
                cout << "\n1. Cappuccino" << endl;
                cout << "2. Latte" << endl;
                cout << "3. Espresso" << endl;
                cout << "4. Americano" << endl;
                cout << "5. Mocha" << endl;
                cout << "99. back to main menu" << endl;
                cout << "-> Select your coffee: " << endl;
                cin >> choice;
                switch (choice) {
                case 1:
                    cout << "Select Cappuccino size: ";
                    price += chooseSize(200);
                    break;
                
                case 2:
                    cout << "Select Latte size: ";
                    price += chooseSize(100);
                    break;

                case 3:
                    cout << "Select Espresso size: ";
                    price += chooseSize(70);
                    break;

                case 4:
                    cout << "Select Americano size: ";
                    price += chooseSize(150);
                    break;

                case 5:
                    cout << "Select Mocha size: ";
                    price += chooseSize(180);
                    break;  

                case 99:
                    break;      

                default:
                    cout << "Invalid Coffee Choice!" << endl;
                    break;
                }
                break;

            case 0:
                cout << "\nExiting Program" << endl;
                break;
            
            default:
                break;
        }
        cout << endl;
        system("pause");
    }while(choice != 0);

    return 0;
}

int chooseSize(int price) {
    int size, qty=1, t, g, v;
    
    t = price;
    g = t+(price * 25)/100;
    v = t+(price * 50)/100;

    cout << "\n1. Tall -> " << t << endl;
    cout << "2. Grande -> " << g << endl;
    cout << "3. Venti -> " << v << endl << "-> ";
    cin >> size;

    cout << "How many you want: ";
    cin >> qty;

    if(size == 1) {
        return t*qty;
    } else if(size == 2) {
        return g*qty;
    } else if(size == 3) {
        return v*qty;
    }

    return 0;
}

// void coffeeTypes() {
//     cout << "Cappuccino" << endl;
//     cout << "Latte" << endl;
//     cout << "Espresso" << endl;
//     cout << "Americano" << endl;
//     cout << "Mocha" << endl;
// }