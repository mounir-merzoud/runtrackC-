#include <iostream>

int main() {
    int a = 5;
    int b = 10;
    int c = 15;

    // Déclaration de trois pointeurs vers des entiers et initialisation avec les adresses des variables
    int* ptr_a = &a;
    int* ptr_b = &b;
    int* ptr_c = &c;

    std::cout << "Valeurs initiales des variables :" << std::endl;
    std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;

    // Modification des valeurs pointées par les pointeurs
    *ptr_a = 20;
    *ptr_b = 30;
    *ptr_c = 40;

    std::cout << "Nouvelles valeurs des variables :" << std::endl;
    std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;

    return 0;
}
