/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 13:53:30 by mpolisse          #+#    #+#             */
/*   Updated: 2023/05/30 08:33:38 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() {
	this->type = "Dog";
	this->_brain = new Brain;
	std::cout << CYAN << this->type << DEFAULT << GREEN << " default constructor called" << DEFAULT << std::endl;
}

Dog::Dog(const Dog& original) : AAnimal() {
	std::cout << CYAN << "Dog" << DEFAULT << GREEN << " copy constructor called" << DEFAULT << std::endl;
	*this = original;
}

Dog& Dog::operator=(const Dog& other) {
	std::cout << CYAN << "Dog" << DEFAULT << BLUE << " assingment operator called" << DEFAULT << std::endl;
	this->type = other.getType();
	this->_brain = other._brain;
	return (*this);
}

Dog::~Dog() {
	delete this->_brain;
	std::cout << CYAN << "Dog" << DEFAULT << RED << " destructor called" << DEFAULT << std::endl;
}

void Dog::makeSound() const{
	std::cout << CYAN << "Dog" << DEFAULT << YELLOW << " the dog gave a gigantic bark" << DEFAULT << std::endl; 
}

