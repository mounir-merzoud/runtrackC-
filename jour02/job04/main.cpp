#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char operateur;

    cout << "Entrez le premier nombre: ";
    cin >> num1;
    cout << "Entrez l'opérateur (+, -, *, /): ";
    cin >> operateur;
    cout << "Entrez le deuxième nombre: ";
    cin >> num2;

    switch (operateur) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 != 0.0) {
                result = num1 / num2;
            } else {
                cout << "Erreur : division par zéro." << endl;
                return 1; // Sortie avec un code d'erreur
            }
            break;
        default:
            cout << "Opérateur invalide." << endl;
            return 1; // Sortie avec un code d'erreur
    }

    cout << "Résultat: " << result << endl;
    return 0;
}
