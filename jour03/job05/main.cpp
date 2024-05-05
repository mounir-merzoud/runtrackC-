#include <iostream>
#include <string>
#include <regex>

int main() {
    std::string heure;

    // Demander à l'utilisateur de saisir l'heure
    std::cout << "Entrez une heure au format XXhXX : ";
    std::cin >> heure;

    // Définir une expression régulière pour vérifier le format de l'heure
    std::regex regex_heure("\\d{2}h\\d{2}");

    // Vérifier si l'heure correspond au format attendu
    if (std::regex_match(heure, regex_heure)) {
        std::cout << "Format d'heure valide." << std::endl;
    } else {
        std::cout << "Format d'heure invalide." << std::endl;
    }

    return 0;
}
