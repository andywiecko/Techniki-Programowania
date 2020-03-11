/*
 *  ===== DEMO =====
 *  function overloading
 *  ================
 */
#include<iostream>

double PoleProstokata(double bokA, double bokB)
{
	return bokA * bokB;
}

double PoleProstokata(double bokA)
{
	return bokA * bokA;
}

int main()
{

	double bokA = 4.0;
	double bokB = 3.0;
	double poleProstokata = PoleProstokata(bokA,bokB);
	double poleKwadratu = PoleProstokata(bokA);


	std::cout << "Pole prostokąta wynosi: " << poleProstokata << "\n";
	std::cout << "Pole kwadratu wynosi: " << poleKwadratu << "\n";

}
