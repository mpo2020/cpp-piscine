/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:01:48 by mpolisse          #+#    #+#             */
/*   Updated: 2023/04/27 17:52:50 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedIsForLosers.hpp"

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	std::string arguments[3];
	std::string fileContent;

	fileContent = open_file(argv[1]);
	if (validation(argc, argv, fileContent, argv[2]) == false)
	{
		return (0);
	}
	while (fileContent.find(argv[2]) != std::string::npos)
	{
		fileContent = findReplaceText(fileContent, argv[2], argv[3]);
		writeFile(argv[1], fileContent);
	}
	
	return (0);

}
