/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 13:53:39 by mpolisse          #+#    #+#             */
/*   Updated: 2023/05/29 15:05:13 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() {
	this->type = "Cat";
	this->_brain = new Brain;
	std::cout << CYAN << this->type << DEFAULT << GREEN << " default constructor called" << DEFAULT << std::endl;
}

Cat::Cat(const Cat& original) : Animal(){
	std::cout << CYAN << "Cat" << DEFAULT << GREEN << " copy constructor called" << DEFAULT << std::endl;
	*this = original;
}

Cat& Cat::operator=(const Cat& other) {
	std::cout << CYAN << "Cat" << DEFAULT << BLUE << " assingment operator called" << DEFAULT << std::endl;
	this->type = other.getType();
	this->_brain = other._brain;
	return (*this);
}

Cat::~Cat() {
	std::cout << CYAN << "Cat" << DEFAULT << RED << " destructor called" << DEFAULT << std::endl;
	delete this->_brain;
}

void Cat::makeSound() const{
	std::cout << CYAN << "Cat" << DEFAULT << YELLOW << " made a fabulous meow" << DEFAULT << std::endl; 
}
