//
// Created by Ruben on 11/27/2019.
//
#include <string>
#include <algorithm>

// function prototype to check if a string has unique characters
bool checkUnique(std::string s) {

    std::sort(s.begin(), s.end());

    std::string::iterator it = std::adjacent_find(s.begin(), s.end());

    if (it != s.end())
        return false;
    else
        return true;

}
