#include "ClapTrap.hpp"

int main() {
  ClapTrap a("Alice");

  a.attack("Target1");

  for (int i = 0; i < 10; ++i) a.attack("Dummy");
  a.attack("After-EP-Zero");

  a.takeDamage(3);
  a.takeDamage(1000);
  a.attack("While-HP-Zero");
  a.beRepaired(5);

  ClapTrap b("Bob");
  b.takeDamage(4);
  b.beRepaired(2);
  return 0;
}