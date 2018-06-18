/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmatiush <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/17 19:46:16 by mmatiush          #+#    #+#             */
/*   Updated: 2018/06/17 19:46:18 by mmatiush         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/*
** Change all characters from program arguments to upper case and print them
*/

void	print_capitalized(int ac, char **av)
{
	for (int i = 1; i < ac; ++i){
		for (int j = 0; av[i][j] != '\0'; ++j){	
			std::cout << (char)toupper(av[i][j]);
		}
	}
}

int		main(int ac, char *av[])
{
	if (ac > 1)
		print_capitalized(ac, av);
	else
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return (0);
}
