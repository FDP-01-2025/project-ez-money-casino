#ifndef menu_h
#define menu_h

#include <iostream>
#include <string>

using namespace std;

void showWelcome(){
    cout << " + - + - + - + - + - + - + - + " << endl;
    cout << " | W | E | L | C | O | M | E | " << endl;
    cout << " + - + - + - + - + - + - + - + " << endl;
    cout << endl;
    cout << " + - + - + - + - + - + - + - + - + " << endl;
    cout << " | E | Z |   | M | O | N | E | Y | " << endl;
    cout << " + - + - + - + - + - + - + - + - + " << endl:
}

void userDetails (string &name, int &age, int &money){
    cout << "Please enter a nickname: ";
    cin >> name;
    cout << "Please enter your age: ";
    cin >> age;
    cout << "Enter the amount of money you want to add to your account: ";
    cin >> money;
}

void showCasinoMenu (string name, int &money){
    int choice;

    do{
        while (money <= 0){
            char recharge;
            cout << "You ran out of money" << name << endl;
            cout << "Do you want to recharge your account? (y/n): ";
            cin >> recharge;

            if (recharge == 'y' || recharge == 'Y'){
                int rechargeAmount;
                cout << "Enter the amount to recharge: ";
                cin >> rechargeAmount;

            if (rechargeAmount > 0) {
                money += rechargeAmount;
                cout << "Your account has been recharged. Your new balance is: " << money << endl;

            else{
                
            }
            }
            }

        }
    }
}