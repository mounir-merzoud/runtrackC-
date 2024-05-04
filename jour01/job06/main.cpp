#include <iostream>

int main() {
    // Déclaration de la variable pour stocker l'entier donné par l'utilisateur
    int entier;

    // Demander à l'utilisateur de saisir l'entier
    std::cout << "Entrez un entier pour afficher sa table de multiplication : ";
    std::cin >> entier;

    // Afficher l'en-tête de la table de multiplication
    std::cout << "Table de multiplication de " << entier << " : " << std::endl;

    // Boucle pour calculer et afficher la table de multiplication
    for (int i = 1; i <= 10; ++i) {
        std::cout << entier << " * " << i << " = " << entier * i << std::endl;
    }

    return 0;
}
