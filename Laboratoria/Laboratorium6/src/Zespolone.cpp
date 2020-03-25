#include "Zespolone.hpp"
#include <cmath>

    Zespolone::Zespolone(double _real,
              double _imag) : real{_real}, imag{_imag}
    {
    }

    double Zespolone::Re()
    {
        return real;
    }

    double Zespolone::Im()
    {
        return imag;
    }

    void Zespolone::Wyswietl()
    {
        std::cout << "{" << real << ", " << imag << "}\n";
    }

    Zespolone::Zespolone(double a) : Zespolone(a,0.0)
    {
    }

    Zespolone::operator double()
    {
        return std::sqrt(real*real+imag*imag);
    }