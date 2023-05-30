#include "WrongCat.hpp"

WrongCat::WrongCat() {
	this->type = "WrongCat";
	std::cout << CYAN << this->type << DEFAULT << GREEN << " default constructor called" << DEFAULT << std::endl;
}

WrongCat::WrongCat(const WrongCat& original) : WrongAnimal(){
	std::cout << CYAN << "WrongCat" << DEFAULT << GREEN << " copy constructor called" << DEFAULT << std::endl;
	*this = original;
}

WrongCat& WrongCat::operator=(const WrongCat& other) {
	std::cout << CYAN << "WrongCat" << DEFAULT << BLUE << " assingment operator called" << DEFAULT << std::endl;
	this->type = other.getType();
	return (*this);
}

WrongCat::~WrongCat() {
	std::cout << CYAN << "WrongCat" << DEFAULT << RED << " destructor called" << DEFAULT << std::endl;
}

void WrongCat::makeSound() const{
	std::cout << CYAN << "WrongCat" << DEFAULT << YELLOW << " made a " << RED << "wrong meow" << DEFAULT << DEFAULT << std::endl; 
}
