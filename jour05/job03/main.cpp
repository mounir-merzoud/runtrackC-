#include <iostream>
#include "Joueur.hpp"

int main() {
    // Instanciation d'un objet joueur avec le constructeur par défaut
    Joueur joueurParDefaut;
    joueurParDefaut.afficherPosition();

    // Instanciation d'un objet joueur avec le constructeur prenant x et y comme paramètres
    Joueur joueurAvecPosition(10, 20);
    joueurAvecPosition.afficherPosition();

    // Instanciation d'un objet joueur avec le constructeur prenant x, y et nom comme paramètres
    Joueur joueurAvecNom(5, 15, "Alice");
    joueurAvecNom.afficherPosition();

    return 0;
}
