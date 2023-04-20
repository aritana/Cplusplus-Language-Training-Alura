#include <cstdlib>
#include <vector>
#include "readFile.hpp"
#include "sortWord.hpp"

std::string secretWord;
void sortWord()
{
    std::vector<std::string> wordsFromFile = readFile();
    srand(time(NULL));
    int rafledIndex = rand() % wordsFromFile.size();
    secretWord = wordsFromFile[rafledIndex];
}