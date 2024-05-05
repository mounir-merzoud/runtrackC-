#include <iostream>
#include "Contact.hpp"

int main() {
    // Création d'objets Contact avec des données différentes
    Contact contact1("Alice", 123456789);
    Contact contact2("Bob", 987654321);

    // Affichage des informations des contacts originaux
    std::cout << "Informations du contact 1 :" << std::endl;
    contact1.afficherInformations();
    std::cout << "\nInformations du contact 2 :" << std::endl;
    contact2.afficherInformations();

    // Création de copies des contacts originaux
    Contact copieContact1 = contact1;
    Contact copieContact2 = contact2;

    // Modification des numéros des contacts copiés
    copieContact1.modifierNumero(111111111);
    copieContact2.modifierNumero(222222222);

    // Affichage des informations des contacts copiés
    std::cout << "\nInformations de la copie du contact 1 :" << std::endl;
    copieContact1.afficherInformations();
    std::cout << "\nInformations de la copie du contact 2 :" << std::endl;
    copieContact2.afficherInformations();

    return 0;
}
