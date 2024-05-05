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
    for (int i = a; i <= b; ++i) {
        std::cout << i << std::endl;
    }

    return 0;
}
