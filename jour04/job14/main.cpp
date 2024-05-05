#include <iostream>

int main() {
    // Création de la variable x contenant l'entier 12
    int x = 12;

    // Affichage de la valeur initiale de x
    std::cout << "Valeur initiale de x : " << x << std::endl;

    // Création d'une référence modifiable vers x
    int& refX = x;

    // Modification de la valeur de x via la référence refX
    refX = 24;

    // Affichage de la nouvelle valeur de x
    std::cout << "Nouvelle valeur de x : " << x << std::endl;

    return 0;
}
