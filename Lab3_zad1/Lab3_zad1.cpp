#include <iostream>
#include "Kvadrat.h"
#include "Pravougaonik.h"

int main()
{
    int brojObjekata = 2018;
    Figura** figure = new Figura * [brojObjekata];
    for (int i = 0; i < brojObjekata / 2; i++)
        figure[i] = new Kvadrat(rand() % 15, rand() % 10);
    for (int i = brojObjekata / 2; i < brojObjekata; i++)
        figure[i] = new Pravougaonik(rand() % 15, rand() % 10, rand() % 10);
    
    for(int i = 0; i < brojObjekata - 1; i++)
        for (int j = i + 1; j < brojObjekata; j++)
        {
            if (figure[i]->povrsina() >= figure[j]->povrsina())
            {
                Figura* pom = figure[i];
                figure[i] = figure[j];
                figure[j] = pom;
            }
        }
    std::ofstream outputFileStream("Figure.txt");

    for (int i = 0; i < brojObjekata; i++)
    {
        figure[i]->printToFile(outputFileStream);
    }

    outputFileStream.close();

    for (int i = 0; i < brojObjekata; i++)
        figure[i]->prikazi();
}