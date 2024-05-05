#include <iostream>

int main() {
    // Initialisation du tableau statique d'entiers avec des valeurs de choix
    int tableau[] = {10, 20, 30, 40, 50};

    // Affichage de l'adresse de chaque élément du tableau et leur valeur
    std::cout << "Adresse et valeur de chaque element du tableau :" << std::endl;
    for (int i = 0; i < sizeof(tableau) / sizeof(tableau[0]); ++i) {
        std::cout << "Adresse de l'element " << i << " : " << &tableau[i] << ", Valeur : " << tableau[i] << std::endl;
    }

    return 0;
}
