/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:01:48 by mpolisse          #+#    #+#             */
/*   Updated: 2023/05/01 15:47:41 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedIsForLosers.hpp"

int	main(int argc, char **argv)
{
	std::string arguments[3];
	std::string fileContent;
	int			initial = 0;

	
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
	while (fileContent.find(argv[2]) != std::string::npos)
	{
		fileContent = findReplaceText(fileContent, argv[2], argv[3], initial);
		writeFile(argv[1], fileContent);
	}
	
	return (0);

}
