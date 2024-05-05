#include <iostream>

int main() {
    int a = 5;
    int b = 10;

    std::cout << "Avant l'echange : a = " << a << ", b = " << b << std::endl;

    // Déclaration de deux pointeurs vers des entiers
    int* ptr_a = &a;
    int* ptr_b = &b;

    // Echange des valeurs en utilisant des pointeurs
    int temp = *ptr_a;
    *ptr_a = *ptr_b;
    *ptr_b = temp;

    std::cout << "Apres l'echange : a = " << a << ", b = " << b << std::endl;

    return 0;
}
