/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatiush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 16:35:40 by mmatiush          #+#    #+#             */
/*   Updated: 2018/06/21 16:35:43 by mmatiush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iostream>
# define SCAV 1
# define FRAG 2

class ClapTrap {

public:

	ClapTrap( void );
	ClapTrap( std::string const & );
	ClapTrap( ClapTrap const & src );
	ClapTrap & operator=( ClapTrap const & rhs );
	~ClapTrap( void );

	void	refreshEnergy ( void );
	void	setName( std::string const & );
	std::string getName( void ) const;
	void	printName( void ) const;
	unsigned const & getHealth( void ) const;
	void	printHealth ( void ) const;
	void	takeDamage( unsigned int );
	void	beRepaired( unsigned int );
	void	rangedAttack( std::string const & );
	void	meleeAttack( std::string const & );

protected:

	std::string		_name;
	unsigned		_type;
	unsigned		_hits;
	unsigned		_energy;
	unsigned		_level;

	unsigned	_maxHit;
	unsigned	_maxEnergy;
	unsigned	_meleeAttack;
	unsigned	_rangedAttack;
	unsigned	_armor;

};

#endif
