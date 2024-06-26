#include <iostream>
#include "HumanB.hpp"

HumanB::HumanB(std::string name) : weapon((new Weapon(""))) {
    this->name = name;
}

HumanB::~HumanB() {}

void HumanB::attack() {
    std::cout << this->name + " attacks with their " + this->weapon->getType() + '\n';
}

void HumanB::setWeapon(Weapon &weapon) {
    this->weapon = &weapon;
}
