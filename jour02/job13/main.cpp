#include <iostream>
#include <iomanip> // Pour std::setw pour aligner les nombres

int main() {
    int max_val = 10; // La valeur maximale pour la table de multiplication

    // En-tête de la table
    std::cout << "    ";
    for (int i = 1; i <= max_val; ++i) {
        std::cout << std::setw(4) << i;
    }
    std::cout << "\n";

    // Ligne séparatrice
    std::cout << "    ";
    for (int i = 1; i <= max_val; ++i) {
        std::cout << "----";
    }
    std::cout << "\n";

    // Corps de la table de multiplication
    for (int i = 1; i <= max_val; ++i) {
        std::cout << std::setw(2) << i << " |";
        for (int j = 1; j <= max_val; ++j) {
            std::cout << std::setw(4) << i * j;
        }
        std::cout << "\n";
    }

    return 0;
}
