
#include <string>
#include <iostream>
#include <map>

std::string secretWord;
std::map<char, bool> guessed;

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