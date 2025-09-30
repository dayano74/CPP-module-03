#include "FragTrap.hpp"

#include <iostream>

FragTrap::FragTrap() : ClapTrap("default") {
  hitPoints = 100;
  energyPoints = 100;
  attackDamage = 30;
  std::cout << "FragTrap default constructor called for "
            << name << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
  hitPoints = 100;
  energyPoints = 100;
  attackDamage = 30;
  std::cout << "FragTrap constructor called for "
            << name << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
  std::cout << "FragTrap copy constructor called for "
            << name << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
  if (this != &other) {
    ClapTrap::operator=(other);
  }
  std::cout << "FragTrap copy assignment called for "
            << name << std::endl;
  return *this;
}

FragTrap::~FragTrap() {
  std::cout << "FragTrap destructor called for "
            << name << std::endl;
}

void FragTrap::highFivesGuys(void) {
  std::cout << "FragTrap " << name << " wants to celebrate with a high five!" << std::endl;
}
