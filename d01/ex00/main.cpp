/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatiush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 15:54:13 by mmatiush          #+#    #+#             */
/*   Updated: 2018/06/19 15:54:14 by mmatiush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Pony.hpp"

void	ponyOnTheHeap(std::string name){
	std::cout << "Crating a pony on the heap..." << std::endl;
	Pony *loshadka = new Pony(name);
	std::cout << "My name is " + loshadka->getName() << std::endl;
	delete loshadka;
}

void	ponyOnThestack(std::string name){
	std::cout << "Crating a pony on the stack..." << std::endl;
	Pony loshadka(name);
	std::cout << "My name is " + loshadka.getName() << std::endl;
}

/*
** Uncomment leaks command to test leaks
*/

int		main(void)
{
	ponyOnTheHeap("Little");
	ponyOnThestack("Small");
	// system ("leaks --quiet a.out");
	return (0);
}
