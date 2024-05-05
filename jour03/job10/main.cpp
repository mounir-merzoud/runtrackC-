#include <iostream>
#include <algorithm> // Pour la fonction sort
#include <string>

int main() {
    std::string str, str2;

    // Demander à l'utilisateur de saisir une chaîne de caractères
    std::cout << "Entrez une chaine de caracteres : ";
    std::getline(std::cin, str);

    // Créer une deuxième chaîne "Bonjour"
    str2 = "Bonjour";

    // Trier les deux chaînes dans l'ordre lexicographique
    std::sort(str.begin(), str.end());
    std::sort(str2.begin(), str2.end());

    // Afficher les chaînes triées
    std::cout << "Chaine 1 trie : " << str << std::endl;
    std::cout << "Chaine 2 trie : " << str2 << std::endl;

    return 0;
}
