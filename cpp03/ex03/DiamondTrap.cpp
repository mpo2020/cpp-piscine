/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 14:05:29 by mpolisse          #+#    #+#             */
/*   Updated: 2023/05/25 16:20:31 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){
	this->_name = "Deafault";
	ClapTrap::_name = _name + "_clap_name";
	this->_hitPoints = FragTrap::_defaultHp;
	this->_energyPoints = ScavTrap::_defaultEp;
	this->_attackDamage = FragTrap::_attackDamage;
	
	std::cout << this->_name << " \033[32mDiamondTrap was created!\033[0m" << std::endl;
}

DiamondTrap::DiamondTrap(std:: string name){
	this->_name = name;
	ClapTrap::_name = name + "_clap_name";
	this->_hitPoints = FragTrap::_defaultHp;
	this->_energyPoints = ScavTrap::_defaultEp;
	this->_attackDamage = FragTrap::_attackDamage;
	
	std::cout << this->_name << " \033[32mDiamondTrap was created!\033[0m" << std::endl;

}


void DiamondTrap::attack(const std::string& target){
	ScavTrap::attack(target);
}

DiamondTrap::~DiamondTrap(){
	std::cout << this->_name << " \033[31mDiamondTrap was destroyed!\033[0m" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &original){
	std::cout << this->_name << " \033[32mDiamondTrap was copied!\033[0m" << std::endl;
	*this = original;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap& argument)
{
	std::cout << this->_name << " \033[32mDiamondTrap was Cloned!\033[0m" << std::endl;
	this->_name = argument._name;
	this->_attackDamage = argument._attackDamage;
	this->_energyPoints = argument._energyPoints;
	this->_hitPoints = argument._hitPoints;
	return (*this);
}

void DiamondTrap::whoAmI()
{
	std::cout << "ClapTrap name: " << ClapTrap::_name << std::endl;
	std::cout << "DiamondTrap name: " << this->_name << std::endl;
	
}