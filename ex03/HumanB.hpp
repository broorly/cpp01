
#ifndef HUMANB_H
#define HUMANB_H

#include <iostream>
#include "Weapon.hpp"

class HumanB {
 public:
  HumanB(std::string name);
  ~HumanB();

  std::string getName() const;

  void setName(std::string name);
  void setWeapon(Weapon &weapon);

  void attack();

 private:
  std::string name;
  Weapon *weapon;
};

#endif