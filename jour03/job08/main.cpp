#include <iostream>
#include <cstring> // Pour la fonction strlen

int main() {
    const int taille_max = 100; // Taille maximale de la chaîne
    char tab[taille_max]; // Déclaration du tableau pour stocker la chaîne
    std::string chaine; // Variable pour stocker la chaîne saisie par l'utilisateur

    // Demander à l'utilisateur de saisir une chaîne de caractères
    std::cout << "Entrez une chaine de caracteres : ";
    std::getline(std::cin, chaine);

    // Copier la chaîne saisie dans le tableau tab
    strncpy(tab, chaine.c_str(), taille_max - 1); // Utiliser strncpy pour éviter un dépassement de mémoire
    tab[taille_max - 1] = '\0'; // Ajouter le caractère de fin de chaîne

    // Afficher le contenu du tableau
    std::cout << "Contenu du tableau tab : " << tab << std::endl;

    return 0;
}
