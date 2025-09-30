#include "DiamondTrap.hpp"

#include <iostream>

DiamondTrap::DiamondTrap()
    : ClapTrap("default_clap_name"), FragTrap(), ScavTrap(), name("default") {
  hitPoints = 100;
  energyPoints = 50;
  attackDamage = 30;
  std::cout << "DiamondTrap default constructor called for "
            << name << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& n)
    : ClapTrap(n + "_clap_name"), FragTrap(), ScavTrap(), name(n) {
  hitPoints = 100;
  energyPoints = 50;
  attackDamage = 30;
  std::cout << "DiamondTrap constructor called for "
            << name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& other)
    : ClapTrap(other), FragTrap(other), ScavTrap(other), name(other.name) {
  std::cout << "DiamondTrap copy constructor called for "
            << name << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other) {
  if (this != &other) {
    ClapTrap::operator=(other);
    name = other.name;
  }
  std::cout << "DiamondTrap copy assignment called for "
            << name << std::endl;
  return *this;
}

DiamondTrap::~DiamondTrap() {
  std::cout << "DiamondTrap destructor called for "
            << name << std::endl;
}

void DiamondTrap::whoAmI() {
  std::cout << "DiamondTrap name: " << name << std::endl;
  std::cout << "ClapTrap name: " << ClapTrap::name << std::endl;
}

void DiamondTrap::attack(const std::string& t) { ScavTrap::attack(t); }
