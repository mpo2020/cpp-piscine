#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain {
private:
	std::string ideas[100];
public:
	Brain();
	Brain(const Brain& original);
	Brain& operator=(const Brain& other);
	~Brain();

	std::string getIdeas() const;
};

#endif