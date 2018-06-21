/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatiush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 18:14:55 by mmatiush          #+#    #+#             */
/*   Updated: 2018/06/20 18:14:56 by mmatiush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int		main(int ac, char *av[]){
    std::string buff;
	std::string new_filename;	

	if (ac != 4){
		std::cout << "Usage: ./replace filename s1 s2" << std::endl;
		return (-1);
	}
	std::string filename(av[1]);
	std::string s1(av[2]);
	std::string s2(av[3]);
	new_filename = filename + ".replace";
	std::ifstream readFile(filename);
	if (readFile.fail()) {
		std::cout << "Error while opening file" << std::endl;
		return(-1);
	}
	std::ofstream writeFile(new_filename);
	if (writeFile.fail()){
		std::cout << "Error while creating file" << std::endl;
		return(-1);
	}
	while (std::getline(readFile, buff)){
		while (buff.find(s1) != std::string::npos){
			buff.replace(buff.find(s1), s1.length(), s2);
		}
		writeFile << buff;
		writeFile << std::endl;
	}
	if (buff == "")
		writeFile << std::endl;
	readFile.close();
	writeFile.close();
	return (0);
}
