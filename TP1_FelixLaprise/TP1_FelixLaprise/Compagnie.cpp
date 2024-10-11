#include "Compagnie.h"
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>
using namespace std;

Compagnie::Compagnie(string nomCompagnie) {
	
	this->nombreEmployesActuel = 0;
	this->nombreEmployesMax = 30;
	this->tableauEmployes = new Employe[nombreEmployesMax];
	this->nomCompagnie = nomCompagnie;
}
void Compagnie::afficher()
{
	cout << nomCompagnie << " a " << nombreEmployesActuel << " d'employes" << endl;

}

bool Compagnie::lireFichier(const string nomFichier) {

	ifstream fichier(nomFichier);
	

	string line;
	int i = 0;

	if (!fichier.is_open()) {
		cerr << "Erreur : Impossible d'ouvrir le fichier." << endl;
		return false;
	}

	
	while (getline(fichier, line) && i < 2) {
		istringstream iss(line);
		string nom="", prenom = "", poste = "", sDate = "";
		char sexe=0;
		double salaire=0;

		
		getline(iss, nom, ';');
		getline(iss, prenom, ';');
		iss >> sexe;
		iss.ignore(); 
		getline(iss, poste, ';');
		iss >> salaire;
		iss.ignore(); 
		getline(iss, sDate, ';');



		istringstream ss(sDate);
		string temp;

		int aDate[3];
		int index = 0;

		while (getline(ss, temp, '/') && index < 3) {
			aDate[index] = stoi(temp);
			index++;
		}

		Date date(aDate[0], aDate[1], aDate[2]);

		Employe tempE(nom, prenom, sexe, poste, salaire, date);
		
		

		this->tableauEmployes[this->nombreEmployesActuel] = tempE;
	
		this->nombreEmployesActuel++;
		

		i++; 
	}



	fichier.close();

	return 0;
}




Compagnie::~Compagnie() {
	this->nombreEmployesActuel = 0;
	delete[] tableauEmployes; 
}

ostream& operator<<(ostream& os, const Compagnie& compagnie) {
	os << "Nom de la compagnie: " << compagnie.nomCompagnie << endl;
	os << "Nombre d'employes actuel: " << compagnie.nombreEmployesActuel << endl;
	os << "Nombre maximal d'employes: " << compagnie.nombreEmployesMax << endl;
	os << "Liste des employes:" << endl;

	for (int i = 0; i < compagnie.nombreEmployesActuel; ++i) {
		os << "Employe #" << i + 1 << " : " << compagnie.tableauEmployes[i] << endl;
	}
	return os;
}