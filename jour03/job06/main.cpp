#include <iostream>

int main() {
    const int taille = 10;
    int T[taille];
    int count = 0;

    // Demander à l'utilisateur de saisir les 10 entiers
    std::cout << "Veuillez saisir 10 entiers :\n";
    for (int i = 0; i < taille; ++i) {
        std::cout << "Entier " << i + 1 << " : ";
        std::cin >> T[i];
    }

    // Compter le nombre d'entiers supérieurs ou égaux à 5
    for (int i = 0; i < taille; ++i) {
        if (T[i] >= 5) {
            count++;
        }
    }

    // Afficher le nombre d'entiers supérieurs ou égaux à 5
    std::cout << "Le nombre d'entiers supérieurs ou égaux à 5 est : " << count << std::endl;

    return 0;
}
