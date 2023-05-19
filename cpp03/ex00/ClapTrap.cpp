/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:03:08 by mpolisse          #+#    #+#             */
/*   Updated: 2023/05/19 16:00:47 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name){
	
	this->_name = name;
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << this->_name << " was created!" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << this->_name << " was destroyed!" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap& original){
	std::cout << this->_name << " was copied!" << std::endl;
	*this = original;
}

void ClapTrap::attack(const std::string& target){
	if (this->_energyPoints <= 0 || this->_hitPoints <= 0){
		std::cout << "ClapTrap " << this->_name << " can`t attack" << std::endl;
	} else {
		std::cout << "ClapTrap " << this->_name << " attacks " << target << " causing " << this->_attackDamage << " points of damage!" << std::endl;
	}
}

void ClapTrap::takeDamage(unsigned int amount){
	std::cout << "ClapTrap " << this->_name << " received " << amount << " damage" << std::endl;
	this->_hitPoints -= amount;
	if (this->_energyPoints <= 0 || this->_hitPoints <= 0){
		std::cout << "ClapTrap " << this->_name << " cannot be attacked because it has been destroyed" << std::endl;
	} else {
		std::cout << "ClapTrap " << this->_name << " received " << amount << " damage" << std::endl;
		this->_hitPoints -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount){
	
	if (this->_energyPoints <= 0 || this->_hitPoints <= 0){
		std::cout << "ClapTrap " << this->_name << " can`t repared" << std::endl;
	} else {
		std::cout << "ClapTrap " << this->_name << " repared " << amount << " damage" << std::endl;
		this->_hitPoints += amount;
	}
	
}
