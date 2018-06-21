/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatiush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 12:37:33 by mmatiush          #+#    #+#             */
/*   Updated: 2018/06/20 12:37:34 by mmatiush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Brain.hpp"

Brain::Brain (void) {
	std::stringstream temp;
	temp << this;
	this->_address = temp.str();
	return ;
}

Brain::~Brain (void) {
	return ;
}

std::string Brain::identify(void) const {
	return (this->_address);
}
