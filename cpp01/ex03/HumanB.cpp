/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:47:48 by mpolisse          #+#    #+#             */
/*   Updated: 2023/04/27 18:12:31 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{ 
	this->name = name;
	this->weapon = NULL; 
}

void HumanB::attack()
{
	Weapon *weapon = this->weapon;
	std::string name = this->name;

	if (weapon == NULL)
		std::cout << name << " has no weapon" << std::endl;
	else
		std::cout << name << " attacks with their " << weapon->getType();
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}