#include <iostream>
#include <unordered_map>
#include "hash.h"





using namespace std; 

int main (){
unordered_map<login,int> database(100000);
cout << "Welcome to the the card Game" << endl; 
cout << "Are you a new user? (Y/N)" << endl;
      char c;
      cin >> c;
      if (c == y || c == Y){
            login new_user;
            string username;
            string password;
            cout << "Enter new username" << endl;      
            cin >> username;      
            cout << "Enter new password" << endl;
            cin >> password;
            new_user.set_username(username);
            new_user.set_password(password);
            database      
      }
      else {
      // look up username and login from database.
      
      }









}
