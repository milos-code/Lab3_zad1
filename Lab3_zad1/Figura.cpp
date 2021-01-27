#include "Figura.h"
Figura::Figura()
{
	this->brojStranica = 0;
	nizStranica = nullptr;
}
Figura::Figura(int brStranica)
{
	this->brojStranica = brStranica;
	nizStranica = new int[brStranica];
}

Figura::~Figura()
{
	delete[] nizStranica;
}

void Figura::prikazi()
{
	std::cout << "Broj stranica: " << brojStranica << " stranice:";
	/*for (int i = 0; i < brojStranica; i++)
		std::cout << nizStranica[i];
	std::cout << std::endl;*/
}

void Figura::printToFile(std::ostream& outputStream)
{
	outputStream << brojStranica << std::endl;
}
