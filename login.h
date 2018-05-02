#pragma once
#include <iostream>

struct Login {
    std::string username;
    std::string password;
    long long deck = 0;
    bool operator< (const Login &rhs) const {
        return deck > rhs.deck;
    }
};
