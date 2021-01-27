#pragma once
#include "Figura.h"

class Kvadrat : public Figura
{
public:
	Kvadrat();
	Kvadrat(int brStranica, int a);
	~Kvadrat();

	void prikazi();
	double povrsina();
	void printToFile(std::ofstream& outputStream);
private:
	int a;
};

