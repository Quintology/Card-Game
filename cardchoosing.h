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
    if (card == "goblin")return 2;
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
}

//cost function
int cost(string card) {
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
    } else if (card == "goblin") return 1;
    else if (card == "veteran_goblin") return 2;
    else if (card == "mountain_giant") return 2;
    else if (card == "midget_giant") return 2;
    else if (card == "midget_army")  return 3;
    else if (card == "army") return 4;
    else if (card == "army_of_the_dead") return 5;
    else if (card == "dragon")  return 5;
    else if (card == "balrog") return 2;
    else if (card == "demon_frog") return 1;
    else if (card == "devil_duck") return 1;
    else if (card == "might_manatee") return 3;
    else
        cout << "You really have chosen nothing. Why don't you try again." << endl;
    exit(1);
}
