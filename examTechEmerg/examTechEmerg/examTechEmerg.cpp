// examTechEmerg.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//



#include <iostream>

using namespace std;

void lireTableau(int* pointeur, int& entier) {
    cout << "Entrez taille du tableau" << endl;
    cin >> entier;

    pointeur = new int[entier];

    for (int i = 0; i < entier; i++) {
        cout << "Entrez nombre a placer dans tableau a emplacement" << i << endl;
        cin >> pointeur[i];
    }





}

void calcul(int tab[], int taille, int& max1, int& max2) {

    int old = 0;

    for (int i = 0; i < taille; i++) {

        if (tab[i] > max1) {
            max2 = max1;
            max1 = tab[i];
        }
        else if (tab[i] > max2) {
            max2 = tab[i];
        }
        
    }


}
int main()
{
    int n, max1 =0, max2=0;

    

 
    int tab[1];

    lireTableau(tab, n);

    for (int i = 0; i < n; i++) {
        cout << tab[i] << endl;
    }

    calcul(tab, n, max1, max2);

    cout << "Deux plus grandes valeurs entrees : " << max1 << " et " << max2 << endl;
    
    delete[] tab;
    
   
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
