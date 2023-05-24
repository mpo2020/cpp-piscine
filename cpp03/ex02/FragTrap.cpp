/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 07:33:29 by mpolisse          #+#    #+#             */
/*   Updated: 2023/05/24 13:45:41 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() :  ClapTrap() {
	this->_name = "\033[33mDefault\033[0m";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << this->_name << " \033[32mFragTrap was created!\033[0m" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	
	this->_name = "\033[33m" + name + "\033[0m";
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
	std::cout << this->_name << " \033[32mFragTrap was created!\033[0m" << std::endl;
}

FragTrap::~FragTrap() {
	std::cout << this->_name << " \033[31mFragTrap was destroyed!\033[0m" << std::endl;
}

FragTrap::FragTrap(const FragTrap &original) : ClapTrap() {
	std::cout << this->_name << " \033[32mFragTrap was copied!\033[0m" << std::endl;
	*this = original;
}

FragTrap &FragTrap::operator=(const FragTrap& argument)
{
	std::cout << this->_name << " \033[32mClapTrap was Cloned!\033[0m" << std::endl;
	this->_name = argument._name;
	this->_attackDamage = argument._attackDamage;
	this->_energyPoints = argument._energyPoints;
	this->_hitPoints = argument._hitPoints;
	return (*this);
}


void FragTrap::attack(const std::string& target){
	if (this->_hitPoints <= 0){
		std::cout << "FragTrap " << this->_name << " \033[95mcan't attack because it's already destroyed.\033[0m" << std::endl;
	} else if (this->_energyPoints <= 0) {
		std::cout << "FragTrap " << this->_name << " \033[95mcan't attack because it's out of energy points.\033[0m" << std::endl;
	} else {
		std::cout << "FragTrap " << this->_name << " \033[94mattacks " << target << " causing " << this->_attackDamage << " points of damage!\033[0m" << std::endl;
		this->_energyPoints--;
	}
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " performed a fabulous HighFive." << std::endl;
}