#include <string>
using namespace std;


string secretWord;

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