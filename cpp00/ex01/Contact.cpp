/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 13:00:56 by mpolisse          #+#    #+#             */
/*   Updated: 2023/04/19 15:49:36 by mpolisse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(void)
{
	
}

Contact::Contact(std::string firstName, std::string lastName, std::string nickName, std::string phoneNumber, std::string darkestSecret)
{
	this->firstName = firstName;
	this->lastName = lastName;
	this->nickName = nickName;
	this->phoneNumber = phoneNumber;
	this->darkestSecret = darkestSecret;
}

void Contact::printdata(int index)
{
	std::string allNames[4] = {std::to_string(index), this->firstName, this->lastName, this->nickName};
	
	for (int i = 0; i < 4; i++)
	{
		if (allNames[i].length() > 10)
		{
			allNames[i] = allNames[i].substr(0, 9);
			allNames[i].append(".");
		}
		else if (allNames[i].length() <= 10)
		{	
			std::string space;
			int len = 10 - allNames[i].length();
			for (int i = 0; i < len; i++)
				space.append(" ");
			allNames[i] = space.append(allNames[i]);
		}
	}
	
	std::cout << "\033[1;34m|\033[0m" << allNames[0] << "\033[1;34m|\033[0m" << allNames[1] << "\033[1;34m|\033[0m" << allNames[2] << "\033[1;34m|\033[0m" << allNames[3] << "\033[1;34m|\033[0m" <<  std::endl;
}

void Contact::printContactsData()
{
	std::string contactNames[5] = {this->firstName, this->lastName, this->nickName, this->phoneNumber ,this->darkestSecret};
	std::string stringNames[5] = {"\033[1;36mFirst name: \033[0m", "\033[1;36mLast name: \033[0m", "\033[1;36mNickname: \033[0m", "\033[1;36mPhone number: \033[0m", "\033[1;36mDarkest secret: \033[0m"};
	
	for (int i = 0; i < 5; i++)
		std::cout << stringNames[i] << contactNames[i] << std::endl;
}
