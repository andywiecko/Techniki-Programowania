#include <iostream>
#include <iomanip>

int main()
{

	std::cout << "Witaj świecie!\n";
	std::cout.fill('&');
	std::cout.width(8);
	std::cout << std::left;
	std::cout << std::setw(9) << 1 << "\n";
	
	int liczba;
	std::cout << "Podaj liczbę: ";
	std::cin >> liczba; 
	std::cout << "Podano liczbę: " << liczba << "\n";

}
