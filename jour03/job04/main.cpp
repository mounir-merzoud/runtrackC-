#include <iostream>
#include <cstring> // Inclure la bibliothèque pour utiliser la fonction strlen

int main() {
    const char* chaine = "Vive la plateforme !";

    // Utiliser la fonction strlen pour calculer la longueur de la chaîne
    size_t longueur = std::strlen(chaine);

    // Afficher la longueur de la chaîne
    std::cout << "La taille est " << longueur << std::endl;

    return 0;
}
