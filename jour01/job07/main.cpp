#include <iostream>

int main() {
    // Déclaration de la variable pour stocker le nombre entier saisi par l'utilisateur
    int nombre;

    // Demander à l'utilisateur de saisir le nombre entier
    std::cout << "Entrez un nombre entier : ";
    std::cin >> nombre;

    // Vérifier si le nombre est pair ou impair et afficher le résultat
    if (nombre % 2 == 0) {
        std::cout << nombre << " est un nombre pair." << std::endl;
    } else {
        std::cout << nombre << " est un nombre impair." << std::endl;
    }

    return 0;
}
