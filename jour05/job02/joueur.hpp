#ifndef JOUEUR_HPP
#define JOUEUR_HPP

#include <iostream>

class Joueur {
private:
    int x; // Position horizontale du joueur sur la carte
    int y; // Position verticale du joueur sur la carte

public:
    // Constructeur avec initialisation des valeurs
    Joueur(int positionX, int positionY);

    // Méthodes pour afficher les attributs et déplacer le joueur
    void afficherPosition() const;
    void deplacer(int deltaX, int deltaY);
};

#endif // JOUEUR_HPP
