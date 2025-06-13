#include "menu.h"
#include "blackjack.h"
#include "craps.h"

int main(){
    string name;
    int age;
    int money;

    showWelcome();
    userData(name, age, money);
    saveUserData(name, age, money);

    if (age < 18) {
        cout << "You must be at least 18 years old to play." << endl;
        return 0;
    }

    showCasinoMenu(name, money);

    return 0;
}