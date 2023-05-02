#include <string>
#include <iostream>
#include <vector>
#include "readFile.hpp"
#include "saveFile.hpp"
#include "writeFile.hpp"

void writeFile()
{
    std::string word;
    std::cout << "Digite uma nova palavra:";
    std::cin >> word;

    std::vector<std::string> listWords = readFile();
    listWords.push_back(word);

    saveFile(listWords);
}