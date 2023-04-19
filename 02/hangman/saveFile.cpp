
#include <iostream>
#include <vector>
#include <fstream>
#include <string>
#include <fstream>

void saveFile(std::vector<std::string> newListWords)
{
    std::ofstream file("words.txt");

    if (file.is_open())
    {
        for (std::string word : newListWords)
        {
            file << word << std::endl;
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
}