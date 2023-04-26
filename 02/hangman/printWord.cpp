
#include <string>
#include <iostream>
#include <map>
#include "printHeader.hpp"

void printWord(std::string secretWord, std::map<char, bool> guessed)
{
    for (char letter : secretWord)
    {
        if (guessed[letter])
        {
            std::cout << letter << " ";
        }
        else
        {
            std::cout << "_ ";
        }
    }
    std::cout << std::endl
              << std::endl;
}