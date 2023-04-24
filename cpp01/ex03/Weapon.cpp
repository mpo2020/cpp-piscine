/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/24 16:35:40 by mpolisse          #+#    #+#             */
/*   Updated: 2023/04/24 17:45:22 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon()
{
	return ;
}

Weapon::Weapon(std::string type)
{
	this->type = type;
	return ;
}

const std::string Weapon::getType()
{
	const std::string *type = &this->type;
	return (*type); 
}

void Weapon::setType(std::string type)
{
	this->type = type;
}
