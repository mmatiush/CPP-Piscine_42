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
# include <iostream>
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap {

public:

	FragTrap( void );
	FragTrap( std::string const & );
	FragTrap( FragTrap const & src );
	FragTrap & operator=( FragTrap const & rhs );
	~FragTrap( void );

	void	vaulthunter_dot_exe( std::string const & );
	void	attackGrenade ( std::string const & );
	void	attackFreeze ( std::string const & );
	void	attackFire ( std::string const & );
	void	attackShotgun ( std::string const & );
	void	attackSniperRifle ( std::string const & );

private:

	static const unsigned	_specialAttackCost;
	
};

#endif
