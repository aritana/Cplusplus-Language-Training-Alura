#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include "notHit.hpp"
#include "printHeader.hpp"
#include "printWrongGuesses.hpp"
#include "printWord.hpp"
#include "guessing.hpp"
#include "saveFile.hpp"
#include "readFile.hpp"
#include "writeFile.hpp"
#include "sortWord.hpp"

using namespace std;

string secretWord; // static, private from extern.
static map<char, bool> guessed;
static vector<char> wrongGuesses;

int main()
{
    printHeader();

    secretWord = sortWord();
    while (notHit(secretWord, guessed) && wrongGuesses.size() < 5)
    {
        HangMan::printWrongGuesses(wrongGuesses);
        printWord(secretWord, guessed);

        guessing(guessed, wrongGuesses);
    }

    cout << "*****************************" << endl;
    cout << "**********End Game***********" << endl;
    cout << "*****************************" << endl;

    if (notHit(secretWord, guessed) && wrongGuesses.size() < 5)
    {
        cout << "You lose" << endl;
    }
    else
    {
        cout << "You win! Congratulations!" << endl;
        cout << "Do you want to add another word to the game? (Y/N)" << endl;

        char response;
        cin >> response;

        if (response == 'Y')
        {
            writeFile();
        }
    }
    return 0;
}