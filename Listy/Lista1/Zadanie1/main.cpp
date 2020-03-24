#include <iostream>
#include "src/Stala.hpp"
#include "src/Tabela.hpp"

int main()
{
    Stala c{"c", 2.99792e+8, "m/s", "Predkosc swiatla"};
    Stala G{"G", 6.67429e-11, "m^3/kg/s^2", "Stala grawitacji"};

    Tabela tabelaStalych{{c, G}};
    tabelaStalych.Wyswietl();

    std::cout << std::endl;

    Stala h{"h",6.62607e-34,"Js","Stala Plancka"};
    tabelaStalych.DodajStala(h);

    tabelaStalych.Wyswietl();

}