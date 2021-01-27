#pragma once
#include "Figura.h"

class Pravougaonik: public Figura
{
public:
	Pravougaonik();
	Pravougaonik(int brStranica, int a, int b);
	~Pravougaonik();

	double povrsina();
	void prikazi();
	
	void printToFile(std::ofstream& outputStream);
private:
	int a;
	int b;
};

