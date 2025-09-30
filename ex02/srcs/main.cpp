#include <iostream>

#include "FragTrap.hpp"

int main() {
  std::cout << "=== Default constructor test ===" << std::endl;
  FragTrap st1;

  std::cout << "\n=== Named constructor test ===" << std::endl;
  FragTrap st2("Alice");

  std::cout << "\n=== Copy constructor test ===" << std::endl;
  FragTrap st3(st2);

  std::cout << "\n=== Copy assignment operator test ===" << std::endl;
  st1 = st2;

  std::cout << "\n=== Attack test ===" << std::endl;
  st2.attack("TargetDummy");
  st2.attack("TargetDummy");

  std::cout << "\n=== High Five test ===" << std::endl;
  st2.highFivesGuys();

  std::cout << "\n=== Energy depletion test ===" << std::endl;
  for (int i = 0; i < 100; i++) {
    st2.attack("TargetDummy");
  }

  std::cout << "\n=== HP depletion test ===" << std::endl;
  FragTrap st4("Bob");
  for (int i = 0; i < 110; i++) {
    st4.takeDamage(1);
  }
  st4.attack("TargetDummy");

  std::cout << "\n=== Destructor calls (end of main) ===" << std::endl;
  return 0;
}
