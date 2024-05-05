#include <iostream>
#include "Joueur.hpp"

int main() {
    // Création d'un objet joueur avec une position initiale de x = 10 et y = 20
    Joueur joueur(10, 20);

    // Affichage de la position initiale du joueur
    joueur.afficherPosition();

    return 0;
}
