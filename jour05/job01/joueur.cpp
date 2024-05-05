#include "Joueur.hpp"

// Constructeur par défaut
Joueur::Joueur() : x(0), y(0) {}

// Méthodes pour initialiser les valeurs des attributs
void Joueur::initialiserPosition(int positionX, int positionY) {
    x = positionX;
    y = positionY;
}

// Méthode pour afficher les attributs
void Joueur::afficherPosition() const {
    std::cout << "Position du joueur : (" << x << ", " << y << ")" << std::endl;
}

// Méthode pour déplacer le joueur
void Joueur::deplacer(int deltaX, int deltaY) {
    x += deltaX;
    y += deltaY;
}
