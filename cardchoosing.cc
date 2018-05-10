#include <iostream>
#include <string>
using namespace std;

int damage(string card) {
    if (card == "goblin") return 3;
    else if (card == "veteran_goblin") return 6; //might try to use getlines so people don't need to type in an _ to summon a card
    else if (card == "mountain_giant") return 6;
    else if (card == "midget_giant") return 5;
    else if (card == "midget_army")  return 8;
    else if (card == "army") return 10;
    else if (card == "army_of_the_dead") return 12;
    else if (card == "dragon")  return 15;
}

int health(string card) {
     if (card == "list") {
        cout << "goblin" << endl;
        cout << "veteran_goblin" << endl;
        cout << "mountain_giant" << endl;
        cout << "midget_giant" << endl;
        cout << "midget_army" << endl;
        cout << "army" << endl;
        cout << "army_of_the_dead" << endl;
        cout << "dragon" << endl;
    } else if (card == "goblin")return 2;
    else if (card == "veteran_goblin") return 3;
    else if (card == "mountain_giant") return 5;
    else if (card == "midget_giant") return 4;
    else if (card == "midget_army")  return 7;
    else if (card == "army") return 12;
    else if (card == "army_of_the_dead") return 15;
    else if (card == "dragon")  return 20;
    else
        cout << "You really have chosen nothing. Why don't you try again." << endl;
    exit(1);
}



int main() {

    string name;
    bool f1 = false;
    string field1;
    int field1_damage;
    int field1_health;

    cout << "Enter card name to place on field" << endl;
    cout << "If you need a list of cards, type in ''list''" << endl;
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
