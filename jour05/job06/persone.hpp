#ifndef PERSONNE_HPP
#define PERSONNE_HPP

#include <iostream>
#include <string>

class Personne {
private:
    std::string nom;
    int pointsDeVie;
    float defense;

public:
    // Constructeur avec liste d'initialisation
    Personne(const std::string& nom, int pointsDeVie, float defense)
        : nom(nom), pointsDeVie(pointsDeVie), defense(defense) {}

    // Méthodes pour accéder aux attributs
    const std::string& getNom() const { return nom; }
    int getPointsDeVie() const { return pointsDeVie; }
    float getDefense() const { return defense; }

    // Méthodes pour modifier les attributs
    void setNom(const std::string& nouveauNom) { nom = nouveauNom; }
    void setPointsDeVie(int nouveauxPoints) { pointsDeVie = nouveauxPoints; }
    void setDefense(float nouvelleDefense) { defense = nouvelleDefense; }

    // Méthode pour afficher les informations du personnage
    void afficherInformations() const {
        std::cout << "Nom: " << nom << std::endl;
        std::cout << "Points de vie: " << pointsDeVie << std::endl;
        std::cout << "Défense: " << defense << std::endl;
    }
};

#endif // PERSONNE_HPP
