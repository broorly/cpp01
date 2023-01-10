/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 14:45:01 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/10 12:14:15 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name), weapon(NULL) {}
HumanB::~HumanB() {}

std::string HumanB::getName() const { return this->name; }

void HumanB::setName(std::string name) { this->name = name; }
void HumanB::setWeapon(Weapon &weapon) { this->weapon = &weapon; }

void HumanB::attack() {
	if (this->weapon) {
		std::cout << this->name << " attacks with their " << this->weapon->getType()
							<< "!" << std::endl;
	}
	 else 
	{
		std::cout << this->name << " attacks with their fists!" << std::endl;
	}
}