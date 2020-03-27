#include "Pojazd.hpp"

const std::string Pojazd::zasoby{"zasoby"};
const std::string Pojazd::szybkosc{"szybkość"};
const std::string Pojazd::spalanie{"spalanie"};

bool Pojazd::KoniecPaliwa()
{
    std::cout << "[STOP] koniec paliwa!"
              << "\n";
    parametry.at("zasoby") = 0;
    return false;
}

bool Pojazd::ZuzyciePaliwa()
{
    przebytyDystans += parametry.at(Pojazd::szybkosc);
    std::cout << "[INFO] Pojazd jedzie... Przebyty dystans: "
              << przebytyDystans << "\n";
    parametry.at(Pojazd::zasoby) -= parametry.at(Pojazd::spalanie);
    return true;
}

Pojazd::Pojazd() : parametry{{{Pojazd::zasoby, 100},
                              {Pojazd::szybkosc, 5},
                              {Pojazd::spalanie, 8}}}
{
}

Pojazd::Pojazd(int_parametry _parametry) : parametry{_parametry}
{
}

void Pojazd::Info()
{
    std::cout << std::string(15,'=') << "\n";
    std::cout << "Parametry pojazdu" << "\n";
    for(auto & [key,value] : parametry)
    {
        std::cout << key << " : " << value << "\n";
    }
}

bool Pojazd::Jedz()
{
    if (parametry.at(Pojazd::zasoby) > 0)
        return ZuzyciePaliwa();
    else
        return KoniecPaliwa();
}

void Pojazd::UzupelnijZasoby(int ilosc)
{
    parametry.at(Pojazd::zasoby) += ilosc;
}