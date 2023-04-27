/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 16:01:48 by mpolisse          #+#    #+#             */
/*   Updated: 2023/04/27 14:08:01 by mpolisse         ###   ########.fr       */
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

std::string open_file(std::string file)
{
	std::ifstream fs;
	std::string line;
	std::string fileContent;
	fs.open(file);
	while(getline(fs, line))
		fileContent += line + '\n';
	fs.close();
	return (fileContent);
}

void writeFile(std::string file, std::string modifiedFile)
{
	std::ofstream fs;
	std::string newFile;
	newFile = file + ".replace";
	fs.open(newFile);
	fs << modifiedFile;
	fs.close();
}

std::string findReplaceText(std::string fileContent, std::string firstArgument, std::string secondArgument)
{
	int startCharacter = fileContent.find(firstArgument);
	int len = firstArgument.length();
	std::string modifiedFile = fileContent.erase(startCharacter, len);
	modifiedFile = fileContent.insert(startCharacter, secondArgument);
	return (modifiedFile);	
}

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
