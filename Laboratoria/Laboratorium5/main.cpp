#include <iostream>
#include <vector>

#include "src/KasaBiletowa.hpp"

int main()
{
    KasaBiletowa kasa{"Kasa A", 10};
    std::vector<KasaBiletowa> kasy{kasa, {"Kasa B", 5}, {"Kasa C"}};
    std::cout << KasaBiletowa::otwarteKasy << "\n"; // <-- wyświetli się `0` [!]
}