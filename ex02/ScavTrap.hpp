/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduzant <fduzant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:52:23 by fduzant           #+#    #+#             */
/*   Updated: 2023/11/02 14:47:30 by fduzant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
public:
	ScavTrap();
	ScavTrap(const ScavTrap &copy);
	ScavTrap(const std::string name);
	~ScavTrap();

	ScavTrap &operator=(const ScavTrap &copy);
	
	void attack(const std::string& target);
	void guardGate(void);
private:
	bool _gatekeepermode;
};

#endif
