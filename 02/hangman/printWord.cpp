
#include <string>
#include <iostream>
#include <map>
#include "printHeader.hpp"

extern std::string secretWord;
extern std::map<char, bool> guessed;

void printWord()
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