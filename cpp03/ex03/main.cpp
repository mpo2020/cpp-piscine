/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:03:18 by mpolisse          #+#    #+#             */
/*   Updated: 2023/05/25 16:34:36 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void){
	
	DiamondTrap robot("Hermione");
	
	robot.attack("Tutu");
	robot.whoAmI();
	robot.status();
	robot.beRepaired(5);
	robot.status();
	robot.takeDamage(6);
	robot.highFivesGuys();
	robot.guardGate();
	robot.status();

	return (0);
	
}