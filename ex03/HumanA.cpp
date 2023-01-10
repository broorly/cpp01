/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 14:44:56 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/06 14:44:57 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon)
    : name(name), weapon(weapon) {}
HumanA::~HumanA() {}

std::string HumanA::getName() const { return this->name; }

void HumanA::setName(std::string name) { this->name = name; }
void HumanA::setWeapon(Weapon &weapon) { this->weapon = weapon; }

void HumanA::attack() {
	std::cout << this->name << " attacks with their " << this->weapon.getType()
						<< "!" << std::endl;
}