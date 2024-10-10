// TP1_FelixLaprise.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

using namespace std;

void trierTab(int* tab, int taille);
void afficherTab(int* tab, int taille);
bool egalite(int tab1[], int tab2[], int taille);
bool egalitePtr(int* tab1, int* tab2, int taille);
int* concatenerTab(int* tab1, int* tab2, int taille);



/*
int main()
{
    const int NB_ELEMENTS = 10;
    int tableau1[] = { 22, 44, 12, 61, 4, 99, 33, 17, 15, 123 };
    int tableau2[] = { 22, 33, 44, 61, 4, 99, 12, 17, 123, 15 };
    int tableau3[] = { 22, 44, 12, 61, 4, 99, 33, 17, 15, 123 };

    cout << "concatenerTab" << endl;
    int* tableau4 = concatenerTab(tableau1, tableau2, NB_ELEMENTS);
    cout << endl << endl;
    cout << "affichage des 4 tableaux" << endl;
    cout << "tableau1 : ";
    afficherTab(tableau1, NB_ELEMENTS);
    cout << " | tableau2 : ";
    afficherTab(tableau2, NB_ELEMENTS);
    cout << " | tableau3 : ";
    afficherTab(tableau3, NB_ELEMENTS);
    cout << " | tableau4 : ";
    afficherTab(tableau4, 20);

    cout << endl << endl;
    cout << "Comparaison tableau1 et tableau2 : " << (egalite(tableau1, tableau2, NB_ELEMENTS) ? "true" : "false") << endl;
    cout << "Comparaison tableau1 et tableau3 : " << (egalite(tableau1, tableau3, NB_ELEMENTS) ? "true" : "false") << endl;

    cout << "Comparaison avec pointeur tableau1 et tableau2 : " << (egalitePtr(tableau1, tableau2, NB_ELEMENTS) ? "true": "false") << endl;
    cout << "Comparaison avec pointeur tableau1 et tableau3 : " << (egalitePtr(tableau1, tableau3, NB_ELEMENTS) ? "true" : "false") << endl;
    cout << endl << endl;
    cout << "tierTab" << endl;
    trierTab(tableau1, NB_ELEMENTS);
    trierTab(tableau2, NB_ELEMENTS);
    trierTab(tableau3, NB_ELEMENTS);
    trierTab(tableau4, 20);
    cout << endl << endl;
    cout << "affichage des 4 tableaux après triage" << endl;
    afficherTab(tableau1, NB_ELEMENTS);
    afficherTab(tableau2, NB_ELEMENTS);
    afficherTab(tableau3, NB_ELEMENTS);
    afficherTab(tableau4, 20);
    cout << endl << endl;
    cout << "Comparaison avec pointeur après triage tableau1 et tableau2 : " << (egalitePtr(tableau1, tableau2, NB_ELEMENTS) ? "true" : "false") << endl;
    cout << "Comparaison avec pointeur après triage tableau1 et tableau3 : " << (egalitePtr(tableau1, tableau3, NB_ELEMENTS) ? "true" : "false") << endl;


    
}*/

void trierTab(int* tab, int taille) {


    for (int i = 0; i < taille - 1; ++i) {
        for (int j = 0; j < taille - i - 1; ++j) {

            if (tab[j] > tab[j + 1]) {

                int temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
}

void afficherTab(int* tab, int taille) {
    cout << "tableau contient: ";
    int* pointeur = tab;
    for (int i = 0; i < taille; i++) {
        cout << *pointeur;
        if (i < taille - 1) {
            std::cout << ", ";
        }
        pointeur++;
    }
    cout << endl;
}

bool egalite(int tab1[], int tab2[], int taille) {

    bool status = true;

    if (sizeof(tab1) != sizeof(tab2)) {
        status = false;
    }

    for (int i = 0; i < taille - 1; ++i) {
        for (int j = 0; j < taille - i - 1; ++j) {

            if (tab1[j] != tab2[j]) {

                status = false;
            }
        }
    }

    return status;
}

bool egalitePtr(int* tab1, int* tab2, int taille) {

    try {
        bool status = true;
        int length = sizeof(tab1) / sizeof(tab1[0]);


        for (int i = 0; i < length; i++) {
            if (*tab1 != *tab2) {
                status = false;
            }

            tab1++;
            tab2++;
        }

        return status;
    }
    catch (const std::exception& ex) {
        cerr << ex.what();

    }
}

int* concatenerTab(int* tab1, int* tab2, int taille) {

    int tailleNouvelle = taille + taille;

    int* resultat = new int[tailleNouvelle];

    for (int i = 0; i < taille; i++) {
        resultat[i] = tab1[i];
    }

    for (int i = 0; i < taille; i++) {
        resultat[10 + i] = tab2[i];
    }

    
    return resultat;
}









