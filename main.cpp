// Ruben Navarro
// 11/27/2019
// IsUnique
// Determines if a string has all unique characters.
// main.cpp

#include <string>
#include <vector>
#include <iostream>
#include "prototypes.h"

int main() {

    std::vector<std::string> words = {"abcde", "hello", "apple", "kite", "padle"};
    bool flag = false;

    for (auto word : words) {

        if (checkUnique(word))
            std::cout << "String: " << word << " is Unique\n";
        else
            std::cout << "String: " << word << " is NOT Unique\n";
    }

    return 0;
}
