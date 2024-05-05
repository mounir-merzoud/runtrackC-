#include <iostream>
#include <cstring> // Inclure la bibliothèque pour utiliser la fonction strcmp

int comparerChaines(const char* chaine1, const char* chaine2) {
    // Utiliser la fonction strcmp pour comparer les chaînes
    if (std::strcmp(chaine1, chaine2) == 0) {
        return 0; // Retourner 0 si les chaînes sont égales
    } else {
        return 1; // Retourner 1 si les chaînes ne sont pas égales
    }
}

int main() {
    const char* chaine1 = "Hello";
    const char* chaine2 = "Hello";
    const char* chaine3 = "World";

    // Comparer les chaînes et afficher le résultat
    std::cout << "Comparaison chaine1 et chaine2 : " << comparerChaines(chaine1, chaine2) << std::endl;
    std::cout << "Comparaison chaine1 et chaine3 : " << comparerChaines(chaine1, chaine3) << std::endl;

    return 0;
}
