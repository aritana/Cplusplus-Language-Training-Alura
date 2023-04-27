#include "letterExists.hpp"
#include "guessing.hpp"
#include <iostream>

void guessing(std::map<char, bool>& guessed, std::vector<char>& wrongGuesses)
{
    char guess;
    std::cout << "What is you guess?";
    std::cin >> guess;

    if (letterExists(guess))
    {
        std::cout << "Your guessed correctly. The letter is in the word" << std::endl;
        guessed[guess] = true;
    }
    else
    {
        std::cout << "Your guessed incorrectly. The letter is not in the word" << std::endl;
        wrongGuesses.push_back(guess);
    }
}