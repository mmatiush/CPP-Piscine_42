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
	ZombieEvent event;
	event.setZombieType("White");
	Zombie *clark = event.newZombie("Clark");
	clark->announce();
	delete clark;

	Zombie barathrum("Bara", "crazy");
	barathrum.announce();
 	return (0);
}
