#include <iostream>
#include <cmath> // Nécessaire pour utiliser la fonction sqrt()

int main() {
    double nombre; // Variable pour stocker le nombre entré par l'utilisateur

    while (true) { // Boucle infinie, qui ne se termine que par un break
        std::cout << "donnez un nombre positif : ";
        std::cin >> nombre;

        if (nombre < 0) {
            std::cout << "svp positif" << std::endl; // Message pour les nombres négatifs
        } else if (nombre == 0) {
            break; // Si l'entrée est zéro, sortir de la boucle et terminer le programme
        } else {
            std::cout << "sa racine carrée est : " << sqrt(nombre) << std::endl; // Calcul et affichage de la racine carrée
        }
    }

    return 0; // Retourne 0 pour indiquer que le programme s'est terminé sans erreurs
}
