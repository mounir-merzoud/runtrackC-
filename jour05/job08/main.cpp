#include <iostream>

// Classe abstraite Animal
class Animal {
public:
    // Méthode virtuelle pure pour crier
    virtual void crier() const = 0;

    // Méthode virtuelle pure pour manger
    virtual void manger() const = 0;
};

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
    // Instanciation d'un Chien et appel des méthodes
    std::cout << "Chien :" << std::endl;
    Chien monChien;
    monChien.crier();
    monChien.manger();

    std::cout << std::endl;

    // Instanciation d'un Chat et appel des méthodes
    std::cout << "Chat :" << std::endl;
    Chat monChat;
    monChat.crier();
    monChat.manger();

    return 0;
}
