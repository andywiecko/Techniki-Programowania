/*
 *  ===== DEMO =====
 *  array (zwykłe tablice)
 *  ================
 */

#include <iostream>

auto PoleKwadratu(double a)
{
	return a*a;
}

int main()
{
	int liczby[] = {1,2,3,4,5};

	for(int i = 0; i < 5; i++)	
		std::cout << liczby[i] << " ";
	std::cout << "\n";

	std::cout << liczby[6] << std::endl; // <-- śmieci

	for(int liczba : liczby)
		std::cout << liczba << " ";
	std::cout << "\n";

	// auto
	auto liczby2 = {3,4,5};
	std::cout << PoleKwadratu(2) << std::endl;
	
	// constexpr
	constexpr int n = 4;
	int liczby3[n];
	liczby[0] = 3;
	
	// tablice wielowymiarowe
	int macierz[3][5] = {{1,2,3,4,5},{10,20,30,40,50},{100,200,300,400,500}};
	int macierz2[][5] = {{1,2,3,4,5},{10,20,30,40,50},{100,200,300,400,500}};
	int macierz3[3][3] = {{},{},{}};

	for(auto &row : macierz3)
	{
		for(auto val : row)
		{
			std::cout << val << " ";
		}
		std::cout << "\n";
	}

	int matrix[3][3] = {1,2,3,4,5,6,7,8,9};
	for(auto element : reinterpret_cast<int(&)[3*3]>(matrix)) std::cout << element << " ";

}
