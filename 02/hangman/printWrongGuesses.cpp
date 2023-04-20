#include <vector>
#include <iostream>
#include "printWrongGuesses.hpp"

extern std::vector<char> wrongGuesses;

void printWrongGuesses()
{
    std::cout << "Chutes errados: ";
    for (char letter : wrongGuesses)
    {
        std::cout << letter << " ";
    }
    std::cout << std::endl;
}