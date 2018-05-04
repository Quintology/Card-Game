#include <iostream>
#include <fstream>
#include <unordered_map>
#include <cstdlib>

using namespace std;
void writeFile(string s) {
    ofstream myfile;
    myfile.open("login.txt");
    cout << "Write into the file" << endl;
    cin >> s;
    myfile << s << endl;
    myfile.close();
}
struct Login {
    std::string username;
    std::string password;
    int deck = 0;
    bool operator< (const Login &rhs) const {
        return deck > rhs.deck;
    }
};



void file_into_hash() {

    unordered_map<int, Login > database;
    ofstream myfile;
    myfile.open("login.txt");
    while (myfile){
    string user;
    string pass;
    myfile >> user;
    myfile >> pass;
    Login c;
    c.username = user;
    c.password = pass;
    c.deck = (rand() % 128) + 1;
    int i = 0;
    database <i, c >;
    i++;
    }
    myfile.close();
}





void login_hash() {
    cout << "Welcome to the the card Game" << endl;
    cout << "Are you a new user? (Y/N)" << endl;
    char c;
    cin >> c;
    // if yes create new user
    if (c == 'y' || c == 'Y') {
        string username;
        string password;
        cout << "Enter new username" << endl;
        cin >> username;
        cout << "Enter new password" << endl;
        cin >> password;
        if (database.find(c.username)) {
            die();
        }
        writeFile(username);
        writeFile(password);
    }
    // if not look up username and password in database;
    else {
        // look up username and login from database.
        string username;
        string password;
        cout << "Enter your username" << endl;
        cin >> username;
        cout << "Enter your password" << endl;
        cin >> password;
        if (database.find(c.username)) {
            if (database[c.username] == database[c.password]) {
                cout << "You are now logged in" << endl;
            }
        } else die();

    }




}
int main() {

    login_hash();



}

