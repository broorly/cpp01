/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 14:44:24 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/10 12:21:30 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Zombie.hpp"

int main(void) {
  {
    Zombie tst;
    tst.announce();
		tst.set_name("alo");
		tst.announce();
  }
	Zombie *tst1 = newZombie("nnhh");
	tst1->announce();
	randomChump("random");
	delete tst1;
  return (0);
}