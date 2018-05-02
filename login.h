#pragma once
#include <iostream>

struct Login {
    std::string username;
    std::string password;
    long long deck = 0;
    bool operator< (const Competitor &rhs) const {
        return ID > rhs.ID;
    }
};
