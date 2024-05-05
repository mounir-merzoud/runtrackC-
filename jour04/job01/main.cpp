#include <iostream>

int main() {
    int number = 2019; // Déclaration de la variable avec la valeur 2019
    int* ptr = &number; // Déclaration d'un pointeur sur 'number' et affectation de l'adresse de 'number'

    // Affichage de la valeur de 'number' en utilisant le pointeur
    std::cout << "La valeur de \"number\" est : " << *ptr << std::endl;

    return 0;
}
