#include <iostream>

#include "src/Zespolone.hpp"

Zespolone Dodaj(Zespolone z1, Zespolone z2)
{
    return Zespolone{z1.Re()+z2.Re(), z1.Im()+z2.Im()};
}

double WartoscBezwzgledna(double liczba)
{
    return std::abs(liczba);
}

Zespolone operator+(Zespolone z1, Zespolone z2)
{
    return Dodaj(z1,z2);
}

int main()
{

    Zespolone z1{1.0,1.0};
    Zespolone z2{1.0,0.0};

    Zespolone z3 = Dodaj(z1,z2);
    z3.Wyswietl();

    Zespolone z4 = Dodaj(z1,1.0); // <-- konwersja `double` na `Zespolone` !
    z4.Wyswietl();


    Zespolone a = Zespolone(1.0);
    Zespolone b = (Zespolone)1.0;
    Zespolone c = static_cast<Zespolone>(1.0);

    a.Wyswietl();
    b.Wyswietl();
    c.Wyswietl();

    double liczba = -5.0;
    std::cout << WartoscBezwzgledna(liczba) << std::endl;

    Zespolone zespolonaLiczba{3,4};
    std::cout << WartoscBezwzgledna(zespolonaLiczba) << std::endl;

    // operator +
    Zespolone z5 = z1 + z2;
    z5.Wyswietl();

    // operator *
    Zespolone i {0,1};
    Zespolone jedynka{1,0};
    Zespolone wynikMnozenia{i*jedynka};
    wynikMnozenia.Wyswietl();
    wynikMnozenia = i*i;
    wynikMnozenia.Wyswietl();

    // post- i pre- ++
    Zespolone post{1.0,0.0};
    Zespolone pre{1.0,0.0};
    Zespolone wynikPost{post++};
    Zespolone wynikPre{++pre};
    post.Wyswietl();
    wynikPost.Wyswietl();
    pre.Wyswietl();
    wynikPre.Wyswietl();

}