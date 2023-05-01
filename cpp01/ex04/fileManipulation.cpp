/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fileManipulation.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 17:47:15 by mpolisse          #+#    #+#             */
/*   Updated: 2023/05/01 15:47:13 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedIsForLosers.hpp"

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

std::string findReplaceText(std::string fileContent, std::string firstArgument, std::string secondArgument, int &start)
{
	int startCharacter = fileContent.find(firstArgument);
	int len = firstArgument.length();
	
	start =  startCharacter;
	std::string modifiedFile = fileContent.erase(start, len);
	modifiedFile = fileContent.insert(start, secondArgument);
	start +=  secondArgument.length() - 1;
	
	return (modifiedFile);
}