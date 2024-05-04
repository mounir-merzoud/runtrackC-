#include <iostream>

int main() {
    // Déclaration des variables pour stocker les entiers n et m
    int n, m;

    // Demander à l'utilisateur de saisir les entiers n et m
    std::cout << "Entrez la valeur de n : ";
    std::cin >> n;
    std::cout << "Entrez la valeur de m : ";
    std::cin >> m;

    // Afficher les entiers avant l'échange
    std::cout << "Avant l'echange : " << std::endl;
    std::cout << "n = " << n << ", m = " << m << std::endl;

    // Échanger les valeurs des entiers n et m
    int temp = n;
    n = m;
    m = temp;

    // Afficher les entiers après l'échange
    std::cout << "Apres l'echange : " << std::endl;
    std::cout << "n = " << n << ", m = " << m << std::endl;

    return 0;
}
