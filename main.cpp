#include "menu.h"
#include "blackjack.h"
#include "craps.h"

int main(){
    string name;
    int age;
    int money;

    showWelcome();
    userDetails(name, age, money);

    if (age < 18) {
        cout << "You must be at least 18 years old to play." << endl;
        return 0;
    }

    showCasinoMenu(name, money);
    playBlackjack(name, money);
    playCraps(name, money);

    return 0;
}