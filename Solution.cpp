// == File: Solution.cpp ======================
// Programmer: Jennifer King
// Date created: 3/17/2020
// Last updated: 3/17/2020
// Description: 
// Pokémon Trade Application

// Write a program that fulfills all the following requirements.

// Program Flow:
// 1.  Trainer A has a Pikachu and Trainer B has a Squirtle
// 2.  The two trainers will swap Pokémon. 

// Pokémon Features:
// 1.  Create the Pokémon classes; Pikachu and Squirtle
// 2.  It should be easy to extend to support other Pokémon types.
// 3.  Pokémon attributes and behavior
//    a.  Life Points - A “life” value that will be initialized to a random value 
//         between 50 and 100 at time of creation.
//    b.  Attack - When it attacks, the attack value is randomized between 25 and 
//        40 
//    c.  Defend - When attacked, the defending Pokémon will have a 33% chance to 
//        avoid (zero) damage. If not avoided the attack damage is taken from the 
//        pokémon’s life points
// 4.  Pikachu attributes and behavior
//    a.  It has a 25% chance of increasing attack damage by 50%
// 5.  Squirtle attributes and behavior
//    a.  Avoid chance of 50%
//    b.  Life value range of 70 – 100
//
// Pokémon Trainer Features:
//  1.  Create a trainer class with a name and pokémon partner

// Note:
//  •  C++ language preferred
//  •  Syntax errors are not critical.
//  •  The code is not required to compile or run.
// =====================================================

#include <iostream>
using namespace std;

class Pokemon
{
  public:
    int     HP;
    int     attack;
    int     defend;
  
  private:
    void Battle(Pokemon* opponent);
    void Hit(Pokemon* opponent);
};

class Trainer
{
  char[]   name;
  Pokemon  partner;
  
  void Trade(Trainer* trader);
};

Pokemon::Pokemon
{
  HP = rand() % 51 + 50;
  attack = rand() % 16 + 25;
  defend = 33;
};

int main() 
{
  Pokemon* Squirtle = new Squirtle();
  Pokemon* Pikachu;

  Trainer TrainerA;
  Trainer TrainerB;
  
  TrainerA.name = "TrainerA";
  TrainerA.partner = Pikachu;
  
  TrainerB.name = "TrainerB";
  TrainerB.partner = Squirtle;
  
  Squirtle->HP = rand() % 31 + 70;
  Squirtle->defend = 5;
  
  return 0;
}

void Pokemon::Battle(Pokemon* opponent)
{
  opponent->reduceLife(32);
}

void Pokemon::Hit(Pokemon* opponent)
{
  int hit = rand() % defend;
}
