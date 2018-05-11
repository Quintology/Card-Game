#include <iostream>
#include <unordered_map>
#include "login.cc"
#include "cardchoosing.cc"
#include "card_bitfield.cc"

using namespace std;






int main() {
	loginSystem();
	battle();
	while (true) {
		cout << " end of game" << endl;
		break;



	}
}
