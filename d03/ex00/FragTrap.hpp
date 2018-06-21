/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatiush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 16:35:40 by mmatiush          #+#    #+#             */
/*   Updated: 2018/06/21 16:35:43 by mmatiush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include <iostream>

class FragTrap {

public:

	FragTrap( void );
	FragTrap( std::string const & );
	~FragTrap( void );
	
	void setName( std::string const & );
	int	const & getHealth( void ) const;

	void rangedAttack( std::string const & );
	void meleeAttack( std::string const & );
	void takeDamage( unsigned int );
	void beRepaired(unsigned int );
	void vaulthunter_dot_exe( std::string const & ); // TODO:

private:

	std::string _name;
	int _hits;
	int _energy;
	int _level;

	// Const robot characteristics

	static const unsigned _maxHit;
	static const unsigned _maxEnergy;
	static const unsigned _meleeAttack;
	static const unsigned _rangedAttack;
	static const unsigned _armor;
	static const unsigned _specialAttackCost;
	
};

#endif
