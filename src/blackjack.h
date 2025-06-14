#ifndef blackjack_h
#define blackjack_h

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

void showCard (int value){
    string content;

    if (value == 1)
        content = " A ";
    else if (value == 11)
        content = " J ";
    else if (value == 12)
        content = " Q ";
    else if (value == 13)
        content = " K ";
    else if (value == 10)
        content = " 10 ";
    else if (value == 9)
        content = " 9 ";
    else if (value == 8)
        content = " 8 ";
    else if (value == 7)
        content = " 7 ";
    else if (value == 6)
        content = " 6 ";
    else if (value == 5)
        content = " 5 ";
    else if (value == 4)
        content = " 4 ";
    else if (value == 3)
        content = " 3 ";
    else if (value == 2)
        content = " 2 ";
    
        cout << "________" << endl;
        cout << "|" << content << "|" << endl;
        cout << "|      |" << endl;
        cout << "|  ♠ ♥ |" << endl;
        cout << "|      |" << endl;
        cout << "————————" << endl;

}

void blackjackRegister(const string &name, int bet, bool win, int finalBalance){
    ofstream archive("game_logs.txt", ios::app);
    if (archive.is_open()){
        archive << "[Blackjack] Player: " << name << ", Bet: $: " << bet << ", Results: " << (win ?  "Win" : "Lose") << ", Final Balance: " << finalBalance << endl;
        archive.close();
    }
}

void playBlackjack (string name, int &money){
    srand(time(0));
    char play = 's';

    while (play == 's' || play == 'S'){
        if (money <= 0){
            cout << "You dont have enough money." << endl;
            return;
        }

        int bet;
        cout << "[BLACKJACK MEGA]" << endl;
        cout << "Your current balance: $" << money << endl;
        cout << "Place your bet: " << endl;
        cin >> bet;
        
        if (bet > money || bet <= 0){
            cout << "Invalid bet" << endl;
            continue;
        }

        //Mano del usuario


    }


}

#endif