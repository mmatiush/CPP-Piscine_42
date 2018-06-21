/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatiush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 15:55:44 by mmatiush          #+#    #+#             */
/*   Updated: 2018/06/20 15:55:45 by mmatiush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"

class HumanB {
public:
	HumanB (const std::string &);
	void setWeapon (Weapon &);
	void attack (void) const;
private:
	std::string _name;
	Weapon		*_weapon;
};

#endif
