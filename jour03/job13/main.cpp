#include <iostream>

void fusionnerTableaux(const int tableau1[], int taille1, const int tableau2[], int taille2, int tableauFusionne[]) {
    int i = 0, j = 0, k = 0;

    // Fusionner les deux tableaux en gardant l'ordre croissant
    while (i < taille1 && j < taille2) {
        if (tableau1[i] <= tableau2[j]) {
            tableauFusionne[k++] = tableau1[i++];
        } else {
            tableauFusionne[k++] = tableau2[j++];
        }
    }

    // Copier les éléments restants du premier tableau s'il en reste
    while (i < taille1) {
        tableauFusionne[k++] = tableau1[i++];
    }

    // Copier les éléments restants du deuxième tableau s'il en reste
    while (j < taille2) {
        tableauFusionne[k++] = tableau2[j++];
    }
}

int main() {
    const int taille1 = 5;
    const int taille2 = 4;
    int tableau1[taille1] = {1, 3, 5, 7, 9};
    int tableau2[taille2] = {2, 4, 6, 8};
    int tableauFusionne[taille1 + taille2];

    // Fusionner les deux tableaux
    fusionnerTableaux(tableau1, taille1, tableau2, taille2, tableauFusionne);

    // Afficher le tableau fusionné
    std::cout << "Tableau fusionne : ";
    for (int i = 0; i < taille1 + taille2; ++i) {
        std::cout << tableauFusionne[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
