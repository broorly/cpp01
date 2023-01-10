/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 14:45:06 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/10 12:15:24 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanA.hpp"
#include "HumanB.hpp"

int main(void) {
  {
    Weapon club = Weapon("crude spiked club");
    HumanA bob("Bob", club);
    bob.attack();
    club.setType("some other type of club");
    bob.attack();
  }
  {
    Weapon club = Weapon("crude spiked club");
    HumanB jim("Jim");
    jim.setWeapon(club);
    jim.attack();
    club.setType("some other type of club");
    jim.attack();
  }
  
  std::cout << std::endl << "Custom test: attack with no weapon" << std::endl;
  HumanB human = HumanB("human");
  human.attack();
	Weapon grenade_launcher = Weapon("Grenade Launcher");
	human.setWeapon(grenade_launcher);
	human.attack();
  return 0;
}