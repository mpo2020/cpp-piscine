/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 13:53:44 by mpolisse          #+#    #+#             */
/*   Updated: 2023/05/30 08:32:26 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

# define DEFAULT "\033[0m"
# define RED "\033[31m"
# define GREEN "\033[32m"
# define YELLOW "\033[33m"
# define BLUE "\033[34m"
# define CYAN "\033[36m"

class AAnimal {
protected:
	std::string type;
public:
	AAnimal();
	AAnimal(const AAnimal& original);
	AAnimal& operator=(const AAnimal& other);
	virtual ~AAnimal();
	std::string getType() const;

	virtual void makeSound() const =0;
};

#endif