#include <iostream>
#include <unordered_map>
#include "login.h"

using namespace std; 

void die(){
      cout << "Invalid Input" << endl;
      exit(1);
}



void login_hash(){
unordered_map<login,int> database; // hashtable to hold login info and deck of cards
cout << "Welcome to the the card Game" << endl; 
cout << "Are you a new user? (Y/N)" << endl;
      char c;
      cin >> c;
      // if yes create new user
      if (c == y || c == Y){
            string username;
            string password;
            cout << "Enter new username" << endl;      
            cin >> username;      
            cout << "Enter new password" << endl;
            cin >> password;
            Login c = {username,login, 0};
           if (database.find(c.username)){
                  die();
           }
            else database[c.username] = c;
      }
      // if not look up username and password in database;
      else {
      // look up username and login from database.
            string username;
            string password;
            cout << "Enter your username" << endl;      
            cin >> username;      
            cout << "Enter new password" << endl;
            cin >> password;
            if (database.find(c.username)){
                if (database[c.username] == database[c.password]){
                  cout << "You are now logged in" << endl; 
                }
           }
            else die();
      
      }









}