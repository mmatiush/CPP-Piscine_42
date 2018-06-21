/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatiush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 15:55:26 by mmatiush          #+#    #+#             */
/*   Updated: 2018/06/20 15:55:27 by mmatiush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(const std::string &name, Weapon &weapon) : _name(name), _weapon(weapon) {
	return ;
}

HumanA::~HumanA(void) {
	return ;
}

void HumanA::attack(void) const {
	std::cout << this->_name << " attacks with his " << this->_weapon.getType() << std::endl;
}
