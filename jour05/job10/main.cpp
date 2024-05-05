#include <iostream>

// Classe abstraite Animal
class Animal {
private:
    static int totalAnimaux; // Membre statique pour compter le nombre total d'animaux créés

public:
    // Méthode virtuelle pure pour crier
    virtual void crier() const = 0;

    // Méthode virtuelle pure pour manger
    virtual void manger() const = 0;

    // Constructeur
    Animal() {
        totalAnimaux++; // Incrémente le nombre total d'animaux lorsqu'un nouvel animal est créé
    }

    // Destructeur virtuel
    virtual ~Animal() {
        totalAnimaux--; // Décrémente le nombre total d'animaux lorsqu'un animal est détruit
    }

    // Méthode statique pour obtenir le nombre total d'animaux
    static int getTotalAnimaux() {
        return totalAnimaux;
    }
};

// Initialisation du membre statique totalAnimaux
int Animal::totalAnimaux = 0;

// Classe Chien qui hérite de Animal
class Chien : public Animal {
public:
    // Implémentation de la méthode crier pour Chien
    void crier() const override {
        std::cout << "Woof!" << std::endl;
    }

    // Implémentation de la méthode manger pour Chien
    void manger() const override {
        std::cout << "Le chien a une alimentation variée." << std::endl;
    }
};

// Classe Chat qui hérite de Animal
class Chat : public Animal {
public:
    // Implémentation de la méthode crier pour Chat
    void crier() const override {
        std::cout << "Miaou!" << std::endl;
    }

    // Implémentation de la méthode manger pour Chat
    void manger() const override {
        std::cout << "Le chat mange du poisson." << std::endl;
    }
};

int main() {
    // Instanciation d'un Chat
    Chat monChat;

    // Appel de la méthode manger
    monChat.manger();

    return 0;
}
