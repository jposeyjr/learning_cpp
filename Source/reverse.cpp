#include <iostream>

std::string reverseStr(std::string &str, int N) {
    std::string newStr = "";
    for (int i = 0; i < N; i++) {
        newStr = str[i] + newStr; 
    }
    return newStr;
}