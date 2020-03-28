#ifndef SRC_POJAZD_HPP
#define SRC_POJAZD_HPP

#include <iostream>
#include <map>
#include <string>

using int_parametry = std::map<std::string, int>;

class Pojazd
{
    friend class FabrykaPojazdow;

protected:
    // nazwy parametrów pojazdu
    static const std::string zasoby;
    static const std::string szybkosc;
    static const std::string spalanie;

    int_parametry parametry;

    int przebytyDystans{0};

    bool KoniecPaliwa();
    bool ZuzyciePaliwa();

    Pojazd();
    Pojazd(int_parametry _parametry);

public:
    void Info();

    bool Jedz();

    void UzupelnijZasoby(int ilosc);
};

#endif