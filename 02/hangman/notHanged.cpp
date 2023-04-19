#include <vector>

std::vector<char> wrongGuesses;

bool notHanged()
{
    return wrongGuesses.size() < 5;
}