/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 13:01:35 by mpolisse          #+#    #+#             */
/*   Updated: 2023/04/18 18:08:53 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	this->numberContacts = 0;
}

PhoneBook::~PhoneBook(){
}
// se eu uso std::ws e coloco linha vazia, a linha so continua se for preenchida, talvez esteja errado. eu posso simplemente colocoar o ignore
void PhoneBook::add(int i)
{
	std::string contactsData[5];
	std::string inputs[5] = {"First name","Last name","nickname","phone number","darkest secret"};
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