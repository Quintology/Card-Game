#include <iostream>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
struct Account {
	std::string username;
	std::string password;
};
void die() {
	cout << "program quit" << endl;
	exit(0);
}
vector<Account> accounts;


void vecTofile() {
	ofstream file;
	if (!file) cout << "there was an error reading the file" << endl;
	file.open("accounts.txt");
	for (auto i : accounts) {
		file << i.username << " " << i.password << endl;
	}
	file.close();
	cout << "usernames and passwords saved!" << endl;

}


void pushVec() {
	ifstream file("accounts.txt");
	if (!file) {
		std::cout << "There was an error reading the file!" << std::endl;
		//return 1;
	}
	string line;
	while (getline(file, line)) {
		if (line.empty()) {
			continue;
		}
		auto it = line.find(" ");
		//Usernames and passwords are separated by one space.
		if (it != std::string::npos) {
			std::string username = line.substr(0, it);
			std::string password = line.substr(it + 1, line.npos);
			Account account = { username, password };
			accounts.push_back(account);
		}
	}
}

void printVec() {
	for (int i = 0; i < accounts.size(); i++) {
		cout << i << endl ;
		cout << accounts.at(i).username << endl;
		cout << accounts.at(i).password << endl;
		cout << "end of account" << endl;
	}
}

void testVec(string userT, string passT) {
	Account test = {userT, passT};
	for (auto i : accounts) {
		if (i.username == test.username) {
			cout << "username already exists" << endl;
			die();//insert die function
		}
	}
	accounts.push_back(test);
}
bool Login(Account f) {
	for (int i = 0; i < accounts.size(); i++) {
		if (accounts.at(i).username == f.username && accounts.at(i).password == f.password) {
			cout << "Login Successful" << endl;
			return true;
		}
	}
	cout << "Login unsuccessful" << endl;
	return false;
}



void loginSystem() {
	pushVec();
	cout << "are you a new user? y/n" << endl;
	char c;
	cin >> c;
	if (c == 'y' || c == 'Y') {
		//new user
		cout << "Enter Unique Username" << endl;
		string username;
		cin >> username;
		cout << "Enter a password" << endl;
		string pass1;
		cin >> pass1;
		cout << "Please re-enter your password" << endl;
		string pass2;
		cin >> pass2;
	//	cout << "vec size = " << accounts.size() << endl;
		if (pass1 != pass2) die();
		testVec(username, pass1);
	//	cout << "vec size = " << accounts.size() << endl;
		cout << "New user created" << endl;
		vecTofile();
		//insert a write into a file function
	} else if (c == 'n' || c == 'N') {
		cout << "enter your username" << endl;
		string us;
		cin >> us;
		cout << "enter your password" << endl;
		string pa;
		cin >> pa;
		Account login = {us, pa};
		if (!Login(login)) die();
		//check old users
	} else die();

}

struct userDeck {
    string username;
    vector <string> decks;
};


void accountDeck(vector<Account>vec, vector<string> null) {
    vector <userDeck> poop;
    for (auto i : vec) {
        userDeck temp = {i.username , null};
        poop.push_back(temp);
    }
}
