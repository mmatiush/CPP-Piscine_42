/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatiush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/18 17:37:32 by mmatiush          #+#    #+#             */
/*   Updated: 2018/06/18 17:37:33 by mmatiush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.class.hpp"

Contact::Contact(void) { return; }

Contact::~Contact(void) { return; }

void Contact::setContact() {
	std::cout << "Tell your last name" << std::endl;
	if (!(std::getline(std::cin, this->_last_name)))
		exit (0);
	std::cout << "Tell your first name" << std::endl;
	if (!(std::getline(std::cin, this->_first_name)))
		exit (0);
	std::cout << "Tell your nickname" << std::endl;
	if (!(std::getline(std::cin, this->_nickname)))
		exit (0);
	std::cout << "Tell your login" << std::endl;
	if (!(std::getline(std::cin, this->_login)))
		exit (0);
	std::cout << "Tell your postall address" << std::endl;
	if (!(std::getline(std::cin, this->_postal_address)))
		exit (0);
	std::cout << "Tell your email address" << std::endl;
	if (!(std::getline(std::cin, this->_email_address)))
		exit (0);
	std::cout << "Tell your phone number" << std::endl;
	if (!(std::getline(std::cin, this->_phone_number)))
		exit (0);
	std::cout << "Tell your birtday date" << std::endl;
	if (!(std::getline(std::cin, this->_birthday_date)))
		exit (0);
	std::cout << "Tell your favorite meal" << std::endl;
	if (!(std::getline(std::cin, this->_favorite_meal)))
		exit (0);
	std::cout << "Tell your underwear color" << std::endl;
	if (!(std::getline(std::cin, this->_underwear_color)))
		exit (0);
	std::cout << "Tell your darkest secret" << std::endl;
	if (!(std::getline(std::cin, this->_darkest_secret)))
		exit (0);
	std::cout << "\tNew contact has been successfuly added" << std::endl;
}

void Contact::printWholeContact(void) const {
	std::cout << std::endl << "Your contact details:" << std::endl;
	std::cout << "Last name:       " << this->_last_name << std::endl;
	std::cout << "First name:      " << this->_first_name << std::endl;
	std::cout << "Nickname:        " << this->_nickname << std::endl;
	std::cout << "Login:           " << this->_login << std::endl;
	std::cout << "Postall address: " << this->_postal_address << std::endl;
	std::cout << "Email address:   " << this->_email_address << std::endl;
	std::cout << "Phone number:    " << this->_phone_number << std::endl;
	std::cout << "Birtday date:    " << this->_birthday_date << std::endl;
	std::cout << "Favorite meal:   " << this->_underwear_color << std::endl;
	std::cout << "Underwear color: " << this->_underwear_color << std::endl;
	std::cout << "Darkest secret:  " << this->_darkest_secret << std::endl;
	std::cout << std::endl;
}

std::string Contact::getFirstName(void) const {
	if (this->_first_name.size() >= MAX_WIDTH)
		return (this->_first_name.substr(0, 9) + '.');
	return (this->_first_name);
}

std::string Contact::getLastName(void) const {
	if (this->_last_name.size() >= MAX_WIDTH)
		return (this->_last_name.substr(0, 9) + '.');
	return (this->_last_name);
}

std::string Contact::getNickname(void) const {
	if (this->_nickname.size() >= MAX_WIDTH)
		return (this->_nickname.substr(0, 9) + '.');
	return (this->_nickname);
}
