/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduzant <fduzant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:38:35 by fduzant           #+#    #+#             */
/*   Updated: 2023/11/02 15:03:20 by fduzant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

/*
	Programme 
*/

int main()
{
	std::cout << "### TESTING CLAPTRAP ###\n" << std::endl;
	ClapTrap a;
	ClapTrap b("Cody");

	std::cout << BWHT<< "\nTesting" << RESET << std::endl;
	a.attack("some other robot");
	a.takeDamage(10);
	a.takeDamage(10);
	a.beRepaired(5);
	a.attack("some other other robot");
	b.beRepaired(3);
	for (int i = 0; i < 12; i++)
		b.attack("Cody-clone");
	b.beRepaired(3);

	std::cout << "\n\n### TESTING SCAVTRAP ###\n" << std::endl;
	ScavTrap c;
	ScavTrap d("Savage");
	std::cout << BWHT<< "\nTesting" << RESET << std::endl;
	c.attack("CloneTrap");
	// for (int i = 0; i < 50; i++)
	// 	c.attack("CloneTrap");
	c.beRepaired(22);
	c.takeDamage(21);
	c.beRepaired(22);
	c.guardGate();
	c.guardGate();
	d.attack("Savage-clone");
	d.takeDamage(101);
	d.takeDamage(15);
	d.attack("ScavTrap-clone");
	return (0);
}