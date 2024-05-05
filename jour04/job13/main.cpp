#include <iostream>
#include <string>
#include <vector>

// Déclaration de la structure Destination
struct Destination {
    std::string nom;
    int tempsDeVol;
};

int main() {
    // Création du vecteur pour stocker les destinations
    std::vector<Destination*> destinations;

    // Boucle pour saisir les informations sur les destinations
    char continuer;
    do {
        // Création dynamique d'une nouvelle destination
        Destination* nouvelleDestination = new Destination;

        // Saisie du nom de la destination
        std::cout << "Entrez le nom de la destination : ";
        std::cin >> nouvelleDestination->nom;

        // Saisie du temps de vol depuis Marseille
        std::cout << "Entrez le temps de vol depuis Marseille : ";
        std::cin >> nouvelleDestination->tempsDeVol;

        // Ajout de la nouvelle destination au vecteur
        destinations.push_back(nouvelleDestination);

        // Demande à l'utilisateur s'il souhaite ajouter une autre destination
        std::cout << "Voulez-vous ajouter une autre destination ? (o/n) : ";
        std::cin >> continuer;
    } while (continuer == 'o' || continuer == 'O');

    // Affichage des destinations et modification de leur temps de vol
    std::cout << "\nListe des destinations :" << std::endl;
    for (size_t i = 0; i < destinations.size(); ++i) {
        std::cout << "Destination " << i + 1 << " : " << destinations[i]->nom << " (Temps de vol : " << destinations[i]->tempsDeVol << " heures)" << std::endl;

        // Modification du temps de vol pour chaque destination
        int nouveauTempsDeVol;
        std::cout << "Entrez le nouveau temps de vol pour " << destinations[i]->nom << " : ";
        std::cin >> nouveauTempsDeVol;
        destinations[i]->tempsDeVol = nouveauTempsDeVol;
    }

    // Libération de la mémoire allouée pour chaque destination
    for (auto& destination : destinations) {
        delete destination;
    }

    return 0;
}
