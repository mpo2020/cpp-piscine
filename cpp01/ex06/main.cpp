/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 16:03:05 by mpolisse          #+#    #+#             */
/*   Updated: 2023/05/08 19:04:26 by mpolisse         ###   ########.fr       */
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
	std::string argument;
	std::string parameter[4] = {"DEBUG", "INFO", "WARNING",  "ERROR"};
	int complain = 0;
	
	if (argc != 2)
	{
		std::cout << "please type one of the comments that Harl would make:" << std::endl;
		std::cout << "DEBUG, INFO, WARNING or ERROR" << std::endl;
		return (0);
	}
	if (validation(argv[1]) == false)
	{
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;

		return (0);
	}
	argument = argv[1];
	for (int i = 0; i <= 4; i++)
	{	
		if (parameter[i].compare(argument) == 0)
		{
			complain = i + 1;
		}
	
	}
	switch (complain)
	{
		case 1:
			complainter.complain(0);
			break ;
		case 2:
			complainter.complain(1);
			break ;
		case 3:
			complainter.complain(2);
			break ;
		case 4:
			complainter.complain(3);
			break ;
	}
	return (0);
}