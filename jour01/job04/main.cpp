#include <iostream>

int main() {
    // Déclaration des variables pour stocker les nombres
    double nombre1, nombre2;

    // Demander à l'utilisateur de saisir le premier nombre
    std::cout << "Entrez le premier nombre : ";
    std::cin >> nombre1;

    // Demander à l'utilisateur de saisir le deuxième nombre
    std::cout << "Entrez le deuxième nombre : ";
    std::cin >> nombre2;

    // Calculer la somme des deux nombres
    double somme = nombre1 + nombre2;

    // Afficher la somme
    std::cout << "La somme de " << nombre1 << " et " << nombre2 << " est : " << somme << std::endl;

    return 0;
}
