#ifndef SRC_FABRYKAPOJAZDOW
#define SRC_FABRYKAPOJAZDOW

#include "Pojazd.hpp"

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

};

#endif