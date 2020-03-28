#ifndef SRC_FABRYKAPOJAZDOW
#define SRC_FABRYKAPOJAZDOW

#include "Pojazd.hpp"
#include "Autobus.hpp"

class FabrykaPojazdow
{

public:
    static Pojazd ProdukujPojazd()
    {
        return Pojazd{};
    }

    static Pojazd ProdukujPojazdWyscigowy()
    {
        return Pojazd{{
            {Pojazd::spalanie,12},
            {Pojazd::zasoby,100},
            {Pojazd::szybkosc,20}
        }};
    }

    static Autobus ProdukujAutobus(str_list lista)
    {
        return Autobus{lista};
    }

    static Autobus ProdukujAutobus()
    {
        return Autobus{};
    }

};

#endif