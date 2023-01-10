/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrafik <mrafik@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/06 14:45:17 by mrafik            #+#    #+#             */
/*   Updated: 2023/01/10 12:10:49 by mrafik           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

int main(int argc, char **argv) {
  std::ifstream infile;
  std::stringstream buffer;
  std::ofstream outfile;
  std::string text;

  if (argc != 4) 
  {
    std::cout << "invalid argument !" << std::endl;
    exit(1);
  }
  infile.open(argv[1]);
  if (infile.fail()) 
  {
    std::cout << "Error opening file!" << std::endl;
    exit(1);
  }
  buffer << infile.rdbuf();
  infile.close();
  text = buffer.str();
  int i = 0;
  if(argv[3] && argv[3][0] &&argv[2] && argv[2][0])
  {
    while ((i = text.find((std::string)argv[2], i)) != -1)
    {
      text.erase(i, ((std::string)argv[2]).length());
      text.insert(i, (std::string)argv[3]);
      i += ((std::string)argv[3]).length();
    }
  }
  else
  {
    std::cout << "invalid argument !" << std::endl;
    exit(1);
  }
  outfile.open(argv[1] + (std::string) ".replace");
  outfile << text;
  outfile.close();
  return (0);
}