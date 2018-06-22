/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatiush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 16:35:40 by mmatiush          #+#    #+#             */
/*   Updated: 2018/06/21 16:35:43 by mmatiush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include <iostream>

class ScavTrap {

public:

	ScavTrap( void );
	ScavTrap( std::string const & );
	ScavTrap( ScavTrap const & src );
	ScavTrap & operator=( ScavTrap const & rhs );
	~ScavTrap( void );

	void	setName( std::string const & );
	std::string getName( void ) const;
	void	printName( void ) const;
	unsigned const & getHealth( void ) const;
	void	printHealth ( void ) const;

	void	rangedAttack( std::string const & );
	void	meleeAttack( std::string const & );
	void	takeDamage( unsigned int );
	void	beRepaired( unsigned int );
	void	refreshEnergy( void );
	void	challengeNewcomer( std::string const & );
	void	challengeVersus( std::string const & );
	void	challengeBattle( std::string const & );
	void	challengeDance( std::string const & );
	void	challengeIcuBucket( std::string const & );
	void	challengeBoom( std::string const & );
	
private:

	std::string				_name;
	unsigned				_hits;
	unsigned				_energy;
	unsigned				_level;

	static const unsigned	_maxHit;
	static const unsigned	_maxEnergy;
	static const unsigned	_meleeAttack;
	static const unsigned	_rangedAttack;
	static const unsigned	_armor;
	static const unsigned	_challengeCost;
	
};

#endif
