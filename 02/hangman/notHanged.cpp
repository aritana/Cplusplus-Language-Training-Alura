#include <vector>
#include "notHanged.hpp"

extern std::vector<char> wrongGuesses;

bool notHanged()
{
    return wrongGuesses.size() < 5;
}