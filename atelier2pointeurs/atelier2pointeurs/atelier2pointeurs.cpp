// atelier2pointeurs.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

using namespace std;

void array1(int*, int, int&, int&);

int main()
{
    int* array = new int[5];
    int min = 0;
    int max = 1;


    array1(array, 5, min ,max);
}

void array1(int* array, int length, int &min, int &max) {
    
    
    int* ptr = array;

    for (int i = 0; i < 5; i++) {
        cout << &array[i];
        cout << "Entrer la " << i + 1 << "e valeur" << endl;
        cin >> array[i];
        
    }

    cout << ptr;

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
