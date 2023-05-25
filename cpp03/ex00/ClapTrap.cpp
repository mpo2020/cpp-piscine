/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 14:03:08 by mpolisse          #+#    #+#             */
/*   Updated: 2023/05/25 11:34:30 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

//Constructors##############################################################################

ClapTrap::ClapTrap(){
	this->_name = "\033[33mDefault\033[0m";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << this->_name << " \033[32mClapTrap was created!\033[0m" << std::endl;
}

ClapTrap::ClapTrap(std::string name){
	
	this->_name = "\033[33m" + name + "\033[0m";
	this->_hitPoints = 10;
	this->_energyPoints = 10;
	this->_attackDamage = 0;
	std::cout << this->_name << " \033[32mwas created!\033[0m" << std::endl;
}

ClapTrap::~ClapTrap(){
	std::cout << this->_name << " \033[31mwas destroyed!\033[0m" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &original){
	std::cout << this->_name << " \033[32mwas copied!\033[0m" << std::endl;
	*this = original;
}

//Overload operation##############################################################################

ClapTrap &ClapTrap::operator=(const ClapTrap& argument)
{
	std::cout << this->_name << " \033[32mwas Cloned!\033[0m" << std::endl;
	this->_name = argument._name;
	this->_attackDamage = argument._attackDamage;
	this->_energyPoints = argument._energyPoints;
	this->_hitPoints = argument._hitPoints;
	return (*this);
}

//metods
void ClapTrap::attack(const std::string& target){
	if (this->_hitPoints <= 0){
		std::cout << "ClapTrap " << this->_name << " \033[95mcan't attack because it's already destroyed.\033[0m" << std::endl;
	} else if (this->_energyPoints <= 0) {
		std::cout << "ClapTrap " << this->_name << " \033[95mcan't attack because it's out of energy points.\033[0m" << std::endl;
	} else {
		std::cout << "ClapTrap " << this->_name << " \033[94mattacks " << target << " causing " << this->_attackDamage << " points of damage!\033[0m" << std::endl;
		this->_energyPoints--;
	}
}

void ClapTrap::takeDamage(unsigned int amount){
	
	if (this->_hitPoints <= 0){
		std::cout << "ClapTrap " << this->_name << " \033[95mcannot be attacked because it has been destroyed\033[0m" << std::endl;
	} else {
		std::cout << "ClapTrap " << this->_name << " \033[31mreceived " << amount << " damage.\033[0m" << std::endl;
		this->_hitPoints -= amount;
	}
}

void ClapTrap::beRepaired(unsigned int amount){
	
	if (this->_hitPoints <= 0){
		std::cout << this->_name << "\033[95m can't be repair attack because it's already destroyed.\033[0m" << std::endl;
	} else if (this->_energyPoints <= 0) {
		std::cout << this->_name << " \033[95mcan't  be repaired because it has no energy points.\033[0m" << std::endl;
	} else{
		std::cout << this->_name << " \033[32mrepared " << amount << " damage.\033[0m" << std::endl;
		this->_hitPoints += amount;
		this->_energyPoints--;
	}
	
}

//Get methods##############################################################################

std::string ClapTrap::getName()
{
	return(this->_name);
}

int ClapTrap::getHitPoint()
{
	return(this->_hitPoints);
}

int ClapTrap::getEnergyPoints()
{
	return(this->_energyPoints);
}

int ClapTrap::getAttackDamage()
{
	return(this->_attackDamage);
}

//Set methods##############################################################################

void ClapTrap::setName(std::string name)
{
	this->_name = name;
}

void ClapTrap::setHitPoint(int amount)
{
	this->_hitPoints = amount;
}

void ClapTrap::setEnergyPoints(int amount)
{
	this->_energyPoints = amount;
}

void ClapTrap::setattackDamage(int amount)
{
	this->_attackDamage = amount;
}

//Other methods############################################################################

void ClapTrap::status()
{
	int nameLen = this->_name.length() - 8;
	int numberLen = 0;
	int tmp = 0;
	int i = 0;
	
	std::cout << "\033[36m _______\033[0m";
	for (int i = 0; i < nameLen + 1; i++)
	{
		std::cout << "\033[36m_\033[0m";
	}
	std::cout << " ";
	std::cout << std::endl;
	std::cout << "\033[36m|\033[0m\033[94mName:\033[0m  " << "\033[32m" << this->_name << "\033[0m  \033[36m|\033[0m" << std::endl;
		if (this->_hitPoints <= 0)
		std::cout << "\033[36m|\033[0m\033[94mHP:\033[0m    " << "\033[31m" << this->_hitPoints << "\033[0m";
	else
		std::cout << "\033[36m|\033[0m\033[94mHP:\033[0m    " << "\033[32m" << this->_hitPoints << "\033[0m";
	tmp = this->_hitPoints;
	if (tmp < 0)
		numberLen = 1;
	else
		numberLen = 0;
	tmp = tmp < 0 ? tmp * -1 : tmp;
	i = tmp;
	while (i > 9)
	{
		i /= 10;
		numberLen++;
	}
	for (int i = 0; i < nameLen - numberLen; i++)
	{
		std::cout << " ";
	}
	std::cout << "\033[36m|\033[0m";
	std::cout << std::endl;
	if (this->_energyPoints <= 0)
		std::cout << "\033[36m|\033[0m\033[94mEP:\033[0m    " << "\033[31m" << this->_energyPoints << "\033[0m";
	else
		std::cout << "\033[36m|\033[0m\033[94mEP:\033[0m    " << "\033[32m" << this->_energyPoints << "\033[0m";
	tmp = this->_energyPoints;
	if (tmp < 0)
		numberLen = 1;
	else
		numberLen = 0;
	tmp = tmp < 0 ? tmp * -1 : tmp;
	i = tmp;
	while (i > 9)
	{
		i /= 10;
		numberLen++;
	}
	for (int i = 0; i < nameLen - numberLen; i++)
	{
		std::cout << " ";
	}
	std::cout << "\033[36m|\033[0m";
	std::cout << std::endl;
	if (this->_attackDamage <= 0)
		std::cout << "\033[36m|\033[0m\033[94mAP:\033[0m    " << "\033[31m" << this->_attackDamage << "\033[0m";
	else
		std::cout << "\033[36m|\033[0m\033[94mAP:\033[0m    " << "\033[32m" << this->_attackDamage << "\033[0m";
	tmp = this->_attackDamage;
		if (tmp < 0)
		numberLen = 0;
	else
		numberLen = 1;
	if (tmp < 0)
		numberLen = 2;
	else
		numberLen = 0;
	tmp = tmp < 0 ? tmp * -1 : tmp;
	i = tmp;
	while (i > 9)
	{
		i /= 10;
		numberLen++;
	}
	for (int i = 0; i < nameLen - numberLen; i++)
	{
		std::cout << " ";
	}
	std::cout << "\033[36m|\033[0m";
	std::cout << std::endl;
	std::cout << "\033[36m|_______\033[0m";
	for (int i = 0; i < nameLen + 1; i++)
	{
		std::cout << "\033[36m_\033[0m";
	}
	std::cout << "\033[36m|\033[0m" << std::endl;
	std::cout << std::endl;
}