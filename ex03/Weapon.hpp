/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 14:45:13 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/06 14:45:14 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_H
#define WEAPON_H

#include <string>

class Weapon {
 public:
  Weapon(std::string type);
  ~Weapon();

  const std::string &getType() const;

  void setType(std::string type);

 private:
  std::string type;
};

#endif