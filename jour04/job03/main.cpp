#include <iostream>
#include <cstring> // Pour strlen

void inverseChaine(char* str) {
    int n = strlen(str); // Longueur de la chaîne
    char* debut = str; // Pointeur sur le début de la chaîne
    char* fin = str + n - 1; // Pointeur sur la fin de la chaîne
    char temp; // Variable temporaire pour l'échange

    // Boucle pour inverser la chaîne
    while (debut < fin) {
        temp = *debut;
        *debut = *fin;
        *fin = temp;
        debut++; // Déplace le pointeur de début vers l'avant
        fin--;   // Déplace le pointeur de fin vers l'arrière
    }
}

int main() {
    char chaine[100]; // Déclaration d'une chaîne de 100 caractères

    std::cout << "Entrez une chaine de caracteres : ";
    std::cin.getline(chaine, 100); // Lecture d'une ligne de texte

    inverseChaine(chaine); // Inversion de la chaîne

    std::cout << "Chaine inverse : " << chaine << std::endl;

    return 0;
}
