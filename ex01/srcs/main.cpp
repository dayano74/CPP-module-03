// Minimal tests for ScavTrap and ClapTrap demonstrating OCF and behavior
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main() {
  // 1) Default construct and named construct
  ScavTrap s0;            // default
  ScavTrap s1("Serena");  // named

  // 2) Basic actions
  s1.attack("target-dummy");
  s1.guardGate();

  // 3) Copy construction
  ScavTrap s2(s1);
  s2.attack("copy-target");

  // 4) Copy assignment
  s0 = s2;
  s0.attack("assigned-target");

  // 5) Energy/HP boundary cases
  for (int i = 0; i < 55; ++i) {
    s0.attack("drain");
  }

  // Destruction order will be shown automatically via destructors when main ends
  return 0;
}