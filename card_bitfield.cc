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

typedef int64_t int64;

class Cardfield {
  protected:
    int64 field;
  public:
    Cardfield(): field(0) {}
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

    bool operator==(const int64 flag) {
        return ((field & flag));
    }
};

//INSERT CLASS HERE FOR THE COST

//INSERT CLASS HERE FOR THE COST

int main() {
    Cardfield cards;
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
//INSERT FUNCTIONS HERE
 }
}

  
