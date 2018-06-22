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
# include <iostream>
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {

public:

	ScavTrap( void );
	ScavTrap( std::string const & );
	ScavTrap( ScavTrap const & src );
	ScavTrap & operator=( ScavTrap const & rhs );
	~ScavTrap( void );

	void	challengeNewcomer( std::string const & );
	void	challengeVersus( std::string const & );
	void	challengeBattle( std::string const & );
	void	challengeDance( std::string const & );
	void	challengeIcuBucket( std::string const & );
	void	challengeBoom( std::string const & );
	
private:

	static const unsigned	_challengeCost;
	
};

#endif
