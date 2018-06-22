/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatiush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 16:35:40 by mmatiush          #+#    #+#             */
/*   Updated: 2018/06/21 16:35:43 by mmatiush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
# include <iostream>
# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class NinjaTrap : ClapTrap {

public:

	NinjaTrap( void );
	NinjaTrap( std::string const & );
	NinjaTrap( NinjaTrap const & src );
	NinjaTrap & operator=( NinjaTrap const & rhs );
	~NinjaTrap( void );

	void	vaulthunter_dot_exe( std::string const & );
	void	attackGrenade ( std::string const & );
	void	attackFreeze ( std::string const & );
	void	attackFire ( std::string const & );
	void	attackShotgun ( std::string const & );
	void	attackSniperRifle ( std::string const & );
	// Shoebox
	void 		ninjaShoebox(NinjaTrap &attack);
	void 		ninjaShoebox(ClapTrap &attack);
	void 		ninjaShoebox(FragTrap &attack);
	void 		ninjaShoebox(ScavTrap &attack);

private:

	static const unsigned	_specialAttackCost;

};

#endif
