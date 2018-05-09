#include <iostream>
#include <string>
using namespace std;

int damage(string card) {

	if (card == "goblin")return 3;

}

int health(string card) {
	if (card == "goblin")return 2;
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
		field1_damage = health(name);
		field1_health = damage(name);
	}


	cout << field1 << endl;
	cout << field1_damage << endl;
	cout << field1_health << endl;

	return 0;






}
