/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatiush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 21:10:29 by mmatiush          #+#    #+#             */
/*   Updated: 2018/06/19 21:10:30 by mmatiush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEHORD_HPP
# define ZOMBIEHORD_HPP

# include <iostream>
# include "Zombie.hpp"

class ZombieHorde {
public:
	ZombieHorde(int);
	~ZombieHorde(void);
	void announce(void) const;
private:
	int		_N;
	Zombie	*_horde;
};

#endif
