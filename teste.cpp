#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
  std::ifstream ifs ("words.txt");

  if (ifs.is_open()) {

    cout << "open" << endl;

    int numberOfWords;
    ifs >> numberOfWords;

    cout << "numero de palavras" << endl;
    cout << numberOfWords << endl;

    for(int i = 0; i < numberOfWords; i++){
        string wordRead;
        ifs >> wordRead;
    }
  }
  else {
    // show message:
    std::cout << "Error opening file";
  }

  return 0;


}
