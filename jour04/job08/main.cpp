#include <iostream>

int main() {
    // Création des variables avec les valeurs données
    int annee = 2019;
    const char* plateforme = "La Plateforme";
    double pi = 3.14;
    const char* etudiants = "Étudiants";

    // Création du tableau de pointeurs de type const void*
    const void* tableau[] = { &annee, plateforme, &pi, etudiants };

    // Affichage des adresses et valeurs de chaque élément du tableau
    std::cout << "Adresse et valeur de chaque element du tableau :" << std::endl;
    for (int i = 0; i < sizeof(tableau) / sizeof(tableau[0]); ++i) {
        std::cout << "Adresse de l'element " << i << " : " << tableau[i] << ", Valeur : ";
        if (i % 2 == 0) {
            std::cout << *((int*)tableau[i]); // Conversion du pointeur en int* et déréférencement
        } else {
            std::cout << *((const char**)tableau[i]); // Conversion du pointeur en const char** et déréférencement
        }
        std::cout << std::endl;
    }

    return 0;
}
