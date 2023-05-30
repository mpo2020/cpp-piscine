#include "Brain.hpp"

Brain::Brain() {
	std::cout << CYAN << "Brain" << DEFAULT << GREEN << " default constructor called" << DEFAULT << std::endl;
}

Brain::Brain(const Brain& original) {
	std::cout << CYAN << "Brain" << DEFAULT << GREEN << " copy constructor called" << DEFAULT << std::endl;
	*this = original;
}

Brain& Brain::operator=(const Brain& other) {
	std::cout << CYAN << "Brain" << DEFAULT << BLUE << " assingment operator called" << DEFAULT << std::endl;
	*this->ideas = other.getIdeas();
	return (*this);
}

Brain::~Brain() {
	std::cout << CYAN << "Brain" << DEFAULT << RED << " destructor called" << DEFAULT << std::endl;
}

std::string Brain::getIdeas() const {
	return (*this->ideas);
}
