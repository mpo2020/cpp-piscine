#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	this->type = "WrongAnimal";
	std::cout << CYAN << this->type << DEFAULT << GREEN << " default constructor called" << DEFAULT << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& original) {
	std::cout << CYAN << "WrongAnimal" << DEFAULT << GREEN << " copy constructor called" << DEFAULT << std::endl;
	*this = original;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& other) {
	std::cout << CYAN << "WrongAnimal" << DEFAULT << BLUE << " assingment operator called" << DEFAULT << std::endl;
	this->type = other.getType();
	return (*this);
}

WrongAnimal::~WrongAnimal() {
	std::cout << CYAN << "WrongAnimal" << DEFAULT << RED << " destructor called" << DEFAULT << std::endl;
}

std::string WrongAnimal::getType() const {
	return (CYAN + this->type + DEFAULT);
}

void WrongAnimal::makeSound() const{
	std::cout << this->getType() << YELLOW << " makes a" << RED " wrong sound!" << DEFAULT << std::endl;
}

