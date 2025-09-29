#include "ClapTrap.hpp"

#include <iostream>

ClapTrap::ClapTrap(const std::string& name)
    : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
  log("constructed");
}

ClapTrap::~ClapTrap() { log("destructed"); }

void ClapTrap::attack(const std::string& target) {
  if (hitPoints <= 0) {
    log("cannot attack: no hit points left.");
    return;
  }
  if (energyPoints <= 0) {
    log("cannot attack: no energy points left.");
    return;
  }
  --energyPoints;
  std::cout << "ClapTrap " << name << " attacks " << target
            << ", causing " << attackDamage << " points of damage!\n";
}

void ClapTrap::takeDamage(unsigned int amount) {
  if (hitPoints <= 0) {
    log("cannot take damage: no hit points left.");
    return;
  }
  if (amount == 0) {
    log("takes 0 points of damage.");
    return;
  }
  int actual = (amount > static_cast<unsigned int>(hitPoints))
                   ? hitPoints
                   : static_cast<int>(amount);
  int before = hitPoints;
  hitPoints -= actual;
  std::cout << "ClapTrap " << name << " takes " << actual
            << " points of damage! (HP: " << before << " -> " << hitPoints << ")\n";
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (hitPoints <= 0) {
    log("cannot repair: no hit points left.");
    return;
  }
  if (energyPoints <= 0) {
    log("cannot repair: no energy points left.");
    return;
  }
  --energyPoints;
  int before = hitPoints;
  hitPoints += static_cast<int>(amount);
  std::cout << "ClapTrap " << name << " repairs itself, regaining " << amount
            << " hit points! (HP: " << before << " -> " << hitPoints << ")\n";
}

void ClapTrap::log(const std::string& msg) const {
  std::cout << "[ClapTrap] " << name << " " << msg << "\n";
}
