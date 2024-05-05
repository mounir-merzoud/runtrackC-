#include <iostream>

// Définition de la structure Point
struct Point {
    int x;
    int y;
};

int main() {
    // Déclaration d'une variable de type Point
    Point p1;

    // Initialisation des membres de la structure à l'aide de l'opérateur de sélection de membre (.)
    p1.x = 5;
    p1.y = 10;

    // Déclaration d'un pointeur vers la structure Point et initialisation avec l'adresse de p1
    Point* ptr_p = &p1;

    // Accès aux membres de la structure à travers le pointeur et modification des valeurs de x et y
    ptr_p->x = 20;
    ptr_p->y = 30;

    // Affichage des nouvelles valeurs de x et y
    std::cout << "Nouvelle valeur de x : " << p1.x << std::endl;
    std::cout << "Nouvelle valeur de y : " << p1.y << std::endl;

    return 0;
}
