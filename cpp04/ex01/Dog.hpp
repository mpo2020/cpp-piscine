/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 13:53:23 by mpolisse          #+#    #+#             */
/*   Updated: 2023/05/29 15:01:55 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{
private:
	Brain *_brain;
public:
	Dog();
	Dog(const Dog& original);
	Dog& operator=(const Dog& other);
	~Dog();

	void makeSound() const;
};

#endif