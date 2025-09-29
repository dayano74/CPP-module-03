#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
 protected:
  std::string name;
  int hitPoints;
  int energyPoints;
  int attackDamage;

 private:
  void log(const std::string& msg) const;

 public:
  ClapTrap();
  ClapTrap(const ClapTrap& other);
  ClapTrap& operator=(const ClapTrap& other);
  ClapTrap(const std::string& name);
  ~ClapTrap();

  void attack(const std::string& target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
};

#endif  // CLAPTRAP_HPP
