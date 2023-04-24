/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:47:48 by mpolisse          #+#    #+#             */
/*   Updated: 2023/04/24 17:33:35 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

void HumanB::attack()
{
	Weapon weapon = this->weapon;
	std::string name = this->name;

	std::cout << name << " attacks with their " << weapon.getType();
}

void HumanB::setWeapon(Weapon weapon)
{
	this->weapon = weapon;
}