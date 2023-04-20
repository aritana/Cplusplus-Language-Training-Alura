#include <iostream>
#include <vector>
#include <map>
#include "letterExists.hpp"
#include "guessing.hpp"

extern std::vector<char> wrongGuesses;
extern std::map<char, bool> guessed;

void guessing(char guess)
{
    if (letterExists(guess))
    {
        std::cout << "Your guessed correctly. The letter is in the word" <<   std::endl;
        guessed[guess] = true;
    }
    else
    {
          std::cout << "Your guessed incorrectly. The letter is not in the word" <<   std::endl;
        wrongGuesses.push_back(guess);
    }
}