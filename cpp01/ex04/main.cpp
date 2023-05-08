/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:01:48 by mpolisse          #+#    #+#             */
/*   Updated: 2023/05/08 17:25:10 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedIsForLosers.hpp"

int	main(int argc, char **argv)
{
	std::string arguments[3];
	std::string fileContent;
	std::string firstArgument = argv[2];
	std::string secondArgument = argv[3];
	unsigned long initial = 0;
	

	if (argc != 4) 
	{
		std::cout << "Error number of argumement" << std::endl;
		return (0);
	}	

	fileContent = open_file(argv[1]);
	if (validation(argv, fileContent, argv[2]) == false)
	{
		return (0);
	}
	while (fileContent.find(argv[2], initial) != std::string::npos)
	{
		findReplaceText(fileContent, firstArgument, secondArgument, initial);
	}
	writeFile(argv[1], fileContent);
	
	return (0);

}
