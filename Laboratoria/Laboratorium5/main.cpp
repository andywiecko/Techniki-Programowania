#include "src/KasaBiletowa.hpp"
#include "src/Bilet.hpp"

int main()
{
    Bilet bilet{TypBiletu::Studencki};
    KasaBiletowa kasa{"Kasa A", 10};
}