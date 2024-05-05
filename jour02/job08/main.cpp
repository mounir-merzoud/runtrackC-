#include <iostream>

int main() {
    int a, b;

    // Demander à l'utilisateur de saisir les bornes a et b
    std::cout << "Entrez la borne inferieure a : ";
    std::cin >> a;
    std::cout << "Entrez la borne superieure b : ";
    std::cin >> b;

    // Afficher tous les entiers de a à b inclusivement
    std::cout << "Les entiers de " << a << " a " << b << " sont :" << std::endl;
    
    int i = a; // Initialisation de i à la borne inférieure a
    
    while (i <= b) {
        std::cout << i << std::endl;
        i++; // Incrémenter i à chaque itération
    }

    return 0;
}
