#include <iostream>
#include "persone.hpp"

int main() {
    // Création d'un personnage avec le constructeur avec liste d'initialisation
    Personne personnage1("Alice", 100, 50.0f);

    // Affichage des informations initiales du personnage
    std::cout << "Informations du personnage 1 :" << std::endl;
    personnage1.afficherInformations();

    // Modification des attributs du personnage
    personnage1.setNom("Bob");
    personnage1.setPointsDeVie(150);
    personnage1.setDefense(75.0f);

    // Affichage des nouvelles informations du personnage
    std::cout << "\nNouvelles informations du personnage 1 :" << std::endl;
    personnage1.afficherInformations();

    return 0;
}
