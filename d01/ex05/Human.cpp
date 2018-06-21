/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatiush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/20 12:37:45 by mmatiush          #+#    #+#             */
/*   Updated: 2018/06/20 12:37:45 by mmatiush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include "Brain.hpp"

Human::Human(void) {
	return ;
}

Human::~Human(void) {
	return ;
}

std::string Human::identify(void) const {
	return (_mozg.identify());
}

Brain Human::getBrain(void) const {
	return (this->_mozg);
}
