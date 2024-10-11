#include <iostream>
#include "Date.h"

using namespace std;

int main() {
 
    cout << "Test du constructeur par d�faut :" << endl;
    Date date1;  
    date1.affiche();

    cout << "--------------" << endl << endl;

    cout << "Test du constructeur avec des arguments valides (15/8/2022) :" << endl;
    Date date2(15, 8, 2024);
    date2.affiche();

    cout << "--------------" << endl << endl;

    cout << "Test du constructeur avec une journ�e invalide (32, 12, 2024) :" << endl;
    Date date3(32, 12, 2024); 
    date3.affiche();
    cout << endl;
    cout << "Test du constructeur avec un mois invalide (1, 13, 2024) :" << endl;
    Date date4(1, 13, 2024);  
    date4.affiche();
    cout << endl;
    cout << "Test du constructeur avec une ann�e invalide (1, 12, 10000) :" << endl;
    Date date5(1, 12, 10000);  
    date5.affiche();
    cout << "--------------" << endl << endl;

    cout << "Test de la m�thode modifier avec une date valide (20/12/2025) :" << endl;
    cout << "date avant modification : ";
    date2.affiche();
    cout << endl;
    date2.modifier(20, 12, 2025);
    date2.affiche();
    
    cout << "--------------" << endl << endl;


    cout << "Test de la m�thode modifier avec une journ�e invalide (45/11/2020) :" << endl;
    date2.modifier(45, 11, 2020);
    date2.affiche();
    cout << endl;
    cout << "Test de la m�thode modifier avec un mois invalide (1/13/2020) :" << endl;
    date2.modifier(45, 11, 2020);
    date2.affiche();
    cout << endl;
    cout << "Test de la m�thode modifier avec une ann�e invalide (1/11/10000) :" << endl;
    date2.modifier(45, 11, 2020);
    date2.affiche();
  
    return 0;
}
