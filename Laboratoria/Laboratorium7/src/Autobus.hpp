#ifndef SRC_AUTOBUS_HPP
#define SRC_AUTOBUS_HPP

#include <vector>
#include <string>

#include "Pojazd.hpp"

using str_list = std::vector<std::string>;

class Autobus : public Pojazd
{
friend class FabrykaPojazdow;

private:
    str_list listaPasazerow;
    Autobus();
    Autobus(str_list _lista);

public:
    void DodajPasazera(std::string pasazer);
    void DodajPasazerow(str_list pasazerowie);
    void WyswietlPasazerow();
    void Info();
};

#endif