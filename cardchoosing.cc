#include <iostream>
#include <string>
using namespace std;

//damage function
int damage(string card) {
    if (card == "goblin") return 1;
    else if (card == "veteran_goblin") return 2; //might try to use getlines so people don't need to type in an _ to summon a card
    else if (card == "mountain_giant") return 2;
    else if (card == "midget_giant") return 1;
    else if (card == "midget_army")  return 3;
    else if (card == "army") return 6;
    else if (card == "army_of_the_dead") return 7;
    else if (card == "dragon")  return 8;
    else if (card == "balrog") return 5;
    else if (card == "demon_frog") return 1;
    else if (card == "devil_duck") return 2;
    else if (card == "might_manatee") return 4;
}
//health function
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
        cout << "balrog" << endl;
        cout << "demon_frog" << endl;
        cout << "devil_duck" << endl;
        cout << "might_manatee" << endl;
    } else if (card == "goblin")return 2;
    else if (card == "veteran_goblin") return 4;
    else if (card == "mountain_giant") return 5;
    else if (card == "midget_giant") return 6;
    else if (card == "midget_army")  return 5;
    else if (card == "army") return 7;
    else if (card == "army_of_the_dead") return 8;
    else if (card == "dragon")  return 10;
    else if (card == "balrog") return 3;
    else if (card == "demon_frog") return 1;
    else if (card == "devil_duck") return 2;
    else if (card == "might_manatee") return 4;
    else
        cout << "You really have chosen nothing. Why don't you try again." << endl;
    exit(1);
}

//cost function
int cost(string card) {
}

//alfredo doing dis main
int main() {
	//temp deck
	vector<string> deck = {"goblin", "dragon", "veteran_goblin", "mountain_giant", "midget_giant", "midget_army", "army"};
	vector<string> hand = {};
//	for (int i = 0; i < deck.size(); i++) {
//		cout << deck[i] << endl;
//	}
	string name;
	int player_health = 50;
	int enemy_health = 50;

	//field card slots
	bool f1 = false;
	bool f2 = false;
	bool f3 = false;
	bool f4 = false;
	//name of the field card
	string field1;
	string field2;
	string field3;
	string field4;
	//hold damage, health, cost of field card;
	int field1_damage;
	int field1_health;
	int field1_cost;
	int field2_damage;
	int field2_health;
	int field2_cost;
	int field3_damage;
	int field3_health;
	int field3_cost;
	int field4_damage;
	int field4_health;
	int field4_cost;
	//insert 3 cards for first turn
	for (int i = 0; i < 3; i++) {
		hand.push_back(deck.back());
		deck.pop_back();
		cout << hand.back() << " added to your hand" << endl;
	}


	while (enemy_health <= 0 or player_health <= 0) {
		int energy = 5;
		cout << "----------Your hand----------" << endl;
		for (int i = 0; i < hand.size(); i++) {
			cout << hand[i] << endl;
		}
		cout << "-----------------------------" << endl;

//phase 1 draw a card
		hand.push_back(deck.back());
		deck.pop_back();
		cout << hand.back() << " added to your hand" << endl;
//phase 2 place card

	while (name != "END") {
		cout << "Enter card name to place on field" << endl;
		cout << "Enter (END) to end your turn"<<endl;
		cout << "Energy left: "<<energy<<endl;
		cin >> name;

			if (f1 == false) {
				field1 = name;

				field1_damage = damage(name);  //(had to swap these around)
				field1_health = health(name);  //(it was displaying the damage as health and the health as damage)
			}


			cout << "You have chosen: " << field1 << endl;
			cout << field1 << " Damage: " << field1_damage << endl;
			cout << field1 << " Health: " << field1_health << endl;
		}
//phase 3 attack






	}
//end of while loop
	return 0;
}

