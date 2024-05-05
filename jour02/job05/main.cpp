#include <iostream>

int main() {
    // Déclaration de la variable pour stocker la note
    float note;

    // Demander à l'utilisateur de saisir la note
    std::cout << "Entrez la note : ";
    std::cin >> note;

    // Vérifier si la note est valide (comprise entre 0 et 20)
    if (note >= 0 && note <= 20) {
        // Vérifier si la note est supérieure à 10 pour la valider
        if (note > 10) {
            std::cout << "Valide" << std::endl;
        } else {
            std::cout << "Non valide" << std::endl;
        }
    } else {
        std::cout << "La note doit être comprise entre 0 et 20." << std::endl;
    }

    return 0;
}
