#pragma once //inclui apenas uma vez no pré-processamento.
#include <iostream>

inline void printHeader() //funcao inline precisa estar no arquivo de cabeçalho.Logo fica na mesma unidade de processamento de main.
{
    std::cout << "*****************************" << std::endl;
    std::cout << "*********HANgManGame*********" << std::endl;
    std::cout << "*****************************" << std::endl
         << std::endl;
}