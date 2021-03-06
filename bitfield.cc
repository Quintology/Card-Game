#include <sstream>
#include <iostream>
#include <stdexcept>
using namespace std;

//rename the cards adding more
enum card_types {
    GOBLIN_KNIGHT = 1,
    VETERAN_GOBLIN_KNIGHT = 2,
    MOUNTAIN_GIANT = 4,
    MIDGET_GIANT = 8,
    MIDGET_ARMY = 16,
    ARMY = 32,
    ARMY_OF_THE_DEAD = 64,
    DRAGON = 128
    BALROG = 256,
    DEMON_FROG = 512,
    DEVIL_DUCK = 1024,
    MIGHT_MANATEE = 2048,	
};

//cost of cards
//IDEA: COPY THE NAME OF THE CARD TYPES AND ADD COST_ AT THE BEGINNING OF THE CONSTANT INT
const int COST_GOBLIN_KNIGHT = 1;
const int COST_VETERAN_GOBLIN_KNIGHT = 2;
const int COST_MOUNTAIN_GIANT = 4;
const int COST_MIDGET_GIANT = 8;
const int COST_MIDGET_ARMY = 16;
const int COST_ARMY = 32;
const int COST_ARMY_OF_THE_DEAD = 64;
const int COST_DRAGON = 128;

//damage of cards
//IDEA: COPY THE NAME OF THE CARD TYPES AND ADD DAMAGE_ AT THE BEGINNING OF THE CONSTANT INT
#define DAMAGE_GOBLIN_KNIGHT = 1,
#define DAMAGE_VETERAN_GOBLIN_KNIGHT = 2,
#define DAMAGE_MOUNTAIN_GIANT = 4,
#define DAMAGE_MIDGET_GIANT = 8,
#define DAMAGE_MIDGET_ARMY = 16,
#define DAMAGE_ARMY = 32,
#define DAMAGE_ARMY_OF_THE_DEAD = 64,
#define DAMAGE_DRAGON = 128

//health of cards
const int HEALTH_GOBLIN_KNIGHT = 1;
const int HEALTH_VETERAN_GOBLIN_KNIGHT = 2;
const int HEALTH_MOUNTAIN_GIANT = 4;
const int HEALTH_MIDGET_GIANT = 8;
const int HEALTH_MIDGET_ARMY = 16;
const int HEALTH_ARMY = 32;
const int HEALTH_ARMY_OF_THE_DEAD = 64;
const int HEALTH_DRAGON = 128;

typedef int64_t int64;

class Cardfield {
  protected:
    int64 field;
  public:
    Cardfield(): field(0) {}
    int64 cardselect() {
        if (field) {
            if (field >= DRAGON) {
                cout << "DRAGON" << endl;
            } else if (field < DRAGON && field > ARMY) {
                cout << "ARMY_OF_THE_DEAD" << endl;
            } else if (field < ARMY_OF_THE_DEAD && field > MIDGET_ARMY) {
                cout << "ARMY" << endl;
            } else if (field < ARMY && field > MIDGET_GIANT) {
                cout << "MIDGET_ARMY" << endl;
            } else if (field < MIDGET_ARMY && field > MOUNTAIN_GIANT) {
                cout << "MIDGET_GIANT" << endl;
            } else if (field < MIDGET_GIANT && field > VETERAN_GOBLIN_KNIGHT) {
                cout << "MOUNTAIN_GIANT" << endl;
            } else if (field < MOUNTAIN_GIANT && field > GOBLIN_KNIGHT) {
                cout << "VETERAN_GOBLIN_KNIGHT)" << endl;
            } else if (field == GOBLIN_KNIGHT) {
                cout << "GOBLIN_KNIGHT" << endl;
            }
        }
    }
    void foo() {
        if (field)
            cout << "My deck is: " << field << "\n";
        else
            cout << "My deck is empty!" << endl;
    }

    void operator+=(const int64 flag) {
        field = field | flag;
    }

    void operator-=(const int64 flag) {
        field = field & ~ flag;
    }
};

//INSERT CLASS HERE FOR THE COST
class Costfield: public Cardfield {
  public:
    Costfield(): Cardfield() {}
    int64 energy_check() {
        if (field) {
            if (field < COST_GOBLIN_KNIGHT) {
                cout << "I don't have any energy to summon Goblin Knight.\n";
            }
            if (field < COST_VETERAN_GOBLIN_KNIGHT) {
                cout << "I don't have enough energy to summon Veteran Goblin Knight.\n";
            }
            if (field < COST_MIDGET_GIANT) {
                cout << "I don't have enough energy to summon Midget Giant.\n";
            }
            if (field < COST_MIDGET_ARMY) {
                cout << "I don't have enough energy to summon Midget Army.\n";
            }
            if (field < COST_ARMY) {
                cout << "I don't have enough energy to summon Army.\n";
            }
            if (field < COST_ARMY_OF_THE_DEAD) {
                cout << "I don't have enough energy to summon Army of the Dead.\n";
            }
            if (field < COST_DRAGON) {
                cout << "I don't have enough energy to summon Dragon.\n";
            }
        }
        if (!field)
            throw runtime_error("Cannot select card when we don't have energy!");
    }
};

//INSERT CLASS HERE FOR THE DAMAGE
class Damagefield: public Cardfield {
  public:
    Damagefield(): Cardfield() {}
};

//INSERT HEALTH CLASS HERE
class Healthfield: public Cardfield {
  public:
    Healthfield(): Cardfield() {}
};


int main() {
    Cardfield cards;
    Costfield costs;
    Damagefield damage;
    Healthfield health;
    string function, line, type2;
    int64 type;

    while (cin) {
        int a = cin.peek();//peek at next letter to read
        if (a == EOF) break; //if end of file break
        getline(cin, line);
        stringstream ss(line);
        ss >> function;
        ss >> type2;
        if (type2 == "GOBLIN_KNIGHT") type = 1;
        if (type2 == "VETERAN_GOBLIN_KNIGHT") type = 2;
        if (type2 == "MOUNTAIN_GIANT") type = 4;
        if (type2 == "MIDGET_GIANT") type = 8;
        if (type2 == "MIDGET_ARMY") type = 16;
        if (type2 == "ARMY") type = 32;
        if (type2 == "ARMY_OF_THE_DEAD") type = 64;
        if (type2 == "DRAGON") type = 128;
        if (type2 == "COST_GOBLIN_KNIGHT") type = 1;
        if (type2 == "COST_VETERAN_GOBLIN_KNIGHT") type = 2;
        if (type2 == "COST_MOUNTAIN_GIANT") type = 4;
        if (type2 == "COST_MIDGET_GIANT") type = 8;
        if (type2 == "COST_MIDGET_ARMY") type = 16;
        if (type2 == "COST_ARMY") type = 32;
        if (type2 == "COST_ARMY_OF_THE_DEAD") type = 64;
        if (type2 == "COST_DRAGON")type = 128;
        if (type2 == "DAMAGE_GOBLIN_KNIGHT") type = 1;
        if (type2 == "DAMAGE_VETERAN_GOBLIN_KNIGHT") type = 2;
        if (type2 == "DAMAGE_MOUNTAIN_GIANT") type = 4;
        if (type2 == "DAMAGE_MIDGET_GIANT") type = 8;
        if (type2 == "DAMAGE_MIDGET_ARMY")type = 16;
        if (type2 == "DAMAGE_ARMY")type = 32;
        if (type2 == "DAMAGE_ARMY_OF_THE_DEAD") type = 64;
        if (type2 == "DAMAGE_DRAGON") type = 128;
  	if (type2 == "HEALTH_GOBLIN_KNIGHT") type = 1;
        if (type2 == "HEALTH_VETERAN_GOBLIN_KNIGHT") type = 2;
        if (type2 == "HEALTH_MOUNTAIN_GIANT") type = 4;
        if (type2 == "HEALTH_MIDGET_GIANT") type = 8;
        if (type2 == "HEALTH_MIDGET_ARMY") type = 16;
        if (type2 == "HEALTH_ARMY") type = 32;
        if (type2 == "HEALTH_ARMY_OF_THE_DEAD") type = 64;
        if (type2 == "HEALTH_DRAGON")type = 128;
        if (function == "ADD") {
            if (type2[0]) {
                cards += (type);
                costs -= (type);
                damage += (type);
		        health += (type);
            }
        } else if (function == "DELETE") {
            if (type2[0]) {
                cards -= (type);
                costs += (type);
                damage -= (type);
		        health -= (type);

            }
        } else throw runtime_error("Invalid Input");
    }
}
