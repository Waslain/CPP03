/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduzant <fduzant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:29:04 by fduzant           #+#    #+#             */
/*   Updated: 2023/11/02 14:43:05 by fduzant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

//Constructors and destructors
ScavTrap::ScavTrap() : ClapTrap()
{
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	_gatekeepermode = false;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	_gatekeepermode = copy._gatekeepermode;
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hit_points = 100;
	_energy_points = 50;
	_attack_damage = 20;
	_gatekeepermode = false;
	std::cout << "ScavTrap " << _name << " created" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " destroyed" << std::endl;
}

//Overloads
ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
	std::cout << "ScavTrap assignation operator called" << std::endl;
	_name = copy._name;
	_hit_points = copy._hit_points;
	_energy_points = copy._energy_points;
	_attack_damage = copy._attack_damage;
	_gatekeepermode = copy._gatekeepermode;
	return (*this);
}

//Member functions
void	ScavTrap::attack(const std::string& target)
{
	if (_energy_points <= 0)
	{
		std::cout << RED << "ScavTrap " << _name << " can't attack " << target << " because he is out of energy !" << RESET << std::endl;
		return ;
	}
	else
	{
		std::cout << RED << "ScavTrap " << _name << " attack " << target << ", causing " << _attack_damage << " points of damage !" << RESET << std::endl;
		_energy_points--;
		std::cout << RED << "ScavTrap " << _name << " has now " << _energy_points << " energy points !" << RESET << std::endl;
	}
}

void	ScavTrap::guardGate(void)
{
	if (_gatekeepermode == true)
	{
		std::cout << RED << "ScavTrap " << _name << " has leaved in gate keeper mode !" << RESET << std::endl;
		_gatekeepermode = false;
		return ;
	}
	else
	{
		std::cout << RED << "ScavTrap " << _name << " has enterred in gate keeper mode !" << RESET << std::endl;
		_gatekeepermode = true;
	}
}