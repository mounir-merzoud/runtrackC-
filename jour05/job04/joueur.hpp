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
    Joueur();
    Joueur(int positionX, int positionY);
    Joueur(int positionX, int positionY, const std::string& nomJoueur);

    // Méthodes pour manipuler les attributs
    void setPosition(int positionX, int positionY);
    void setNom(const std::string& nomJoueur);
    void afficherPosition() const;
    void deplacer(int deltaX, int deltaY);
};

#endif // JOUEUR_HPP
