#include <vector>
#include <iostream>
#include "printWrongGuesses.hpp"

void HangMan::printWrongGuesses(const std::vector<char> wrongGuesses)
{
    std::cout << "Chutes errados: ";
    for (char letter : wrongGuesses)
    {
        std::cout << letter << " ";
    }
    std::cout << std::endl;
}
