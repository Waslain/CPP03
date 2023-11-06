/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduzant <fduzant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:38:35 by fduzant           #+#    #+#             */
/*   Updated: 2023/11/06 12:55:44 by fduzant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

/*
	Programme 
*/

int main()
{
	std::cout << "****TESTING FRAGTRAP****\n" << std::endl;
	FragTrap e;
	FragTrap f("Joseph");

	std::cout << std::endl;
	e.highFivesGuys();
	e.attack("a decepticon");
	e.takeDamage(101);
	e.takeDamage(1);
	e.attack("a decepticon");
	f.highFivesGuys();
	// for(int i = 0; i < 101; i++)
	// 	f.attack("FragTrap-clone");
	std::cout << std::endl;
	return (0);
}