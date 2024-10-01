// TP1_FelixLaprise.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>

using namespace std;

void trierTab(int* tab, int taille);
void afficherTab(int* tab, int taille);
bool egalite(int tab1[], int tab2[], int taille);
bool egalitePtr(int* tab1, int* tab2, int taille);
int* concatenerTab(int* tab1, int* tab2, int taille);




int main()
{
    const int NB_ELEMENTS = 10;
    int tableau1[] = { 22, 44, 12, 61, 4, 99, 33, 17, 15, 123 };
    int tableau2[] = { 22, 33, 44, 61, 4, 99, 12, 17, 123, 15 };
    int tableau3[] = { 22, 44, 12, 61, 4, 99, 33, 17, 15, 123 };

    int tableau4[20] = {};
   
    cout << "affichage des 4 tableaux" << endl;
    afficherTab(tableau1, NB_ELEMENTS);
    afficherTab(tableau2, NB_ELEMENTS);
    afficherTab(tableau3, NB_ELEMENTS);
    afficherTab(tableau4, NB_ELEMENTS);

    cout << "Comparaison tableau1 et tableau2 : " << egalite(tableau1, tableau2, NB_ELEMENTS) << endl;
    cout << "Comparaison tableau1 et tableau3 : " << egalite(tableau1, tableau3, NB_ELEMENTS) << endl;

    cout << "Comparaison avec pointeur tableau1 et tableau2 : " << egalitePtr(tableau1, tableau2, NB_ELEMENTS) << endl;
    cout << "Comparaison avec pointeur tableau1 et tableau3 : " << egalitePtr(tableau1, tableau3, NB_ELEMENTS) << endl;

    cout << "tierTab" << endl;
    trierTab(tableau1, NB_ELEMENTS);
    trierTab(tableau2, NB_ELEMENTS);
    trierTab(tableau3, NB_ELEMENTS);
    trierTab(tableau4, NB_ELEMENTS);

    cout << "affichage des 4 tableaux après triage" << endl;
    afficherTab(tableau1, NB_ELEMENTS);
    afficherTab(tableau2, NB_ELEMENTS);
    afficherTab(tableau3, NB_ELEMENTS);
    afficherTab(tableau4, NB_ELEMENTS);

    cout << "Comparaison avec pointeur après triage tableau1 et tableau2 : " << egalitePtr(tableau1, tableau2, NB_ELEMENTS) << endl;
    cout << "Comparaison avec pointeur après triage tableau1 et tableau3 : " << egalitePtr(tableau1, tableau3, NB_ELEMENTS) << endl;



}

void trierTab(int* tab, int taille) {

}

void afficherTab(int* tab, int taille) {

}

bool egalite(int tab1[], int tab2[], int taille) {

    return 0;
}

bool egalitePtr(int* tab, int* tab2, int taille) {

    return 0;
}

int* concatenerTab(int* tab1, int* tab2, int taille) {

    return 0;
}









