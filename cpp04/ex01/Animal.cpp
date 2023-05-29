/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 13:53:48 by mpolisse          #+#    #+#             */
/*   Updated: 2023/05/29 14:12:55 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	this->type = "Animal";
	std::cout << CYAN << this->type << DEFAULT << GREEN << " default constructor called" << DEFAULT << std::endl;
}

Animal::Animal(const Animal& original) {
	std::cout << CYAN << "Animal" << DEFAULT << GREEN << " copy constructor called" << DEFAULT << std::endl;
	*this = original;
}

Animal& Animal::operator=(const Animal& other) {
	std::cout << CYAN << "Animal" << DEFAULT << BLUE << " assingment operator called" << DEFAULT << std::endl;
	this->type = other.getType();
	return (*this);
}

Animal::~Animal() {
	std::cout << CYAN << "Animal" << DEFAULT << RED << " destructor called" << DEFAULT << std::endl;
}

std::string Animal::getType() const {
	return (CYAN + this->type + DEFAULT);
}

void Animal::makeSound() const{
	std::cout << this->getType() << YELLOW << " Sound of all animals" << DEFAULT << std::endl;
}
