/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 07:33:29 by mpolisse          #+#    #+#             */
/*   Updated: 2023/05/24 11:04:08 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() :  ClapTrap() {
	this->_name = "\033[33mDefault\033[0m";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << this->_name << " \033[32mScavTrap was created!\033[0m" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name) {
	
	this->_name = "\033[33m" + name + "\033[0m";
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
	std::cout << this->_name << " \033[32mScavTrap was created!\033[0m" << std::endl;
}

ScavTrap::~ScavTrap() {
	std::cout << this->_name << " \033[31mScavTrap was destroyed!\033[0m" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &original) : ClapTrap() {
	std::cout << this->_name << " \033[32mScavTrap was copied!\033[0m" << std::endl;
	*this = original;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& argument)
{
	std::cout << this->_name << " \033[32mClapTrap was Cloned!\033[0m" << std::endl;
	this->_name = argument._name;
	this->_attackDamage = argument._attackDamage;
	this->_energyPoints = argument._energyPoints;
	this->_hitPoints = argument._hitPoints;
	return (*this);
}


void ScavTrap::attack(const std::string& target){
	if (this->_hitPoints <= 0){
		std::cout << "ScavTrap " << this->_name << " \033[95mcan't attack because it's already destroyed.\033[0m" << std::endl;
	} else if (this->_energyPoints <= 0) {
		std::cout << "ScavTrap " << this->_name << " \033[95mcan't attack because it's out of energy points.\033[0m" << std::endl;
	} else {
		std::cout << "ScavTrap " << this->_name << " \033[94mattacks " << target << " causing " << this->_attackDamage << " points of damage!\033[0m" << std::endl;
		this->_energyPoints--;
	}
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode." << std::endl;
}