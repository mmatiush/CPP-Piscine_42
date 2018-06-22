/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatiush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 16:35:37 by mmatiush          #+#    #+#             */
/*   Updated: 2018/06/21 16:35:37 by mmatiush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

	const unsigned ScavTrap::_maxHit = 100;
	const unsigned ScavTrap::_maxEnergy = 50;
	const unsigned ScavTrap::_meleeAttack = 20;
	const unsigned ScavTrap::_rangedAttack = 15;
	const unsigned ScavTrap::_armor = 3;
	const unsigned ScavTrap::_challengeCost = 15;

ScavTrap::ScavTrap( void ) : _name("Noname") {
	std::cout << this->_name << " recompiling his combat code! Used EMPTY constructor" << std::endl;
	_hits = 100;
	_energy = 50;
	_level = 1;
	return ;
}

ScavTrap::ScavTrap( std::string const & name ) : _name(name) {
	std::cout << this->_name << " recompiling his combat code!" << std::endl;
	_hits = 100;
	_energy = 50;
	_level = 1;
	return ;
}

ScavTrap::ScavTrap( ScavTrap const & src ) {
	std::cout << "Copy constructor called. New " << src._name << " created" << std::endl;
	*this = src;
	return ;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs) {
	std::cout << "Assigning operator used on " << rhs._name << std::endl;
	this->_name = rhs._name;
	this->_hits = rhs._hits;
	this->_energy = rhs._energy;
	this->_level = rhs._level;
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << this->_name << ": Oh. My. God. What if I'm like... a fish? And, if I'm not moving... I stop breathing? AND THEN I'LL DIE! HELP ME! HELP MEEEEE HEE HEE HEEE! HHHHHHHELP!" << std::endl;
	return ;
}

void ScavTrap::setName( std::string const & name ) {
	std::cout << this->_name << " chanaged his name to " << name << std::endl;
	this->_name = name;
}

std::string ScavTrap::getName( void ) const {
	return (this->_name); 
}

void	ScavTrap::printName( void ) const {
	std::cout << this->getName() << std::endl;
}

unsigned const & ScavTrap::getHealth( void ) const {
	return (this->_hits);
}

void ScavTrap::printHealth ( void ) const {
	std::cout << "<" << this->_name << "> has " << this->getHealth() << " hits remaining" << std::endl;
}

void ScavTrap::rangedAttack( std::string const & target ) {
	std::cout << "SC4V-TP <" << this->_name << ">: I'm a tornado of death and bullets! <" << target
	<< "> lost " << this->_rangedAttack
	<< " hits !" << std::endl;
}

void ScavTrap::meleeAttack( std::string const & target ) {
	std::cout << "SC4V-TP <" << this->_name << ">: Meet professor punch! <" << target
	<< ">, lost " << this->_meleeAttack << " hits!" << std::endl;
}

void ScavTrap::takeDamage( unsigned int amount ) {
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

void ScavTrap::beRepaired( unsigned int amount ) {
	if (amount > this->_maxHit || this->_hits + amount > this->_maxHit)
		this->_hits = this->_maxHit;
	else
		this->_hits += amount;
	std::cout << "'Sweet life juice!' <" << this->_name << "> has " << this->_hits << " hits now" << std::endl;
}

void ScavTrap::challengeNewcomer( std::string const & target ) {
	if (this->_energy < this->_challengeCost) {
		std::cout << "Ooops... <" << this->_name << 
		"> can't attack as he's is out of energy. Only "
		<< this->_energy << " energy points left." << std::endl;
	}
	else {
		void (ScavTrap::*f[5])( std::string const & ) = {
			&ScavTrap::challengeVersus,
			&ScavTrap::challengeBattle,
			&ScavTrap::challengeDance,
			&ScavTrap::challengeIcuBucket,
			&ScavTrap::challengeBoom };
		(this->*f[(rand() % 5)])( target );
		this->_energy -= this->_challengeCost;
	}
}

void ScavTrap::challengeVersus ( std::string const & target ) {
	std::cout << target << ", you versus me! Me versus you! Either way" << std::endl;
}

void ScavTrap::challengeBattle ( std::string const & target ) {
	std::cout << "Dance battle! Or, you know... regular battle. " << target << ", go dance babe" << std::endl;

}

void ScavTrap::challengeDance ( std::string const & target ) {
	std::cout << target << " I'm calling you on the dance challenge!" << std::endl;
}

void ScavTrap::challengeIcuBucket ( std::string const & target ) {
	std::cout << "Know what killed the baddies? The Ice age. " << target << ", I'm calling your on IcuBucket challenge" << std::endl;
}

void ScavTrap::challengeBoom ( std::string const & target ) {
	std::cout << "<"<< target << ", Chk-chk, BOOM! Care to have a friendly duel? " << std::endl;
}

void ScavTrap::refreshEnergy () {
	this->_energy = this->_maxEnergy;
	std::cout << "Energy refreshed" << std::endl;
}


