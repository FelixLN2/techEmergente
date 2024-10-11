#include "Employe.h"
#include "Date.h"
#include <iostream>
#include <string>;


using namespace std;


Employe::Employe()
    : Personne(),
    poste("developpeur"),
    salaire(30.26),      
    dateEmbauche(Date())  
{
 
}

Employe::Employe(const string& nom, const string& prenom, const char& sexe,const string& poste, const double& salaire, const Date& dateEmbauche)
    : Personne(nom, prenom, sexe), poste(poste), salaire(salaire), dateEmbauche(dateEmbauche) 
{
   
}

void Employe::afficher() {
    cout << "Poste : " << poste << " Salaire : " << salaire << " Date d'embauche : ";
    dateEmbauche.affiche();
    cout << endl;
}

ostream& operator<<(ostream& os, const Employe& employe) {
   
    os << static_cast<const Personne&>(employe)
        << ", Poste: " << employe.poste
        << ", Salaire: " << employe.salaire
        << ", Date d'embauche: " << employe.dateEmbauche.getDate();
    
    return os;
}

// Overload the >> operator
istream& operator>>(istream& is, Employe& employe) {
    is >> static_cast<Personne&>(employe);
    cout << "Entrez le poste: ";
    is >> employe.poste;
    cout << "Entrez le salaire: ";
    is >> employe.salaire; 
    cout << "Entrez la date d'embauche (jour mois annee): "; 
    
    int day = 0;
    int month = 0;
    int year = 0;

    cout << "enter jour: " << endl;
    cin >> day;
    cout << "entrer mois : " << endl;
    cin >> month;
    cout << "entrer annee : " << endl;
    cin >> year;


    employe.dateEmbauche.modifier(day,month,year);

    return is;
}