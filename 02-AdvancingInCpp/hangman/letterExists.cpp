#include <string>
#include "letterExists.hpp"

using namespace std;

extern string secretWord;
bool letterExists(char guess)
{
    for (char letter : secretWord)
    {
        if (guess == letter)
        {
            return true;
        }
    }
    return false;
}