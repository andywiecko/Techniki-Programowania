#include "src/FabrykaPojazdow.hpp"

int main()
{

    Pojazd pojazd = FabrykaPojazdow::ProdukujPojazd();
    while(pojazd.Jedz());
    pojazd.Info();

    Pojazd pojazdWyscigowy = FabrykaPojazdow::ProdukujPojazdWyscigowy();
    while(pojazdWyscigowy.Jedz());
    pojazdWyscigowy.Info();

    Autobus autobus = FabrykaPojazdow::ProdukujAutobus({"Janusz (kierowca)"});
    autobus.DodajPasazerow({"Jan", "Bartek", "Adam", "Ania"});
    autobus.Info();
    autobus.Pojazd::Info();

}