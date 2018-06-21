/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatiush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 17:21:38 by mmatiush          #+#    #+#             */
/*   Updated: 2018/06/19 17:21:39 by mmatiush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int		main(void){
	std::srand(std::time(0));
	// Test Zombie class and announce
	Zombie barathrum("Bara", "crazy");
	barathrum.announce();

	// Test setZombieType and newZombie
	ZombieEvent event;
	event.setZombieType("White");
	Zombie *clark = event.newZombie("Clark");
	clark->announce();
	delete clark;

	// Test setZombieType and randomChump
	event.setZombieType("Black");
	Zombie *king = event.randomChump();
	Zombie *prince = event.randomChump();
	delete prince;
	delete king;

 	return (0);
}
