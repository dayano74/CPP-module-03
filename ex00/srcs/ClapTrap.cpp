#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap(const std::string& name)
    : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
  std::cout << "[ClapTrap] " << this->name << " constructed\n";
}

ClapTrap::~ClapTrap() {
  std::cout << "[ClapTrap] " << name << " desstructed\n";
}

void ClapTrap::attack(const std::string& target) {
  std::cout << "ClapTrap " << this->name << "attacks " << target
            << ", causing " << this->attackDamage << "points of damage!\n";

}
