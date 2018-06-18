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
#include <Contact.class.hpp>

#define MAX_CONTACTS 8
#define FULL 8
#define EMPTY 0

void	search_phonebook(Contact contact[], int n_contacts){
	std::string	buff;
	int index;

	for (int i = 0; i < n_contacts; ++i){
		// print a table with all contacts (truncated)
	}
	std::cout << "Enter contact index" << std::endl;
	std::cin >> index;
	std::cout << std::endl;
	if (index >= 0 && index < MAX_CONTACTS)
		contact[index].printContact;
}

int		main(void)
{
	std::string	command;
	int			n_contacts = 0;;
	Contact		contact[MAX_CONTACTS];

	while (42)
	{
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
			else {
				search_phonebook(contact, n_contacts);
			}
		}
		else if (command == "EXIT")
		{
			contact[0].printContact();
			return (0);
		}
	}
}
