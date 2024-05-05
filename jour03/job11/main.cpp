#include <iostream>

int sommeElementsPairs(int tableau[], int taille) {
    int somme = 0;

    // Parcourir le tableau
    for (int i = 0; i < taille; ++i) {
        // Vérifier si l'élément est pair
        if (tableau[i] % 2 == 0) {
            // Ajouter l'élément pair à la somme
            somme += tableau[i];
        }
    }

    return somme; // Retourner la somme des éléments pairs
}

int main() {
    const int taille = 5; // Taille du tableau
    int tableau[taille];

    // Demander à l'utilisateur de saisir les éléments du tableau
    std::cout << "Entrez les " << taille << " entiers du tableau :\n";
    for (int i = 0; i < taille; ++i) {
        std::cout << "Element " << i + 1 << " : ";
        std::cin >> tableau[i];
    }

    // Calculer la somme des éléments pairs
    int somme_pairs = sommeElementsPairs(tableau, taille);

    // Afficher la somme des éléments pairs
    std::cout << "La somme des elements pairs du tableau est : " << somme_pairs << std::endl;

    return 0;
}
