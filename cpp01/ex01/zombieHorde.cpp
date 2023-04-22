/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/22 10:51:32 by mpolisse          #+#    #+#             */
/*   Updated: 2023/04/22 18:26:56 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*zombieHorde( int N, std::string name )
{
	Zombie *zombie;
	
	zombie = new Zombie[N];
	for (int i = 0; i <= N; ++i)
	{
		zombie[i].setName(name);
		zombie[i].announce();
	}
	return (zombie);
}