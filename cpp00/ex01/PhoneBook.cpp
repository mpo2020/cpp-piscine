/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 13:01:35 by mpolisse          #+#    #+#             */
/*   Updated: 2023/04/18 15:19:27 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook(){
	
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
		std::cout << inputs[j] << ": ";
		std::getline(std::cin, contactsData[j]);
		contactsData[j].empty() ? j--: j;
	}
	Contact newCont(contactsData[0], contactsData[1], contactsData[2],contactsData[3],contactsData[4]);
	this->cont[i] = newCont;
}

void PhoneBook::search(int i){
	this->cont[i].printdata(i);
}