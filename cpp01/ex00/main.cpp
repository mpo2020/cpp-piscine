/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 10:51:28 by mpolisse          #+#    #+#             */
/*   Updated: 2023/04/22 16:25:26 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie *makeZombie;
	
	randomChump("Foo");
	
	makeZombie = newZombie("Sunda");
	makeZombie->announce();
	delete makeZombie;
	
	return (0);
}