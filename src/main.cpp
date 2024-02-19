#include <cstdlib>   // For rand() and srand()
#include <ctime>
#include <iostream>

#include "engine.cpp"


Weapon longsword = Weapon("longsword", Dice(3, 0, 0, 1, 0), 32, false, true);
Weapon dagger = Weapon("dagger", Dice(1, 0, 1, 0, 0), 8, false, true);
Weapon longbow = Weapon("longbow", Dice(3, 0, 0, 1, 0), 32, true, false);
Weapon javelin = Weapon("javelin", Dice(2, 0, 1, 0, 0), 32, true, true);
Armor  chainmail = Armor("chainmail", 16, 160);
Character bob =  Character("bob", 32,Armor(chainmail), Weapon(longsword), 2, true);

int main(int, char**){
    // Seed the random number generator with the current time
    srand(time(nullptr));

    std::cout << "Hello, from dnd-based-game!\n";
    Dice dagger_dices = Dice(1, 0, 2, 0, 0);
    std::cout << "Dagger roll: " << dagger_dices.rollDice() << std::endl;
    std::cout << "longsword melee damage: " << longsword.roll_melee_damage() << std::endl;
    std::cout << "long bow melee damage: " << longbow.roll_melee_damage() << std::endl;
    std::cout << "longsword projectile damage: " << longsword.roll_projectile_damage() << std::endl;
    std::cout << "long bow projectile damage: " << longbow.roll_projectile_damage() << std::endl;
}
