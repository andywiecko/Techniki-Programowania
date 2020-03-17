#include "KasaBiletowa.hpp"

int KasaBiletowa::otwarteKasy = 0;

KasaBiletowa::KasaBiletowa(std::string _nazwa,
                           int _bilety) : nazwa{_nazwa},
                                              dostepneBilety{_bilety}
{
    otwarteKasy++;
    std::cout << "[INFO] Otworzono kasę: "
              << nazwa << "\n";
}

KasaBiletowa::~KasaBiletowa()
{
    otwarteKasy--;
    std::cout << "[INFO] Kasa biletowa została zamknięta: "
              << nazwa << "\n";
}

KasaBiletowa::KasaBiletowa(const KasaBiletowa &kasa) : KasaBiletowa{kasa.nazwa, kasa.dostepneBilety}
{
}

bool KasaBiletowa::SprzedajBilet()
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