#include <sstream>
#include <iostream>
#include <stdexcept>
#include "bitfield.h"
using namespace std;

//rename the cards
enum card_types {
    RED = 1,
    YELLOW = 2,
    GREEN = 4,
    BLUE = 8,
    ORANGE = 16,
    ULTRAVIOLET = 32,
    BROWN = 64,
    BLACK = 128
};

typedef int64_t int64;

class Cardfield {
  protected:
    int64 field;
  public:
    Cardfield(): field(0) {}
    void foo() {
        if (field)
            cout << "My deck is: " << field << "\n";
        else
            cout << "My deck is empty!" << endl;
    }

    void operator+=(const int64 flag) {
        field = field | flag;
    }

    void operator-=(const int64 flag) {
        field = field & ~ flag;
    }

    bool operator==(const int64 flag) {
        return ((field & flag));
    }
};
int main() {
    Cardfield cards;
    string function, line, type2;
    int64 type;

    while (cin) {
        int a = cin.peek();//peek at next letter to read
        if (a == EOF) break; //if end of file break
        getline(cin, line);
        stringstream ss(line);
        ss >> function;
        ss >> type2;
    }
}


//just some test code