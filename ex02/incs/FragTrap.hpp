#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <string>

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
 public:
  FragTrap();
  explicit FragTrap(const std::string& name);
  FragTrap(const FragTrap& other);
  FragTrap& operator=(const FragTrap& other);
  ~FragTrap();

  void highFivesGuys(void);
};

#endif  // FRAGTRAP_HPP
