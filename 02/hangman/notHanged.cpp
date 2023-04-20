#include <vector>
#include "notHanged.hpp"

std::vector<char> wrongGuesses;

bool notHanged()
{
    return wrongGuesses.size() < 5;
}