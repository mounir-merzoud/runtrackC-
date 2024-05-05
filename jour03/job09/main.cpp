#include <iostream>
#include <string>

bool estIncluse(const std::string& chaine1, const std::string& chaine2) {
    // Utiliser la fonction find pour chercher chaine1 dans chaine2
    if (chaine2.find(chaine1) != std::string::npos) {
        return true; // Si chaine1 est trouvée dans chaine2, retourner vrai
    } else {
        return false; // Sinon, retourner faux
    }
}

int main() {
    std::string chaine1, chaine2;

    // Demander à l'utilisateur de saisir les deux chaînes
    std::cout << "Entrez la premiere chaine : ";
    std::getline(std::cin, chaine1);
    std::cout << "Entrez la deuxieme chaine : ";
    std::getline(std::cin, chaine2);

    // Appeler la fonction estIncluse et afficher le résultat
    if (estIncluse(chaine1, chaine2)) {
        std::cout << "La premiere chaine est incluse dans la deuxieme." << std::endl;
    } else {
        std::cout << "La premiere chaine n'est pas incluse dans la deuxieme." << std::endl;
    }

    return 0;
}
