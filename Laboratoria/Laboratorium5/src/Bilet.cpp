#include "Bilet.hpp"
#include <iostream>

Bilet::Bilet(TypBiletu _typ, std::string _nazwa) : typ{_typ}, nazwa{_nazwa}
{
    switch (typ)
    {
    case TypBiletu::Normalny:
        std::cout << "[INFO] Wystawiono bilet normalny.\n";
        break;

    case TypBiletu::Ulgowy:
        std::cout << "[INFO] Wystawiono bilet ulgowy.\n";
        break;

    case TypBiletu::Studencki:
        std::cout << "[INFO] Wystawiono bilet studencki.\n";
        break;
    }
}