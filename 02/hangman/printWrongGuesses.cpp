#include <vector>
#include <iostream>

std::vector<char> wrongGuesses;

void printWrongGuesses()
{
    std::cout << "Chutes errados: ";
    for (char letter : wrongGuesses)
    {
        std::cout << letter << " ";
    }

    std::cout << std::endl;
}