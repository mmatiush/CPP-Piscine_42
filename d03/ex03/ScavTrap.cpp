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

	const unsigned ScavTrap::_challengeCost = 15;

ScavTrap::ScavTrap( void ) : ClapTrap() {
	std::cout << this->_name << " Scav recompiling his combat code! Used EMPTY constructor" << std::endl;
	this->_type = SCAV;
	this->_maxHit = 100;
	this->_maxEnergy = 50;
	this->_meleeAttack = 20;
	this->_rangedAttack = 15;
	this->_armor = 3;
	this->_hits = 100;
	this->_energy = 50;
	this->_level = 1;
	return ;
}

ScavTrap::ScavTrap( std::string const & name ) : ClapTrap(name) {
	std::cout << this->_name << " Scav recompiling his combat code!" << std::endl;
	this->_type = SCAV;
	this->_maxHit = 100;
	this->_maxEnergy = 50;
	this->_meleeAttack = 20;
	this->_rangedAttack = 15;
	this->_armor = 3;
	this->_hits = 100;
	this->_energy = 50;
	this->_level = 1;
	return ;
}

ScavTrap::ScavTrap( ScavTrap const & src ) {
	std::cout << "Copy constructor called. New " << src._name << " created" << std::endl;
	*this = src;
	return ;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs) {
	std::cout << "Assigning operator used on " << rhs._name << std::endl;
	this->_type = rhs._type;
	this->_name = rhs._name;
	this->_maxHit = rhs._maxHit;
	this->_maxEnergy = rhs._maxEnergy;
	this->_meleeAttack = rhs._meleeAttack;
	this->_rangedAttack = rhs._rangedAttack;
	this->_armor = rhs._armor;
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


