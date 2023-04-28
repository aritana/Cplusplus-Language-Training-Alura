#pragma once
#include <string>

class Holder
{

private:
    std::string cpf;
    std::string name;

public:
    Holder() = delete;
    Holder(std::string cpf, std::string name);
    std::string getcpf();
    std::string getNameHolder();
private:
    void checkNameLength(std::string name);
};