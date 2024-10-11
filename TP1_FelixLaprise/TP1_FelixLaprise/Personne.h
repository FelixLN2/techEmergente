#ifndef _classePersonne_H
#define _classePersonne_H
#include <iostream>
#include <string>
#include <sstream>
#include "Date.h"


using namespace std;


class Personne {
private:
    string nom;
    string prenom;
    char sexe;
    Date date;

public:
    Personne();
    Personne(string nom, string prenom, char sexe);
    friend ostream& operator<<(ostream& os, const Personne& personne);
    
    friend istream& operator>>(istream& is, Personne& personne);

    void afficher();
};

#endif

