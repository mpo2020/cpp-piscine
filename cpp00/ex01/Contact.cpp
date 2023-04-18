/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpolisse <mpolisse@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 13:00:56 by mpolisse          #+#    #+#             */
/*   Updated: 2023/04/18 13:36:53 by mpolisse         ###   ########.fr       */
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
	this->darkestSecret = phoneNumber;
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
	
	std::cout << allNames[0] << "|" << allNames[1] << "|" << allNames[2] << "|" << allNames[3] << "|" <<  std::endl;
}
