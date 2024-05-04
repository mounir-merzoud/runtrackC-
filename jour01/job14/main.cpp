#include <iostream>

int main() {
    int nombre, nombreInverse = 0;

    // Demander à l'utilisateur de saisir un nombre
    std::cout << "Entrez un nombre : ";
    std::cin >> nombre;

    // Inverser le nombre
    while (nombre > 0) {
        int chiffre = nombre % 10; // Obtenir le dernier chiffre
        nombreInverse = nombreInverse * 10 + chiffre; // Ajouter le chiffre à nombreInverse
        nombre /= 10; // Supprimer le dernier chiffre de nombre
    }

    // Afficher le nombre inversé
    std::cout << "Le nombre inverse est : " << nombreInverse << std::endl;

    return 0;
}
