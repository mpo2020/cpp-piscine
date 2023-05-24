/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:03:18 by mpolisse          #+#    #+#             */
/*   Updated: 2023/05/24 13:52:41 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void){
	
	ScavTrap newRobot("Muttley");
	FragTrap otherRobot("Hermione");
	
	otherRobot.status();
	newRobot.status();
	newRobot.attack("Hermione");
	otherRobot.takeDamage(20);
	otherRobot.status();
	otherRobot.attack("Muttley");
	newRobot.takeDamage(30);
	newRobot.guardGate();
	newRobot.status();
	newRobot.attack("Hermione");
	otherRobot.takeDamage(20);
	otherRobot.status();
	otherRobot.attack("Muttley");
	newRobot.takeDamage(30);
	newRobot.guardGate();
	newRobot.status();
	otherRobot.beRepaired(30);
	otherRobot.status();
	otherRobot.attack("Muttley");
	newRobot.takeDamage(30);
	otherRobot.attack("Muttley");
	newRobot.takeDamage(30);
	newRobot.status();
	otherRobot.status();
	otherRobot.highFivesGuys();
	
	return (0);
	
}