/*
 *  ===== DEMO =====
 *  std::map (mapa STL)
 *  ================
 */

#include <iostream>
#include <iomanip>
#include <map>
#include <string>
int main()
{
	std::map< std::string, double> miasta;
	miasta["Wroclaw"] = 2.1;
	miasta["Katowice"] = 9.8;
	miasta["Lublin"] = 6.0;

	std::cout << miasta["Lublin"] << std::endl;

	for(auto [klucz, wartosc] : miasta)
		std::cout << std::setw(12) << std::left 
			  << klucz << ": " << wartosc << std::endl;

	miasta.erase("Wroclaw");

	for(auto rekord : miasta)
		std::cout << rekord.first << ": " << rekord.second << std::endl;


	std::map<int,int> mapa = {{2,2},{4,4},{5,5}};
}
