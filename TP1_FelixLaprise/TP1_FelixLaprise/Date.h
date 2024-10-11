#ifndef _classeDate_H
#define _classeDate_H
#include <sstream>
#include <iostream>
#include <string> 

using namespace std;

class Date {
private:
    int jour, mois, annee;
    int valide(int, int, int);

public:
    Date();  
    Date(int jour, int mois, int annee);

    void affiche();
    bool modifier(int jour, int mois, int annee); 
    string getDate() const;
};

#endif
