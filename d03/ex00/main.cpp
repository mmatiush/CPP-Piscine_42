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
	FragTrap bot("BOT");
	// bot.rangedAttack("devchonka");
	// bot.meleeAttack("BOKSER");
	bot.takeDamage(50);
	std::cout << bot.getHealth() << std::endl;
	bot.beRepaired(120);
	return (0);
}
