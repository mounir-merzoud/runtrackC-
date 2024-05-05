#include "Joueur.hpp"

// Constructeur avec initialisation des valeurs
Joueur::Joueur(int positionX, int positionY) : x(positionX), y(positionY) {}

// Méthodes pour afficher les attributs et déplacer le joueur
void Joueur::afficherPosition() const {
    std::cout << "Position du joueur : (" << x << ", " << y << ")" << std::endl;
}

void Joueur::deplacer(int deltaX, int deltaY) {
    x += deltaX;
    y += deltaY;
}
