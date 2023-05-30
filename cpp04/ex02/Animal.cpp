/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 13:53:48 by mpolisse          #+#    #+#             */
/*   Updated: 2023/05/30 08:28:54 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

AAnimal::AAnimal() {
	this->type = "AAnimal";
	std::cout << CYAN << this->type << DEFAULT << GREEN << " default constructor called" << DEFAULT << std::endl;
}

AAnimal::AAnimal(const AAnimal& original) {
	std::cout << CYAN << "AAnimal" << DEFAULT << GREEN << " copy constructor called" << DEFAULT << std::endl;
	*this = original;
}

AAnimal& AAnimal::operator=(const AAnimal& other) {
	std::cout << CYAN << "AAnimal" << DEFAULT << BLUE << " assingment operator called" << DEFAULT << std::endl;
	this->type = other.getType();
	return (*this);
}

AAnimal::~AAnimal() {
	std::cout << CYAN << "AAnimal" << DEFAULT << RED << " destructor called" << DEFAULT << std::endl;
}

std::string AAnimal::getType() const {
	return (CYAN + this->type + DEFAULT);
}
