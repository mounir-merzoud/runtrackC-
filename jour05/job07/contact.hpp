#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <string>

class Contact {
private:
    std::string nom;
    int numero;

public:
    // Constructeur prenant un nom et un numéro de téléphone comme paramètres
    Contact(const std::string& nom, int numero) : nom(nom), numero(numero) {}

    // Constructeur de copie
    Contact(const Contact& autreContact) : nom(autreContact.nom), numero(autreContact.numero) {}

    // Méthode pour modifier le numéro de téléphone
    void modifierNumero(int nouveauNumero) {
        numero = nouveauNumero;
    }

    // Méthode pour afficher les informations du contact
    void afficherInformations() const {
        std::cout << "Nom: " << nom << std::endl;
        std::cout << "Numéro de téléphone: " << numero << std::endl;
    }
};

#endif // CONTACT_HPP
