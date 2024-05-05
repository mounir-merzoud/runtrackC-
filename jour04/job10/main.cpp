#include <iostream>
#include <vector>
#include <string>
#include <limits>
#include <algorithm>

// Définition de la structure Note
struct Note {
    std::string nom;
    std::string prenom;
    double note;
};

// Vecteur pour stocker les notes
std::vector<Note> notes;

// Déclaration des fonctions
void ajouterNote();
void afficherNotes();
void supprimerNote();
void afficherMoyenne();
void viderBuffer();  // Assurez-vous que cette déclaration est avant son premier appel

// Fonction pour vider le buffer d'entrée
void viderBuffer() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

// Fonction pour ajouter une note
void ajouterNote() {
    Note nouvelleNote;
    std::cout << "Entrez le nom de l'étudiant : ";
    std::getline(std::cin, nouvelleNote.nom);
    std::cout << "Entrez le prénom de l'étudiant : ";
    std::getline(std::cin, nouvelleNote.prenom);
    std::cout << "Entrez la note : ";
    std::cin >> nouvelleNote.note;
    viderBuffer(); // Vider le buffer après l'entrée d'un nombre
    notes.push_back(nouvelleNote);
    std::cout << "Note ajoutée.\n";
}

// Suite des fonctions...

int main() {
    int choix;
    do {
        std::cout << "\nMenu:\n";
        std::cout << "1. Ajouter une note\n";
        std::cout << "2. Afficher la liste de notes\n";
        std::cout << "3. Supprimer une note d'un étudiant\n";
        std::cout << "4. Afficher la moyenne des notes\n";
        std::cout << "5. Quitter\n";
        std::cout << "Choix : ";
        std::cin >> choix;
        viderBuffer(); // Vider le buffer après la lecture du choix

        switch (choix) {
            case 1: ajouterNote(); break;
            case 2: afficherNotes(); break;
            case 3: supprimerNote(); break;
            case 4: afficherMoyenne(); break;
            case 5: std::cout << "Au revoir!\n"; break;
            default: std::cout << "Choix invalide, réessayez.\n";
        }
    } while (choix != 5);

    return 0;
}
