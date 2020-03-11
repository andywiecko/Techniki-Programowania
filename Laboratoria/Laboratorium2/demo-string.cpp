/*
 *  ===== DEMO =====
 *  std::string
 *  ================
 */
#include<iostream>
#include<string>

void SzyfrCezara(std::string &napis, size_t klucz)
{
	for(char &znak : napis) znak += klucz;
}

int main()
{
	std::string linia(15,'=');
	std::cout << linia << "\n";

	std::string napis = "Ala ma kota";
	std::string zdanie = "Czy " + napis;
	zdanie += "?";

	std::cout << zdanie << "\n";
	std::cout << linia << "\n";

	std::cout << "4 litera (od 0) to: " << zdanie.at(4) << "\n";


	for(int i=0;i < zdanie.length(); i++)
		std::cout << "_" << zdanie.at(i);
	std::cout << std::endl;

	std::cout << "Napis przed szyfrowaniem: " << zdanie << "\n";
	SzyfrCezara(zdanie,5);
	std::cout << "Napis po szyfrowaniu:     " << zdanie << "\n";
	

	std::cout << "Enter `quit` to exit \n";
	for(std::string line; line != "quit"; std::cout << ">", std::cin >> line) ;

}
