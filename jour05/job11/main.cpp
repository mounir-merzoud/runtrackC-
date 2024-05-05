#include <iostream>

class Operation {
private:
    double valeur;

public:
    // Constructeur par défaut
    Operation() : valeur(0) {}

    // Constructeur avec initialisation de la valeur
    Operation(double valeur) : valeur(valeur) {}

    // Surcharge de l'opérateur d'addition
    Operation operator+(const Operation& autre) const {
        return Operation(this->valeur + autre.valeur);
    }

    // Surcharge de l'opérateur de soustraction
    Operation operator-(const Operation& autre) const {
        return Operation(this->valeur - autre.valeur);
    }

    // Surcharge de l'opérateur de multiplication
    Operation operator*(const Operation& autre) const {
        return Operation(this->valeur * autre.valeur);
    }

    // Surcharge de l'opérateur de division
    Operation operator/(const Operation& autre) const {
        // Vérifier si le dénominateur est différent de zéro
        if (autre.valeur != 0) {
            return Operation(this->valeur / autre.valeur);
        } else {
            std::cerr << "Erreur: division par zéro !" << std::endl;
            return Operation(); // Retourner une valeur par défaut
        }
    }

    // Méthode pour afficher la valeur
    void afficher() const {
        std::cout << "Valeur : " << valeur << std::endl;
    }
};

int main() {
    Operation op1(10);
    Operation op2(5);

    // Addition
    Operation resultatAddition = op1 + op2;
    resultatAddition.afficher();

    // Soustraction
    Operation resultatSoustraction = op1 - op2;
    resultatSoustraction.afficher();

    // Multiplication
    Operation resultatMultiplication = op1 * op2;
    resultatMultiplication.afficher();

    // Division
    Operation resultatDivision = op1 / op2;
    resultatDivision.afficher();

    return 0;
}
