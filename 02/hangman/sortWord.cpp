#include <cstdlib>
#include <vector>
#include "readFile.hpp"
#include "sortWord.hpp"

std::string sortWord()
{
    std::vector<std::string> wordsFromFile = readFile();
    srand(time(NULL));
    int rafledIndex = rand() % wordsFromFile.size();
    
    return wordsFromFile[rafledIndex];
}