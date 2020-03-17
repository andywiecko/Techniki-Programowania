#include <iostream>
#include <vector>

class KasaBiletowa
{
private:
    int dostepneBilety;
    std::string nazwa = "";

public:
    static int otwarteKasy; // [*]

    KasaBiletowa(std::string _nazwa,
                 int _bilety = 4) : nazwa{_nazwa},
                                    dostepneBilety{_bilety}
    {
        otwarteKasy++; // [*]
        std::cout << "[INFO] Otworzono kasę: "
                  << nazwa << "\n";
    }

    ~KasaBiletowa()
    {
        otwarteKasy--; // [*]
        std::cout << "[INFO] Kasa biletowa została zamknięta: "
                  << nazwa << "\n";
    }

    bool SprzedajBilet()
    {
        std::cout << "[INFO] Obsługuje kasa: "
                  << nazwa + "\n";

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

int KasaBiletowa::otwarteKasy = 0;

int main()
{
    KasaBiletowa kasa{"Kasa A", 10};
    std::vector<KasaBiletowa> kasy{kasa, {"Kasa B", 5}, {"Kasa C"}};
    std::cout << KasaBiletowa::otwarteKasy << "\n"; // <-- wyświetli się `0` [!]
}