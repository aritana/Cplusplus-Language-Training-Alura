#include <iostream>
#include "Holder.hpp"

Holder::Holder(std::string cpf, std::string name) : cpf(cpf), name(name)
{
    checkNameLength(name);
}

std::string Holder::getcpf()
{
    return cpf;
}
std::string Holder::getNameHolder()
{
    return name;
}
void Holder::checkNameLength(std::string name)
{
    if (name.size() < 5)
    {
        std::cout << "Very short name" << std::endl;
        exit(1);
    }
}