//
// Created by aless on 18/02/2021.
//

#include <algorithm>
#include "../Headers/randomString.h"

std::string randomString(unsigned short int length){

    //using a lambda to create a charset to select the symbols
    auto randomChar = []() -> char{
        const char charset[] = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        const unsigned short int maxIndex = (sizeof(charset) - 1);
        return charset[rand() & maxIndex];
    };

    std::string string(length, 0);
    std::generate_n(string.begin(), length, randomChar);

    return string;
}