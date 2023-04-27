/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 10:51:28 by mpolisse          #+#    #+#             */
/*   Updated: 2023/04/27 17:53:39 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *makeZombie;
	
	randomChump("Foo");
	makeZombie = newZombie("Duh");
	makeZombie->announce();
	delete makeZombie;
	
	return (0);
}