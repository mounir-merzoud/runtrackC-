#ifndef JOUEUR_HPP
#define JOUEUR_HPP

#include <iostream>

class Joueur {
private:
    int x; // Position horizontale du joueur sur la carte
    int y; // Position verticale du joueur sur la carte

public:
    // Constructeur par défaut
    Joueur();

    // Méthodes pour initialiser les valeurs des attributs
    void initialiserPosition(int positionX, int positionY);

    // Méthode pour afficher les attributs
    void afficherPosition() const;

    // Méthode pour déplacer le joueur
    void deplacer(int deltaX, int deltaY);
};

#endif // JOUEUR_HPP
