#include <iostream>
#include <vector>

class KasaBiletowa
{
private:
    int dostepneBilety;
    std::string nazwa = ""; // [*]
    
public:
    KasaBiletowa(std::string _nazwa, int _bilety = 4) // [*]
    {                                                 // [*]
        nazwa = _nazwa;                               // [*]
        dostepneBilety = _bilety;
        std::cout << "[INFO] Otworzono kasę: " // [*]
                  << nazwa << "\n";            // [*]
    }                                          // [*]

    bool SprzedajBilet()
    {
        std::cout << "[INFO] Obsługuje kasa: " // [*]
                  << nazwa + "\n";             // [*]

        if (dostepneBilety > 0)
        {
            std::cout << "[ OK ] Sprzedano bilet!\n";
            dostepneBilety--;
            return true;
        }
        else
        {
            std::cout << "[STOP] Koniec biletów!\n";
            return false;
        }
    }
};

int main()
{
    std::vector<KasaBiletowa> kasy{
        KasaBiletowa{"Kasa A", 10},
        KasaBiletowa("Kasa B"), // <-- pominięto argument domyślny (_bilety = 4)
        {"Kasa C", 25}          // <-- nie musimy podawać nazwy obiektu [!]
    };

    for (auto kasa : kasy) // iterujemy po `KasaBiletowa` !
        kasa.SprzedajBilet();
}