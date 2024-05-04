#include <iostream>

int main() {
    // Déclaration des variables pour stocker les données saisies par l'utilisateur
    double prixHTKilo, poidsKilo, tauxTVA;

    // Demander à l'utilisateur de saisir le prix HT d'un kilo de carottes
    std::cout << "Entrez le prix HT d'un kilo de carottes : ";
    std::cin >> prixHTKilo;

    // Demander à l'utilisateur de saisir le nombre de kilos de carottes
    std::cout << "Entrez le nombre de kilos de carottes : ";
    std::cin >> poidsKilo;

    // Demander à l'utilisateur de saisir le taux de TVA en pourcentage
    std::cout << "Entrez le taux de TVA en pourcentage : ";
    std::cin >> tauxTVA;

    // Calculer le prix TTC total
    double prixTTC = prixHTKilo * poidsKilo * (1 + tauxTVA / 100);

    // Afficher le prix TTC total
    std::cout << "Le prix TTC total est de : " << prixTTC << " euros." << std::endl;

    return 0;
}

