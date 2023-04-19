/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 15:47:25 by mpolisse          #+#    #+#             */
/*   Updated: 2023/04/19 14:58:24 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void welcomePhoneBook()
{
	std::cout << "\033[1;34m ____________________________________\033[0m" << std::endl;
	std::cout << "\033[1;34m|\033[0m                                    \033[1;34m|\033[0m" << std::endl;
	std::cout << "\033[1;34m|\033[0m     \033[1;96mWelcome to your phone book\033[0m     \033[1;34m|\033[0m" << std::endl;
	std::cout << "\033[1;34m|\033[0m                                    \033[1;34m|\033[0m" << std::endl;
	std::cout << "\033[1;34m|\033[0m     \033[1;96mChoose from three commands\033[0m     \033[1;34m|\033[0m" << std::endl;
	std::cout << "\033[1;34m|\033[0m                                    \033[1;34m|\033[0m" << std::endl;
	std::cout << "\033[1;34m|\033[0m         \033[1;32mADD, \033[1;33mSEARCH, \033[1;31mEXIT\033[0m          \033[1;34m|\033[0m" << std::endl;
	std::cout << "\033[1;34m|\033[0m                                    \033[1;34m|\033[0m" << std::endl;
	std::cout << "\033[1;34m|____________________________________|\033[0m" << std::endl;
	std::cout << std::endl;
}

bool isTheSearchInputValid(std::string input, int maxInput)
{
	int inputInt; 
	inputInt = std::stoi(input, NULL, 10);
	if (inputInt >= 0 && inputInt <= maxInput)
		return(true);
	else
		return(false);
}

void  searchContacts(PhoneBook data)
{
	int index;
	std::string inputSearch;
	index = 0;
	
	for (int i = 0; i < data.howMuchContacts(); i++)
		data.search(i);
	std::cout << std::endl;
	while (1)
	{	
		std::cout << "Choose an index between 0 and "<< (data.howMuchContacts() - 1) << ": " << std::endl;
		std::cin >> inputSearch;
		if (isTheSearchInputValid(inputSearch, data.howMuchContacts()) == true)
		{
			index = std::stoi(inputSearch, NULL, 10);
			data.printContact(index);
			break;
		}
		else
			std::cout << "please enter a valid index" << std::endl;
	}
}

int main(void)
{
	int			i = 0;
	PhoneBook	data;
	std::string	input;
	
	welcomePhoneBook();
	while (1)
	{
		std::cout << "\033[1;36mChoose one input ADD, SEARCH, EXIT:\033[0m " << std::endl ;
		std::cin >> input; 		
		if (input.compare("ADD") == 0 || input.compare("add") == 0)
			data.add(i++);
		else if (input.compare("SEARCH") == 0 || input.compare("search") == 0)
		{
			std::cout << "\033[1;34m ___________________________________________\033[0m" << std::endl;
			std::cout << "\033[1;34m|\033[0m     \033[1;36mIndex\33[0m\033[1;34m|\033[0m\033[1;36mFirst Name\033[0m\033[1;34m|\033[0m \033[1;36mLast Name\033[0m\033[1;34m|\033[0m \033[1;36m Nickname\033[0m\033[1;34m|\033[0m" << std::endl;
			std::cout << "\033[1;34m|__________|__________|__________|__________|\033[0m" << std::endl;
			
			searchContacts(data);
			
		}
		else if (input.compare("EXIT") == 0 || input.compare("exit") == 0)
			exit(EXIT_SUCCESS);
		else
			std::cout << "Please enter a valid command!!! " << std::endl; 
		if (i == 8)
			i = 0;
	}
	data.add(0);
	data.search(0);
	return (0);
}