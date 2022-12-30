
#ifndef HUMANA_H
#define HUMANA_H

#include <iostream>
#include "Weapon.hpp"

class HumanA {
 public:
  HumanA(std::string name, Weapon &weapon);
  ~HumanA();

  std::string getName() const;

  void setName(std::string name);
  void setWeapon(Weapon &weapon);

  void attack();

 private:
  std::string name;
  Weapon &weapon;
};

#endif