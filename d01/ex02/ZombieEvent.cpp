/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatiush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 17:21:19 by mmatiush          #+#    #+#             */
/*   Updated: 2018/06/19 17:21:20 by mmatiush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

void ZombieEvent::setZombieType(std::string type) {
	_type = type;
}

Zombie* ZombieEvent::newZombie(std::string name) {
	Zombie *temp = new Zombie(name, _type);
	return (temp);
}

Zombie *ZombieEvent::randomChump(void) {
	std::string names[] = {"Axe", "Big", "Earthshaker", "Juggernaut", "Morphling",
						   "Butcher", "Lich", "Enigma", "Tinker", "Spectre"};
	Zombie *temp = new Zombie(names[(rand() % 10)], this->_type);
	temp->announce();
	return (temp);
}
