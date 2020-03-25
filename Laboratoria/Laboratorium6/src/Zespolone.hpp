#ifndef SRC_ZESPOLONE_HPP
#define SRC_ZESPOLONE_HPP

#include <iostream>

class Zespolone
{
private:
    double real;
    double imag;

public:
    Zespolone(double _real, double _imag);
    double Re();
    double Im();
    void Wyswietl();
    Zespolone(double a);
    operator double();
};

#endif