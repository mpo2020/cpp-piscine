/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 15:47:25 by mpolisse          #+#    #+#             */
/*   Updated: 2023/04/18 14:01:00 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	int			i = 0;
	PhoneBook	data;
	std::string	input;
	

	while (1)
	{
		std::cout << "Choose one input ADD, SEARCH, EXIT: ";
		std::cin >> input; 		
		if (input.compare("ADD") == 0)
		{
			data.add(i);
			i++;
		}
		else if (input.compare("SEARCH") == 0)
		{
			for (int i = 0; i < 8; i++)
				data.search(i);
		}
		else if (input.compare("EXIT") == 0)
		{
			std::cout << "3" << std::endl; 
		}
		else
		{
			std::cout << "Wrong command" << std::endl; 
		}
		if (i == 8)
			i = 0;
	}
	data.add(0);
	data.search(0);

	
	return (0);
}