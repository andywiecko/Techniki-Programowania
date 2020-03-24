#ifndef SRC_STALA_HPP
#define SRC_STALA_HPP

#include <string>

class Stala
{
public:
    std::string nazwa;
    double wartosc;
    std::string jednostka;
    std::string opis;

    Stala(std::string _nazwa,
          double _wartosc,
          std::string _jednostka,
          std::string _opis);
          
};

#endif