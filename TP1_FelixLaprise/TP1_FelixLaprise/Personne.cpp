#include "Personne.h"
#include "Date.h"
#include <string> 
#include <iostream>
using namespace std;

Personne::Personne() {
    cout << "Constructeur a quatre arguments de Personne" << endl;
    nom = "John";
    prenom = "Doe";
    sexe = 'M';
    Date date;
}

Personne::Personne(string nom, string prenom, char sexe) {
    this->nom = nom;
    this->prenom = prenom;
    this->sexe = sexe;
    Date date;
}

void Personne::afficher() {
    cout << *this << endl;
    date.affiche();
    cout << " 26 mars 2018" << endl;
}

ostream& operator<<(ostream& os, const Personne& p) {
    os << "Nom: " << p.nom << ", Prénom: " << p.prenom << ", Sexe: " << p.sexe;
    return os;
}

istream& operator>>(istream& is, Personne& personne) {
    cout << "Entrez le nom: ";
    is >> personne.nom;
    cout << "Entrez le prénom: ";
    is >> personne.prenom;
    cout << "Entrez le sexe (M/F): ";
    is >> personne.sexe;




    return is;
}
