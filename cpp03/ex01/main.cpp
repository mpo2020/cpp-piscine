/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:03:18 by mpolisse          #+#    #+#             */
/*   Updated: 2023/05/24 11:51:41 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void){
	
	ScavTrap newRobot("Muttley");
	ScavTrap const otherCopyRobot(newRobot);
	ScavTrap copyRobot;

	copyRobot = newRobot;
	copyRobot.attack("Dumdum");
	newRobot.status();
	newRobot.attack("Professor Pat Pending");
	newRobot.status();
	std::cout << "Professor Pat Pending attack using automatc punch " << std::endl;
	newRobot.guardGate();
	newRobot.takeDamage(20);
	newRobot.status();
	newRobot.beRepaired(25);
	newRobot.status();
	//newRobot.beRepaired(1);
	
	
	return (0);
	
}