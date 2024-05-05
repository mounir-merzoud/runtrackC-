#include <iostream>

int main() {
    int entier, a, b;

    // Demander à l'utilisateur de saisir les bornes a et b
    std::cout << "Entrez la borne inferieure a : ";
    std::cin >> a;
    std::cout << "Entrez la borne superieure b : ";
    std::cin >> b;

    // Demander à l'utilisateur de saisir un entier
    std::cout << "Entrez un entier : ";
    std::cin >> entier;

    // Vérifier si l'entier est entre a et b (bornes incluses)
    if (entier >= a && entier <= b) {
        std::cout << "GAGNE" << std::endl;
    } else {
        std::cout << "PERDU" << std::endl;
    }

    return 0;
}
