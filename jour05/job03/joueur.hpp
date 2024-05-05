#ifndef JOUEUR_HPP
#define JOUEUR_HPP

#include <iostream>
#include <string>

class Joueur {
private:
    int x; // Position horizontale du joueur sur la carte
    int y; // Position verticale du joueur sur la carte
    std::string nom; // Nom du joueur

public:
    // Constructeurs
    Joueur(); // Constructeur par défaut
    Joueur(int positionX, int positionY); // Constructeur avec position initiale
    Joueur(int positionX, int positionY, const std::string& nomJoueur); // Constructeur avec position et nom

    // Méthodes pour afficher les attributs et déplacer le joueur
    void afficherPosition() const;
    void deplacer(int deltaX, int deltaY);
};

#endif // JOUEUR_HPP
