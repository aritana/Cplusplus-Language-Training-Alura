#include "notHit.hpp"

bool notHit(std::string &secretWord, std::map<char, bool> &guessed) // referencia
{
    for (char letter : secretWord)
    {
        if (!guessed[letter]) // nao preciso dereferenciar o pointero, pois passamos a referencia
        {
            return true;
        }
    }
    return false;
}