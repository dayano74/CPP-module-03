#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
  ScavTrap s0;
  ScavTrap s1("Serena");

  s1.attack("target-dummy");
  s1.guardGate();

  ScavTrap s2(s1);
  s2.attack("copy-target");

  s0 = s2;
  s0.attack("assigned-target");

  for (int i = 0; i < 55; ++i) {
    s0.attack("drain");
  }

  return 0;
}