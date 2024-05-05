#include <iostream>
#include <string>

int main() {
    // Initialisation du tableau de fruits
    std::string fruits[] = {"Pomme", "Banane", "Orange", "Fraise", "Kiwi"};

    // Affichage du contenu du tableau de fruits
    std::cout << "Contenu du tableau de fruits :" << std::endl;
    for (const auto& fruit : fruits) {
        std::cout << fruit << std::endl;
    }

    // Demande à l'utilisateur le nombre de fruits préférés
    int tailleFavoris;
    std::cout << "Entrez le nombre de vos fruits preferes : ";
    std::cin >> tailleFavoris;

    // Création dynamique du tableau "favoris"
    std::string* favoris = new std::string[tailleFavoris];

    // Demande à l'utilisateur de saisir ses fruits préférés
    std::cout << "Entrez vos " << tailleFavoris << " fruits preferes :" << std::endl;
    for (int i = 0; i < tailleFavoris; ++i) {
        std::cout << "Fruit " << i + 1 << " : ";
        std::cin >> favoris[i];
    }

    // Affichage du contenu du tableau "favoris"
    std::cout << "Contenu du tableau favoris :" << std::endl;
    for (int i = 0; i < tailleFavoris; ++i) {
        std::cout << "Fruit " << i + 1 << " : " << favoris[i] << std::endl;
    }

    // Libération de la mémoire allouée pour le tableau "favoris"
    delete[] favoris;

    return 0;
}
