/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:01:48 by mpolisse          #+#    #+#             */
/*   Updated: 2023/04/25 18:28:20 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedIsForLosers.hpp"


bool validation(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Error number of argumement" << std::endl;
		return (false);
	}
	
	if (access(argv[1], F_OK | R_OK | W_OK) != 0)
	{
		std::cout << "File error" << std::endl;
		return (false);
	}
	return (true);
}

int open_file(std::string argument)
{
	std::ifstream fs;
	std::string line;
	std::string fileContent;
	fs.open(argument);
	while(getline(fs, line))
		fileContent += line + '\n';
	

	std::cout << fileContent;
	//return (fs);
	return(1);
}

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	std::string arguments[3];
	
	if (validation(argc, argv) == false)
	{
		return (0);
	}

	for (int i = 0; i < 3; ++i )
	{
		arguments[i] = argv[i + 1];
	}
	
	open_file(arguments[0]);
	
	
	
	
	return (0);

}
