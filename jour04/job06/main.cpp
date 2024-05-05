#include <iostream>

int main() {
    int entier = 17;
    float flottant = 3.14f;
    double reel = 123.345;
    const char* caractere = "La Plateforme"; // Chaîne de caractères (tableau de type const char*)

    std::cout << "Adresse de la variable 'entier' : " << &entier << ", Valeur : " << entier << std::endl;
    std::cout << "Adresse de la variable 'flottant' : " << &flottant << ", Valeur : " << flottant << std::endl;
    std::cout << "Adresse de la variable 'reel' : " << &reel << ", Valeur : " << reel << std::endl;
    std::cout << "Adresse de la variable 'caractere' : " << static_cast<const void*>(caractere) << ", Valeur : " << caractere << std::endl;

    return 0;
}
