#include "notHit.hpp"

bool notHit(std::string &secretWord, const std::map<char, bool> &guessed) // referencia
{
    for (char letter : secretWord)
    { 
        if (guessed.find(letter) == guessed.end() || !guessed.at(letter)) // não encontrou ou se encontrou, o valor é falso
        {
            return true;
        }
    }
    return false;
}