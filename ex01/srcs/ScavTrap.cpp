#include "ScavTrap.hpp"

#include <iostream>

ScavTrap::ScavTrap() : ClapTrap("default") {
  hitPoints = 100;
  energyPoints = 50;
  attackDamage = 20;
  std::cout << "ScavTrap default constructor called for "
            << name << std::endl;
}

ScavTrap::ScavTrap(const std::string& n) : ClapTrap(n) {
  hitPoints = 100;
  energyPoints = 50;
  attackDamage = 20;
  std::cout << "ScavTrap constructor called for "
            << name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
  *this = other;
  std::cout << "ScavTrap copy constructor called for "
            << name << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
  if (this != &other) {
    ClapTrap::operator=(other);
  }
  std::cout << "ScavTrap copy assignment called for "
            << name << std::endl;
  return *this;
}

ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap destructor called for "
            << name << std::endl;
}

void ScavTrap::attack(const std::string& target) {
  if (hitPoints <= 0) {
    std::cout << "ScavTrap " << name << " cannot attack: no hit points left\n";
    return;
  }
  if (energyPoints <= 0) {
    std::cout << "ScavTrap " << name << " cannot attack: no energy points left\n";
    return;
  }
  std::cout << "ScavTrap " << name << " attacks " << target
            << ", causing " << attackDamage << " points of damage!\n";
  --energyPoints;
}

void ScavTrap::guardGate() const {
  std::cout << "ScavTrap " << name << " is now in Gate keeper mode." << std::endl;
}