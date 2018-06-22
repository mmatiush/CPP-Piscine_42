/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatiush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 16:35:40 by mmatiush          #+#    #+#             */
/*   Updated: 2018/06/21 16:35:43 by mmatiush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "NinjaTrap.hpp"

	const unsigned NinjaTrap::_specialAttackCost = 15;

NinjaTrap::NinjaTrap( void ) : ClapTrap() {
	std::cout << this->_name << " Frag robot created and ready to kill! Used EMPTY constructor" << std::endl;
	this->_type = NINJA;
	this->_maxHit = 60;
	this->_maxEnergy = 120;
	this->_meleeAttack = 60;
	this->_rangedAttack = 5;
	this->_armor = 0;
	this->_hits = 60;
	this->_energy = 120;
	this->_level = 1;
	return ;
}

NinjaTrap::NinjaTrap( std::string const & name ) : ClapTrap(name) {
	std::cout << this->_name << " Frag robot assembled and ready to kill!" << std::endl;
	this->_type = NINJA;
	this->_maxHit = 60;
	this->_maxEnergy = 120;
	this->_meleeAttack = 60;
	this->_rangedAttack = 5;
	this->_armor = 0;
	this->_hits = 60;
	this->_energy = 120;
	this->_level = 1;
	return ;
}

NinjaTrap::NinjaTrap( NinjaTrap const & src ) {
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return ;
}

NinjaTrap & NinjaTrap::operator=(NinjaTrap const & rhs) {
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

NinjaTrap::~NinjaTrap(void)
{
	std::cout << this->_name << " ninja falled. Or just dissapeared in the dakness?" << std::endl;
	return ;
}

/*
** Shoebox functions
*/

void
NinjaTrap::ninjaShoebox(ScavTrap& scav)
{
  	std::cout << this->_name << ": SCAV got kicked as usually, " << scav.getName() << std::endl;
}

void
NinjaTrap::ninjaShoebox(ClapTrap& clap)
{
	std::cout << this->_name << ": I clap my hands as your face, " << clap.getName() << "..." << std::endl;
}

void
NinjaTrap::ninjaShoebox(FragTrap& frag)
{
	std::cout << this->_name << ": I'll FRAGment you, " << frag.getName() << "?" << std::endl;
}

void
NinjaTrap::ninjaShoebox(NinjaTrap& ninja)
{
	std::cout << this->_name << ": NINJA throws siuriken at " << ninja.getName() << std::endl;
}
