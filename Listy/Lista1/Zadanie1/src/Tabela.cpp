#include <iostream>
#include <iomanip>

#include "Tabela.hpp"

Tabela::Tabela(std::vector<Stala> _stale)
    : stale{_stale}
{
    szerokosci = {
        {"nazwa", naglowki.at("nazwa").length()},
        {"wartość", naglowki.at("wartość").length()},
        {"jednostka", naglowki.at("jednostka").length()},
        {"opis", naglowki.at("jednostka").length()},
    };
}

void Tabela::WyswietlTytul()
{
    std::cout << tytul << "\n";
}

void Tabela::WyswietlNaglowek()
{
    std::cout
        << std::setw(szerokosci["nazwa"]) << std::left << naglowki.at("nazwa") << sep
        << std::setw(szerokosci["wartość"]) << std::left << naglowki.at("wartość") << sep
        << std::setw(szerokosci["jednostka"]) << std::left << naglowki.at("jednostka") << sep
        << std::setw(szerokosci["opis"]) << std::left << naglowki.at("opis") << sep
        << "\n";
}

void Tabela::WyswietlStale()
{
    for (auto stala : stale)
    {
        std::cout
            << std::setw(szerokosci["nazwa"]) << std::left << stala.nazwa << sep
            << std::setw(szerokosci["wartość"]) << std::setprecision(5) << std::left << std::scientific << stala.wartosc << sep
            << std::setw(szerokosci["jednostka"]) << std::left << stala.jednostka << sep
            << std::setw(szerokosci["opis"]) << std::left << stala.opis << sep
            << "\n";
    }
}

void Tabela::PoliczMaksymalneSzerokosci()
{
    
    if (szerokoscWartosc > szerokosci.at("wartość"))
        szerokosci.at("wartość") = szerokoscWartosc;
    szerokosci.at("wartość") += 5; // [!] szerokosc mantysy, nie można modyfikować szerokosci mantysy
                                   //     korzystając ze standardowych bibliotek
                                   //     możliwe rozwiązanie tutaj: https://stackoverflow.com/questions/7132957/c-scientific-notation-format-number

    for (auto stala : stale)
    {
        int nazwaSzer = stala.nazwa.length();
        if (nazwaSzer > szerokosci.at("nazwa"))
            szerokosci.at("nazwa") = nazwaSzer;

        int jednostkaSzer = stala.jednostka.length();
        if (jednostkaSzer > szerokosci.at("jednostka"))
            szerokosci.at("jednostka") = jednostkaSzer;

        int opisSzer = stala.nazwa.length();
        if (nazwaSzer > szerokosci.at("opis"))
            szerokosci.at("opis") = opisSzer;
    }
}

void Tabela::Wyswietl()
{
    PoliczMaksymalneSzerokosci();
    WyswietlTytul();
    WyswietlNaglowek();
    WyswietlStale();
}

void Tabela::DodajStala(Stala stala)
{
    stale.push_back(stala);
}

const string_map Tabela::naglowki{
    {"nazwa", "Nazwa"},
    {"wartość", "Wartosc"},     // [!] nie ma polskich znaków, bo ę, ą wyświetlają się jako jeden znak w std::cout
    {"jednostka", "Jednostka"}, //     ale .length() liczy te znaki jako więcej niż 1!
    {"opis", "Opis"}            //     możliwe rozwiązanie: https://stackoverflow.com/questions/31652407/how-to-get-the-accurate-length-of-a-stdstring
};