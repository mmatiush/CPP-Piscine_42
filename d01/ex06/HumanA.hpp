/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatiush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 15:55:31 by mmatiush          #+#    #+#             */
/*   Updated: 2018/06/20 15:55:33 by mmatiush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP
# include "Weapon.hpp"

class HumanA {
public:
	HumanA(const std::string &, Weapon &);
	~HumanA(void);
	void attack(void) const;
private:
	std::string	_name;
	Weapon		&_weapon;
};

#endif
