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
#include "ClapTrap.hpp"

	const unsigned FragTrap::_specialAttackCost = 25;

FragTrap::FragTrap( void ) : ClapTrap() {
	std::cout << this->_name << " Frag robot created and ready to kill! Used EMPTY constructor" << std::endl;
	this->_type = FRAG;
	this->_maxHit = 100;
	this->_maxEnergy = 100;
	this->_meleeAttack = 30;
	this->_rangedAttack = 20;
	this->_armor = 5;
	this->_hits = 100;
	this->_energy = 100;
	this->_level = 1;
	return ;
}

FragTrap::FragTrap( std::string const & name ) : ClapTrap(name) {
	std::cout << this->_name << " Frag robot assembled and ready to kill!" << std::endl;
	this->_type = FRAG;
	this->_maxHit = 100;
	this->_maxEnergy = 100;
	this->_meleeAttack = 30;
	this->_rangedAttack = 20;
	this->_armor = 5;
	this->_hits = 100;
	this->_energy = 100;
	this->_level = 1;
	return ;
}

FragTrap::FragTrap( FragTrap const & src ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs) {
	std::cout << "Copy operator used on " << rhs._name << std::endl;
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

FragTrap::~FragTrap(void)
{
	std::cout << this->_name << " robot destroyed. End of the battle!" << std::endl;
	return ;
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


