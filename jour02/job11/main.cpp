#include <iostream>

// Fonction pour calculer la factorielle d'un nombre
unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    std::cout << "Entrez un nombre entier pour calculer sa factorielle: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "La factorielle n'est définie que pour les nombres entiers non négatifs." << std::endl;
    } else {
        std::cout << n << "! = " << factorial(n) << std::endl;
    }

    return 0;
}
