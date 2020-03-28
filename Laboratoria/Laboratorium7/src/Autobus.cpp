#include "Autobus.hpp"

void Autobus::DodajPasazera(std::string pasazer)
{
    listaPasazerow.push_back(pasazer);
}

void Autobus::DodajPasazerow(str_list pasazerowie)
{
    for (auto pasazer : pasazerowie)
        DodajPasazera(pasazer);
}

void Autobus::WyswietlPasazerow()
{
    std::cout << "liczba pasażerów : " << listaPasazerow.size() << "\n";
    std::cout << "pasażerowie: \n";
    for (auto pasazer : listaPasazerow)
    {
        std::cout << "- " << pasazer << "\n";
    }
}

Autobus::Autobus() : Pojazd{{{Pojazd::spalanie, 20},
                             {Pojazd::zasoby, 200},
                             {Pojazd::szybkosc, 10}}}
{
}

Autobus::Autobus(str_list _lista) : Autobus()
{
    listaPasazerow = _lista;
}

void Autobus::Info()
{
    Pojazd::Info();
    WyswietlPasazerow();
}