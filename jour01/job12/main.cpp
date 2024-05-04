#include <iostream>

int main() {
    int entier;
    double somme = 0;
    int nombreEntiers = 5;

    std::cout << "Veuillez saisir cinq entiers : " << std::endl;

    for (int i = 0; i < nombreEntiers; ++i) {
        std::cout << "Entier " << i + 1 << " : ";
        std::cin >> entier;
        somme += entier;
    }

    double moyenne = somme / nombreEntiers;

    std::cout << "La moyenne des cinq entiers est : " << moyenne << std::endl;

    return 0;
}
