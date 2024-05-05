#include <iostream>

int main() {
    // Création du tableau contenant les éléments 1, 2, 3, 4, 5
    int tableau[] = {1, 2, 3, 4, 5};

    // Affichage des valeurs du tableau à l'aide d'une boucle et des références
    std::cout << "Contenu du tableau :" << std::endl;
    for (int& valeur : tableau) {
        std::cout << valeur << " ";
    }
    std::cout << std::endl;

    return 0;
}
