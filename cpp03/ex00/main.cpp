/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:03:18 by mpolisse          #+#    #+#             */
/*   Updated: 2023/05/23 18:51:22 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void){
	
	ClapTrap newRobot("Wolverine");
	ClapTrap copyRobot;
	ClapTrap const otherCopyRobot(newRobot);
	

	copyRobot = newRobot;
	newRobot.status();
	newRobot.attack("Rufus Lumberjack");
	newRobot.status();
	std::cout << "Rufus Luberjack attack with axe ";
	newRobot.takeDamage(8);
	newRobot.beRepaired(1);
	newRobot.beRepaired(1);
	newRobot.beRepaired(1);
	newRobot.beRepaired(1);
	newRobot.beRepaired(1);
	newRobot.beRepaired(1);
	newRobot.beRepaired(1);
	newRobot.beRepaired(1);
	newRobot.beRepaired(1);
	newRobot.beRepaired(1);
	newRobot.status();
	std::cout << "Rufus Luberjack attack with axe ";
	newRobot.takeDamage(8);
	std::cout << "Rufus Luberjack attack with axe ";
	newRobot.takeDamage(8);
	std::cout << "Rufus Luberjack attack with axe ";
	newRobot.takeDamage(8);
	newRobot.attack("Rufus Lumberjack");
	newRobot.beRepaired(1);
	newRobot.status();
	return (0);
	
}