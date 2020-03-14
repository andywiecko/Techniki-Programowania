/*
 *  ===== DEMO =====
 *  std::array (tablice STL)
 *  ================
 */

#include <iostream>
#include <array>

template <size_t N, size_t M>
using mat = std::array<std::array<int, N>,M>;


int main()
{

	std::array pomiary = {3.4, 4.53, 66.74};

	std::array<int, 5> liczby = {1, 2, 3, 4, 5};
	for(auto liczba : liczby) std::cout << liczba << " ";
	std::cout << std::endl;

	//std::cout << liczby.at(6); <-- błąd
	
	std::array<std::array<int,2>, 2> pauliZ = {{
		                                 {1,0},
						 {0,-1}
						  }};
	
	for(auto row : pauliZ)
	{
		for(auto val : row)
		{
			std::cout << val << " ";
		}
		std::cout << "\n";
	}


	mat<2,2> pauliX = {{ {0,1},{1,0} }};

	for(auto row : pauliX)
	{
		for(auto val : row)
		{
			std::cout << val << " ";
		}
		std::cout << "\n";
	}




}
