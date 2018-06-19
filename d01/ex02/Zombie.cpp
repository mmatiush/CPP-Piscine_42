/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatiush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 17:21:07 by mmatiush          #+#    #+#             */
/*   Updated: 2018/06/19 17:21:09 by mmatiush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie::Zombie (std::string name, std::string type) : _name(name), _type(type) {
	return;
}

Zombie::~Zombie () {
	return;
}

void Zombie::announce (void) const {
	std::cout << "<" << this->_name << " ("<< this->_type << ")>" << " Braiiiiiiinnnssss..." << std::endl;
}
