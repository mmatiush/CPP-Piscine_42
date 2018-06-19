/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatiush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 21:10:25 by mmatiush          #+#    #+#             */
/*   Updated: 2018/06/19 21:10:26 by mmatiush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieHorde.hpp"

ZombieHorde::ZombieHorde(int N) : _N(N) {
	std::string names[] = {"Axe", "Big", "Earthshaker", "Juggernaut", "Morphling",
						   "Butcher", "Lich", "Enigma", "Tinker", "Spectre"};
	this->_horde = new Zombie[N];
	for (int i = 0; i < N; ++i) {
		_horde[i] = Zombie(names[(rand() % 10)], "Horde");
	}
}

ZombieHorde::~ZombieHorde(void) {
	delete[] this->_horde;
}

void ZombieHorde::announce(void) const {
	for (int i = 0; i < _N; ++i) {
		_horde[i].announce();
	}
}
