#pragma once
#include<iostream>
#include<fstream>

class Figura
{
protected:
	int brojStranica;
	int* nizStranica;
public:
	Figura();
	Figura(int brStranica);
	virtual ~Figura();

	virtual double povrsina() = 0;
	virtual void prikazi();

	virtual void printToFile(std::ofstream& outputStream);
};

