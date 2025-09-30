#include <iostream>

#include "DiamondTrap.hpp"

int main() {
  std::cout << "=== Default constructor ===\n";
  DiamondTrap d0;

  std::cout << "\n=== Named constructor ===\n";
  DiamondTrap d1("Alice");
  d1.whoAmI();

  std::cout << "\n=== Copy constructor ===\n";
  DiamondTrap d2(d1);
  d2.whoAmI();

  std::cout << "\n=== Copy assignment ===\n";
  DiamondTrap d3("Temp");
  d3 = d1;
  d3.whoAmI();

  std::cout << "\n=== Attack delegation (ScavTrap::attack) ===\n";
  d1.attack("TargetDummy");
  d2.attack("TargetDummy");

  std::cout << "\n=== Energy depletion (EP=50 expected) ===\n";
  for (int i = 0; i < 60; ++i) {
    d1.attack("TrainingBot");
  }

  std::cout << "\n=== HP depletion ===\n";
  DiamondTrap d4("Bob");
  for (int i = 0; i < 110; ++i) d4.takeDamage(1);
  d4.attack("TargetAfterDeath");

  std::cout << "\n=== Done (destructors next) ===\n";
  return 0;
}
