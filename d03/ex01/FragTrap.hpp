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
	FragTrap( FragTrap const & src );
	FragTrap & operator=( FragTrap const & rhs );
	~FragTrap( void );

	void	setName( std::string const & );
	std::string getName( void ) const;
	void	printName( void ) const;
	unsigned const & getHealth( void ) const;
	void	printHealth ( void ) const;

	void	rangedAttack( std::string const & );
	void	meleeAttack( std::string const & );
	void	takeDamage( unsigned int );
	void	beRepaired( unsigned int );
	void	refreshEnergy ( void );
	void	vaulthunter_dot_exe( std::string const & );
	void	attackGrenade ( std::string const & );
	void	attackFreeze ( std::string const & );
	void	attackFire ( std::string const & );
	void	attackShotgun ( std::string const & );
	void	attackSniperRifle ( std::string const & );
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
	static const unsigned	_specialAttackCost;
	
};

#endif
