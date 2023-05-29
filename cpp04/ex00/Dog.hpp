/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 13:53:23 by mpolisse          #+#    #+#             */
/*   Updated: 2023/05/29 13:53:24 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal{
public:
	Dog();
	Dog(const Dog& original);
	Dog& operator=(const Dog& other);
	~Dog();

	void makeSound() const;
};

#endif