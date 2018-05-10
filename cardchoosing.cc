#include <iostream>
#include <string>
using namespace std;

int damage(string card) {
    if (card == "goblin") return 3;
    else if (card == "veteran_goblin") return 6; //might try to use getlines so people don't need to type in an _ to summon a card
    else cout << "Why don't you try again." << endl;
//  exit(1);
}

int health(string card) {
    if (card == "goblin")return 2;
    else if (card == "veteran_goblin") return 4;
    else cout << "You really have chosen nothing." << endl;
    exit(1);
}


int main() {

    string name;
    bool f1 = false;
    string field1;
    int field1_damage;
    int field1_health;

    cout << "Enter card name to place on field" << endl;

    cin >> name;

    if (f1 == false) {
        field1 = name;
//      field1_damage = health(name); (original code)
//      field1_health = damage(name);
        field1_damage = damage(name);  //(had to swap these around)
        field1_health = health(name);  //(it was displaying the damage as health and the health as damage)
    }


    cout << "You have chosen: " << field1 << endl;
    cout << field1 << " Damage: " << field1_damage << endl;
    cout << field1 << " Health: " << field1_health << endl;

    return 0;
}
