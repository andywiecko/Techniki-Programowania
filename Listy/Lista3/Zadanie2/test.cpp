#include <iostream>
#include "point2d.hpp"

int main()
{
    const double pi{3.141592653589793238462643};
    Point2d punkt{1, 0};
    std::cout << "Obroty:" << std::endl;
    std::cout << std::string(20, '=') << std::endl;
    std::cout << punkt << std::endl;
    for (int i = 0; i < 4; i++)
    {
        punkt.obrot(Point2d{0, 0}, pi / 2.);
        std::cout << punkt << std::endl;
    }

    std::cout << "Jednokładność" << std::endl;
    std::cout << std::string(20, '=') << std::endl;
    punkt = Point2d{1, 0};
    std::cout << punkt << std::endl;
    punkt.jednokladnosc(Point2d{0, 0}, 2);
    std::cout << punkt << std::endl;
}
