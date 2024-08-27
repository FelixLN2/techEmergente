// cours1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

using namespace std;

void sommeDeuxNombres(int nb1, int nb2);
void echangerDeuxValeurs(int& nb1, int& nb2);


int main()
{
    int integ;
    string chaine;
    bool bull;


    cout << "Enter value\n";
    cin >> integ;
    cout << "value given: " << integ << endl;

    switch (integ) {

    case 0:
        cout << "bad 0 " << endl;
            break;
    case 1: case 2: case 3:
        cout << "good 1,2 or 3 " << endl;
            break;
    default:
        cout << "else" << endl;
            break;

    }

    do {
        cin >> integ;
        cout << "value given: " << integ << endl;

    } while (integ != 4);


    int tab[10];

    for (int i = 0; i < (sizeof(tab)/sizeof(tab[0])); i++) {
        cout << i << endl;
    }

    int nb1 = 12, nb2 = 24;
    sommeDeuxNombres(nb1,nb2);

    return 0;
}

void sommeDeuxNombres(int nb1, int nb2) {
    int somme;
    somme = nb1 + nb2;
    cout << nb1 << " + " << nb2 << " = " << somme;
}

void echangerDeuxValeurs(int& nb1, int& nb2) {
    int temp;
    temp = nb1;

    nb1 = nb2;
    nb2 = temp;

 
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
