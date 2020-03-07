#include <iostream>
#include <iomanip>

int main()
{
	double pi = 3.141592653589;

	int precyzja = std::cout.precision();
	std::cout << pi << "\n";

	std::cout.precision(10);
	std::cout << pi << "\n";
	std::cout << std::setprecision(5);
	std::cout << pi << "\n";

	// przywracamy początkową precyzję
	std::cout.precision(precyzja);

	std::cout << pi << "\n";

	std::cout << std::scientific;
	std::cout << pi << "\n";


}
