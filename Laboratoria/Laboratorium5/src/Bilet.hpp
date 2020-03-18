#ifndef SRC_BILET_HPP
#define SRC_BILET_HPP

#include <string>
#include "EnumTypBiletu.hpp"

class Bilet
{
public:
    std::string nazwa = "";
    TypBiletu typ = TypBiletu::Normalny;
    Bilet(TypBiletu, std::string _nazwa = "");
};

#endif