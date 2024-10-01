#include "Arme.h"

Arme::Arme(string nom, int degats) {
	this->nom = nom;
	this->degats = degats;
	cout << "Constructeur de Arme" << endl;


}

//destructeur d'objet Arme, appelé avec delete arme;
Arme::~Arme() {

	cout << "destructeur de Arme" << endl;


}

//permet de faire arme->toString(); pour afficher l'objet arme
void Arme::toString() {
	cout << nom << " qui fait " << degats << "degats" << endl;


}

//permet de faire cout <<*arme; pour afficher l'objet arme
ostream& operator <<(ostream& os, Arme& arme) {
	os << arme.nom << " qui fait " << arme.degats << "degats";
	return os;
}

//permet d'entrer les infos d'une arme
istream& operator >>(istream& is, Arme& arme) {
	is >> arme.nom >> arme.degats;
	return is;
}