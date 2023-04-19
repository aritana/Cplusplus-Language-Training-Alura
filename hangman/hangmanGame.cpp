#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <fstream>
#include <ctime>
#include <cstdlib>

using namespace std;

void saveFile(vector<string> newListWords);

string secretWord = "MELANCIA";
map<char, bool> guessed;
vector<char> wrongGuesses;

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

bool notHit()
{
    for (char letter : secretWord)
    {
        if (!guessed[letter])
        {
            return true;
        }
    }
    return false;
}

bool notHanged()
{
    return wrongGuesses.size() < 5;
}

void printHeader()
{
    cout << "*****************************" << endl;
    cout << "*********HangManGame*********" << endl;
    cout << "*****************************" << endl
         << endl;
}

void printWrongGuesses()
{
    cout << "Chutes errados: ";
    for (char letter : wrongGuesses)
    {
        cout << letter << " ";
    }

    cout << endl;
}

void printWord()
{
    for (char letter : secretWord)
    {
        if (guessed[letter])
        {
            cout << letter << " ";
        }
        else
        {
            cout << "_ ";
        }
    }
    cout << endl
         << endl;
}

void guessing(char guess)
{

    if (letterExists(guess))
    {
        cout << "Your guessed correctly. The letter is in the word" << endl;
        guessed[guess] = true;
    }
    else
    {
        cout << "Your guessed incorrectly. The letter is not in the word" << endl;
        wrongGuesses.push_back(guess);
    }
}

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

void saveFile(vector<string> newListWords)
{
    ofstream file("words.txt");

    if (file.is_open())
    {
        for (string word : newListWords)
        {
            file << word <<endl;
           
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