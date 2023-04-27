/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validation.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:47:21 by mpolisse          #+#    #+#             */
/*   Updated: 2023/04/27 17:47:57 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedIsForLosers.hpp"

bool validation(int argc, char **argv, std::string fileContent, std::string firstArgument)
{	
	if (argc != 4 || firstArgument.empty() == 1) 
	{
		std::cout << "Error number of argumement" << std::endl;
		return (false);
	}	
	else if (access(argv[1], F_OK | R_OK | W_OK) != 0)
	{
		std::cout << "File error" << std::endl;
		return (false);
	}
	else if (fileContent.find(firstArgument) == std::string::npos)
	{
		std::cout << "text not found" << std::endl;
		return (false);
	}
	return (true);
}