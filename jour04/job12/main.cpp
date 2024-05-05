#include <iostream>
#include <string>
#include <vector>

// Déclaration de la structure Staff
struct Staff {
    std::string nom;
    std::string prenom;
};

int main() {
    // Création d'une instance de la structure Staff pour Alicia Cordial
    Staff alicia;
    alicia.nom = "Cordial";
    alicia.prenom = "Alicia";

    // Création d'une instance de la structure Staff pour Pierre Malardier
    Staff pierre;
    pierre.nom = "Malardier";
    pierre.prenom = "Pierre";

    // Affichage des prénoms des deux personnes du staff
    std::cout << "Prénoms des membres du staff :" << std::endl;
    std::cout << alicia.prenom << std::endl;
    std::cout << pierre.prenom << std::endl;

    // Déclaration d'une nouvelle structure Etudiant
    struct Etudiant {
        std::string nom;
        std::string prenom;
    };

    // Demande à l'utilisateur de saisir le nombre d'étudiants
    int nombreEtudiants;
    std::cout << "Entrez le nombre d'étudiants : ";
    std::cin >> nombreEtudiants;

    // Création d'un vecteur pour stocker les étudiants
    std::vector<Etudiant> etudiants;

    // Saisie du nom et prénom de chaque étudiant
    for (int i = 0; i < nombreEtudiants; ++i) {
        Etudiant etudiant;
        std::cout << "Entrez le nom de l'étudiant " << i + 1 << " : ";
        std::cin >> etudiant.nom;
        std::cout << "Entrez le prénom de l'étudiant " << i + 1 << " : ";
        std::cin >> etudiant.prenom;
        etudiants.push_back(etudiant);
    }

    // Affichage des prénoms des différents étudiants
    std::cout << "Prénoms des étudiants :" << std::endl;
    for (const auto& etudiant : etudiants) {
        std::cout << etudiant.prenom << std::endl;
    }

    return 0;
}

