/*
 *  ===== DEMO =====
 *  bool
 *  ================
 */
#include<iostream>

int main()
{

	bool zdanie(false);
	if (zdanie) std::cout << "zdanie prawdziwe\n";
	if (not zdanie) std::cout << "zdanie fałszywe\n";

	auto stany = {false, true};
	for(bool a : stany)
		for(bool b : stany)
			std::cout << a << " " 
				  << b << " " 
				  << (a and b) << "\n";

	std::cout << "===============\n" ;
	std::cout << true << " " << std::boolalpha << true << "\n";
}
