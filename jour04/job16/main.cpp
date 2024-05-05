#include <iostream>

// Fonction pour trouver la valeur maximale d'un tableau d'entiers
int trouverMax(int* tableau, int taille) {
    // Initialisation de la valeur maximale avec la première valeur du tableau
    int max = tableau[0];

    // Parcours du tableau pour trouver la valeur maximale
    for (int i = 1; i < taille; ++i) {
        if (tableau[i] > max) {
            max = tableau[i];
        }
    }

    return max;
}

int main() {
    // Déclaration et initialisation d'un tableau d'entiers
    int tableau[] = {5, 12, 8, 20, 4, 15};

    // Calcul de la taille du tableau
    int taille = sizeof(tableau) / sizeof(tableau[0]);

    // Appel de la fonction pour trouver la valeur maximale du tableau
    int valeurMax = trouverMax(tableau, taille);

    // Affichage de la valeur maximale du tableau
    std::cout << "La valeur maximale du tableau est : " << valeurMax << std::endl;

    return 0;
}
