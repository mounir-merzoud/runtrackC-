#include <iostream>
#include "Joueur.hpp"

int main() {
    // Instanciation d'un objet joueur
    Joueur joueur;

    // Initialisation de la position du joueur
    joueur.initialiserPosition(10, 20);

    // Affichage de la position initiale du joueur
    joueur.afficherPosition();

    // Déplacement du joueur
    joueur.deplacer(5, -2);

    // Affichage de la nouvelle position du joueur après déplacement
    joueur.afficherPosition();

    return 0;
}
