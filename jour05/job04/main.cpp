#include <iostream>
#include "Joueur.hpp"

int main() {
    // Instanciation d'un objet joueur avec le constructeur par défaut
    Joueur joueurParDefaut;
    joueurParDefaut.afficherPosition();

    // Modification de la position du joueur
    joueurParDefaut.setPosition(10, 20);
    joueurParDefaut.afficherPosition();

    // Modification du nom du joueur
    joueurParDefaut.setNom("Alice");
    joueurParDefaut.afficherPosition();

    // Déplacement du joueur
    joueurParDefaut.deplacer(5, -3);
    joueurParDefaut.afficherPosition();

    return 0;
}
