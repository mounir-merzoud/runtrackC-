#include "Joueur.hpp"

// Constructeur par défaut
Joueur::Joueur() : x(0), y(0), nom("") {}

// Constructeur avec position initiale
Joueur::Joueur(int positionX, int positionY) : x(positionX), y(positionY), nom("") {}

// Constructeur avec position et nom
Joueur::Joueur(int positionX, int positionY, const std::string& nomJoueur) : x(positionX), y(positionY), nom(nomJoueur) {}

// Méthodes pour afficher les attributs et déplacer le joueur
void Joueur::afficherPosition() const {
    std::cout << "Position du joueur " << nom << " : (" << x << ", " << y << ")" << std::endl;
}

void Joueur::deplacer(int deltaX, int deltaY) {
    x += deltaX;
    y += deltaY;
}
