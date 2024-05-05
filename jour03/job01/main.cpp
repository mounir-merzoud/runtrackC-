#include <iostream>
#include <cctype> // Inclure la bibliothèque pour utiliser la fonction toupper

int main() {
    std::string phrase = "vive la plateforme !";

    // Parcourir chaque caractère de la phrase et le convertir en majuscule
    for (char& c : phrase) {
        c = std::toupper(c);
    }

    std::cout << phrase << std::endl;

    return 0;
}
