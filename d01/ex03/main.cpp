/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatiush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 21:10:34 by mmatiush          #+#    #+#             */
/*   Updated: 2018/06/19 21:10:35 by mmatiush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"
#include "ZombieHorde.hpp"

int		main(void) {
	std::srand(std::time(0));
	ZombieHorde LALA(5);
	LALA.announce();
	return (0);
}
