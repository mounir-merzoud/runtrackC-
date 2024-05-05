#include <iostream>
#include <iomanip> // Pour std::setprecision

int main() {
    int n;
    double somme = 0.0;

    std::cout << "Entrez le nombre de termes n pour calculer la somme de la série harmonique: ";
    std::cin >> n;

    for (int i = 1; i <= n; ++i) {
        somme += 1.0 / i;
    }

    std::cout << "La somme des " << n << " premiers termes de la série harmonique est: ";
    std::cout << std::fixed << std::setprecision(6) << somme << std::endl;

    return 0;
}

