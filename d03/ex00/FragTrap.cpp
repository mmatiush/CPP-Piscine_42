/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatiush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 16:35:37 by mmatiush          #+#    #+#             */
/*   Updated: 2018/06/21 16:35:37 by mmatiush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "FragTrap.hpp"

	const unsigned FragTrap::_maxHit = 100;
	const unsigned FragTrap::_maxEnergy = 100;
	const unsigned FragTrap::_meleeAttack = 30;
	const unsigned FragTrap::_rangedAttack = 20;
	const unsigned FragTrap::_armor = 5;
	const unsigned FragTrap::_specialAttackCost = 25;

FragTrap::FragTrap( void ) : _name("Noname") {
	std::cout << this->_name << " robot created and ready to kill!" << std::endl;
	_hits = 100;
	_energy = 100;
	_level = 1;
	return ;
}

FragTrap::FragTrap( std::string const & name ) : _name(name) {
	std::cout << this->_name << " robot assembled and ready to kill!" << std::endl;
	_hits = 100;
	_energy = 100;
	_level = 1;
	return ;
}

FragTrap::~FragTrap(void) {
	std::cout << this->_name << " robot destroyed. End of the battle!" << std::endl;
	return ;
}

void FragTrap::setName( std::string const & name ) {
	std::cout << this->_name << " chanaged his name to" << name << std::endl;
	this->_name = name;
}

void FragTrap::vaulthunter_dot_exe( std::string const & target ) {
	if (this->_energy < 25) {
		std::cout << "Ooops... " << this->_name << 
		" can't attack as he's is out of energy. Only "
		<< this->_energy << " energy points left." << std::endl;
	}
	else
	std::cout << target << "Shia kak yvaliy!" << std::endl;
	// add selecting a random attack TODO:
}

int	const & FragTrap::getHealth( void ) const {
	return (this->_hits);
}

void FragTrap::rangedAttack( std::string const & target ) {
	std::cout << "FR4G-TP <" << this->_name << "> shots <" << target
	<< "> with a rocket at range, making " << this->_rangedAttack
	<< " points of damage !" << std::endl;
}

void FragTrap::meleeAttack( std::string const & target ) {
	std::cout << "FR4G-TP <" << this->_name << "> comes closer and kicks <" << target
	<< ">, making " << this->_meleeAttack << " points of damage!" << std::endl;
}

void FragTrap::takeDamage( unsigned int amount ) {
	if (this->getHealth() == 0)
		std::cout << "Don't waste your ammunition. <" << this->_name << "> is dead" << std::endl;
	else if (this->_armor >= amount)
		std::cout << "You cannot break <" << this->_name << "'s> armor with " << amount - this->_armor << " hit" << std::endl;
	else if (this->_hits + this->_armor - amount <= 0) {
		std::cout << "<"<< this->_name << "> got " << amount - this->_armor << " points of damage and died" << std::endl;
		this->_hits = 0;
	}
	else {
		std::cout << "<" << this->_name << "> got " << amount << " points of damage" << std::endl;
		this->_hits -= amount - this->_armor;
	}
}

void FragTrap::beRepaired( unsigned int amount ) {
	if (this->_hits + amount > this->_maxHit )
		this->_hits = this->_maxHit;
	else
		this->_hits += amount;
	std::cout << "<" << this->_name << ">: 'Sweet life juice!' He has " << this->_hits << " hits now" << std::endl;
}


