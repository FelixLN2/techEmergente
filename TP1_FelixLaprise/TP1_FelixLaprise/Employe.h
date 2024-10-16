#pragma once
#ifndef EMPLOYE_H
#define EMPLOYE_H
#include "Personne.h"

#include <iostream>
#include <string> 
using namespace std;

class Employe : public Personne
{
private:
	string poste;
	double salaire;
	Date dateEmbauche;

public:
	Employe();
	Employe(const string& poste, const double& salaire, const Date& dateEmbauche);

	Employe(const string& nom, const string& prenom, const char& sexe, const string& poste, const double& salaire, const Date& dateEmbauche);
	void afficher();

	friend ostream& operator<<(ostream& os, const Employe& employe);

	friend istream& operator>>(istream& is, Employe& employe);
};

#endif

