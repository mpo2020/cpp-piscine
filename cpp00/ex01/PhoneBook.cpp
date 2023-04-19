/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 13:01:35 by mpolisse          #+#    #+#             */
/*   Updated: 2023/04/19 15:51:18 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	this->numberContacts = 0;
}

void PhoneBook::add(int i)
{
	std::string contactsData[5];
	std::string inputs[5] = {"\033[1;36mEnter the first name\033[0m","\033[1;36mEnter the last name\033[0m","\033[1;36mEnter the nickname\033[0m","\033[1;36mEnter the phone number\033[0m","\033[1;36mEnter the darkest secret\033[0m"};
	std::getline(std::cin, contactsData[0]);
	for (int j = 0; j < 5; j++)
	{
		std::cout << inputs[j] << ": " << std::endl;
		std::getline(std::cin, contactsData[j]);
		contactsData[j].empty() ? j--: j;
	}
	Contact newCont(contactsData[0], contactsData[1], contactsData[2],contactsData[3],contactsData[4]);
	if (this->numberContacts < 8)
		this->numberContacts++;	
	this->cont[i] = newCont;
}

void PhoneBook::search(int i){
	this->cont[i].printdata(i);
	std::cout << "\033[1;34m|__________|__________|__________|__________|\033[0m" << std::endl;
}

void PhoneBook::printContact(int i)
{
	std::cout << std::endl;
	this->cont[i].printContactsData();
	std::cout << std::endl;
}

int PhoneBook::howMuchContacts(){
	return (numberContacts);
}