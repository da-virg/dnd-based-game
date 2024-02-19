#include <cstdlib>
#include <iostream>
#include <string>

using namespace std;

class Dice {
    private: 

        int constant;
        int d4;
        int d6;
        int d10;
        int d20;

    public:

        Dice(int constant, int d4, int d6, int d10, int d20):
            constant(constant), d4(d4), d6(d6), d10(d10), d20(d20)
        {};

        int rollDice() {
            // Generate a random number between 1 and the number of sides
            int return_value = constant;
            return_value += (rand() % 4 + 1) * d4;
            return_value += (rand() % 6 + 1) * d6;
            return_value += (rand() % 10 + 1) * d10;
            return_value += (rand() % 20 + 1) * d20;
            return return_value;
        };
};  

class Weapon {
    private:

        string name; 
        Dice damage;
        int wieght;
        bool projectile;
        bool melee;

    public: 

        Weapon (string name, Dice damage, int wieght, bool projectile, bool melee):
        name(name), damage(damage), wieght(wieght), projectile(projectile), melee(melee)
        {};

        int roll_melee_damage()
        {   
            int return_value;
            if (melee){
                return_value = damage.rollDice();
            } else {
                return_value = (rand() % 4 + 1);
            }
            return return_value;
        };

         int roll_projectile_damage()
        {   
            int return_value;
            if (projectile){
                return_value = damage.rollDice();
            } else {
                return_value = (rand() % 4 + 1);
            }
            return return_value;
        };
};

class Armor {
    private: 

        string name;
        int ac;
        int weight;

    public: 

        Armor(string name, int ac, int weight):
        name(name), ac(ac), weight(weight) 
        {}; 

};

class Character {
    private:

        string name;
        int health;
        Armor armor;
        Weapon weapon;
        int num_attacks;
        bool playable;

    public:

        Character(string name, int health, Armor armor, Weapon weapon, int num_attacks, bool playable):
        name(name), health(health), armor(armor), weapon(weapon), num_attacks(num_attacks), playable(playable) 
        {};

        int roll_melee_damage()
        {
            int damage = 0;
            for (int i = 0; i < num_attacks; i++) {
                damage += weapon.roll_melee_damage();
            }
            return damage;
        };

};
