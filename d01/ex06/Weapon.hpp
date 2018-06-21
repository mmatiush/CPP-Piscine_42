/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatiush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 15:55:57 by mmatiush          #+#    #+#             */
/*   Updated: 2018/06/20 15:55:57 by mmatiush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <iostream>

class Weapon {
public:
	Weapon(std::string);
	~Weapon(void);
	void setType(const std::string &);
	const std::string &getType(void) const;
private:
	std::string _type;
};

#endif

