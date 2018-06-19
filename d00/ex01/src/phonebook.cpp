/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatiush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/17 19:46:16 by mmatiush          #+#    #+#             */
/*   Updated: 2018/06/17 19:46:18 by mmatiush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "Contact.class.hpp"

#define MAX_CONTACTS 8
#define MAX_WIDTH 10
#define FULL 8
#define EMPTY 0

void	printContactsTable(Contact contact[], int n_contacts){
	std::cout << std::endl;
	std::cout << "+-------------------------------------------+" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	for (int i = 0; i < n_contacts; ++i){
		std::cout << "|"
		<< std::setw(MAX_WIDTH) << i + 1 << "|"
		<< std::setw(MAX_WIDTH) << contact[i].getFirstName() << "|"
		<< std::setw(MAX_WIDTH) << contact[i].getLastName() << "|"
		<< std::setw(MAX_WIDTH) << contact[i].getNickname() << "|"
		<< std::endl;
	}
	std::cout << "+-------------------------------------------+" << std::endl;
	std::cout << std::endl;
}

void	printContactByIndex(Contact contact[], int n_contacts){
	std::string	buff;
	int			index;

	std::cout << "Enter a contact's index" << std::endl;
	std::getline(std::cin, buff);
	index = atoi(buff.c_str());
	if (index > 0 && index <= n_contacts)
		contact[index - 1].printWholeContact();
	else
		std::cout << "Such index doesn't exist." << std::endl;
}

int		main(void)
{
	std::string	command;
	int			n_contacts = 0;;
	Contact		contact[MAX_CONTACTS];

	while (42)
	{
		std::cout << "\tPlease enter a standart command" << std::endl << "--> ";
		if (!(std::getline(std::cin, command)))
			return (0);
		if (command == "ADD"){
			if (n_contacts == FULL)
				std::cout << "The contact book is full" << std::endl;
			else
				contact[n_contacts++].setContact();
		}
		else if (command == "SEARCH"){
			if (n_contacts == EMPTY)
				std::cout << "The contact book is empty" << std::endl;
			else{
				printContactsTable(contact, n_contacts);
				printContactByIndex(contact, n_contacts);
			}
		}
		else if (command == "EXIT")
			return (0);
	}
	return (0);
}
