#include "Personnage.h"

/*
Personnage::Personnage(string nom, int hp, string nomArme, int degatsArme) 
	:arme(nomArme, degatsArme)
{
	this->nom = nom;
	this->hp = hp;
	cout << "Constructeur de Personnage" << endl;
	


}*/


Personnage::Personnage(string nom, int hp)
{
	this->nom = nom;
	this->hp = hp;
	this->arme = NULL;
	cout << "Constructeur de Personnage sans Arme" << endl;
}
/*
Personnage::Personnage() {
	cout << "Constructeur de Personnage sans Arme" << endl;
	this->arme = NULL;
}*/



//destructeur d'objet Personnage, appelé avec delete personnage;
Personnage::~Personnage() {
	if (arme) {
		delete arme;
	}
	cout << "destructeur de Personnage" << endl;


}

void Personnage::TakeWeapon(Arme*& arme){
	
	this->arme = arme;
	arme = NULL;

}



/*
//permet de faire arme->toString(); pour afficher l'objet arme
void Personnage::toString() {
	cout << nom << " qui fait " << degats << "degats" << endl;

	
}*/

//permet de faire cout <<*arme; pour afficher l'objet arme
ostream& operator <<(ostream& os, Personnage& personnage) {
	os << personnage.nom << " qui a" << personnage.hp << "hp" << endl;
	if (personnage.arme) {
		os << "Il a " << personnage.arme;
	}
	else {
		os << "Sans arme";
	}
	
	return os;
}
/*
//permet d'entrer les infos d'une arme
istream& operator >>(istream& is, Personnage& personnage) {
	is >> personnage.nom >> personnage.hp >> personnage.nomArme >> personnage.degatsArme;
	return is;
}*/