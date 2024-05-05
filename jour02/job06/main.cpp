#include <iostream>

int main() {
    int n;

    // Demander à l'utilisateur de saisir un entier n
    std::cout << "Entrez un entier n : ";
    std::cin >> n;

    // Vérifier si chaque nombre jusqu'à n est un multiple de 3 ou de 5
    for (int i = 1; i <= n; ++i) {
        if (i % 3 == 0 && i % 5 == 0) {
            std::cout << i << " est un multiple de 3 et de 5." << std::endl;
        } else if (i % 3 == 0) {
            std::cout << i << " est un multiple de 3." << std::endl;
        } else if (i % 5 == 0) {
            std::cout << i << " est un multiple de 5." << std::endl;
        }
    }

    return 0;
}
