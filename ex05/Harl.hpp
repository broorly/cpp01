/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 14:45:26 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/06 14:45:27 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef HARL_H
#define HARL_H

#include <iostream>
#include <string>

class Harl {
 public:
	Harl();
	~Harl();
  void complain(std::string level);

 private:
  void debug();
  void info();
  void warning();
  void error();
};

#endif