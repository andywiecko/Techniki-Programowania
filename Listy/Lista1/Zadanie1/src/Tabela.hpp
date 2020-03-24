#ifndef SRC_TABELA_HPP
#define SRC_TABELA_HPP

#include <vector>
#include <map>
#include "Stala.hpp"

using string_map = std::map<std::string,std::string>;
using int_map = std::map<std::string, int>;

class Tabela
{
private:
    std::vector<Stala> stale;
    const std::string sep{"   "}; // separator kolumn

    const std::string tytul{"Tabela stałych fizycznych"};

    static const string_map naglowki; // naglowki kolumn
    int_map szerokosci;               // szerokosci kolumn

    int szerokoscWartosc{6};

    void WyswietlTytul();
    void WyswietlNaglowek();
    void WyswietlStale();
    void PoliczMaksymalneSzerokosci();

public:
    Tabela(std::vector<Stala> _stale);
    void Wyswietl();
    void DodajStala(Stala stala);

};

#endif