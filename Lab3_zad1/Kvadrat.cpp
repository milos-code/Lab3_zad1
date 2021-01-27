#include "Kvadrat.h"

Kvadrat::Kvadrat()
	:Figura()
{
	this->a = 0;
}

Kvadrat::Kvadrat(int brStranica, int a)
	: Figura(brStranica)
{
	this->a = a;
}

Kvadrat::~Kvadrat()
{
	this->a = 0;
	this->brojStranica = 0;
	delete[] nizStranica;
}

void Kvadrat::prikazi()
{
	std::cout << "Kvadrat stranice: " << this->a << std::endl;
	/*Figura::prikazi();*/
	std::cout << " Povrsina: " << povrsina() << std::endl;
	
}

double Kvadrat::povrsina()
{
	return a * a;
}

void Kvadrat::printToFile(std::ofstream& outputStream)
{
	outputStream << "Kvadrat. Stranica: " << a;
	Figura::printToFile(outputStream);
	outputStream << " Povrsina: " << povrsina() << std::endl;
}
