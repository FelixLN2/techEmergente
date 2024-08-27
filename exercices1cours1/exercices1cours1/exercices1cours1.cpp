// exercices1cours1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

using namespace std;

int moyenne();

int somme(int nb1, int nb2);
int difference(int nb1, int nb2);
int produit(int nb1, int nb2);
int quotient(int nb1, int nb2);

int operations(int nb = 0);
int add1(int nb);
int times2(int nb);
int minus4(int nb);

int dollar();


int main()
{
    //cout << moyenne();
    //operations(10);
    dollar();
}

int moyenne() {
    int nb1, nb2, nb3, nb4, nb5;

    
    for(int i = 0; i < 5; i++) {
        cout << "entrez la " << i+1 << "e valeur" << endl;
        switch (i) {
        case 0:
            cin >> nb1;
            break;
        case 1:
            cin >> nb2;
            break;
        case 2:
            cin >> nb3;
            break;
        case 3:
            cin >> nb4;
            break;
        case 4:
            cin >> nb5;
            break;
        }
        
    }



    return (nb1 + nb2 + nb3 + nb4 + nb5)/5;
}

int somme(int nb1, int nb2) {
    return nb1 + nb2;
}

int difference(int nb1, int nb2) {
    return nb1 - nb2;
}

int produit(int nb1, int nb2) {
    return nb1 * nb2;
}

int quotient(int nb1, int nb2) {
    return nb1 / nb2;
}

int operations(int nb) {
    int choix = 0;

    cout << "valeur = " << nb << endl;
    do {
        
        cout << "1. Ajouter 1" << endl;
        cout << "2. Multpiplier par 2" << endl;
        cout << "3. Soustraire 4" << endl;
        cout << "4. Quitter" << endl;

        cout << endl << "Choisissez entre 1 et 4" << endl;
        cin >> choix;


        switch (choix) {
        case 1:
            nb = add1(nb);
            cout << "valeur = " << nb << endl;

            break;
        case 2:
            nb = times2(nb);
            cout << "valeur = " << nb << endl;

            break;
        case 3:
            nb = minus4(nb);
            cout << "valeur = " << nb << endl;

            break;
        case 4:
            cout << "terminé" << endl;

            break;
        
        }
    } while (choix != 4);

        return nb;
}

int add1(int nb) {
    return nb + 1;
}
int times2(int nb) {
    return nb * 2;
}
int minus4(int nb) {
    return nb - 4;
}

int dollar() {
    int ways = 0;

    int dollar = 100;
    int fiver = 5;
    int tenner = 10;
    int quarter = 25;


    int i = 20;
    while (i != 0) {
        if(dollar / (i*fiver))
    }








    cout << "1 dollar = 20 x 5 cents" << endl;
    cout << "1 dollar = 18 x5 cents 1 x 10 cents" << endl;
    cout << "1 dollar = 16 x 5 cents 2 x 10 cents" << endl;
    cout << "1 dollar = 15 x 5 cents 1 x 25 cents" << endl;
    cout << "1 dollar = 14 x 5 cents 3 x 10 cents" << endl;
    cout << "1 dollar = 13 x 5 cents 1 x 25 cents 1 x 10 cents" << endl;
    cout << "1 dollar = 12 x 5 cents 4 x 10 cents" << endl;
    cout << "1 dollar = "

    return ways;

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
