#include <cstdlib>   // For rand() and srand()
#include <ctime>
#include <iostream>

#include "engine.cpp"

using namespace std;


Weapon longsword = Weapon("longsword", Dice(3, 0, 0, 1, 0), 32, false, true);
Weapon dagger = Weapon("dagger", Dice(1, 0, 1, 0, 0), 8, false, true);
Weapon longbow = Weapon("longbow", Dice(3, 0, 0, 1, 0), 32, true, false);
Weapon javelin = Weapon("javelin", Dice(2, 0, 1, 0, 0), 32, true, true);
Armor  chainmail = Armor("chainmail", 16, 160);
Armor  plate = Armor("plate", 19, 240);
Character joe =  Character( "joe", 20, Armor(plate), Weapon(longsword), 1, false);
Character bob =  Character("bob", 32,Armor(chainmail), Weapon(longsword), 2, true); 

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
