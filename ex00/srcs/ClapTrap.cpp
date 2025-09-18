#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap(const std::string& name)
    : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
  std::cout << "[ClapTrap] " << this->name << " constructed\n";
}

ClapTrap::~ClapTrap() {
  std::cout << "[ClapTrap] " << name << " destructed\n";
}

void ClapTrap::attack(const std::string& target) {
  if (hitPoints <= 0) {
    std::cout << "ClapTrap " << name << " cannot attack: no hit points left.\n";
    return ;
  }
  std::cout << "ClapTrap " << this->name << "attacks " << target
            << ", causing " << this->attackDamage << "points of damage!\n";

}
