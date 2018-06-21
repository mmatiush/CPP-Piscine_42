/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatiush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 15:55:40 by mmatiush          #+#    #+#             */
/*   Updated: 2018/06/20 15:55:41 by mmatiush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#define EMPTY NULL

HumanB::HumanB(const std::string &name) : _name(name) {
	this->_weapon = NULL;
	return ;
}

void HumanB::setWeapon(Weapon &weapon) {
	this->_weapon = &weapon;
}

void HumanB::attack(void) const {
	if (this->_weapon == EMPTY)
		std::cout << this->_name << " cannot attack as he has no weapon" << std::endl;
	else
		std::cout << this->_name << " attacks with his " << (*this->_weapon).getType() << std::endl;
}
