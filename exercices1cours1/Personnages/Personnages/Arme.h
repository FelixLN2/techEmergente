#pragma once

#include <iostream>

using namespace std;

class Arme {
private:
	string nom;
	int degats;

public: 
	//Arme();
	Arme(string nom = "Arc", int degats = 10);
	~Arme();

	
	friend ostream& operator <<(ostream& os, Arme& arme);
	friend istream& operator >>(istream& is, Arme& arme);


	void toString();
};