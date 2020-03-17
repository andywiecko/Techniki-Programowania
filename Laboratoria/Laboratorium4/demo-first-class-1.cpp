#include <iostream>
#include <vector>

class KasaBiletowa
{
private:
        int dostepneBilety = 4;

public:
        bool SprzedajBilet()
        {
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
        std::vector<KasaBiletowa> kasy(3);
        for (auto kasa : kasy)
                kasa.SprzedajBilet();
}