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
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"


int		main(void) {
	std::srand(std::time(0));
	FragTrap fragy("Fragy");
	ScavTrap scavy("Scavy");
	std::cout << "________________" << std::endl;
	fragy.takeDamage(10);
	fragy.printHealth();
	scavy.takeDamage(10);
	scavy.printHealth();
	fragy.takeDamage(300);
	fragy.takeDamage(300);
	fragy.beRepaired(1000);
	scavy.beRepaired(1000);
	std::cout << "________________" << std::endl;
	fragy.rangedAttack("foo");
	scavy.rangedAttack("bar");
	std::cout << "________________" << std::endl;
	scavy.challengeNewcomer("Newbie");
	scavy.challengeNewcomer("Newbie");
	fragy.vaulthunter_dot_exe("PoorTarget");
	fragy.vaulthunter_dot_exe("PoorTarget");
	std::cout << "________________" << std::endl;
	return (0);
}
