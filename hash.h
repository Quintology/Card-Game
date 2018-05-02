#include <unorderedmap>
#include <iostream>
#include <string>


using namespace std;
//hash table to hold username, password, and bitfield number 
             
class login{
string username;
string password;
    public: 
    void set_username(string s){
        username = s;
    }
    void set_password(){
        password = s;   
    }
    void print_username(){
        cout << "Username: " << username << endl;
    }
    void print_password(){
        cout << "Password: " << password << endl;
    }
}
