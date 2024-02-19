#include <cstdlib>   // For rand() and srand()
#include <ctime>
#include <iostream>

//#include "engine.cpp"

#include "things.hpp"


using namespace std;




int main(int, char**){
    // Seed the random number generator with the current time
    srand(time(nullptr));

    cout << "Hello, from dnd-based-game!\n";
    Dice dagger_dices = Dice(1, 0, 2, 0, 0);
    cout << "Dagger roll: " << dagger_dices.rollDice() << std::endl;
    cout << "longsword melee damage: " << longsword.roll_melee_damage() << std::endl;
    cout << "long bow melee damage: " << longbow.roll_melee_damage() << std::endl;
    cout << "longsword projectile damage: " << longsword.roll_projectile_damage() << std::endl;
    cout << "long bow projectile damage: " << longbow.roll_projectile_damage() << std::endl;
    cout << "Joe melee damage: " << joe.roll_melee_damage() << endl;
}
