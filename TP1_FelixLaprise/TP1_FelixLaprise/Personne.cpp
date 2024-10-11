#include "Personne.h"
#include "Date.h"
#include <string> 
#include <iostream>
using namespace std;

Personne::Personne() {
    
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
    cout << nom << " " << prenom << "," << sexe << endl;
    date.affiche();
    
    
}

ostream& operator<<(ostream& os, const Personne& personne){
    os << "Nom: " << personne.nom << ", Prénom: " << personne.prenom << ", Sexe: " << personne.sexe;
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
