#include "Pravougaonik.h"

Pravougaonik::Pravougaonik()
	:Figura()
{
	this->a = 0;
	this->b = 0;
}

Pravougaonik::Pravougaonik(int brStranica, int a, int b)
	:Figura(brStranica)
{
	this->a = a;
	this->b = b;
}

Pravougaonik::~Pravougaonik()
{
	this->a = 0;
	this->b = 0;
	this->brojStranica = 0;
	delete[] nizStranica;
}

double Pravougaonik::povrsina()
{
	return a * b;
}

void Pravougaonik::prikazi()
{
	std::cout << "Pravougaonik sa stanicama " << " a: " << a << " b " << b << std::endl;
	/*Figura::prikazi();*/
	std::cout << "Povrsina pravougaonika: " << povrsina() << std::endl;
}

void Pravougaonik::printToFile(std::ofstream& outputStream)
{
	outputStream << "Pravougaonik. Stranica: " << "a:" << a << " b:" << b;
	Figura::printToFile(outputStream);
	outputStream << " Povrsina: " << povrsina() << std::endl;
}
