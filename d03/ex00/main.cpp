/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatiush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 16:35:24 by mmatiush          #+#    #+#             */
/*   Updated: 2018/06/21 16:35:25 by mmatiush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

int		main(void) {
	std::srand(std::time(0));
	FragTrap warrior("Warrior");
	FragTrap civilian;
	FragTrap looser(warrior);

	std::cout << std::endl << "\tTesting copy and equals operator:" << std::endl << std::endl;
	civilian = warrior;
	std::cout << &warrior << std::endl;
	std::cout << &looser << std::endl;
	std::cout << &civilian << std::endl;
	std::cout << "________________" << std::endl;
	civilian.printName();
	warrior.setName("NEWNAME");
	warrior.printName();
	civilian.printName();
	looser.printName();
	std::cout << "________________" << std::endl;
	
	warrior.setName("Warrior");
	std::cout << std::endl << "\tTesting random attaks:" << std::endl << std::endl;
	warrior.vaulthunter_dot_exe("Lilith");
	warrior.vaulthunter_dot_exe("Scorpio");
	warrior.vaulthunter_dot_exe("Brick");
	warrior.vaulthunter_dot_exe("Siren");
	warrior.vaulthunter_dot_exe("Maya");
	warrior.refreshEnergy();
	warrior.vaulthunter_dot_exe("Maya");

	std::cout << std::endl << "\tTesting mele and range attacks" << std::endl << std::endl;
	warrior.rangedAttack("Athena");
	warrior.meleeAttack("Wilhelm");

	std::cout << std::endl << "\tTesting takeDamage and beRepaired" << std::endl << std::endl;
	warrior.printHealth();
	warrior.takeDamage(50);
	warrior.printHealth();
	warrior.takeDamage(5);
	warrior.takeDamage(60);
	warrior.takeDamage(1);
	warrior.beRepaired(50);
	warrior.beRepaired(-1);
	warrior.takeDamage(-1);

	return (0);
}
