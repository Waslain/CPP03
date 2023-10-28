/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fduzant <fduzant@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 13:38:35 by fduzant           #+#    #+#             */
/*   Updated: 2023/10/28 18:43:56 by fduzant          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

/*
	Programme 
*/

int main( void )
{
	ClapTrap claptrap("Bobby");
	std::cout << std::endl;
	std::cout << BHWHT << "Welcome to the ClapTrap test program !" << std::endl;
	std::cout << "Here two ClapTrap will fight, Bobby and John" << std::endl;
	std::cout << "The fight will be commented by our two commentators, Patrick-Jean and Jean-Patrick !" << RESET << std::endl;
	std::cout << std::endl;
	claptrap.attack("ClapTrap John");
	std::cout << RED << "ClapTrap John counterattack !" << RESET << std::endl;
	claptrap.takeDamage(5);
	std::cout << GRN << "Bobby's having another stroke !" << std::endl;
	claptrap.attack("John");
	std::cout << GRN << "What a fight Jean-Patrick ! Bobby is flopping !" << RESET << std::endl;
	std::cout << GRN << "Indeed Patrick-Jean, poor Bobby missed both attacks!" << RESET << std::endl;
	std::cout << RED << "ClapTrap John is now attacking !" << RESET << std::endl;
	claptrap.takeDamage(0);
	std::cout << GRN << "Oh my god Patrick-Jean, John is attacking Bobby with a 0 damage attack !" << RESET << std::endl;
	std::cout << GRN << "What a shame Jean-Patrick, John flopped to !" << RESET << std::endl;
	claptrap.beRepaired(5);
	std::cout << GRN << "Bobby is now repairing himself !" << RESET << std::endl;
	claptrap.attack("John");
	claptrap.attack("John");
	claptrap.attack("John");
	claptrap.attack("John");
	std::cout << GRN << "Bobby try to attack John 4 times !" << RESET << std::endl;
	std::cout << GRN << "Unfortunately, Bobby is out of energy !" << RESET << std::endl;
	std::cout << RED << "ClapTrap John counterattack 2 times !" << RESET << std::endl;
	claptrap.takeDamage(5);
	claptrap.takeDamage(5);
	std::cout << GRN << "Patrick-Jean, Bobby seems K.O !" << RESET << std::endl;
	claptrap.beRepaired(5);
	std::cout << GRN << "Bobby is trying to repair himself, but he is K.O !" << RESET << std::endl;
	std::cout << GRN << "I guess it's the end of the fight Jean-Patrick !" << RESET << std::endl;
	std::cout << GRN << "I think that Bobby did not like the attacks of John just as you do not like the smileys Patrick-Jean !" << RESET << std::endl;
	std::cout << GRN << "This is a low blow Jean-Patrick !" << RESET << std::endl;
	std::cout << GRN << "I'm sorry Patrick-Jean, I'm sorry..." << RESET << std::endl;
	std::cout << GRN << "It's okay Jean-Patrick, I forgive you..." << RESET << std::endl;
	std::cout << GRN << "I love you Patrick-Jean..." << RESET << std::endl;
	std::cout << GRN << "I love you too Jean-Patrick..." << RESET << std::endl;
	std::cout << GRN << "Patrick-Jean, would you like to marry me ?" << RESET << std::endl;
	std::cout << BWHT << "Okay! Ah ah I think it's time give back the antenna thank you all for following the first edition of the ClapTrap program" << RESET << std::endl;
	std::cout << std::endl;

	return 0;
}