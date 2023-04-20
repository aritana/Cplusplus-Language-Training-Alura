#include <cstdlib>
#include <vector>
#include "readFile.hpp"
#include "sortWord.hpp"

extern std::string secretWord;
void sortWord()
{
    std::vector<std::string> wordsFromFile = readFile();
    srand(time(NULL));
    int rafledIndex = rand() % wordsFromFile.size();
    secretWord = wordsFromFile[rafledIndex];
}