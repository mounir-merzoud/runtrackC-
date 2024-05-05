#include <iostream>

int main() {
    int taille;

    // Demande à l'utilisateur de saisir la taille du tableau
    std::cout << "Entrez la taille du tableau : ";
    std::cin >> taille;

    // Création d'un tableau dynamique d'entiers de taille définie par l'utilisateur
    int* tableau = new int[taille];

    // Demande à l'utilisateur de saisir les éléments du tableau
    std::cout << "Entrez les entiers du tableau :" << std::endl;
    for (int i = 0; i < taille; ++i) {
        std::cout << "Element " << i + 1 << " : ";
        std::cin >> tableau[i];
    }

    // Affichage du contenu du tableau
    std::cout << "Contenu du tableau :" << std::endl;
    for (int i = 0; i < taille; ++i) {
        std::cout << "Element " << i + 1 << " : " << tableau[i] << std::endl;
    }

    // Libération de la mémoire allouée pour le tableau dynamique
    delete[] tableau;

    return 0;
}
