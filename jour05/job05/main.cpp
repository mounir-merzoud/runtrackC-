#include <iostream>
#include "Etudiant.hpp"

int main() {
    // Création d'un objet Etudiant avec le constructeur avec liste d'initialisation
    Etudiant etudiant("Dupont", "Jean", 20, 123456);

    // Affichage des informations de l'étudiant
    std::cout << "Nom: " << etudiant.getNom() << std::endl;
    std::cout << "Prénom: " << etudiant.getPrenom() << std::endl;
    std::cout << "Âge: " << etudiant.getAge() << std::endl;
    std::cout << "Matricule: " << etudiant.getMatricule() << std::endl;

    return 0;
}
