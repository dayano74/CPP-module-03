#include <iostream>

#include "ScavTrap.hpp"

int main() {
  std::cout << "=== Default constructor test ===" << std::endl;
  ScavTrap st1;

  std::cout << "\n=== Named constructor test ===" << std::endl;
  ScavTrap st2("Alice");

  std::cout << "\n=== Copy constructor test ===" << std::endl;
  ScavTrap st3(st2);

  std::cout << "\n=== Copy assignment operator test ===" << std::endl;
  st1 = st2;

  std::cout << "\n=== Attack test ===" << std::endl;
  st2.attack("TargetDummy");
  st2.attack("TargetDummy");

  std::cout << "\n=== Guard Gate test ===" << std::endl;
  st2.guardGate();

  std::cout << "\n=== Energy depletion test ===" << std::endl;
  for (int i = 0; i < 55; i++) {
    st2.attack("TargetDummy");
  }

  std::cout << "\n=== HP depletion test ===" << std::endl;
  ScavTrap st4("Bob");
  for (int i = 0; i < 110; i++) {
    st4.takeDamage(1);
  }
  st4.attack("TargetDummy");

  std::cout << "\n=== Destructor calls (end of main) ===" << std::endl;
  return 0;
}
