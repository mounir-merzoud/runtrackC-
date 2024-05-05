#include <iostream>
#include <string>
#include <vector>

bool estPalindrome(const std::string& mot) {
    int debut = 0;
    int fin = mot.size() - 1;

    // Parcourir le mot en vérifiant si les caractères symétriques sont identiques
    while (debut < fin) {
        if (mot[debut] != mot[fin]) {
            return false; // Si les caractères ne sont pas identiques, le mot n'est pas un palindrome
        }
        debut++;
        fin--;
    }
    return true; // Si toutes les paires de caractères sont identiques, le mot est un palindrome
}

int main() {
    std::vector<std::string> tab = {"radar", "hello", "lvel", "stats", "world"};
    std::cout << "Palindromes trouves dans le tableau : " << std::endl;

    // Parcourir le tableau et vérifier si chaque chaîne est un palindrome
    for (const std::string& mot : tab) {
        if (estPalindrome(mot)) {
            std::cout << mot << std::endl;
        }
    }

    return 0;
}
