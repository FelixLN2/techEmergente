#include "Compagnie.h"
#include <iostream>
#include <string>;
#include <sstream>
#include <fstream>
using namespace std;
//int main()
//{
//    string nomFichier;
//    ifstream fichier;
//    ofstream fichierSortie;
//
//    fichierSortie.open("sortie.txt");
//
//    cout << "Entrez un nom de fichier: " << endl;
//
//    fichier.open("test.txt");
//    if (!fichier) {
//        cerr << "Fichier introuvable" << endl;
//        return -1;
//    }
//
//    string motLu;
//    while (fichier >> motLu) {
//
//        fichierSortie << motLu << endl;
//    }
//
//    fichierSortie.close();
//    fichier.close();
//    return 0;
//
//}
Compagnie::Compagnie(string nomCompagnie) {
	cout << "Constructeur a trois arguments de Compagnie" << endl;
	this->nombreEmployesActuel = 0;
	this->nombreEmployesMax = 30;
	this->tableauEmployes = new Employe[nombreEmployesActuel];
	this->nomCompagnie = nomCompagnie;
}
void Compagnie::afficher()
{
	cout << nomCompagnie << " a " << nombreEmployesActuel << " d'employes" << endl;

}

bool Compagnie::lireFichier(const string nomFichier) {

	ifstream fichier(nomFichier);
	ofstream fichierSortie;

	string line;
	int i = 0;
	
	while (getline(fichier, line) && i < 2) {
		istringstream iss(line);
		string nom, prenom, poste, sDate;
		char sexe;
		double salaire;

		// Assuming the format is: nom;prenom;sexe;poste;salaire;date
		getline(iss, nom, ';');
		getline(iss, prenom, ';');
		iss >> sexe;
		iss.ignore(); // Ignore the separator
		getline(iss, poste, ';');
		iss >> salaire;
		iss.ignore(); // Ignore the separator
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

		Employe temp(nom, prenom, sexe, poste, salaire, date);
		

		this->tableauEmployes[this->nombreEmployesActuel];
		
		this->nombreEmployesActuel++;


		i++;
	}



	fichier.close();

	return 0;
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