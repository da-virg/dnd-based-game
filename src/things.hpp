#include <cstdlib>
#include <iostream>
#include <string>

#include "engine.cpp"

//weapons
Weapon longsword = Weapon("longsword", Dice(3, 0, 0, 1, 0), 32, false, true);
Weapon dagger = Weapon("dagger", Dice(1, 0, 1, 0, 0), 8, false, true);
Weapon longbow = Weapon("longbow", Dice(3, 0, 0, 1, 0), 32, true, false);
Weapon javelin = Weapon("javelin", Dice(2, 0, 1, 0, 0), 32, true, true);

// armor
Armor  chainmail = Armor("chainmail", 16, 160);
Armor  plate = Armor("plate", 19, 240);

//characer
Character joe =  Character( "joe", 20, Armor(plate), Weapon(longsword), 1, false);
Character bob =  Character("bob", 32,Armor(chainmail), Weapon(longsword), 2, true); 