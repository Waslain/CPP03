/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduzant <fduzant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/28 17:28:32 by fduzant           #+#    #+#             */
/*   Updated: 2023/11/02 14:18:20 by fduzant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//Constructors and destructors
ClapTrap::ClapTrap() : _name("default"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "Default ClapTrap constructor" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Copy Constructor called" << std::endl;
	*this = copy;
}

ClapTrap::ClapTrap(const std::string name) : _name(name), _hit_points(10), _energy_points(10), _attack_damage(0)
{
	std::cout << "ClapTrap " << _name << " created !" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " destroyed !" << std::endl;
}

//Operator overloads
ClapTrap &ClapTrap::operator=(const ClapTrap &claptrap)
{
	std::cout << "Assignation operator called" << std::endl;
	_name = claptrap._name;
	_hit_points = claptrap._hit_points;
	_energy_points = claptrap._energy_points;
	_attack_damage = claptrap._attack_damage;
	return (*this);
}

//Member functions
void	ClapTrap::attack(const std::string& target)
{
	if (_energy_points <= 0)
	{
		std::cout << BLU << "ClapTrap " << _name << " can't attack " << target << " because he is out of energy !" << RESET << std::endl;
		return ;
	}
	else
	{
		std::cout << BLU << "ClapTrap " << _name << " attack " << target << ", causing " << _attack_damage << " points of damage !" << RESET << std::endl;
		_energy_points--;
		std::cout << BLU << "ClapTrap " << _name << " has now " << _energy_points << " energy points !" << RESET << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hit_points <= 0)
	{
		std::cout << BLU << "ClapTrap " << _name << " can't take damage because he is already K.O !" << RESET << std::endl;
		return ;
	}
	else
	{
		std::cout << BLU << "ClapTrap " << _name << " take " << amount << " points of damage !" << RESET << std::endl;
		_hit_points -= amount;
		if (_hit_points == 0)
			std::cout << BLU << "ClapTrap " << _name << " can't repair himself, he is K.O !" << RESET << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_hit_points <= 0)
	{
		std::cout << BLU << "ClapTrap " << _name << " can't be repaired because he is already K.O !" << RESET << std::endl;
		return ;
	}
	else if (_energy_points <= 0)
	{
		std::cout << BLU << "ClapTrap " << _name << " can't be repaired because he is out of energy !" << RESET << std::endl;
		return ;
	}
	else if (_energy_points - amount <= 0)
	{
		std::cout << BLU << "ClapTrap " << _name << " can't be repaired that much because he will be out of energy !" << RESET << std::endl;
		return ;
	}
	else
	{
		std::cout << BLU << "ClapTrap " << _name << " is repaired of " << amount << " points of damage !" << RESET << std::endl;
		_hit_points += amount;
		_energy_points -= amount;
		std::cout << BLU << "ClapTrap " << _name << " has now " << _hit_points << " hit points !" << RESET << std::endl;
		std::cout << BLU << "ClapTrap " << _name << " has now " << _energy_points << " energy points !" << RESET << std::endl;
	}
}