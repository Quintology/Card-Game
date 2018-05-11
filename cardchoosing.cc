#include <iostream>
#include <string>
#include <vector>
#include "ll.h"
#include "cardchoosing.h"
using namespace std;

void battle(){
  	//temp deck
	vector<string> deck = {"goblin", "dragon", "veteran_goblin", "mountain_giant", "midget_giant", "midget_army", "army"};

	//	accountDeck(accounts, deck);



	//	std::vector<string> hand = {};
	//	for (int i = 0; i < deck.size(); i++) {
	//		cout << deck[i] << endl;
	//	}
	string name = "";
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
	List hand;
	//insert 3 cards for first turn
	for (int i = 0; i < 3; i++) {
		//hand.push_back(deck.back());
		hand.insert_at_beginning(deck.back());
		deck.pop_back();
		//cout << hand.back() << " added to your hand" << endl;
	}

	cin >> name;
	while (enemy_health > 0 and player_health > 0) {
		int energy = 5;
		cout << hand.remove_card(name);

		cout << "----------Your hand----------" << endl;
		//	for (int i = 0; i < hand.size(); i++) {
		//		cout << hand[i] << endl;
		//	}
		cout << "---------------------------- -" << endl;

		//phase 1 draw a card
		hand.insert_at_beginning(deck.back());
		deck.pop_back();
		//		cout << hand.back() << " added to your hand" << endl;
		//phase 2 place card

		while (name != "END") {
			cout << "Enter card name to place on field" << endl;
			cout << "Enter(END) to end your turn" << endl;
			cout << "Energy left: " << energy << endl;
			cin >> name;
			//4 card field
			cout <<	hand.remove_card(name);

			if (f1 == false) {
				field1 = name;
				field1_damage = damage(name);
				field1_health = health(name);
				field1_cost = cost(name);

				//hand.remove_card(name);
				cout << hand.check();

				//				for (int i = 0; i < hand.size(); i++) {
				//					cout << hand[i] << endl;
				//				}

				f1 = true;
			}



			cout << " You have chosen: " << field1 << endl;
			cout << field1 << "Damage: " << field1_damage << endl;
			cout << field1 << "Health: " << field1_health << endl;
		}
		//phase 3 attack






	}
	//end of while loop
	return 0;

}
