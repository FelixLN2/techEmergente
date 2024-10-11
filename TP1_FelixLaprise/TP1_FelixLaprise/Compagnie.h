#pragma once
#ifndef COMPAGNIE_H
#define COMPAGNIE_H
#include <iostream>
#include <fstream>

#include <string> 
#include "Employe.h"
class Compagnie
{
private:

    Employe* tableauEmployes;
    int nombreEmployesActuel;
    int nombreEmployesMax;
    string nomCompagnie;
public:
    Compagnie(string nomCompagnie);

    Compagnie(const string nomCompagnie, int nombreMaxEmployes, int nombreEmployesActuel = 0);
    bool lireFichier(const string nomFichier);
    void afficher();
    friend ostream& operator<<(ostream& os, const Compagnie& compagnie);

};

#endif


