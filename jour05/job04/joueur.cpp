#include "Joueur.hpp"

// Constructeurs (non modifiés)

// Méthodes pour manipuler les attributs
void Joueur::setPosition(int positionX, int positionY) {
    this->x = positionX;
    this->y = positionY;
}

void Joueur::setNom(const std::string& nomJoueur) {
    this->nom = nomJoueur;
}

void Joueur::afficherPosition() const {
    std::cout << "Position du joueur " << this->nom << " : (" << this->x << ", " << this->y << ")" << std::endl;
}

void Joueur::deplacer(int deltaX, int deltaY) {
    this->x += deltaX;
    this->y += deltaY;
}
