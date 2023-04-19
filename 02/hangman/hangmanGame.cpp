#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <ctime>
#include <cstdlib>
#include "letterExists.cpp"
#include "notHit.cpp"
#include "notHanged.cpp"
#include "printHeader.cpp"
#include "printWrongGuesses.cpp"
#include "printWord.cpp"
#include "guessing.cpp"
#include  "saveFile.cpp"

using namespace std;

void saveFile(vector<string> newListWords);

string secretWord = "MELANCIA";
map<char, bool> guessed;
vector<char> wrongGuesses;

vector<string> readFile()
{
    ifstream file("words.txt");
    vector<string> wordsFromFile;

    if (file.is_open())
    {
        while (file.good())
        {
            string word;
            file >> word;
            wordsFromFile.push_back(word);
        }
    }
    else
    {
        // show message:
        cout << "Error opening file" << endl;
        file.close();
        exit(0);
    }
    file.close();
    return wordsFromFile;
}

void writeFile()
{
    string word;
    cout << "Digite uma nova palavra:";
    cin >> word;

    vector<string> listWords = readFile();
    listWords.push_back(word);

    saveFile(listWords);
}


void sortWord()
{
    vector<string> wordsFromFile = readFile();
    srand(time(NULL));
    int rafledIndex = rand() % wordsFromFile.size();
    secretWord = wordsFromFile[rafledIndex];
}

int main()
{
    printHeader();

    sortWord();
    while (notHit() && notHanged())
    {
        printWrongGuesses();
        printWord();

        char guess;
        cout << "What is you guess? ";
        cin >> guess;
        guessing(guess);
    }

    cout << "*****************************" << endl;
    cout << "**********End Game***********" << endl;
    cout << "*****************************" << endl;

    if (notHit())
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