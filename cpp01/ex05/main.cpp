/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:03:05 by mpolisse          #+#    #+#             */
/*   Updated: 2023/04/27 17:46:21 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

bool validation(std::string comments)
{
	std::string complains[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	for(int i = 0; i < 4; i++)
	{
		if (comments.compare(complains[i]) == 0)
			return (true);
	}
	return (false);
}

int main(int argc, char **argv)
{
	Harl complainter;
	
	if (argc != 2 || validation(argv[1]) == false)
	{
		std::cout << "please type one of the comments that Harl would make:" << std::endl;
		std::cout << "DEBUG, INFO, WARNING or ERROR" << std::endl;
		return (0);
	}
	complainter.complain(argv[1]);
	return (0);
}