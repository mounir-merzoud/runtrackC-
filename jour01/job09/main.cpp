#include <iostream>

int main() {
    // Déclaration des variables pour stocker les entiers saisis par l'utilisateur
    int entier1, entier2, entier3;

    // Demander à l'utilisateur de saisir les trois entiers
    std::cout << "Entrez le premier entier : ";
    std::cin >> entier1;

    std::cout << "Entrez le deuxième entier : ";
    std::cin >> entier2;

    std::cout << "Entrez le troisième entier : ";
    std::cin >> entier3;

    // Déterminer le plus grand parmi les trois entiers
    int plusGrand = entier1; // Supposons initialement que le premier entier est le plus grand

    if (entier2 > plusGrand) {
        plusGrand = entier2;
    }

    if (entier3 > plusGrand) {
        plusGrand = entier3;
    }

    // Afficher le plus grand entier
    std::cout << "Le plus grand des trois entiers est : " << plusGrand << std::endl;

    return 0;
}
