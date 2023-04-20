#include <fstream>
#include <iostream>
#include "readFile.hpp"


std::vector<std::string> readFile()
{
    std::ifstream file("words.txt");
    std::vector<std::string> wordsFromFile;

    if (file.is_open())
    {
        while (file.good())
        {
            std::string word;
            file >> word;
            wordsFromFile.push_back(word);
        }
    }
    else
    {
        // show message:
        std::cout << "Error opening file" << std::endl;
        file.close();
        exit(0);
    }
    file.close();
    return wordsFromFile;
}