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
	std::cout << this->_name << " robot created and ready to kill! Used EMPTY constructor" << std::endl;
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

FragTrap::FragTrap( FragTrap const & src ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs) {
	std::cout << "Copy operator used on " << rhs._name << std::endl;
	this->_name = rhs._name;
	this->_hits = rhs._hits;
	this->_energy = rhs._energy;
	this->_level = rhs._level;
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << this->_name << " robot destroyed. End of the battle!" << std::endl;
	return ;
}

void FragTrap::setName( std::string const & name ) {
	std::cout << this->_name << " chanaged his name to " << name << std::endl;
	this->_name = name;
}

std::string FragTrap::getName( void ) const {
	return (this->_name); 
}

void	FragTrap::printName( void ) const {
	std::cout << this->getName() << std::endl;
}

unsigned const & FragTrap::getHealth( void ) const {
	return (this->_hits);
}

void FragTrap::printHealth ( void ) const {
	std::cout << "<" << this->_name << "> has " << this->getHealth() << " hits remaining" << std::endl;
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

void FragTrap::beRepaired( unsigned int amount ) {
	if (amount > this->_maxHit || this->_hits + amount > this->_maxHit)
		this->_hits = this->_maxHit;
	else
		this->_hits += amount;
	std::cout << "'Sweet life juice!' <" << this->_name << "> has " << this->_hits << " hits now" << std::endl;
}

void FragTrap::vaulthunter_dot_exe( std::string const & target ) {
	if (this->_energy < this->_specialAttackCost) {
		std::cout << "Ooops... <" << this->_name << 
		"> can't attack as he's is out of energy. Only "
		<< this->_energy << " energy points left." << std::endl;
	}
	else {
		void (FragTrap::*f[5])( std::string const & ) = {
			&FragTrap::attackGrenade,
			&FragTrap::attackFreeze,
			&FragTrap::attackFire,
			&FragTrap::attackShotgun,
			&FragTrap::attackSniperRifle};
		(this->*f[(rand() % 5)])( target );
		this->_energy -= this->_specialAttackCost;
	}
}

void FragTrap::attackGrenade ( std::string const & target ) {
	std::cout << "Throwing grenade! <" << target << "> got 13 points of damage" << std::endl;
}

void FragTrap::attackFreeze ( std::string const & target ) {
	std::cout << "Take a chill pill! <" << target << "> got frozen" << std::endl;

}

void FragTrap::attackFire ( std::string const & target ) {
	std::cout << "Fireball! <" << target << "> is set on fire" << std::endl;
}

void FragTrap::attackShotgun ( std::string const & target ) {
	std::cout << "Shotgun! You're listening to 'Short-Range Damage Radio.' <" << target << "> got hurt" << std::endl;
}

void FragTrap::attackSniperRifle ( std::string const & target ) {
	std::cout << "<"<< target << "> Snoiped" << std::endl;
}

void FragTrap::refreshEnergy () {
	this->_energy = this->_maxEnergy;
	std::cout << "Energy refreshed" << std::endl;
}


