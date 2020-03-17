#ifndef SRC_KASABILETOWA_HPP
#define SRC_KASABILETOWA_HPP

#include <iostream>

class KasaBiletowa
{
private:
    int dostepneBilety;
    std::string nazwa = "";

public:
    static int otwarteKasy;

    KasaBiletowa(std::string _nazwa,
                 int _bilety = 4);

    ~KasaBiletowa();

    KasaBiletowa(const KasaBiletowa &kasa);

    bool SprzedajBilet();
};

#endif