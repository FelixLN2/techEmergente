#pragma once


#include <iostream>
#include "Arme.h"
using namespace std;

class Personnage {

private:
	string nom;
	int hp;
	Arme* arme;
	/*string nomArme;
	int degatsArme;*/

public:
	Personnage(string nom = "anon", int hp = 100);
	/*Personnage(string nom = "anon", int hp = 100, string nomArme = "club", int degatsArme = 5);
	
	Personnage();*/
	
	
	~Personnage();

	friend ostream& operator <<(ostream& os, Personnage& personnage);
	friend istream& operator >>(istream& is, Personnage& personnage);

	void TakeWeapon(Arme*& arme);
};