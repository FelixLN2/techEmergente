#include <iostream>
#include "Date.h"

using namespace std;



Date::Date(int jour, int mois, int annee) {
    cout << "Constructeur a trois arguments de Date" << endl;
    if (valide(jour, mois, annee)) {
        this->jour = jour;
        this->mois = mois;
        this->annee = annee;
    }
    else {
        cout << "Date non valide. Utilisation des valeurs par défaut." << endl;
        this->jour = 6;
        this->mois = 10;
        this->annee = 2023;
    }
}
Date::Date() : jour(6), mois(10), annee(2023) {
    
}



int Date::valide(int jour, int mois, int annee) {

    if (annee < 0 || annee > 9999) {
        return false;
    }


    if (mois < 1 || mois > 12) {
        return false;
    }

    int joursDansLeMois = 31;

    if (mois == 4 || mois == 6 || mois == 9 || mois == 11) {
        joursDansLeMois = 30;
    }
    else if (mois == 2) {
        if ((annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0)) {
            joursDansLeMois = 29;
        }
        else {
            joursDansLeMois = 28;
        }
    }

    if (jour < 1 || jour > joursDansLeMois) {
        return false;
    }

    return true;
}

void Date::affiche() {
    string date = to_string(jour) + "/" + to_string(mois) + "|" + to_string(annee) + "    Jour/Mois/Annee";
    cout << date << endl;
}

bool Date::modifier(int jour, int mois, int annee)
{
    if (valide(jour, mois, annee)) {
        this->jour = jour;
        this->mois = mois;
        this->annee = annee;
        cout << "valeur changée" << endl;
        return true;
    }
    else {
        cout << "Nouvelle date non valide. Aucune modification n'a été effectuée." << endl;
        return false;
    }
}

//string Date::getDate() const {
//    return to_string(jour) + "/" + to_string(mois) + "/" + to_string(annee);
//}
