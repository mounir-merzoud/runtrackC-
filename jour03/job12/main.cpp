#include <iostream>
#include <cstdlib> // Pour la fonction rand
#include <ctime>   // Pour la fonction time

int main() {
    srand(time(0)); // Initialiser le générateur de nombres aléatoires avec le temps actuel
    const int nombreMystere = rand() % 101; // Générer un nombre aléatoire entre 0 et 100

    const int nbChances = 5; // Nombre de chances accordées au joueur
    int essaisRestants = nbChances;

    std::cout << "Bienvenue dans le jeu du Nombre Mystere !" << std::endl;
    std::cout << "Vous devez deviner un nombre compris entre 0 et 100." << std::endl;
    std::cout << "Vous avez " << nbChances << " essais pour trouver le nombre mystere." << std::endl;

    int proposition;
    bool trouve = false;

    while (essaisRestants > 0 && !trouve) {
        std::cout << "Il vous reste " << essaisRestants << " essai(s). Entrez votre proposition : ";
        std::cin >> proposition;

        if (proposition == nombreMystere) {
            std::cout << "Bravo ! Vous avez trouve le nombre mystere : " << nombreMystere << std::endl;
            trouve = true;
        } else if (proposition < nombreMystere) {
            std::cout << "Le nombre mystere est plus grand." << std::endl;
        } else {
            std::cout << "Le nombre mystere est plus petit." << std::endl;
        }

        essaisRestants--;
    }

    if (!trouve) {
        std::cout << "Dommage, vous avez epuise toutes vos chances. Le nombre mystere etait : " << nombreMystere << std::endl;
    }

    return 0;
}
