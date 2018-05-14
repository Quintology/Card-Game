#include <iostream>
#include <string>
#include <vector>
#include "ll.h"
#include "cardchoosing.h"
using namespace std;

void battle(){
  	//temp deck
	vector<string> deck = {"goblin", "dragon", "veteran_goblin", "mountain_giant", "midget_giant", "midget_army", "army"};
	char choice;
	string name = "";
	int player_health = 50;
	int enemy_health = 50;
	

	List hand;
	List field;
	List enemy_hand;
	List enemy_field;
	enemy_field.insert_at_beginning("dragon", damage("dragon"), health("dragon"));
	//insert 3 cards for first turn
	for (int i = 0; i < 3; i++) {
		//hand.push_back(deck.back());
		hand.insert_at_beginning(deck.back(), damage(deck.back()), health(deck.back()));
		deck.pop_back();
		//cout << hand.back() << " added to your hand" << endl;
	}

	
	while (enemy_health > 0 and player_health > 0) {
		int energy = 100;
		//cout << hand.remove_card(name);
		cout<<"Eneter a card you want to place on the field"<<endl;
		hand.insert_at_beginning(deck.back(), damage(deck.back()), health(deck.back()));
	    deck.pop_back();
//phase 1: Draw a card
		cout << "----------Your hand----------" << endl;
		cout<<hand.print_list()<<endl;
		cout << "---------------------------- -" << endl;

		bool turn = true;
	
	
		//phase 2 place card

		while (turn == true) {
			cout << "Enter card name to place on field" << endl;
			cout << "Enter(END) to end your turn" << endl;
			cout << "Energy left: " << energy << endl;
			cin >> name;
			//4 card field
		//	cout <<	hand.remove_card(name);
			if(energy>= cost(name)){
			cout<<field.insert_at_beginning( name, damage(name), health(name))<<endl;
			cout<<"Field cards: "<<field.print_list()<<endl;
			energy-=cost(name);
			}
			else{
			cout<<"You do NOT have enough energy, END turn."<<endl;
			}
			cout<<"Do you want to end turn: y/n?"<<endl;
			cin>> choice;
			if(choice == 'y')turn = false;
		
		}
		turn = true;
		string enemy_card = "";
		//phase 3 attack
		cout<<"Battle Phase"<<endl;
		while (turn == true){
		cout<<"Choose a card from your and that you want to attack with."<<endl;
		cout << "----------Your hand-----------" << endl;
		cout<<field.print_list()<<endl;
		cout << "------------------------------" << endl;
		cin>>name;
		cout<<"Choose the enemy card you want to attack with "<<name<<endl;
		cout << "----------Enemy hand----------" << endl;
		cout<<enemy_field.print_list()<<endl;
		cout << "------------------------------" << endl;
		cin>>enemy_card;
		cout<<"Your "<<name<<" has attacked enemys "<<enemy_card<<endl;
		field.set_new_health(name, enemy_field.find_damage(enemy_card));
		enemy_field.set_new_health(enemy_card, field.find_damage(name));
		if(field.find_health(name)<1){
			cout<<"Your "<<name<<" has been killed"<<endl;
		}
		if(enemy_field.find_health(enemy_card)<1){
			            cout<<"Enemy"<<name<<" has been killed"<<endl;
						        }

		cout<<"Do you want to end turn: y/n?"<<endl;
		cin>>choice;
		if(choice == 'y')turn = false;
		}






	}
	//end of while loop
	

}
