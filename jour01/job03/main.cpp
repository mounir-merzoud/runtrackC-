#include <iostream>

int main() {
    int N;

    // Demander à l'utilisateur de saisir la valeur de N
    std::cout << "Entrez la valeur de N : ";
    std::cin >> N;

    // Vérifier que N est strictement positif
    while (N > 0) {
        std::cout << "Hello World" << std::endl;
        N--; // Décrémenter N à chaque itération
    }

    return 0;
}
