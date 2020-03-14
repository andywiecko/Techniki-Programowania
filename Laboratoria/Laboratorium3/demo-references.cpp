#include <iostream>

void PorzucZnak(double &liczba)
{
	liczba = std::abs(liczba);
}


int main()
{

	int liczba = 4;
	int &czworka = liczba;

	std::cout << liczba << std::endl;
	std::cout << czworka << std::endl;
	
	liczba += 2;
	
	std::cout << liczba << std::endl;
	std::cout << czworka << std::endl;

	czworka += 2;
	
	std::cout << liczba << std::endl;
	std::cout << czworka << std::endl;

	double test(-4435.324);
	PorzucZnak(test);
	std::cout << test << std::endl;


}
