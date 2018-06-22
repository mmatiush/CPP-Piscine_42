/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatiush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 16:35:37 by mmatiush          #+#    #+#             */
/*   Updated: 2018/06/21 16:35:37 by mmatiush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ) : _name("Noname") {
	std::cout << this->_name << " recompiling CL4P-TP combat code! Used EMPTY constructor" << std::endl;
	return ;
}

ClapTrap::ClapTrap( std::string const & name ) : _name(name) {
	std::cout << this->_name << " recompiling CL4P-TP combat code!" << std::endl;
	return ;
}

ClapTrap::ClapTrap( ClapTrap const & src ) {
	std::cout << "Copy constructor called. New " << src._name << " created" << std::endl;
	*this = src;
	return ;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs) {
	std::cout << "Copy operator used on " << rhs._name << std::endl;
	this->_name = rhs._name;
	this->_hits = rhs._hits;
	this->_energy = rhs._energy;
	this->_level = rhs._level;
	return (*this);
}

ClapTrap::~ClapTrap(void)
{
	std::cout << this->_name << "'s got segfault. Robot has been diassembled!" << std::endl;
	return ;
}

// Helping functions

void ClapTrap::setName( std::string const & name ) {
	std::cout << this->_name << " chanaged his name to " << name << std::endl;
	this->_name = name;
}

std::string ClapTrap::getName( void ) const {
	return (this->_name); 
}

void	ClapTrap::printName( void ) const {
	std::cout << this->getName() << std::endl;
}

unsigned const & ClapTrap::getHealth( void ) const {
	return (this->_hits);
}

void ClapTrap::printHealth ( void ) const {
	std::cout << "<" << this->_name << "> has " << this->getHealth() << " hits remaining" << std::endl;
}

void ClapTrap::refreshEnergy () {
	this->_energy = this->_maxEnergy;
	std::cout << "Energy refreshed" << std::endl;
}

// Fignting functions

void ClapTrap::takeDamage( unsigned int amount ) {
	unsigned takenDamage;

	takenDamage = amount - this->_armor;
	if (this->getHealth() == 0)
		std::cout << "Don't waste your ammunition. <" << this->_name << "> is dead" << std::endl;
	else if (this->_armor >= amount)
		std::cout << "You cannot break <" << this->_name << "'s> armor with " << amount << " points dmg" << std::endl;
	else if (amount >= this->_hits + _armor) {
		std::cout << "<"<< this->_name << "> got " << takenDamage << " points of damage and died" << std::endl;
		this->_hits = 0;
	}
	else {
		std::cout << "<" << this->_name << "> got " << takenDamage << " points of damage" << std::endl;
		this->_hits -= takenDamage;
	}
}

void ClapTrap::beRepaired( unsigned int amount ) {
	if (amount > this->_maxHit || this->_hits + amount > this->_maxHit)
		this->_hits = this->_maxHit;
	else
		this->_hits += amount;
	std::cout << "'Sweet life juice!' <" << this->_name << "> has " << this->_hits << " hits now" << std::endl;
}

void ClapTrap::rangedAttack( std::string const & target ) {
	if (this->_type == SCAV) {
		std::cout << "SC4V-TP <" << this->_name << ">: I'm a tornado of death and bullets! <" << target
				<< "> lost " << this->_rangedAttack
				 << " hits !" << std::endl;
	}
	else if (this->_type == FRAG){
		std::cout << "FR4G-TP <" << this->_name << "> shots <" << target
				<< "> with a rocket at range, making " << this->_rangedAttack
				<< " points of damage !" << std::endl;
	}
}

void ClapTrap::meleeAttack( std::string const & target ) {
	if (this->_type == SCAV) {
		std::cout << "SC4V-TP <" << this->_name << ">: Meet professor punch! <" << target
				  << ">, lost " << this->_meleeAttack << " hits!" << std::endl;
	}
	else if (this->_type == FRAG) {
		std::cout << "FR4G-TP <" << this->_name << "> comes closer and kicks <" << target
				  << ">, making " << this->_meleeAttack << " points of damage!" << std::endl;
	}
}
