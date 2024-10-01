// cours3.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <fstream>


using namespace std;


void minEtMax(int[], int, int&, int&);


int main()
{
    string nomFichier = "donnees.txt";
    int valeur;
    int* valeurs;
    int nbValeurs;
    ifstream fichier(nomFichier);
    ofstream sortie("resultat.txt");

    if (!fichier) {
        cerr << "fichier introuvable" << endl;
        return -1;
    }
    /*
    while (!fichier.eof()) {
        fichier >> valeur;
        cout << valeur << endl;
    }*/

    while (fichier >> valeur) {
        cout << valeur << endl;
        nbValeurs++;
    }


    valeurs = new int[nbValeurs];
    fichier.close();
    fichier.open(nomFichier);

    for (int i = 0; i < nbValeurs; i++) {
        fichier >> valeurs[i];
    }

    int i = 0;
    while (fichier >> valeurs[i++]);
    


    delete[] valeurs;











    /*
    int tab[5];
    int min = 0;
    int max = 0;

    tab[0] = 0;
    tab[1] = 1;
    tab[2] = 2;
    tab[3] = 3;
    tab[4] = 4;

    int n;
    int* tableau;
    cout << "entrer taille tableau" << endl;
    cin >> n;
    tableau = new int[n];
    cout << endl;

    int* ptr = tab;

    for (int* ptr = tab; ptr < tab + n; ptr++) {
        cout << *ptr << endl;
        cout << endl;
        cout << tab[ptr - tab] << endl;
        cout << endl;
    }*/
    /*
    for (int i = 0; i < n; i++) {
        cin >> tab[i];
    }

    for (int i = 0; i < n; i++) {
        cout << tab[i] << endl;
    }*/



    /*
    minEtMax(tab, sizeof(tab)/sizeof(int), min, max);
    cout << "min : " << min << endl;
    cout << "max : " << max << endl;*/
}

void minEtMax(int tab[], int taille, int& min, int& max) {
    min = tab[0];
    max = tab[0];
    for (int i = 0; i < taille; i++) {
        cout << tab[i] << endl;

        if (tab[i] < min) {
            min = tab[i];
        }
        else if (tab[i] > max) {
            max = tab[i];
        }

    }


}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
