#include "Zombie.hpp"

Zombie::Zombie(std::string name) {
    this->name = name;
}

Zombie::~Zombie() {
    std::cout << "Destructor: " + this->name + '\n';
}

void Zombie::announce() {
    std::cout << this->name + " BraiiiiiiinnnzzzZ...\n";
}
