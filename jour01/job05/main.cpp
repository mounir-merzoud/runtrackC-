#include <iostream>
#include <fcntl.h>
#include <io.h>

int main() {
    // Déclaration des variables pour stocker les nombres
    double nombre1, nombre2;

    // Changer l'encodage de la console à UTF-8
    _setmode(_fileno(stdout), _O_U8TEXT);
    _setmode(_fileno(stdin), _O_U8TEXT);
    
    // Demander à l'utilisateur de saisir le premier nombre
    std::wcout << L"Entrez le premier nombre : ";
    std::wcin >> nombre1;

    // Demander à l'utilisateur de saisir le deuxième nombre
    std::wcout << L"Entrez le deuxième nombre : ";
    std::wcin >> nombre2;

    // Calculer le produit des deux nombres
    double produit = nombre1 * nombre2;

    // Afficher le produit
    std::wcout << L"Le produit de " << nombre1 << L" et " << nombre2 << L" est : " << produit << std::endl;

    return 0;
}

