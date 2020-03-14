/*
 *  ===== DEMO =====
 *  new oraz delete
 *  ================
 */

#include <iostream>

int main()
{
	int rozmiar;
	std::cout << "Podaj rozmiar: ";
	std::cin >> rozmiar;
	int * liczby = new int[rozmiar];
	
	std::cout << "Podaj elementy:";
	for (int i = 0; i < rozmiar; i++)
	{
		int tmp;
		std::cin >> tmp;
		liczby[i] = tmp;
	}

	delete [] liczby;

	int **macierz = new int * [2];
	macierz[0] = new int[2];
	macierz[1] = new int[4];

	delete [] macierz[1];
	delete [] macierz[0];
	delete [] macierz;


}
