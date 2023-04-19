#include <iostream>
#include <vector>
#include <map>
#include "letterExists.cpp"

std::vector<char> wrongGuesses;
std::map<char, bool> guessed;

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