/*
 *  ===== DEMO =====
 *  enum class
 *  ================
 */
#include<iostream>

enum class DzienTygodnia
{
	poniedzialek,
	wtorek,
	sroda,
	czwartek,
	piatek,
	sobota,
	niedziela
};

int main()
{
	DzienTygodnia dzienTygodnia = DzienTygodnia::wtorek;

	switch(dzienTygodnia)
	{
		case DzienTygodnia::poniedzialek:
			std::cout << "poniedziałek\n";
			break;
		case DzienTygodnia::wtorek:
			std::cout << "wtorek\n";
			break;
		case DzienTygodnia::sroda:
			std::cout << "środa\n";
			break;
		case DzienTygodnia::czwartek:
			std::cout << "czwartek\n";
			break;
		case DzienTygodnia::piatek:
			std::cout << "piątek\n";
			break;
		case DzienTygodnia::sobota:
			std::cout << "sobota\n";
			break;
		case DzienTygodnia::niedziela:
			std::cout << "niedziela\n";
			break;

	}

	std::cout << static_cast<int>(DzienTygodnia::niedziela) << std::endl;

}
