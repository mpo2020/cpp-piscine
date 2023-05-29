/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/29 12:56:58 by mpolisse          #+#    #+#             */
/*   Updated: 2023/05/29 15:34:45 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	Animal *animals[50];
	
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
 	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();
	
	for (int i = 0; i < 50; i++)
	{
		if ((i % 2) == 0){
			animals[i] = new Dog();
		} else {
			animals[i] = new Cat();
		}
	}
	
	for (int i = 0; i < 50; i++)
	{
		animals[i]->makeSound();
	}

	for (int i = 0; i < 50; i++)
	{
		delete animals[i];
	}
	
	delete j;
	delete i;
	delete meta;
	return 0;

}