#include <iostream>
#include "Personne.h"
#include "Date.h"
#include "Employe.h"
using namespace std;

int main() {

    cout << "Test du constructeur par défaut :" << endl;
    Employe staff;
    cout << endl << endl;
    cout << "Afficher avec fonction afficher()" << endl;
    staff.afficher();
    cout << endl << endl;
    cout << "Afficher avec << " << endl;
    cout << staff << endl;

    Date date;
    cout << "Test du cosntructeur avec 3 arguments : " << endl;
    Employe clerk("Jean", "Jon", 'M', "clerk", 12.0, date);
    cout << endl << endl;
    cout << "Afficher avec fonction afficher()" << endl;
    clerk.afficher();
    cout << endl << endl;
    cout << "Afficher avec << " << endl;
    cout << clerk << endl;



    return 0;
}
