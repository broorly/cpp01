/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 14:44:39 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/10 12:22:43 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

int main(void) {
	Zombie *horde = zombieHorde(10, "tst");
	for (int i = 0; i < 10; i++) {
    horde[i].announce();
  }
	delete[] horde;
}