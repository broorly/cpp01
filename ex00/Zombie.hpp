/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 14:44:35 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/06 14:44:36 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <string>

class Zombie {
 public:
  Zombie();
  ~Zombie();

  void set_name(std::string name);
  void announce();
	
 private:
  std::string name;
};

Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif