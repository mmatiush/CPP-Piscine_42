/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatiush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 15:54:02 by mmatiush          #+#    #+#             */
/*   Updated: 2018/06/19 15:54:03 by mmatiush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

Pony::Pony (std::string name): _name(name) {
	std::cout << "Pony created" << std::endl;
	return ;
}

Pony::~Pony (void) {
	std::cout << "Ponny killed =(" << std::endl;
	return ;
}

std::string Pony::getName (void) const {
	return (this->_name);
}
